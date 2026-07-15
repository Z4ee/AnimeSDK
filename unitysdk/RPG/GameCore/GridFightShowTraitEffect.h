#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightTraitEffectChangeHintType.h"
#include "unitysdk/RPG/GameCore/GridFightTraitEffectChargeType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTSHOWTRAITEFFECT_METHOD_3_3345C242E6A216E4_OFFSET UNITYSDK_OFFSET(0x1D078140)
#define RPG_GAMECORE_GRIDFIGHTSHOWTRAITEFFECT_METHOD_3_E011B3F95F402BD0_OFFSET UNITYSDK_OFFSET(0x1D078100)
#define RPG_GAMECORE_GRIDFIGHTSHOWTRAITEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D078130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightShowTraitEffect_TypeDefinitionIndex = 22404;

	class GridFightShowTraitEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* TraitSearchKey; // 0x18
		::RPG::GameCore::DynamicFloat* CurValue; // 0x20
		::RPG::GameCore::DynamicFloat* MaxValue; // 0x28
		::RPG::GameCore::GridFightTraitEffectChargeType ChargeType; // 0x30
		::RPG::Client::TextID ChangeHint; // 0x38
		::RPG::GameCore::GridFightTraitEffectChangeHintType ChangeHintType; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOWTRAITEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E011B3F95F402BD0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightShowTraitEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightShowTraitEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOWTRAITEFFECT_METHOD_3_E011B3F95F402BD0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3345C242E6A216E4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightShowTraitEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightShowTraitEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOWTRAITEFFECT_METHOD_3_3345C242E6A216E4_OFFSET))(a1, a2);
		}
	};
}
