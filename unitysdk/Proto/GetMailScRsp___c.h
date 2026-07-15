#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class GetMailScRsp; }

#define PROTO_GETMAILSCRSP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF82680)
#define PROTO_GETMAILSCRSP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF826B0)
#define PROTO_GETMAILSCRSP___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1BF826C0)

namespace Proto
{
	inline static constexpr unsigned int GetMailScRsp___c_TypeDefinitionIndex = 29225;

	class GetMailScRsp___c : public ::System::Object
	{
	public:
		static ::Proto::GetMailScRsp___c** StaticGet___9()
		{
			return (::Proto::GetMailScRsp___c**)Il2CppClass::FromTypeDefinitionIndex(GetMailScRsp___c_TypeDefinitionIndex)->GetStaticField(0x3C900);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP___C__CTOR_OFFSET))(this);
		}

		::Proto::GetMailScRsp* __cctor_b__48_0()
		{
			return ((::Proto::GetMailScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMAILSCRSP___C___CCTOR_B__48_0_OFFSET))(this);
		}
	};
}
