#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/BaseMsgCreator_1.h"

namespace RPG::CustomRP { class DebugShaderTestInitMsg; }
namespace RPG::CustomRP { class IRPMessage; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define RPG_CUSTOMRP_DEBUGSHADERTESTINITMSGCREATOR_ONMSG_OFFSET UNITYSDK_OFFSET(0x18EDD5D0)
#define RPG_CUSTOMRP_DEBUGSHADERTESTINITMSGCREATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x18EDDCC0)
#define RPG_CUSTOMRP_DEBUGSHADERTESTINITMSGCREATOR__FINDTYPE_OFFSET UNITYSDK_OFFSET(0x18EDDB50)
#define RPG_CUSTOMRP_DEBUGSHADERTESTINITMSGCREATOR__GETSHADERTESTCASEINSTANCE_OFFSET UNITYSDK_OFFSET(0x18EDD930)
#define RPG_CUSTOMRP_DEBUGSHADERTESTINITMSGCREATOR__INVOKEINSTANCEMETHOD_OFFSET UNITYSDK_OFFSET(0x18EDDA60)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int DebugShaderTestInitMsgCreator_TypeDefinitionIndex = 35432;

	class DebugShaderTestInitMsgCreator : public ::RPG::CustomRP::BaseMsgCreator_1<::RPG::CustomRP::DebugShaderTestInitMsg*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSHADERTESTINITMSGCREATOR__CTOR_OFFSET))(this);
		}

		::System::Void OnMsg(::RPG::CustomRP::IRPMessage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::IRPMessage*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSHADERTESTINITMSGCREATOR_ONMSG_OFFSET))(this, a1);
		}

		static ::System::Object* _GetShaderTestCaseInstance()
		{
			return ((::System::Object*(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSHADERTESTINITMSGCREATOR__GETSHADERTESTCASEINSTANCE_OFFSET))();
		}

		static ::System::Void _InvokeInstanceMethod(::System::Object* a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Void(*)(::System::Object*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSHADERTESTINITMSGCREATOR__INVOKEINSTANCEMETHOD_OFFSET))(a1, a2, a3);
		}

		static ::System::Type* _FindType(::System::String* a1)
		{
			return ((::System::Type*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSHADERTESTINITMSGCREATOR__FINDTYPE_OFFSET))(a1);
		}
	};
}
