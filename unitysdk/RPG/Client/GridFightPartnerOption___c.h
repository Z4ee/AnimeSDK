#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTraitConfig; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTPARTNEROPTION___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AE903B0)
#define RPG_CLIENT_GRIDFIGHTPARTNEROPTION___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE903F0)
#define RPG_CLIENT_GRIDFIGHTPARTNEROPTION___C___GETSHOWTRAITCONFIGS_B__10_0_OFFSET UNITYSDK_OFFSET(0x1AE90400)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPartnerOption___c_TypeDefinitionIndex = 62479;

	class GridFightPartnerOption___c : public ::System::Object
	{
	public:
		static ::RPG::Client::GridFightPartnerOption___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightPartnerOption___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightPartnerOption___c_TypeDefinitionIndex)->GetStaticField(0x2A5C0);
		}
		static ::System::Func_2<::RPG::Client::GridFightTraitConfig*, ::System::Boolean>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightTraitConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightPartnerOption___c_TypeDefinitionIndex)->GetStaticField(0x2A5C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNEROPTION___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNEROPTION___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __GetShowTraitConfigs_b__10_0(::RPG::Client::GridFightTraitConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTraitConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPARTNEROPTION___C___GETSHOWTRAITCONFIGS_B__10_0_OFFSET))(this, a1);
		}
	};
}
