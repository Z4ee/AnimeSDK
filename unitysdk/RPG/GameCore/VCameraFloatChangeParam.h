#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_VCAMERAFLOATCHANGEPARAM_METHOD_2_050D9FE62444F27A_OFFSET UNITYSDK_OFFSET(0x190EB940)
#define RPG_GAMECORE_VCAMERAFLOATCHANGEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x190EBC40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VCameraFloatChangeParam_TypeDefinitionIndex = 15525;

	class VCameraFloatChangeParam : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean ExportToJson; // 0x10
		::System::Single TargetValue; // 0x14
		::System::Single Time; // 0x18
		::System::Single Duration; // 0x1C
		::System::String* ChangeCurvePath; // 0x20
		::System::Single RecoveryTime; // 0x28
		::System::String* RecoveryCurvePath; // 0x30
		::System::Boolean RecoveryToDefaultValue; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERAFLOATCHANGEPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_050D9FE62444F27A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VCameraFloatChangeParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VCameraFloatChangeParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERAFLOATCHANGEPARAM_METHOD_2_050D9FE62444F27A_OFFSET))(a1, a2);
		}
	};
}
