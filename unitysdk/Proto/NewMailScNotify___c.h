#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class NewMailScNotify; }

#define PROTO_NEWMAILSCNOTIFY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E007ED0)
#define PROTO_NEWMAILSCNOTIFY___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E007F10)
#define PROTO_NEWMAILSCNOTIFY___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E007F20)

namespace Proto
{
	inline static constexpr unsigned int NewMailScNotify___c_TypeDefinitionIndex = 30503;

	class NewMailScNotify___c : public ::System::Object
	{
	public:
		static ::Proto::NewMailScNotify___c** StaticGet___9()
		{
			return (::Proto::NewMailScNotify___c**)Il2CppClass::FromTypeDefinitionIndex(NewMailScNotify___c_TypeDefinitionIndex)->GetStaticField(0x441A0);
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
