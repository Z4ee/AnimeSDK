#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitRemarkLineColorType.h"
#include "unitysdk/RPG/Client/GridFightTraitRemarkLineEffectBase.h"

namespace RPG::Client { class GridFightTrait; }
namespace RPG::GameCore { class GridFightTraitRemarkRow; }

#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEGREYTOHIGHLIGHTEFFECT_GET_CURRENTCOLORTYPE_OFFSET UNITYSDK_OFFSET(0xA5BE8D0)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEGREYTOHIGHLIGHTEFFECT_GET_ISHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0xA5BE7F0)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEGREYTOHIGHLIGHTEFFECT_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0xA5BE710)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEGREYTOHIGHLIGHTEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0xA5BD970)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitRemarkLineGreyToHighlightEffect_TypeDefinitionIndex = 60273;

	class GridFightTraitRemarkLineGreyToHighlightEffect : public ::RPG::Client::GridFightTraitRemarkLineEffectBase
	{
	public:
		::System::Void _ctor(::RPG::Client::GridFightTrait* trait, ::RPG::GameCore::GridFightTraitRemarkRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTrait*, ::RPG::GameCore::GridFightTraitRemarkRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEGREYTOHIGHLIGHTEFFECT__CTOR_OFFSET))(this, trait, row);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEGREYTOHIGHLIGHTEFFECT_GET_ISSHOW_OFFSET))(this);
		}

		::System::Boolean get_IsHighlight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEGREYTOHIGHLIGHTEFFECT_GET_ISHIGHLIGHT_OFFSET))(this);
		}

		::RPG::Client::GridFightTraitRemarkLineColorType get_CurrentColorType()
		{
			return ((::RPG::Client::GridFightTraitRemarkLineColorType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEGREYTOHIGHLIGHTEFFECT_GET_CURRENTCOLORTYPE_OFFSET))(this);
		}
	};
}
