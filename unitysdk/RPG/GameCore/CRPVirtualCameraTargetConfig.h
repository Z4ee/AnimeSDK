#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_CRPVIRTUALCAMERATARGETCONFIG_METHOD_2_44A12B82E7D13EE4_OFFSET UNITYSDK_OFFSET(0x1CDD00D0)
#define RPG_GAMECORE_CRPVIRTUALCAMERATARGETCONFIG_METHOD_2_A26F0C8D0B89058B_OFFSET UNITYSDK_OFFSET(0x1CDCFE80)
#define RPG_GAMECORE_CRPVIRTUALCAMERATARGETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDD00C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CRPVirtualCameraTargetConfig_TypeDefinitionIndex = 22636;

	class CRPVirtualCameraTargetConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x10
		::System::String* AttachPoint; // 0x18
		::System::String* CRPCameraKey; // 0x20
		::Il2CppArray<::System::String*>* WhiteListEffects; // 0x28
		::System::Boolean AlwaysRefreshCamera; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CRPVIRTUALCAMERATARGETCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A26F0C8D0B89058B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CRPVirtualCameraTargetConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CRPVirtualCameraTargetConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CRPVIRTUALCAMERATARGETCONFIG_METHOD_2_A26F0C8D0B89058B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_44A12B82E7D13EE4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::CRPVirtualCameraTargetConfig*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::CRPVirtualCameraTargetConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CRPVIRTUALCAMERATARGETCONFIG_METHOD_2_44A12B82E7D13EE4_OFFSET))(a1, a2);
		}
	};
}
