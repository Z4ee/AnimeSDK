#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/MissionCustomValueType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MISSIONCUSTOMVALUE_METHOD_2_A0FEA106DC66755E_OFFSET UNITYSDK_OFFSET(0x18B2CAB0)
#define RPG_GAMECORE_MISSIONCUSTOMVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x18B2CD70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MissionCustomValue_TypeDefinitionIndex = 18010;

	class MissionCustomValue : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 Index; // 0x10
		::System::String* Name; // 0x18
		::RPG::GameCore::MissionCustomValueType Type; // 0x20
		::System::UInt32 DisplayValue; // 0x24
		::System::Boolean isLocal; // 0x28
		::System::Boolean isRange; // 0x29
		::Il2CppArray<::System::UInt32>* ValidValueParamList; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCUSTOMVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A0FEA106DC66755E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MissionCustomValue*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MissionCustomValue*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONCUSTOMVALUE_METHOD_2_A0FEA106DC66755E_OFFSET))(a1, a2);
		}
	};
}
