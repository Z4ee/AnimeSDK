#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/BaseMsgCreator_1.h"

namespace RPG::CustomRP { class DebugShaderHotReloadMsg; }
namespace RPG::CustomRP { class IRPMessage; }
namespace System { class String; }

#define RPG_CUSTOMRP_DEBUGSHADERHOTRELOADMSGCREATOR_APPLYCOMPUTESHADERBYTES_OFFSET UNITYSDK_OFFSET(0x18EDCF40)
#define RPG_CUSTOMRP_DEBUGSHADERHOTRELOADMSGCREATOR_APPLYSHADERBYTES_OFFSET UNITYSDK_OFFSET(0x18EDCD80)
#define RPG_CUSTOMRP_DEBUGSHADERHOTRELOADMSGCREATOR_APPLYSHADERHOTRELOADMSG_OFFSET UNITYSDK_OFFSET(0x18EDD110)
#define RPG_CUSTOMRP_DEBUGSHADERHOTRELOADMSGCREATOR_ONMSG_OFFSET UNITYSDK_OFFSET(0x18EDD160)
#define RPG_CUSTOMRP_DEBUGSHADERHOTRELOADMSGCREATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x18EDD340)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int DebugShaderHotReloadMsgCreator_TypeDefinitionIndex = 35424;

	class DebugShaderHotReloadMsgCreator : public ::RPG::CustomRP::BaseMsgCreator_1<::RPG::CustomRP::DebugShaderHotReloadMsg*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSHADERHOTRELOADMSGCREATOR__CTOR_OFFSET))(this);
		}

		static ::System::Boolean ApplyShaderBytes(::System::String* a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSHADERHOTRELOADMSGCREATOR_APPLYSHADERBYTES_OFFSET))(a1, a2);
		}

		static ::System::Boolean ApplyComputeShaderBytes(::System::String* a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSHADERHOTRELOADMSGCREATOR_APPLYCOMPUTESHADERBYTES_OFFSET))(a1, a2);
		}

		static ::System::Boolean ApplyShaderHotReloadMsg(::RPG::CustomRP::DebugShaderHotReloadMsg* a1)
		{
			return ((::System::Boolean(*)(::RPG::CustomRP::DebugShaderHotReloadMsg*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSHADERHOTRELOADMSGCREATOR_APPLYSHADERHOTRELOADMSG_OFFSET))(a1);
		}

		::System::Void OnMsg(::RPG::CustomRP::IRPMessage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::IRPMessage*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSHADERHOTRELOADMSGCREATOR_ONMSG_OFFSET))(this, a1);
		}
	};
}
