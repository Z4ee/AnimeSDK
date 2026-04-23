#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/BaseMsgCreator_1.h"

namespace RPG::CustomRP { class DebugShaderHotReloadMsg; }
namespace RPG::CustomRP { class IRPMessage; }
namespace System { class String; }

#define RPG_CUSTOMRP_DEBUGSHADERHOTRELOADMSGCREATOR_APPLYCOMPUTESHADERBYTES_OFFSET UNITYSDK_OFFSET(0x18138500)
#define RPG_CUSTOMRP_DEBUGSHADERHOTRELOADMSGCREATOR_APPLYSHADERBYTES_OFFSET UNITYSDK_OFFSET(0x18138330)
#define RPG_CUSTOMRP_DEBUGSHADERHOTRELOADMSGCREATOR_APPLYSHADERHOTRELOADMSG_OFFSET UNITYSDK_OFFSET(0x181386D0)
#define RPG_CUSTOMRP_DEBUGSHADERHOTRELOADMSGCREATOR_ONMSG_OFFSET UNITYSDK_OFFSET(0x18138770)
#define RPG_CUSTOMRP_DEBUGSHADERHOTRELOADMSGCREATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x181387C0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int DebugShaderHotReloadMsgCreator_TypeDefinitionIndex = 35137;

	class DebugShaderHotReloadMsgCreator : public ::RPG::CustomRP::BaseMsgCreator_1<::RPG::CustomRP::DebugShaderHotReloadMsg*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSHADERHOTRELOADMSGCREATOR__CTOR_OFFSET))(this);
		}

		static ::System::Void ApplyShaderBytes(::System::String* shaderName, ::Il2CppArray<::System::Byte>* shaderBytes)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSHADERHOTRELOADMSGCREATOR_APPLYSHADERBYTES_OFFSET))(shaderName, shaderBytes);
		}

		static ::System::Void ApplyComputeShaderBytes(::System::String* shaderName, ::Il2CppArray<::System::Byte>* shaderBytes)
		{
			return ((::System::Void(*)(::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSHADERHOTRELOADMSGCREATOR_APPLYCOMPUTESHADERBYTES_OFFSET))(shaderName, shaderBytes);
		}

		static ::System::Void ApplyShaderHotReloadMsg(::RPG::CustomRP::DebugShaderHotReloadMsg* reloadMsg)
		{
			return ((::System::Void(*)(::RPG::CustomRP::DebugShaderHotReloadMsg*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSHADERHOTRELOADMSGCREATOR_APPLYSHADERHOTRELOADMSG_OFFSET))(reloadMsg);
		}

		::System::Void OnMsg(::RPG::CustomRP::IRPMessage* msg)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::IRPMessage*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSHADERHOTRELOADMSGCREATOR_ONMSG_OFFSET))(this, msg);
		}
	};
}
