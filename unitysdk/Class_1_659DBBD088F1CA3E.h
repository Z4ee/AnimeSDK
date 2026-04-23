#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatV2DialogPerformanceTiming.h"
#include "unitysdk/System/Object.h"

class Class_1_CFC41C1E202F76CF;
class Class_2_1BB8CA1042AACD99;
class Class_2_8C608625ABC8C4FA_1;
class Class_4_38B51614211CBC7D;
namespace RPG::GameCore { class DiceCombatV2SingleDialogPerformance; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_659DBBD088F1CA3E_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x17D3D9F0)
#define CLASS_1_659DBBD088F1CA3E_METHOD_1_0869E1192F8E01DF_OFFSET UNITYSDK_OFFSET(0x17D2D230)
#define CLASS_1_659DBBD088F1CA3E_METHOD_1_5739CCCE693D1FCB_OFFSET UNITYSDK_OFFSET(0x17D2C050)
#define CLASS_1_659DBBD088F1CA3E_METHOD_1_6DC60149A270E0D4_OFFSET UNITYSDK_OFFSET(0x17D2D6B0)
#define CLASS_1_659DBBD088F1CA3E_METHOD_1_8E95C4E52115245A_OFFSET UNITYSDK_OFFSET(0x17D2C740)
#define CLASS_1_659DBBD088F1CA3E_METHOD_1_94948473A8B59D8F_OFFSET UNITYSDK_OFFSET(0x17D3DED0)
#define CLASS_1_659DBBD088F1CA3E_METHOD_1_9C859EE9A3FE3455_OFFSET UNITYSDK_OFFSET(0x17D3E0A0)
#define CLASS_1_659DBBD088F1CA3E_METHOD_1_9E08934F1BEC34D8_OFFSET UNITYSDK_OFFSET(0x17D3E2C0)
#define CLASS_1_659DBBD088F1CA3E_METHOD_1_B9A97467188E4B69_OFFSET UNITYSDK_OFFSET(0x17D2BAC0)
#define CLASS_1_659DBBD088F1CA3E_METHOD_1_D8DE7315E856FDAC_OFFSET UNITYSDK_OFFSET(0x17D2C1D0)
#define CLASS_1_659DBBD088F1CA3E_METHOD_1_E04F75D713BE2B3D_OFFSET UNITYSDK_OFFSET(0x17D3E710)
#define CLASS_1_659DBBD088F1CA3E__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D3E770)
#define CLASS_1_659DBBD088F1CA3E__CTOR_OFFSET UNITYSDK_OFFSET(0x17D3D850)

inline static constexpr unsigned int Class_1_659DBBD088F1CA3E_TypeDefinitionIndex = 34262;

class Class_1_659DBBD088F1CA3E : public ::System::Object
{
public:
	static ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::DiceCombatV2SingleDialogPerformance*>** StaticGet_Field_1_3()
	{
		return (::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::DiceCombatV2SingleDialogPerformance*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_659DBBD088F1CA3E_TypeDefinitionIndex)->GetStaticField(0x5F790);
	}
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::DiceCombatV2SingleDialogPerformance*, ::System::Int32>* Field_1_5; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::List_1<::RPG::GameCore::DiceCombatV2SingleDialogPerformance*>*>* Field_1_2; // 0x18
	::Class_2_8C608625ABC8C4FA_1* Field_1_1; // 0x20
	::Class_4_38B51614211CBC7D* Field_1_0; // 0x28
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::DiceCombatV2DialogPerformanceTiming, ::System::Collections::Generic::List_1<::RPG::GameCore::DiceCombatV2SingleDialogPerformance*>*>* Field_1_4; // 0x30

	::System::Void _ctor(::Class_4_38B51614211CBC7D* a1, ::Class_2_8C608625ABC8C4FA_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_38B51614211CBC7D*, ::Class_2_8C608625ABC8C4FA_1*))((::PBYTE)hIl2Cpp + CLASS_1_659DBBD088F1CA3E__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_659DBBD088F1CA3E__CCTOR_OFFSET))();
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_659DBBD088F1CA3E_INITIALIZE_OFFSET))(this);
	}

	::System::Void Method_1_94948473A8B59D8F(::RPG::GameCore::DiceCombatV2SingleDialogPerformance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatV2SingleDialogPerformance*))((::PBYTE)hIl2Cpp + CLASS_1_659DBBD088F1CA3E_METHOD_1_94948473A8B59D8F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_9C859EE9A3FE3455(::RPG::GameCore::DiceCombatV2SingleDialogPerformance* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::DiceCombatV2SingleDialogPerformance*))((::PBYTE)hIl2Cpp + CLASS_1_659DBBD088F1CA3E_METHOD_1_9C859EE9A3FE3455_OFFSET))(this, a1);
	}

	::System::Void Method_1_6DC60149A270E0D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_659DBBD088F1CA3E_METHOD_1_6DC60149A270E0D4_OFFSET))(this);
	}

	::System::Void Method_1_0869E1192F8E01DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_659DBBD088F1CA3E_METHOD_1_0869E1192F8E01DF_OFFSET))(this);
	}

	::System::Void Method_1_B9A97467188E4B69()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_659DBBD088F1CA3E_METHOD_1_B9A97467188E4B69_OFFSET))(this);
	}

	::System::Void Method_1_9E08934F1BEC34D8(::Class_2_1BB8CA1042AACD99* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_659DBBD088F1CA3E_METHOD_1_9E08934F1BEC34D8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5739CCCE693D1FCB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_659DBBD088F1CA3E_METHOD_1_5739CCCE693D1FCB_OFFSET))(this);
	}

	::System::Boolean Method_1_E04F75D713BE2B3D(::RPG::GameCore::DiceCombatV2SingleDialogPerformance* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::DiceCombatV2SingleDialogPerformance*))((::PBYTE)hIl2Cpp + CLASS_1_659DBBD088F1CA3E_METHOD_1_E04F75D713BE2B3D_OFFSET))(this, a1);
	}

	::RPG::GameCore::DiceCombatV2SingleDialogPerformance* Method_1_D8DE7315E856FDAC(::RPG::GameCore::DiceCombatV2DialogPerformanceTiming a1)
	{
		return ((::RPG::GameCore::DiceCombatV2SingleDialogPerformance*(*)(::PVOID, ::RPG::GameCore::DiceCombatV2DialogPerformanceTiming))((::PBYTE)hIl2Cpp + CLASS_1_659DBBD088F1CA3E_METHOD_1_D8DE7315E856FDAC_OFFSET))(this, a1);
	}

	::Class_1_CFC41C1E202F76CF* Method_1_8E95C4E52115245A(::RPG::GameCore::DiceCombatV2SingleDialogPerformance* a1)
	{
		return ((::Class_1_CFC41C1E202F76CF*(*)(::PVOID, ::RPG::GameCore::DiceCombatV2SingleDialogPerformance*))((::PBYTE)hIl2Cpp + CLASS_1_659DBBD088F1CA3E_METHOD_1_8E95C4E52115245A_OFFSET))(this, a1);
	}
};
