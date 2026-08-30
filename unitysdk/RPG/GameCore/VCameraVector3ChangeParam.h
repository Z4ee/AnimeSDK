#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_VCAMERAVECTOR3CHANGEPARAM_METHOD_2_B17F0652B8E18FF0_OFFSET UNITYSDK_OFFSET(0x1D62A060)
#define RPG_GAMECORE_VCAMERAVECTOR3CHANGEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D62B030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VCameraVector3ChangeParam_TypeDefinitionIndex = 16235;

	class VCameraVector3ChangeParam : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean ExportToJson; // 0x10
		::RPG::MVector3 TargetValue; // 0x14
		::System::Single Time; // 0x20
		::System::Single Duration; // 0x24
		::System::String* ChangeCurvePath; // 0x28
		::System::Single RecoveryTime; // 0x30
		::System::String* RecoveryCurvePath; // 0x38
		::System::Boolean IsWorldOffset; // 0x40
		::System::Boolean UsePlayerToLookAtTargetForward; // 0x41
		::System::Boolean RecoveryToDefaultValue; // 0x42

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERAVECTOR3CHANGEPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B17F0652B8E18FF0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VCameraVector3ChangeParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VCameraVector3ChangeParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERAVECTOR3CHANGEPARAM_METHOD_2_B17F0652B8E18FF0_OFFSET))(a1, a2);
		}
	};
}
