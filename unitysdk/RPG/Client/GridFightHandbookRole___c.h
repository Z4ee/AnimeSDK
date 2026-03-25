#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTraitConfig; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Linq { template <typename T1, typename T2> class IGrouping_2; }

#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9853BB0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9853BF0)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE___C__GETMERGEDTRAITCONFIGS_B__11_0_OFFSET UNITYSDK_OFFSET(0x9853C00)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE___C__GETMERGEDTRAITCONFIGS_B__11_1_OFFSET UNITYSDK_OFFSET(0x9853C30)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightHandbookRole___c_TypeDefinitionIndex = 52692;

	class GridFightHandbookRole___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightTraitConfig*, ::System::UInt32>** StaticGet___9__11_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightTraitConfig*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightHandbookRole___c_TypeDefinitionIndex)->GetStaticField(0x16560);
		}
		static ::RPG::Client::GridFightHandbookRole___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightHandbookRole___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightHandbookRole___c_TypeDefinitionIndex)->GetStaticField(0x16568);
		}
		static ::System::Func_2<::System::Linq::IGrouping_2<::System::UInt32, ::RPG::Client::GridFightTraitConfig*>*, ::RPG::Client::GridFightTraitConfig*>** StaticGet___9__11_1()
		{
			return (::System::Func_2<::System::Linq::IGrouping_2<::System::UInt32, ::RPG::Client::GridFightTraitConfig*>*, ::RPG::Client::GridFightTraitConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightHandbookRole___c_TypeDefinitionIndex)->GetStaticField(0x16570);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKROLE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKROLE___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetMergedTraitConfigs_b__11_0(::RPG::Client::GridFightTraitConfig* config)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightTraitConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKROLE___C__GETMERGEDTRAITCONFIGS_B__11_0_OFFSET))(this, config);
		}

		::RPG::Client::GridFightTraitConfig* _GetMergedTraitConfigs_b__11_1(::System::Linq::IGrouping_2<::System::UInt32, ::RPG::Client::GridFightTraitConfig*>* group)
		{
			return ((::RPG::Client::GridFightTraitConfig*(*)(::PVOID, ::System::Linq::IGrouping_2<::System::UInt32, ::RPG::Client::GridFightTraitConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKROLE___C__GETMERGEDTRAITCONFIGS_B__11_1_OFFSET))(this, group);
		}
	};
}
