#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_TRIGGERENTITYCOLLIDERCAMERACONFIG_METHOD_3_D17E786B46E1AF12_OFFSET UNITYSDK_OFFSET(0x190C5340)
#define RPG_GAMECORE_TRIGGERENTITYCOLLIDERCAMERACONFIG_METHOD_3_FFA32702E8EC0584_OFFSET UNITYSDK_OFFSET(0x190C53C0)
#define RPG_GAMECORE_TRIGGERENTITYCOLLIDERCAMERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x190C5390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerEntityColliderCameraConfig_TypeDefinitionIndex = 22422;

	class TriggerEntityColliderCameraConfig : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* KeyName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERENTITYCOLLIDERCAMERACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D17E786B46E1AF12(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerEntityColliderCameraConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerEntityColliderCameraConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERENTITYCOLLIDERCAMERACONFIG_METHOD_3_D17E786B46E1AF12_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FFA32702E8EC0584(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerEntityColliderCameraConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerEntityColliderCameraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERENTITYCOLLIDERCAMERACONFIG_METHOD_3_FFA32702E8EC0584_OFFSET))(a1, a2);
		}
	};
}
