#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B8E6D5AD8534D123_Enum_3_C00BB49BA04978F1.h"
#include "unitysdk/RPG/Client/GridFightModifierEffectType.h"
#include "unitysdk/System/Object.h"

class Class_1_B8E6D5AD8534D123;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_GRIDFIGHTGAMEMODIFIER_CREATEMODIFIER_OFFSET UNITYSDK_OFFSET(0xBB5E190)
#define RPG_CLIENT_GRIDFIGHTGAMEMODIFIER_GET_EFFECTTYPE_OFFSET UNITYSDK_OFFSET(0xBB5E690)
#define RPG_CLIENT_GRIDFIGHTGAMEMODIFIER_GET_UID_OFFSET UNITYSDK_OFFSET(0xBB5E640)
#define RPG_CLIENT_GRIDFIGHTGAMEMODIFIER_SET_EFFECTTYPE_OFFSET UNITYSDK_OFFSET(0xBB5E6A0)
#define RPG_CLIENT_GRIDFIGHTGAMEMODIFIER_UPDATE_OFFSET UNITYSDK_OFFSET(0xBB5EA80)
#define RPG_CLIENT_GRIDFIGHTGAMEMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0xBB5E6B0)
#define RPG_CLIENT_GRIDFIGHTGAMEMODIFIER__GETEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0xBB5E9A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameModifier_TypeDefinitionIndex = 60779;

	class GridFightGameModifier : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::Class_1_B8E6D5AD8534D123_Enum_3_C00BB49BA04978F1, ::RPG::Client::GridFightModifierEffectType>* _EffectTypeMap; // 0x10
		::Class_1_B8E6D5AD8534D123* _Info; // 0x18
		::RPG::Client::GridFightModifierEffectType _EffectType_k__BackingField; // 0x20

		::System::Void _ctor(::Class_1_B8E6D5AD8534D123* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B8E6D5AD8534D123*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEMODIFIER__CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::GridFightGameModifier* CreateModifier(::Class_1_B8E6D5AD8534D123* a1)
		{
			return ((::RPG::Client::GridFightGameModifier*(*)(::Class_1_B8E6D5AD8534D123*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEMODIFIER_CREATEMODIFIER_OFFSET))(a1);
		}

		::System::UInt32 get_UID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEMODIFIER_GET_UID_OFFSET))(this);
		}

		::RPG::Client::GridFightModifierEffectType get_EffectType()
		{
			return ((::RPG::Client::GridFightModifierEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEMODIFIER_GET_EFFECTTYPE_OFFSET))(this);
		}

		::System::Void set_EffectType(::RPG::Client::GridFightModifierEffectType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightModifierEffectType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEMODIFIER_SET_EFFECTTYPE_OFFSET))(this, a1);
		}

		::System::Void Update(::Class_1_B8E6D5AD8534D123* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B8E6D5AD8534D123*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEMODIFIER_UPDATE_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightModifierEffectType _GetEffectType(::Class_1_B8E6D5AD8534D123_Enum_3_C00BB49BA04978F1 a1)
		{
			return ((::RPG::Client::GridFightModifierEffectType(*)(::PVOID, ::Class_1_B8E6D5AD8534D123_Enum_3_C00BB49BA04978F1))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEMODIFIER__GETEFFECTTYPE_OFFSET))(this, a1);
		}
	};
}
