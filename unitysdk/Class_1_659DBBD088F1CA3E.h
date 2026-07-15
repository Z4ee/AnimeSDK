#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatV2DialogPerformanceTiming.h"
#include "unitysdk/System/Object.h"

class Class_1_CFC41C1E202F76CF;
class Class_2_3616FDE8A71D0590;
class Class_2_AEE59ED8DADEC1A1;
class Class_4_38B51614211CBC7D;
namespace RPG::GameCore { class DiceCombatV2SingleDialogPerformance; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_659DBBD088F1CA3E_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x198D0870)
#define CLASS_1_659DBBD088F1CA3E_METHOD_1_19FB5FBEA9EA66CD_OFFSET UNITYSDK_OFFSET(0x198D1890)
#define CLASS_1_659DBBD088F1CA3E_METHOD_1_630A3B9C63A23882_OFFSET UNITYSDK_OFFSET(0x198D12E0)
#define CLASS_1_659DBBD088F1CA3E_METHOD_1_6945E637F28B4CFA_OFFSET UNITYSDK_OFFSET(0x198D0F40)
#define CLASS_1_659DBBD088F1CA3E_METHOD_1_749948B663FCCCEF_OFFSET UNITYSDK_OFFSET(0x198D1EB0)
#define CLASS_1_659DBBD088F1CA3E_METHOD_1_7F6914407A5F299A_OFFSET UNITYSDK_OFFSET(0x198D0D30)
#define CLASS_1_659DBBD088F1CA3E_METHOD_1_80715D2233255ACA_OFFSET UNITYSDK_OFFSET(0x198D2630)
#define CLASS_1_659DBBD088F1CA3E_METHOD_1_8E95C4E52115245A_OFFSET UNITYSDK_OFFSET(0x198D33D0)
#define CLASS_1_659DBBD088F1CA3E_METHOD_1_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x198D2C20)
#define CLASS_1_659DBBD088F1CA3E_METHOD_1_CA0DB4EAA072A93C_OFFSET UNITYSDK_OFFSET(0x198D2E30)
#define CLASS_1_659DBBD088F1CA3E_METHOD_1_E04F75D713BE2B3D_OFFSET UNITYSDK_OFFSET(0x198D2DD0)
#define CLASS_1_659DBBD088F1CA3E__CCTOR_OFFSET UNITYSDK_OFFSET(0x198D34F0)
#define CLASS_1_659DBBD088F1CA3E__CTOR_OFFSET UNITYSDK_OFFSET(0x198D06D0)

inline static constexpr unsigned int Class_1_659DBBD088F1CA3E_TypeDefinitionIndex = 34926;

class Class_1_659DBBD088F1CA3E : public ::System::Object
{
public:
	static ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::DiceCombatV2SingleDialogPerformance*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::DiceCombatV2SingleDialogPerformance*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_659DBBD088F1CA3E_TypeDefinitionIndex)->GetStaticField(0x4DB40);
	}
	::Class_4_38B51614211CBC7D* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::DiceCombatV2DialogPerformanceTiming, ::System::Collections::Generic::List_1<::RPG::GameCore::DiceCombatV2SingleDialogPerformance*>*>* Field_1_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::RPG::GameCore::DiceCombatV2SingleDialogPerformance*>*>* Field_1_3; // 0x20
	::Class_2_3616FDE8A71D0590* Field_1_4; // 0x28
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::DiceCombatV2SingleDialogPerformance*, ::System::Int32>* Field_1_5; // 0x30

	::System::Void _ctor(::Class_4_38B51614211CBC7D* a1, ::Class_2_3616FDE8A71D0590* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_38B51614211CBC7D*, ::Class_2_3616FDE8A71D0590*))((::PBYTE)hIl2Cpp + CLASS_1_659DBBD088F1CA3E__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_659DBBD088F1CA3E__CCTOR_OFFSET))();
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_659DBBD088F1CA3E_INITIALIZE_OFFSET))(this);
	}

	::System::Void Method_1_7F6914407A5F299A(::RPG::GameCore::DiceCombatV2SingleDialogPerformance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatV2SingleDialogPerformance*))((::PBYTE)hIl2Cpp + CLASS_1_659DBBD088F1CA3E_METHOD_1_7F6914407A5F299A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_6945E637F28B4CFA(::RPG::GameCore::DiceCombatV2SingleDialogPerformance* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::DiceCombatV2SingleDialogPerformance*))((::PBYTE)hIl2Cpp + CLASS_1_659DBBD088F1CA3E_METHOD_1_6945E637F28B4CFA_OFFSET))(this, a1);
	}

	::System::Void Method_1_630A3B9C63A23882()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_659DBBD088F1CA3E_METHOD_1_630A3B9C63A23882_OFFSET))(this);
	}

	::System::Void Method_1_19FB5FBEA9EA66CD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_659DBBD088F1CA3E_METHOD_1_19FB5FBEA9EA66CD_OFFSET))(this);
	}

	::System::Void Method_1_749948B663FCCCEF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_659DBBD088F1CA3E_METHOD_1_749948B663FCCCEF_OFFSET))(this);
	}

	::System::Void Method_1_80715D2233255ACA(::Class_2_AEE59ED8DADEC1A1* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_659DBBD088F1CA3E_METHOD_1_80715D2233255ACA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_659DBBD088F1CA3E_METHOD_1_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Boolean Method_1_E04F75D713BE2B3D(::RPG::GameCore::DiceCombatV2SingleDialogPerformance* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::DiceCombatV2SingleDialogPerformance*))((::PBYTE)hIl2Cpp + CLASS_1_659DBBD088F1CA3E_METHOD_1_E04F75D713BE2B3D_OFFSET))(this, a1);
	}

	::RPG::GameCore::DiceCombatV2SingleDialogPerformance* Method_1_CA0DB4EAA072A93C(::RPG::GameCore::DiceCombatV2DialogPerformanceTiming a1)
	{
		return ((::RPG::GameCore::DiceCombatV2SingleDialogPerformance*(*)(::PVOID, ::RPG::GameCore::DiceCombatV2DialogPerformanceTiming))((::PBYTE)hIl2Cpp + CLASS_1_659DBBD088F1CA3E_METHOD_1_CA0DB4EAA072A93C_OFFSET))(this, a1);
	}

	::Class_1_CFC41C1E202F76CF* Method_1_8E95C4E52115245A(::RPG::GameCore::DiceCombatV2SingleDialogPerformance* a1)
	{
		return ((::Class_1_CFC41C1E202F76CF*(*)(::PVOID, ::RPG::GameCore::DiceCombatV2SingleDialogPerformance*))((::PBYTE)hIl2Cpp + CLASS_1_659DBBD088F1CA3E_METHOD_1_8E95C4E52115245A_OFFSET))(this, a1);
	}
};
