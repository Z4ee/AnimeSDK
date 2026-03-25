#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_601;

#define RPG_CLIENT_MESSAGECONTENTBLOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B8F750)
#define RPG_CLIENT_MESSAGECONTENTBLOCK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9B8F700)
#define RPG_CLIENT_MESSAGECONTENTBLOCK_GET_ISCONTEXT_OFFSET UNITYSDK_OFFSET(0x9B8F550)
#define RPG_CLIENT_MESSAGECONTENTBLOCK_GET_ISLASTMESSAGE_OFFSET UNITYSDK_OFFSET(0x9B8F5B0)
#define RPG_CLIENT_MESSAGECONTENTBLOCK_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x9B8F7E0)
#define RPG_CLIENT_MESSAGECONTENTBLOCK_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x9B8F860)
#define RPG_CLIENT_MESSAGECONTENTBLOCK_SETMESSAGE_OFFSET UNITYSDK_OFFSET(0x9B8F6B0)
#define RPG_CLIENT_MESSAGECONTENTBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x9B8F270)
#define RPG_CLIENT_MESSAGECONTENTBLOCK___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0x9B8F910)
#define RPG_CLIENT_MESSAGECONTENTBLOCK___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9B8F900)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentBlock_TypeDefinitionIndex = 51319;

	class MessageContentBlock : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_601* _Message; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTBLOCK__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsContext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTBLOCK_GET_ISCONTEXT_OFFSET))(this);
		}

		::System::Boolean get_IsLastMessage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTBLOCK_GET_ISLASTMESSAGE_OFFSET))(this);
		}

		::System::Void SetMessage(::Class_0_16E4307DCC419505_601* message)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_601*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTBLOCK_SETMESSAGE_OFFSET))(this, message);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTBLOCK_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTBLOCK_EQUALS_OFFSET))(this, obj);
		}

		static ::System::Boolean op_Equality(::RPG::Client::MessageContentBlock* block1, ::RPG::Client::MessageContentBlock* block2)
		{
			return ((::System::Boolean(*)(::RPG::Client::MessageContentBlock*, ::RPG::Client::MessageContentBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTBLOCK_OP_EQUALITY_OFFSET))(block1, block2);
		}

		static ::System::Boolean op_Inequality(::RPG::Client::MessageContentBlock* block1, ::RPG::Client::MessageContentBlock* block2)
		{
			return ((::System::Boolean(*)(::RPG::Client::MessageContentBlock*, ::RPG::Client::MessageContentBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTBLOCK_OP_INEQUALITY_OFFSET))(block1, block2);
		}

		::System::Int32 __iFixBaseProxy_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTBLOCK___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTBLOCK___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
		}
	};
}
