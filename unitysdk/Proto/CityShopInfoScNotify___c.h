#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class CityShopInfoScNotify; }

#define PROTO_CITYSHOPINFOSCNOTIFY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1932F9E0)
#define PROTO_CITYSHOPINFOSCNOTIFY___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1932FA20)
#define PROTO_CITYSHOPINFOSCNOTIFY___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1932FA30)

namespace Proto
{
	inline static constexpr unsigned int CityShopInfoScNotify___c_TypeDefinitionIndex = 32296;

	class CityShopInfoScNotify___c : public ::System::Object
	{
	public:
		static ::Proto::CityShopInfoScNotify___c** StaticGet___9()
		{
			return (::Proto::CityShopInfoScNotify___c**)Il2CppClass::FromTypeDefinitionIndex(CityShopInfoScNotify___c_TypeDefinitionIndex)->GetStaticField(0x62E20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_CITYSHOPINFOSCNOTIFY___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CITYSHOPINFOSCNOTIFY___C__CTOR_OFFSET))(this);
		}

		::Proto::CityShopInfoScNotify* __cctor_b__38_0()
		{
			return ((::Proto::CityShopInfoScNotify*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_CITYSHOPINFOSCNOTIFY___C___CCTOR_B__38_0_OFFSET))(this);
		}
	};
}
