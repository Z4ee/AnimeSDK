#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class DelMailScRsp; }

#define PROTO_DELMAILSCRSP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF77590)
#define PROTO_DELMAILSCRSP___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF775D0)
#define PROTO_DELMAILSCRSP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1BF775E0)

namespace Proto
{
	inline static constexpr unsigned int DelMailScRsp___c_TypeDefinitionIndex = 29233;

	class DelMailScRsp___c : public ::System::Object
	{
	public:
		static ::Proto::DelMailScRsp___c** StaticGet___9()
		{
			return (::Proto::DelMailScRsp___c**)Il2CppClass::FromTypeDefinitionIndex(DelMailScRsp___c_TypeDefinitionIndex)->GetStaticField(0x3C120);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_DELMAILSCRSP___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DELMAILSCRSP___C__CTOR_OFFSET))(this);
		}

		::Proto::DelMailScRsp* __cctor_b__28_0()
		{
			return ((::Proto::DelMailScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DELMAILSCRSP___C___CCTOR_B__28_0_OFFSET))(this);
		}
	};
}
