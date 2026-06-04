#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ConditionParam; }

#define RPG_GAMECORE_AREAMAPSHOWCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1947E790)
#define RPG_GAMECORE_AREAMAPSHOWCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1947EDA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AreaMapShowConfigRow_TypeDefinitionIndex = 13338;

	class AreaMapShowConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* Conditions; // 0x10
		::System::UInt32 ID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AREAMAPSHOWCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AreaMapShowConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AreaMapShowConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AREAMAPSHOWCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
