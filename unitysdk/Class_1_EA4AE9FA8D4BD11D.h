#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftChipTraitType.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_EA4AE9FA8D4BD11D_METHOD_1_1362D8E8C02BD4D9_OFFSET UNITYSDK_OFFSET(0x1C511E40)
#define CLASS_1_EA4AE9FA8D4BD11D_METHOD_1_2B347AD3DA458012_OFFSET UNITYSDK_OFFSET(0x1C511DC0)
#define CLASS_1_EA4AE9FA8D4BD11D_METHOD_1_EBCA8E5D8C47FF73_OFFSET UNITYSDK_OFFSET(0x1C511C10)
#define CLASS_1_EA4AE9FA8D4BD11D_METHOD_1_FE3501B06F7F94B5_OFFSET UNITYSDK_OFFSET(0x1C511E00)
#define CLASS_1_EA4AE9FA8D4BD11D__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5120D0)

inline static constexpr unsigned int Class_1_EA4AE9FA8D4BD11D_TypeDefinitionIndex = 41648;

class Class_1_EA4AE9FA8D4BD11D : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA4AE9FA8D4BD11D__CTOR_OFFSET))(this);
	}

	static ::System::Int32 Method_1_EBCA8E5D8C47FF73()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_EA4AE9FA8D4BD11D_METHOD_1_EBCA8E5D8C47FF73_OFFSET))();
	}

	static ::RPG::Client::MechCraft::MechCraftChipTraitType Method_1_2B347AD3DA458012()
	{
		return ((::RPG::Client::MechCraft::MechCraftChipTraitType(*)())((::PBYTE)hIl2Cpp + CLASS_1_EA4AE9FA8D4BD11D_METHOD_1_2B347AD3DA458012_OFFSET))();
	}

	static ::RPG::Client::MechCraft::MechCraftChipTraitType Method_1_FE3501B06F7F94B5()
	{
		return ((::RPG::Client::MechCraft::MechCraftChipTraitType(*)())((::PBYTE)hIl2Cpp + CLASS_1_EA4AE9FA8D4BD11D_METHOD_1_FE3501B06F7F94B5_OFFSET))();
	}

	static ::System::Collections::Generic::IEnumerable_1<::RPG::Client::MechCraft::MechCraftChipTraitType>* Method_1_1362D8E8C02BD4D9(::System::Boolean a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::MechCraft::MechCraftChipTraitType>*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EA4AE9FA8D4BD11D_METHOD_1_1362D8E8C02BD4D9_OFFSET))(a1);
	}
};
