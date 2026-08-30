#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitRemarkLineColorType.h"
#include "unitysdk/RPG/Client/GridFightTraitRemarkLineEffectBase.h"

namespace RPG::Client { class GridFightTrait; }
namespace RPG::GameCore { class GridFightTraitRemarkRow; }

#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEGREYTOHIDEEFFECT_GET_CURRENTCOLORTYPE_OFFSET UNITYSDK_OFFSET(0x1BB104A0)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEGREYTOHIDEEFFECT_GET_ISHIGHLIGHT_OFFSET UNITYSDK_OFFSET(0x1BB10980)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEGREYTOHIDEEFFECT_GET_ISNOTTEAMTRAIT_OFFSET UNITYSDK_OFFSET(0x1BB108C0)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEGREYTOHIDEEFFECT_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x1BB10750)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEGREYTOHIDEEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB0F9C0)
#define RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEGREYTOHIDEEFFECT__GETCOLORTYPE_OFFSET UNITYSDK_OFFSET(0x1BB104F0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitRemarkLineGreyToHideEffect_TypeDefinitionIndex = 65532;

	class GridFightTraitRemarkLineGreyToHideEffect : public ::RPG::Client::GridFightTraitRemarkLineEffectBase
	{
	public:
		::RPG::Client::GridFightTrait* _Trait; // 0x20

		::System::Void _ctor(::RPG::Client::GridFightTrait* a1, ::RPG::GameCore::GridFightTraitRemarkRow* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTrait*, ::RPG::GameCore::GridFightTraitRemarkRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEGREYTOHIDEEFFECT__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::GridFightTraitRemarkLineColorType get_CurrentColorType()
		{
			return ((::RPG::Client::GridFightTraitRemarkLineColorType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEGREYTOHIDEEFFECT_GET_CURRENTCOLORTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEGREYTOHIDEEFFECT_GET_ISSHOW_OFFSET))(this);
		}

		::System::Boolean get_IsHighlight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEGREYTOHIDEEFFECT_GET_ISHIGHLIGHT_OFFSET))(this);
		}

		::System::Boolean get_IsNotTeamTrait()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEGREYTOHIDEEFFECT_GET_ISNOTTEAMTRAIT_OFFSET))(this);
		}

		::RPG::Client::GridFightTraitRemarkLineColorType _GetColorType()
		{
			return ((::RPG::Client::GridFightTraitRemarkLineColorType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITREMARKLINEGREYTOHIDEEFFECT__GETCOLORTYPE_OFFSET))(this);
		}
	};
}
