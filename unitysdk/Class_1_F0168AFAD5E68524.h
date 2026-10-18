#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_121;
namespace System::Collections::Generic { template <typename T> class IReadOnlyCollection_1; }

#define CLASS_1_F0168AFAD5E68524_GET_DELTA_OFFSET UNITYSDK_OFFSET(0x15E28AE0)
#define CLASS_1_F0168AFAD5E68524_GET_TARGETS_OFFSET UNITYSDK_OFFSET(0x15E28AD0)
#define CLASS_1_F0168AFAD5E68524__CTOR_OFFSET UNITYSDK_OFFSET(0x15E28AF0)

inline static constexpr unsigned int Class_1_F0168AFAD5E68524_TypeDefinitionIndex = 79801;

class Class_1_F0168AFAD5E68524 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_121* _Delta_k__BackingField; // 0x10
	::System::Collections::Generic::IReadOnlyCollection_1<::RPG::Client::MechCraft::MechCraftAttributeType>* _Targets_k__BackingField; // 0x18

	::System::Void _ctor(::System::Collections::Generic::IReadOnlyCollection_1<::RPG::Client::MechCraft::MechCraftAttributeType>* a1, ::Class_0_16E4307DCC419505_121* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyCollection_1<::RPG::Client::MechCraft::MechCraftAttributeType>*, ::Class_0_16E4307DCC419505_121*))((::PBYTE)hIl2Cpp + CLASS_1_F0168AFAD5E68524__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IReadOnlyCollection_1<::RPG::Client::MechCraft::MechCraftAttributeType>* get_Targets()
	{
		return ((::System::Collections::Generic::IReadOnlyCollection_1<::RPG::Client::MechCraft::MechCraftAttributeType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0168AFAD5E68524_GET_TARGETS_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_121* get_Delta()
	{
		return ((::Class_0_16E4307DCC419505_121*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0168AFAD5E68524_GET_DELTA_OFFSET))(this);
	}
};
