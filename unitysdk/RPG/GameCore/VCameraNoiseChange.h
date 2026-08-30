#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_VCAMERANOISECHANGE_METHOD_3_E814C3E1C32FD187_OFFSET UNITYSDK_OFFSET(0x1D2BA040)
#define RPG_GAMECORE_VCAMERANOISECHANGE_METHOD_3_F8AF5BF58C03A2A8_OFFSET UNITYSDK_OFFSET(0x1D2B8B40)
#define RPG_GAMECORE_VCAMERANOISECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2BA030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VCameraNoiseChange_TypeDefinitionIndex = 23452;

	class VCameraNoiseChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Reset; // 0x18
		::System::Single AmplitudeGain; // 0x1C
		::System::Single FrequencyGain; // 0x20
		::System::String* ProfilePath; // 0x28
		::System::Boolean IgnoreActionWaitOrder; // 0x30
		::System::Single AmplitudeTransitionTime; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERANOISECHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F8AF5BF58C03A2A8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VCameraNoiseChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VCameraNoiseChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERANOISECHANGE_METHOD_3_F8AF5BF58C03A2A8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E814C3E1C32FD187(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::VCameraNoiseChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::VCameraNoiseChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERANOISECHANGE_METHOD_3_E814C3E1C32FD187_OFFSET))(a1, a2);
		}
	};
}
