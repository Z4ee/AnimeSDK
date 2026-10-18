#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftChipTraitType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_129;
class Class_0_16E4307DCC419505_162;
namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_9D997F29A74633CD_GET_TRAITMINCHIPCOUNT_OFFSET UNITYSDK_OFFSET(0x1C53EC30)
#define CLASS_1_9D997F29A74633CD_METHOD_1_4AD3C09253936EF0_OFFSET UNITYSDK_OFFSET(0x1C53EC60)
#define CLASS_1_9D997F29A74633CD_METHOD_1_57D40779BC734F04_OFFSET UNITYSDK_OFFSET(0x1C53E540)
#define CLASS_1_9D997F29A74633CD_SET_TRAITMINCHIPCOUNT_OFFSET UNITYSDK_OFFSET(0x1C53EC40)
#define CLASS_1_9D997F29A74633CD__CTOR_OFFSET UNITYSDK_OFFSET(0x1C53EC50)

inline static constexpr unsigned int Class_1_9D997F29A74633CD_TypeDefinitionIndex = 41739;

class Class_1_9D997F29A74633CD : public ::System::Object
{
public:
	::System::Collections::Generic::IComparer_1<::RPG::Client::MechCraft::MechCraftChipTraitType>* NPBLFACBADF; // 0x10
	::System::Int32 _TraitMinChipCount_k__BackingField; // 0x18

	::System::Void _ctor(::System::Collections::Generic::IComparer_1<::RPG::Client::MechCraft::MechCraftChipTraitType>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IComparer_1<::RPG::Client::MechCraft::MechCraftChipTraitType>*))((::PBYTE)hIl2Cpp + CLASS_1_9D997F29A74633CD__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 get_TraitMinChipCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9D997F29A74633CD_GET_TRAITMINCHIPCOUNT_OFFSET))(this);
	}

	::System::Void set_TraitMinChipCount(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9D997F29A74633CD_SET_TRAITMINCHIPCOUNT_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::RPG::Client::MechCraft::MechCraftChipTraitType>* Method_1_4AD3C09253936EF0(::Class_0_16E4307DCC419505_162* a1, ::Class_0_16E4307DCC419505_129* a2)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::MechCraft::MechCraftChipTraitType>*(*)(::PVOID, ::Class_0_16E4307DCC419505_162*, ::Class_0_16E4307DCC419505_129*))((::PBYTE)hIl2Cpp + CLASS_1_9D997F29A74633CD_METHOD_1_4AD3C09253936EF0_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_57D40779BC734F04(::Class_0_16E4307DCC419505_162* a1, ::Class_0_16E4307DCC419505_129* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_162*, ::Class_0_16E4307DCC419505_129*))((::PBYTE)hIl2Cpp + CLASS_1_9D997F29A74633CD_METHOD_1_57D40779BC734F04_OFFSET))(this, a1, a2);
	}
};
