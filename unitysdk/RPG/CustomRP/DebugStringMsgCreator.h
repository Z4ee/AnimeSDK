#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/BaseMsgCreator_1.h"

namespace RPG::CustomRP { class DebugStrCb; }
namespace RPG::CustomRP { class DebugStringMsg; }
namespace RPG::CustomRP { class IRPMessage; }

#define RPG_CUSTOMRP_DEBUGSTRINGMSGCREATOR_ONMSG_OFFSET UNITYSDK_OFFSET(0x16A95720)
#define RPG_CUSTOMRP_DEBUGSTRINGMSGCREATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x16A95790)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int DebugStringMsgCreator_TypeDefinitionIndex = 29364;

	class DebugStringMsgCreator : public ::RPG::CustomRP::BaseMsgCreator_1<::RPG::CustomRP::DebugStringMsg*>
	{
	public:
		static ::RPG::CustomRP::DebugStrCb** StaticGet_strCb()
		{
			return (::RPG::CustomRP::DebugStrCb**)Il2CppClass::FromTypeDefinitionIndex(DebugStringMsgCreator_TypeDefinitionIndex)->GetStaticField(0x31010);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSTRINGMSGCREATOR__CTOR_OFFSET))(this);
		}

		::System::Void OnMsg(::RPG::CustomRP::IRPMessage* msg)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::IRPMessage*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_DEBUGSTRINGMSGCREATOR_ONMSG_OFFSET))(this, msg);
		}
	};
}
