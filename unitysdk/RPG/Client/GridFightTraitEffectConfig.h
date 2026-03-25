#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightTraitEffectType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GridFightTraitEffectIdConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTCONFIG_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x98D21B0)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTCONFIG_GET_ID_OFFSET UNITYSDK_OFFSET(0x98D20C0)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTCONFIG_GET_TRAITEFFECTDESC_OFFSET UNITYSDK_OFFSET(0x98D21D0)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTCONFIG_GET_TRAITEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x98D2110)
#define RPG_CLIENT_GRIDFIGHTTRAITEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x98D21A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitEffectConfig_TypeDefinitionIndex = 53131;

	class GridFightTraitEffectConfig : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightTraitEffectIdConfigRow* _Row; // 0x10

		::System::Void _ctor(::RPG::GameCore::GridFightTraitEffectIdConfigRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightTraitEffectIdConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTCONFIG__CTOR_OFFSET))(this, row);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTCONFIG_GET_ID_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTCONFIG_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::GameCore::GridFightTraitEffectType get_TraitEffectType()
		{
			return ((::RPG::GameCore::GridFightTraitEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTCONFIG_GET_TRAITEFFECTTYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_TraitEffectDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITEFFECTCONFIG_GET_TRAITEFFECTDESC_OFFSET))(this);
		}
	};
}
