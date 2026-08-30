#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTraitConfig; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Linq { template <typename T1, typename T2> class IGrouping_2; }

#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC2C610)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC2C650)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE___C__GETMERGEDTRAITCONFIGS_B__15_0_OFFSET UNITYSDK_OFFSET(0x1BC2C660)
#define RPG_CLIENT_GRIDFIGHTHANDBOOKROLE___C__GETMERGEDTRAITCONFIGS_B__15_1_OFFSET UNITYSDK_OFFSET(0x1BC2C6C0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightHandbookRole___c_TypeDefinitionIndex = 64959;

	class GridFightHandbookRole___c : public ::System::Object
	{
	public:
		static ::RPG::Client::GridFightHandbookRole___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightHandbookRole___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightHandbookRole___c_TypeDefinitionIndex)->GetStaticField(0x356F0);
		}
		static ::System::Func_2<::System::Linq::IGrouping_2<::System::UInt32, ::RPG::Client::GridFightTraitConfig*>*, ::RPG::Client::GridFightTraitConfig*>** StaticGet___9__15_1()
		{
			return (::System::Func_2<::System::Linq::IGrouping_2<::System::UInt32, ::RPG::Client::GridFightTraitConfig*>*, ::RPG::Client::GridFightTraitConfig*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightHandbookRole___c_TypeDefinitionIndex)->GetStaticField(0x356F8);
		}
		static ::System::Func_2<::RPG::Client::GridFightTraitConfig*, ::System::UInt32>** StaticGet___9__15_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightTraitConfig*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightHandbookRole___c_TypeDefinitionIndex)->GetStaticField(0x35700);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKROLE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKROLE___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetMergedTraitConfigs_b__15_0(::RPG::Client::GridFightTraitConfig* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightTraitConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKROLE___C__GETMERGEDTRAITCONFIGS_B__15_0_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightTraitConfig* _GetMergedTraitConfigs_b__15_1(::System::Linq::IGrouping_2<::System::UInt32, ::RPG::Client::GridFightTraitConfig*>* a1)
		{
			return ((::RPG::Client::GridFightTraitConfig*(*)(::PVOID, ::System::Linq::IGrouping_2<::System::UInt32, ::RPG::Client::GridFightTraitConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTHANDBOOKROLE___C__GETMERGEDTRAITCONFIGS_B__15_1_OFFSET))(this, a1);
		}
	};
}
