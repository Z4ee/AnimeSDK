#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class AntiAddictScNotify; }

#define PROTO_ANTIADDICTSCNOTIFY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D92F170)
#define PROTO_ANTIADDICTSCNOTIFY___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D92F1B0)
#define PROTO_ANTIADDICTSCNOTIFY___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1D92F1C0)

namespace Proto
{
	inline static constexpr unsigned int AntiAddictScNotify___c_TypeDefinitionIndex = 31411;

	class AntiAddictScNotify___c : public ::System::Object
	{
	public:
		static ::Proto::AntiAddictScNotify___c** StaticGet___9()
		{
			return (::Proto::AntiAddictScNotify___c**)Il2CppClass::FromTypeDefinitionIndex(AntiAddictScNotify___c_TypeDefinitionIndex)->GetStaticField(0x573C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_ANTIADDICTSCNOTIFY___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ANTIADDICTSCNOTIFY___C__CTOR_OFFSET))(this);
		}

		::Proto::AntiAddictScNotify* __cctor_b__33_0()
		{
			return ((::Proto::AntiAddictScNotify*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ANTIADDICTSCNOTIFY___C___CCTOR_B__33_0_OFFSET))(this);
		}
	};
}
