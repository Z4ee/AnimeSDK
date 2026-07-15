#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_VCAMERAFREELOOK3RDBASECHANGEPARAM_METHOD_2_E76FD3A954783DC1_OFFSET UNITYSDK_OFFSET(0x1B88ADA0)
#define RPG_GAMECORE_VCAMERAFREELOOK3RDBASECHANGEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B88B0C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VCameraFreelook3rdBaseChangeParam_TypeDefinitionIndex = 15760;

	class VCameraFreelook3rdBaseChangeParam : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean ExportToJson; // 0x10
		::System::Boolean Reset; // 0x11
		::System::Single ZoomRatio; // 0x14
		::RPG::MVector2 CenterPos; // 0x18
		::System::Single Time; // 0x20
		::System::String* ChangeCurvePath; // 0x28
		::System::Single RecoveryTime; // 0x30
		::System::String* RecoveryCurvePath; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERAFREELOOK3RDBASECHANGEPARAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E76FD3A954783DC1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VCameraFreelook3rdBaseChangeParam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VCameraFreelook3rdBaseChangeParam*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERAFREELOOK3RDBASECHANGEPARAM_METHOD_2_E76FD3A954783DC1_OFFSET))(a1, a2);
		}
	};
}
