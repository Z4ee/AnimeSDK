#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/BaseMsgCreator_1.h"

namespace RPG::CustomRP { class DebugShaderVIPMaterialListReqMsg; }
namespace RPG::CustomRP { class IRPMessage; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define RPG_CUSTOMRP_DEBUGSHADERVIPMATERIALLISTREQMSGCREATOR_ONMSG_OFFSET UNITYSDK_OFFSET(0x18EDDDC0)
#define RPG_CUSTOMRP_DEBUGSHADERVIPMATERIALLISTREQMSGCREATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x18EDE810)
#define RPG_CUSTOMRP_DEBUGSHADERVIPMATERIALLISTREQMSGCREATOR__FINDTYPE_OFFSET UNITYSDK_OFFSET(0x18EDE3B0)
#define RPG_CUSTOMRP_DEBUGSHADERVIPMATERIALLISTREQMSGCREATOR__GETSHADERTESTCASEINSTANCE_OFFSET UNITYSDK_OFFSET(0x18EDE520)
#define RPG_CUSTOMRP_DEBUGSHADERVIPMATERIALLISTREQMSGCREATOR__GETSHADERTESTINITIALIZED_OFFSET UNITYSDK_OFFSET(0x18EDE650)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int DebugShaderVIPMaterialListReqMsgCreator_TypeDefinitionIndex = 35431;

	class DebugShaderVIPMaterialListReqMsgCreator : public ::RPG::CustomRP::BaseMsgCreator_1<::RPG::CustomRP::DebugShaderVIPMaterialListReqMsg*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSHADERVIPMATERIALLISTREQMSGCREATOR__CTOR_OFFSET))(this);
		}

		::System::Void OnMsg(::RPG::CustomRP::IRPMessage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::IRPMessage*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSHADERVIPMATERIALLISTREQMSGCREATOR_ONMSG_OFFSET))(this, a1);
		}

		static ::System::Object* _GetShaderTestCaseInstance()
		{
			return ((::System::Object*(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSHADERVIPMATERIALLISTREQMSGCREATOR__GETSHADERTESTCASEINSTANCE_OFFSET))();
		}

		static ::System::Boolean _GetShaderTestInitialized(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::System::Object*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSHADERVIPMATERIALLISTREQMSGCREATOR__GETSHADERTESTINITIALIZED_OFFSET))(a1);
		}

		static ::System::Type* _FindType(::System::String* a1)
		{
			return ((::System::Type*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSHADERVIPMATERIALLISTREQMSGCREATOR__FINDTYPE_OFFSET))(a1);
		}
	};
}
