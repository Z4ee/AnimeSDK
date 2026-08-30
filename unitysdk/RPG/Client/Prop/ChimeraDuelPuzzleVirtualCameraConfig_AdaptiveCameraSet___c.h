#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class ChimeraDuelPuzzleVirtualCameraConfig_AdaptiveCameraSet_Entry; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_PROP_CHIMERADUELPUZZLEVIRTUALCAMERACONFIG_ADAPTIVECAMERASET___C__ADAPT_B__3_0_OFFSET UNITYSDK_OFFSET(0xDC25CF0)
#define RPG_CLIENT_PROP_CHIMERADUELPUZZLEVIRTUALCAMERACONFIG_ADAPTIVECAMERASET___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xDC25CA0)
#define RPG_CLIENT_PROP_CHIMERADUELPUZZLEVIRTUALCAMERACONFIG_ADAPTIVECAMERASET___C__CTOR_OFFSET UNITYSDK_OFFSET(0xDC25CE0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelPuzzleVirtualCameraConfig_AdaptiveCameraSet___c_TypeDefinitionIndex = 77845;

	class ChimeraDuelPuzzleVirtualCameraConfig_AdaptiveCameraSet___c : public ::System::Object
	{
	public:
		static ::RPG::Client::Prop::ChimeraDuelPuzzleVirtualCameraConfig_AdaptiveCameraSet___c** StaticGet___9()
		{
			return (::RPG::Client::Prop::ChimeraDuelPuzzleVirtualCameraConfig_AdaptiveCameraSet___c**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelPuzzleVirtualCameraConfig_AdaptiveCameraSet___c_TypeDefinitionIndex)->GetStaticField(0x64210);
		}
		static ::System::Comparison_1<::RPG::Client::Prop::ChimeraDuelPuzzleVirtualCameraConfig_AdaptiveCameraSet_Entry*>** StaticGet___9__3_0()
		{
			return (::System::Comparison_1<::RPG::Client::Prop::ChimeraDuelPuzzleVirtualCameraConfig_AdaptiveCameraSet_Entry*>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelPuzzleVirtualCameraConfig_AdaptiveCameraSet___c_TypeDefinitionIndex)->GetStaticField(0x64218);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELPUZZLEVIRTUALCAMERACONFIG_ADAPTIVECAMERASET___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELPUZZLEVIRTUALCAMERACONFIG_ADAPTIVECAMERASET___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _Adapt_b__3_0(::RPG::Client::Prop::ChimeraDuelPuzzleVirtualCameraConfig_AdaptiveCameraSet_Entry* a1, ::RPG::Client::Prop::ChimeraDuelPuzzleVirtualCameraConfig_AdaptiveCameraSet_Entry* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::Prop::ChimeraDuelPuzzleVirtualCameraConfig_AdaptiveCameraSet_Entry*, ::RPG::Client::Prop::ChimeraDuelPuzzleVirtualCameraConfig_AdaptiveCameraSet_Entry*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERADUELPUZZLEVIRTUALCAMERACONFIG_ADAPTIVECAMERASET___C__ADAPT_B__3_0_OFFSET))(this, a1, a2);
		}
	};
}
