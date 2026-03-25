#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTraitBonusConfig; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x98DAAC0)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x98DAB00)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT___C__GET_BONUSTYPECONFIGS_B__44_0_OFFSET UNITYSDK_OFFSET(0x98DAB10)
#define RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT___C__GET_ENHANCETYPECONFIGS_B__46_0_OFFSET UNITYSDK_OFFSET(0x98DAB40)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitSpaceEffect___c_TypeDefinitionIndex = 52320;

	class GridFightTraitSpaceEffect___c : public ::System::Object
	{
	public:
		static ::RPG::Client::GridFightTraitSpaceEffect___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightTraitSpaceEffect___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitSpaceEffect___c_TypeDefinitionIndex)->GetStaticField(0x1DD90);
		}
		static ::System::Func_2<::RPG::Client::GridFightTraitBonusConfig*, ::System::Boolean>** StaticGet___9__44_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightTraitBonusConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitSpaceEffect___c_TypeDefinitionIndex)->GetStaticField(0x1DD98);
		}
		static ::System::Func_2<::RPG::Client::GridFightTraitBonusConfig*, ::System::Boolean>** StaticGet___9__46_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightTraitBonusConfig*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitSpaceEffect___c_TypeDefinitionIndex)->GetStaticField(0x1DDA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_BonusTypeConfigs_b__44_0(::RPG::Client::GridFightTraitBonusConfig* config)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTraitBonusConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT___C__GET_BONUSTYPECONFIGS_B__44_0_OFFSET))(this, config);
		}

		::System::Boolean _get_EnhanceTypeConfigs_b__46_0(::RPG::Client::GridFightTraitBonusConfig* config)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTraitBonusConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITSPACEEFFECT___C__GET_ENHANCETYPECONFIGS_B__46_0_OFFSET))(this, config);
		}
	};
}
