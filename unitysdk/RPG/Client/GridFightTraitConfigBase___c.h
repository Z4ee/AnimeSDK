#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightTraitLayerConfig; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA5B57F0)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA5B5830)
#define RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE___C__GETLAYERS_B__6_0_OFFSET UNITYSDK_OFFSET(0xA5B5840)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitConfigBase___c_TypeDefinitionIndex = 60247;

	class GridFightTraitConfigBase___c : public ::System::Object
	{
	public:
		static ::RPG::Client::GridFightTraitConfigBase___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightTraitConfigBase___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitConfigBase___c_TypeDefinitionIndex)->GetStaticField(0x1A810);
		}
		static ::System::Func_2<::RPG::Client::GridFightTraitLayerConfig*, ::System::UInt32>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightTraitLayerConfig*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightTraitConfigBase___c_TypeDefinitionIndex)->GetStaticField(0x1A818);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetLayers_b__6_0(::RPG::Client::GridFightTraitLayerConfig* config)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightTraitLayerConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITCONFIGBASE___C__GETLAYERS_B__6_0_OFFSET))(this, config);
		}
	};
}
