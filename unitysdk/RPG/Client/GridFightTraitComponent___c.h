#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTrait; }
namespace RPG::Client { class GridFightTraitConfigBase; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA5B47F0)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA5B4830)
#define RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__GET_TRAITCONFIGS_B__9_0_OFFSET UNITYSDK_OFFSET(0xA5B4840)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitComponent___c_TypeDefinitionIndex = 60239;

	class GridFightTraitComponent___c : public ::System::Object
	{
	public:
		static ::RPG::Client::GridFightTraitComponent___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightTraitComponent___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitComponent___c_TypeDefinitionIndex)->GetStaticField(0x1A7F0);
		}
		static ::System::Func_2<::RPG::Client::GridFightTrait*, ::RPG::Client::GridFightTraitConfigBase*>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightTrait*, ::RPG::Client::GridFightTraitConfigBase*>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitComponent___c_TypeDefinitionIndex)->GetStaticField(0x1A7F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightTraitConfigBase* _get_TraitConfigs_b__9_0(::RPG::Client::GridFightTrait* x)
		{
			return ((::RPG::Client::GridFightTraitConfigBase*(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCOMPONENT___C__GET_TRAITCONFIGS_B__9_0_OFFSET))(this, x);
		}
	};
}
