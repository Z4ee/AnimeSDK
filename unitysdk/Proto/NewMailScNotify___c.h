#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class NewMailScNotify; }

#define PROTO_NEWMAILSCNOTIFY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BEE38D0)
#define PROTO_NEWMAILSCNOTIFY___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEE3910)
#define PROTO_NEWMAILSCNOTIFY___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1BEE3920)

namespace Proto
{
	inline static constexpr unsigned int NewMailScNotify___c_TypeDefinitionIndex = 29241;

	class NewMailScNotify___c : public ::System::Object
	{
	public:
		static ::Proto::NewMailScNotify___c** StaticGet___9()
		{
			return (::Proto::NewMailScNotify___c**)Il2CppClass::FromTypeDefinitionIndex(NewMailScNotify___c_TypeDefinitionIndex)->GetStaticField(0x3EFF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_NEWMAILSCNOTIFY___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_NEWMAILSCNOTIFY___C__CTOR_OFFSET))(this);
		}

		::Proto::NewMailScNotify* __cctor_b__23_0()
		{
			return ((::Proto::NewMailScNotify*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_NEWMAILSCNOTIFY___C___CCTOR_B__23_0_OFFSET))(this);
		}
	};
}
