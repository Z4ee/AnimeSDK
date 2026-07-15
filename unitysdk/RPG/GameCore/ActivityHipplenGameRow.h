#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4B1D406725A7144B;
class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYHIPPLENGAMEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AAF62E0)
#define RPG_GAMECORE_ACTIVITYHIPPLENGAMEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAF6430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityHipplenGameRow_TypeDefinitionIndex = 11229;

	class ActivityHipplenGameRow : public ::System::Object
	{
	public:
		::Il2CppArray<::Class_1_4B1D406725A7144B*>* EffectList; // 0x10
		::System::UInt32 ID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENGAMEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityHipplenGameRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityHipplenGameRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENGAMEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
