#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4B1D406725A7144B;
class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYHIPPLENGAMEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16EFC7A0)
#define RPG_GAMECORE_ACTIVITYHIPPLENGAMEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16EFC8F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityHipplenGameRow_TypeDefinitionIndex = 10836;

	class ActivityHipplenGameRow : public ::System::Object
	{
	public:
		::Il2CppArray<::Class_1_4B1D406725A7144B*>* EffectList; // 0x10
		::System::UInt32 ID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENGAMEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityHipplenGameRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityHipplenGameRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENGAMEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
