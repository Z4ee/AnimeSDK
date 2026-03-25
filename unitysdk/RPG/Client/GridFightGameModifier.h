#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F0A446EC7AE7E87D_1_Enum_3_B7178B9B9B2219C2.h"
#include "unitysdk/RPG/Client/GridFightModifierEffectType.h"
#include "unitysdk/System/Object.h"

class Class_1_F0A446EC7AE7E87D_1;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_GRIDFIGHTGAMEMODIFIER_CREATEMODIFIER_OFFSET UNITYSDK_OFFSET(0x981EE10)
#define RPG_CLIENT_GRIDFIGHTGAMEMODIFIER_GET_EFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x981F160)
#define RPG_CLIENT_GRIDFIGHTGAMEMODIFIER_GET_UID_OFFSET UNITYSDK_OFFSET(0x981F110)
#define RPG_CLIENT_GRIDFIGHTGAMEMODIFIER_SET_EFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x981F170)
#define RPG_CLIENT_GRIDFIGHTGAMEMODIFIER_UPDATE_OFFSET UNITYSDK_OFFSET(0x981F560)
#define RPG_CLIENT_GRIDFIGHTGAMEMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x981F180)
#define RPG_CLIENT_GRIDFIGHTGAMEMODIFIER__GETEFFECTTYPE_OFFSET UNITYSDK_OFFSET(0x981F470)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameModifier_TypeDefinitionIndex = 52781;

	class GridFightGameModifier : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::Class_1_F0A446EC7AE7E87D_1_Enum_3_B7178B9B9B2219C2, ::RPG::Client::GridFightModifierEffectType>* _EffectTypeMap; // 0x10
		::Class_1_F0A446EC7AE7E87D_1* _Info; // 0x18
		::RPG::Client::GridFightModifierEffectType _EffectType_k__BackingField; // 0x20

		::System::Void _ctor(::Class_1_F0A446EC7AE7E87D_1* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F0A446EC7AE7E87D_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEMODIFIER__CTOR_OFFSET))(this, info);
		}

		static ::RPG::Client::GridFightGameModifier* CreateModifier(::Class_1_F0A446EC7AE7E87D_1* info)
		{
			return ((::RPG::Client::GridFightGameModifier*(*)(::Class_1_F0A446EC7AE7E87D_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEMODIFIER_CREATEMODIFIER_OFFSET))(info);
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

		::System::Void Update(::Class_1_F0A446EC7AE7E87D_1* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F0A446EC7AE7E87D_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEMODIFIER_UPDATE_OFFSET))(this, info);
		}

		::RPG::Client::GridFightModifierEffectType _GetEffectType(::Class_1_F0A446EC7AE7E87D_1_Enum_3_B7178B9B9B2219C2 infoCase)
		{
			return ((::RPG::Client::GridFightModifierEffectType(*)(::PVOID, ::Class_1_F0A446EC7AE7E87D_1_Enum_3_B7178B9B9B2219C2))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEMODIFIER__GETEFFECTTYPE_OFFSET))(this, infoCase);
		}
	};
}
