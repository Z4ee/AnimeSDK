#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTraitLayerConfig; }
namespace RPG::Client { class GridFightTraitRemarkLineConfig; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD35C700)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD35C740)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE___C__GETLAYERS_B__6_0_OFFSET UNITYSDK_OFFSET(0xD35C750)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE___C___GETTRAITREMARKLINECONFIGS_B__12_0_OFFSET UNITYSDK_OFFSET(0xD35C7B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitConfigBase___c_TypeDefinitionIndex = 65508;

	class GridFightTraitConfigBase___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightTraitRemarkLineConfig*, ::System::UInt32>** StaticGet___9__12_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightTraitRemarkLineConfig*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitConfigBase___c_TypeDefinitionIndex)->GetStaticField(0x539C0);
		}
		static ::System::Func_2<::RPG::Client::GridFightTraitLayerConfig*, ::System::UInt32>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightTraitLayerConfig*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitConfigBase___c_TypeDefinitionIndex)->GetStaticField(0x539C8);
		}
		static ::RPG::Client::GridFightTraitConfigBase___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightTraitConfigBase___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitConfigBase___c_TypeDefinitionIndex)->GetStaticField(0x539D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetLayers_b__6_0(::RPG::Client::GridFightTraitLayerConfig* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightTraitLayerConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE___C__GETLAYERS_B__6_0_OFFSET))(this, a1);
		}

		::System::UInt32 __GetTraitRemarkLineConfigs_b__12_0(::RPG::Client::GridFightTraitRemarkLineConfig* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightTraitRemarkLineConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE___C___GETTRAITREMARKLINECONFIGS_B__12_0_OFFSET))(this, a1);
		}
	};
}
