#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EBD9A77671154634_Enum_3_C00BB49BA04978F1.h"
#include "unitysdk/RPG/Client/GridFightModifierEffectType.h"
#include "unitysdk/System/Object.h"

class Class_1_EBD9A77671154634;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_GRIDFIGHTGAMEMODIFIER_CREATEMODIFIER_OFFSET UNITYSDK_OFFSET(0xA4BA140)
#define RPG_CLIENT_GRIDFIGHTGAMEMODIFIER_GET_EFFECTTYPE_OFFSET UNITYSDK_OFFSET(0xA4BA670)
#define RPG_CLIENT_GRIDFIGHTGAMEMODIFIER_GET_UID_OFFSET UNITYSDK_OFFSET(0xA4BA620)
#define RPG_CLIENT_GRIDFIGHTGAMEMODIFIER_SET_EFFECTTYPE_OFFSET UNITYSDK_OFFSET(0xA4BA680)
#define RPG_CLIENT_GRIDFIGHTGAMEMODIFIER_UPDATE_OFFSET UNITYSDK_OFFSET(0xA4BAA70)
#define RPG_CLIENT_GRIDFIGHTGAMEMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0xA4BA690)
#define RPG_CLIENT_GRIDFIGHTGAMEMODIFIER__GETEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0xA4BA980)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameModifier_TypeDefinitionIndex = 59844;

	class GridFightGameModifier : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::Class_1_EBD9A77671154634_Enum_3_C00BB49BA04978F1, ::RPG::Client::GridFightModifierEffectType>* _EffectTypeMap; // 0x10
		::Class_1_EBD9A77671154634* _Info; // 0x18
		::RPG::Client::GridFightModifierEffectType _EffectType_k__BackingField; // 0x20

		::System::Void _ctor(::Class_1_EBD9A77671154634* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EBD9A77671154634*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEMODIFIER__CTOR_OFFSET))(this, info);
		}

		static ::RPG::Client::GridFightGameModifier* CreateModifier(::Class_1_EBD9A77671154634* info)
		{
			return ((::RPG::Client::GridFightGameModifier*(*)(::Class_1_EBD9A77671154634*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEMODIFIER_CREATEMODIFIER_OFFSET))(info);
		}

		::System::UInt32 get_UID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEMODIFIER_GET_UID_OFFSET))(this);
		}

		::RPG::Client::GridFightModifierEffectType get_EffectType()
		{
			return ((::RPG::Client::GridFightModifierEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEMODIFIER_GET_EFFECTTYPE_OFFSET))(this);
		}

		::System::Void set_EffectType(::RPG::Client::GridFightModifierEffectType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightModifierEffectType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEMODIFIER_SET_EFFECTTYPE_OFFSET))(this, value);
		}

		::System::Void Update(::Class_1_EBD9A77671154634* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_EBD9A77671154634*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEMODIFIER_UPDATE_OFFSET))(this, info);
		}

		::RPG::Client::GridFightModifierEffectType _GetEffectType(::Class_1_EBD9A77671154634_Enum_3_C00BB49BA04978F1 infoCase)
		{
			return ((::RPG::Client::GridFightModifierEffectType(*)(::PVOID, ::Class_1_EBD9A77671154634_Enum_3_C00BB49BA04978F1))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEMODIFIER__GETEFFECTTYPE_OFFSET))(this, infoCase);
		}
	};
}
