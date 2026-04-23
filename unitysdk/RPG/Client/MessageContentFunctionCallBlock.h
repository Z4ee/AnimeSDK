#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MessageContentBlock.h"

namespace System { class String; }

#define RPG_CLIENT_MESSAGECONTENTFUNCTIONCALLBLOCK_GET_CANRESPONSEFUNCTIONCALL_OFFSET UNITYSDK_OFFSET(0xA88A480)
#define RPG_CLIENT_MESSAGECONTENTFUNCTIONCALLBLOCK_GET_FUNCTIONCALLID_OFFSET UNITYSDK_OFFSET(0xA88A470)
#define RPG_CLIENT_MESSAGECONTENTFUNCTIONCALLBLOCK_SET_CANRESPONSEFUNCTIONCALL_OFFSET UNITYSDK_OFFSET(0xA88A490)
#define RPG_CLIENT_MESSAGECONTENTFUNCTIONCALLBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0xA888E90)
#define RPG_CLIENT_MESSAGECONTENTFUNCTIONCALLBLOCK__READYTORESPONSEFUNCTIONCALL_OFFSET UNITYSDK_OFFSET(0xA8891B0)
#define RPG_CLIENT_MESSAGECONTENTFUNCTIONCALLBLOCK__RESPONSEFUNCTIONCALL_OFFSET UNITYSDK_OFFSET(0xA88A390)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentFunctionCallBlock_TypeDefinitionIndex = 58247;

	class MessageContentFunctionCallBlock : public ::RPG::Client::MessageContentBlock
	{
	public:
		::System::String* _FunctionCallID_k__BackingField; // 0x18
		::System::Boolean _CanResponseFunctionCall_k__BackingField; // 0x20

		::System::Void _ctor(::System::String* functionCallID)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTFUNCTIONCALLBLOCK__CTOR_OFFSET))(this, functionCallID);
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

		::System::Void set_CanResponseFunctionCall(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTFUNCTIONCALLBLOCK_SET_CANRESPONSEFUNCTIONCALL_OFFSET))(this, value);
		}
	};
}
