#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::NavMap { class SubTabData; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_NAVMAP_COMPOSEDTABDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xAB40E10)
#define RPG_CLIENT_NAVMAP_COMPOSEDTABDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xAB40E40)
#define RPG_CLIENT_NAVMAP_COMPOSEDTABDATA___C__GET_ISSHOW_B__36_0_OFFSET UNITYSDK_OFFSET(0xAB40F00)
#define RPG_CLIENT_NAVMAP_COMPOSEDTABDATA___C__GET_SHOWSUBTABCOUNT_B__30_0_OFFSET UNITYSDK_OFFSET(0xAB40E50)
#define RPG_CLIENT_NAVMAP_COMPOSEDTABDATA___C__GET_UNLOCK_B__34_0_OFFSET UNITYSDK_OFFSET(0xAB40E70)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int ComposedTabData___c_TypeDefinitionIndex = 68772;

	class ComposedTabData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::NavMap::SubTabData*, ::System::Boolean>** StaticGet___9__34_0()
		{
			return (::System::Func_2<::RPG::Client::NavMap::SubTabData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ComposedTabData___c_TypeDefinitionIndex)->GetStaticField(0x4DE40);
		}
		static ::System::Func_2<::RPG::Client::NavMap::SubTabData*, ::System::Boolean>** StaticGet___9__36_0()
		{
			return (::System::Func_2<::RPG::Client::NavMap::SubTabData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ComposedTabData___c_TypeDefinitionIndex)->GetStaticField(0x4DE48);
		}
		static ::System::Predicate_1<::RPG::Client::NavMap::SubTabData*>** StaticGet___9__30_0()
		{
			return (::System::Predicate_1<::RPG::Client::NavMap::SubTabData*>**)Il2CppClass::FromTypeDefinitionIndex(ComposedTabData___c_TypeDefinitionIndex)->GetStaticField(0x4DE50);
		}
		static ::RPG::Client::NavMap::ComposedTabData___c** StaticGet___9()
		{
			return (::RPG::Client::NavMap::ComposedTabData___c**)Il2CppClass::FromTypeDefinitionIndex(ComposedTabData___c_TypeDefinitionIndex)->GetStaticField(0x4DE58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_COMPOSEDTABDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_COMPOSEDTABDATA___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_ShowSubTabCount_b__30_0(::RPG::Client::NavMap::SubTabData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::SubTabData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_COMPOSEDTABDATA___C__GET_SHOWSUBTABCOUNT_B__30_0_OFFSET))(this, x);
		}

		::System::Boolean _get_Unlock_b__34_0(::RPG::Client::NavMap::SubTabData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::SubTabData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_COMPOSEDTABDATA___C__GET_UNLOCK_B__34_0_OFFSET))(this, x);
		}

		::System::Boolean _get_IsShow_b__36_0(::RPG::Client::NavMap::SubTabData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::SubTabData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_COMPOSEDTABDATA___C__GET_ISSHOW_B__36_0_OFFSET))(this, x);
		}
	};
}
