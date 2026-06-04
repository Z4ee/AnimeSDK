#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MessageContentBlock.h"

namespace System { class String; }

#define RPG_CLIENT_MESSAGECONTENTFUNCTIONCALLBLOCK_GET_CANRESPONSEFUNCTIONCALL_OFFSET UNITYSDK_OFFSET(0xBFD6160)
#define RPG_CLIENT_MESSAGECONTENTFUNCTIONCALLBLOCK_GET_FUNCTIONCALLID_OFFSET UNITYSDK_OFFSET(0xBFD6150)
#define RPG_CLIENT_MESSAGECONTENTFUNCTIONCALLBLOCK_SET_CANRESPONSEFUNCTIONCALL_OFFSET UNITYSDK_OFFSET(0xBFD6170)
#define RPG_CLIENT_MESSAGECONTENTFUNCTIONCALLBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0xBFD49B0)
#define RPG_CLIENT_MESSAGECONTENTFUNCTIONCALLBLOCK__READYTORESPONSEFUNCTIONCALL_OFFSET UNITYSDK_OFFSET(0xBFD4D00)
#define RPG_CLIENT_MESSAGECONTENTFUNCTIONCALLBLOCK__RESPONSEFUNCTIONCALL_OFFSET UNITYSDK_OFFSET(0xBFD60A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentFunctionCallBlock_TypeDefinitionIndex = 59177;

	class MessageContentFunctionCallBlock : public ::RPG::Client::MessageContentBlock
	{
	public:
		::System::String* _FunctionCallID_k__BackingField; // 0x18
		::System::Boolean _CanResponseFunctionCall_k__BackingField; // 0x20

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTFUNCTIONCALLBLOCK__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ReadyToResponseFunctionCall()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTFUNCTIONCALLBLOCK__READYTORESPONSEFUNCTIONCALL_OFFSET))(this);
		}

		::System::Void _ResponseFunctionCall()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTFUNCTIONCALLBLOCK__RESPONSEFUNCTIONCALL_OFFSET))(this);
		}

		::System::String* get_FunctionCallID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTFUNCTIONCALLBLOCK_GET_FUNCTIONCALLID_OFFSET))(this);
		}

		::System::Boolean get_CanResponseFunctionCall()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTFUNCTIONCALLBLOCK_GET_CANRESPONSEFUNCTIONCALL_OFFSET))(this);
		}

		::System::Void set_CanResponseFunctionCall(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTFUNCTIONCALLBLOCK_SET_CANRESPONSEFUNCTIONCALL_OFFSET))(this, a1);
		}
	};
}
