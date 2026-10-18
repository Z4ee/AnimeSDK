#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class ClientMail; }

#define PROTO_CLIENTMAIL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFBE000)
#define PROTO_CLIENTMAIL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFBE030)
#define PROTO_CLIENTMAIL___C___CCTOR_B__73_0_OFFSET UNITYSDK_OFFSET(0x1DFBE040)

namespace Proto
{
	inline static constexpr unsigned int ClientMail___c_TypeDefinitionIndex = 30485;

	class ClientMail___c : public ::System::Object
	{
	public:
		static ::Proto::ClientMail___c** StaticGet___9()
		{
			return (::Proto::ClientMail___c**)Il2CppClass::FromTypeDefinitionIndex(ClientMail___c_TypeDefinitionIndex)->GetStaticField(0x49840);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL___C__CTOR_OFFSET))(this);
		}

		::Proto::ClientMail* __cctor_b__73_0()
		{
			return ((::Proto::ClientMail*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CLIENTMAIL___C___CCTOR_B__73_0_OFFSET))(this);
		}
	};
}
