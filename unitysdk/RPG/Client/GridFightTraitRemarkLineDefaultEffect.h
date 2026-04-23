#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitRemarkLineColorType.h"
#include "unitysdk/RPG/Client/GridFightTraitRemarkLineEffectBase.h"

namespace RPG::Client { class GridFightTrait; }
namespace RPG::GameCore { class GridFightTraitRemarkRow; }

#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEDEFAULTEFFECT_GET_CURRENTCOLORTYPE_OFFSET UNITYSDK_OFFSET(0xA5BD390)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEDEFAULTEFFECT_GET_ISHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0xA5BD3B0)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEDEFAULTEFFECT_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0xA5BD3A0)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEDEFAULTEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0xA5BD270)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitRemarkLineDefaultEffect_TypeDefinitionIndex = 60266;

	class GridFightTraitRemarkLineDefaultEffect : public ::RPG::Client::GridFightTraitRemarkLineEffectBase
	{
	public:
		::System::Void _ctor(::RPG::Client::GridFightTrait* trait, ::RPG::GameCore::GridFightTraitRemarkRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTrait*, ::RPG::GameCore::GridFightTraitRemarkRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEDEFAULTEFFECT__CTOR_OFFSET))(this, trait, row);
		}

		::RPG::Client::GridFightTraitRemarkLineColorType get_CurrentColorType()
		{
			return ((::RPG::Client::GridFightTraitRemarkLineColorType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEDEFAULTEFFECT_GET_CURRENTCOLORTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEDEFAULTEFFECT_GET_ISSHOW_OFFSET))(this);
		}

		::System::Boolean get_IsHighlight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEDEFAULTEFFECT_GET_ISHIGHLIGHT_OFFSET))(this);
		}
	};
}
