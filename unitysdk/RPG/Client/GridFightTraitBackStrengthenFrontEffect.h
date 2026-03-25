#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightTraitEffectBase.h"

namespace RPG::Client { class GridFightTrait; }
namespace RPG::GameCore { class GridFightTraitEffectIdConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTTRAITBACKSTRENGTHENFRONTEFFECT_GETSHOWICON_OFFSET UNITYSDK_OFFSET(0x98CAC00)
#define RPG_CLIENT_GRIDFIGHTTRAITBACKSTRENGTHENFRONTEFFECT_GETSHOWMEMBERUIDS_OFFSET UNITYSDK_OFFSET(0x98CAC50)
#define RPG_CLIENT_GRIDFIGHTTRAITBACKSTRENGTHENFRONTEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x98CAAD0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitBackStrengthenFrontEffect_TypeDefinitionIndex = 53083;

	class GridFightTraitBackStrengthenFrontEffect : public ::RPG::Client::GridFightTraitEffectBase
	{
	public:
		// static const ::System::Int32 _RequiredLayer = 0x2; // 0x0
		::System::Collections::Generic::List_1<::System::UInt32>* _CoreMemberUIDs; // 0x30
		::RPG::GameCore::GridFightTraitEffectIdConfigRow* _EffectRow; // 0x38

		::System::Void _ctor(::System::UInt32 id, ::RPG::Client::GridFightTrait* trait)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITBACKSTRENGTHENFRONTEFFECT__CTOR_OFFSET))(this, id, trait);
		}

		::System::String* GetShowIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITBACKSTRENGTHENFRONTEFFECT_GETSHOWICON_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetShowMemberUIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITBACKSTRENGTHENFRONTEFFECT_GETSHOWMEMBERUIDS_OFFSET))(this);
		}
	};
}
