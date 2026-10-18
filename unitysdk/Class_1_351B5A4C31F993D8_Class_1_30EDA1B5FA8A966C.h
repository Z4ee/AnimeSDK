#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_121;
namespace System::Collections::Immutable { template <typename T> class IImmutableSet_1; }

#define CLASS_1_351B5A4C31F993D8_CLASS_1_30EDA1B5FA8A966C_GET_REACHEDTARGETS_OFFSET UNITYSDK_OFFSET(0xE2310D0)
#define CLASS_1_351B5A4C31F993D8_CLASS_1_30EDA1B5FA8A966C_GET_VALUES_OFFSET UNITYSDK_OFFSET(0xE2310B0)
#define CLASS_1_351B5A4C31F993D8_CLASS_1_30EDA1B5FA8A966C_SET_REACHEDTARGETS_OFFSET UNITYSDK_OFFSET(0xE2310E0)
#define CLASS_1_351B5A4C31F993D8_CLASS_1_30EDA1B5FA8A966C_SET_VALUES_OFFSET UNITYSDK_OFFSET(0xE2310C0)
#define CLASS_1_351B5A4C31F993D8_CLASS_1_30EDA1B5FA8A966C__CTOR_OFFSET UNITYSDK_OFFSET(0xE2310F0)

inline static constexpr unsigned int Class_1_351B5A4C31F993D8_Class_1_30EDA1B5FA8A966C_TypeDefinitionIndex = 79799;

class Class_1_351B5A4C31F993D8_Class_1_30EDA1B5FA8A966C : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_121* _Values_k__BackingField; // 0x10
	::System::Collections::Immutable::IImmutableSet_1<::RPG::Client::MechCraft::MechCraftAttributeType>* _ReachedTargets_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_351B5A4C31F993D8_CLASS_1_30EDA1B5FA8A966C__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_121* get_Values()
	{
		return ((::Class_0_16E4307DCC419505_121*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_351B5A4C31F993D8_CLASS_1_30EDA1B5FA8A966C_GET_VALUES_OFFSET))(this);
	}

	::System::Void set_Values(::Class_0_16E4307DCC419505_121* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_121*))((::PBYTE)hIl2Cpp + CLASS_1_351B5A4C31F993D8_CLASS_1_30EDA1B5FA8A966C_SET_VALUES_OFFSET))(this, a1);
	}

	::System::Collections::Immutable::IImmutableSet_1<::RPG::Client::MechCraft::MechCraftAttributeType>* get_ReachedTargets()
	{
		return ((::System::Collections::Immutable::IImmutableSet_1<::RPG::Client::MechCraft::MechCraftAttributeType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_351B5A4C31F993D8_CLASS_1_30EDA1B5FA8A966C_GET_REACHEDTARGETS_OFFSET))(this);
	}

	::System::Void set_ReachedTargets(::System::Collections::Immutable::IImmutableSet_1<::RPG::Client::MechCraft::MechCraftAttributeType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Immutable::IImmutableSet_1<::RPG::Client::MechCraft::MechCraftAttributeType>*))((::PBYTE)hIl2Cpp + CLASS_1_351B5A4C31F993D8_CLASS_1_30EDA1B5FA8A966C_SET_REACHEDTARGETS_OFFSET))(this, a1);
	}
};
