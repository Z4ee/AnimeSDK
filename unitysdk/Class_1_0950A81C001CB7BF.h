#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinDeckRecommendTiming.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1266;
class Class_0_16E4307DCC419505_1302;
class Class_0_16E4307DCC419505_1303;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_0950A81C001CB7BF_METHOD_1_0173791A649BFB6B_OFFSET UNITYSDK_OFFSET(0x186D79D0)
#define CLASS_1_0950A81C001CB7BF_METHOD_1_84EA6F5567BCCCE4_OFFSET UNITYSDK_OFFSET(0x186D8080)
#define CLASS_1_0950A81C001CB7BF_METHOD_1_A271C995CF3CCA52_OFFSET UNITYSDK_OFFSET(0x186D7D80)
#define CLASS_1_0950A81C001CB7BF__CTOR_OFFSET UNITYSDK_OFFSET(0x186D78E0)

inline static constexpr unsigned int Class_1_0950A81C001CB7BF_TypeDefinitionIndex = 76154;

class Class_1_0950A81C001CB7BF : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1303* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_1266* Field_1_1; // 0x18
	::Class_0_16E4307DCC419505_1302* Field_1_2; // 0x20

	::System::Void _ctor(::Class_0_16E4307DCC419505_1303* a1, ::Class_0_16E4307DCC419505_1266* a2, ::Class_0_16E4307DCC419505_1302* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1303*, ::Class_0_16E4307DCC419505_1266*, ::Class_0_16E4307DCC419505_1302*))((::PBYTE)hIl2Cpp + CLASS_1_0950A81C001CB7BF__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_0173791A649BFB6B(::RPG::GameCore::FateRinHouguOwnerType a1, ::RPG::GameCore::FateRinDeckRecommendTiming a2, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*& a3, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*& a4, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*& a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinHouguOwnerType, ::RPG::GameCore::FateRinDeckRecommendTiming, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*&, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*&, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*&))((::PBYTE)hIl2Cpp + CLASS_1_0950A81C001CB7BF_METHOD_1_0173791A649BFB6B_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* Method_1_A271C995CF3CCA52()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0950A81C001CB7BF_METHOD_1_A271C995CF3CCA52_OFFSET))(this);
	}

	::System::Void Method_1_84EA6F5567BCCCE4(::RPG::GameCore::FateRinHouguOwnerType a1, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a2, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a3, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*& a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinHouguOwnerType, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*&))((::PBYTE)hIl2Cpp + CLASS_1_0950A81C001CB7BF_METHOD_1_84EA6F5567BCCCE4_OFFSET))(this, a1, a2, a3, a4);
	}
};
