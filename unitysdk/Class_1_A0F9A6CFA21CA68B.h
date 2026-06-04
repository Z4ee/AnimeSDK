#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightBonusResultData; }

#define CLASS_1_A0F9A6CFA21CA68B_GET_BONUS_OFFSET UNITYSDK_OFFSET(0x112BF230)
#define CLASS_1_A0F9A6CFA21CA68B_GET_TRAITEFFECTID_OFFSET UNITYSDK_OFFSET(0x112BF210)
#define CLASS_1_A0F9A6CFA21CA68B_GET_TRAITID_OFFSET UNITYSDK_OFFSET(0x112BF1F0)
#define CLASS_1_A0F9A6CFA21CA68B_SET_BONUS_OFFSET UNITYSDK_OFFSET(0x112BF240)
#define CLASS_1_A0F9A6CFA21CA68B_SET_TRAITEFFECTID_OFFSET UNITYSDK_OFFSET(0x112BF220)
#define CLASS_1_A0F9A6CFA21CA68B_SET_TRAITID_OFFSET UNITYSDK_OFFSET(0x112BF200)
#define CLASS_1_A0F9A6CFA21CA68B__CTOR_OFFSET UNITYSDK_OFFSET(0x112BF250)

inline static constexpr unsigned int Class_1_A0F9A6CFA21CA68B_TypeDefinitionIndex = 60238;

class Class_1_A0F9A6CFA21CA68B : public ::System::Object
{
public:
	::RPG::Client::GridFightBonusResultData* _Bonus_k__BackingField; // 0x10
	::System::UInt32 _TraitEffectID_k__BackingField; // 0x18
	::System::UInt32 _TraitID_k__BackingField; // 0x1C

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A0F9A6CFA21CA68B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::UInt32 get_TraitID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0F9A6CFA21CA68B_GET_TRAITID_OFFSET))(this);
	}

	::System::Void set_TraitID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A0F9A6CFA21CA68B_SET_TRAITID_OFFSET))(this, a1);
	}

	::System::UInt32 get_TraitEffectID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0F9A6CFA21CA68B_GET_TRAITEFFECTID_OFFSET))(this);
	}

	::System::Void set_TraitEffectID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A0F9A6CFA21CA68B_SET_TRAITEFFECTID_OFFSET))(this, a1);
	}

	::RPG::Client::GridFightBonusResultData* get_Bonus()
	{
		return ((::RPG::Client::GridFightBonusResultData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0F9A6CFA21CA68B_GET_BONUS_OFFSET))(this);
	}

	::System::Void set_Bonus(::RPG::Client::GridFightBonusResultData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightBonusResultData*))((::PBYTE)hIl2Cpp + CLASS_1_A0F9A6CFA21CA68B_SET_BONUS_OFFSET))(this, a1);
	}
};
