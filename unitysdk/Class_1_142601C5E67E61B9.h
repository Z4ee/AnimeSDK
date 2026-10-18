#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftChipTraitType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_D05699509194BF9B;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyCollection_1; }

#define CLASS_1_142601C5E67E61B9_ADD_ONFILTERCHANGED_OFFSET UNITYSDK_OFFSET(0xBA5A410)
#define CLASS_1_142601C5E67E61B9_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xBA5A550)
#define CLASS_1_142601C5E67E61B9_METHOD_1_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0xBA5A920)
#define CLASS_1_142601C5E67E61B9_METHOD_1_81585AEE54B82432_OFFSET UNITYSDK_OFFSET(0xBA5AA40)
#define CLASS_1_142601C5E67E61B9_METHOD_1_94B8498515375D59_OFFSET UNITYSDK_OFFSET(0xBA5A3D0)
#define CLASS_1_142601C5E67E61B9_METHOD_1_D09831639F615812_OFFSET UNITYSDK_OFFSET(0xBA5A4D0)
#define CLASS_1_142601C5E67E61B9_METHOD_1_DBBEC78154EDADF7_OFFSET UNITYSDK_OFFSET(0xBA5A390)
#define CLASS_1_142601C5E67E61B9_METHOD_1_E4010FE779BA59B8_OFFSET UNITYSDK_OFFSET(0xBA5A5C0)
#define CLASS_1_142601C5E67E61B9_REMOVE_ONFILTERCHANGED_OFFSET UNITYSDK_OFFSET(0xBA5A470)
#define CLASS_1_142601C5E67E61B9__CTOR_OFFSET UNITYSDK_OFFSET(0xBA5AD30)

inline static constexpr unsigned int Class_1_142601C5E67E61B9_TypeDefinitionIndex = 79527;

class Class_1_142601C5E67E61B9 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::RPG::Client::MechCraft::MechCraftAttributeType>* KMPGGJLPBHL; // 0x10
	::System::Action* OnFilterChanged; // 0x18
	::System::Collections::Generic::HashSet_1<::RPG::Client::MechCraft::MechCraftChipTraitType>* NDEAFLKFPIG; // 0x20
	::System::Nullable_1<::System::Int32> GJEJCNFGBEH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_142601C5E67E61B9__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyCollection_1<::RPG::Client::MechCraft::MechCraftAttributeType>* Method_1_DBBEC78154EDADF7()
	{
		return ((::System::Collections::Generic::IReadOnlyCollection_1<::RPG::Client::MechCraft::MechCraftAttributeType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_142601C5E67E61B9_METHOD_1_DBBEC78154EDADF7_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyCollection_1<::RPG::Client::MechCraft::MechCraftChipTraitType>* Method_1_94B8498515375D59()
	{
		return ((::System::Collections::Generic::IReadOnlyCollection_1<::RPG::Client::MechCraft::MechCraftChipTraitType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_142601C5E67E61B9_METHOD_1_94B8498515375D59_OFFSET))(this);
	}

	::System::Void add_OnFilterChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_142601C5E67E61B9_ADD_ONFILTERCHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_OnFilterChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_142601C5E67E61B9_REMOVE_ONFILTERCHANGED_OFFSET))(this, a1);
	}

	::System::Void Method_1_D09831639F615812(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_142601C5E67E61B9_METHOD_1_D09831639F615812_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_142601C5E67E61B9_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_E4010FE779BA59B8(::System::Collections::Generic::IEnumerable_1<::RPG::Client::MechCraft::MechCraftAttributeType>* a1, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::MechCraft::MechCraftChipTraitType>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::MechCraft::MechCraftAttributeType>*, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::MechCraft::MechCraftChipTraitType>*))((::PBYTE)hIl2Cpp + CLASS_1_142601C5E67E61B9_METHOD_1_E4010FE779BA59B8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_142601C5E67E61B9_METHOD_1_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Boolean Method_1_81585AEE54B82432(::Class_1_D05699509194BF9B* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_D05699509194BF9B*))((::PBYTE)hIl2Cpp + CLASS_1_142601C5E67E61B9_METHOD_1_81585AEE54B82432_OFFSET))(this, a1);
	}
};
