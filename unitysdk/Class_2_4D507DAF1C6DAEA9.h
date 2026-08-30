#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_90889A2023AB884E_4.h"
#include "unitysdk/RPG/GameCore/RogueFormulaCategory.h"

class Class_1_6CB2450063991035_18;
namespace RPG::Client { class RogueFormulaData; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_4D507DAF1C6DAEA9_METHOD_2_19FB5FBEA9EA66CD_OFFSET UNITYSDK_OFFSET(0x154E1E40)
#define CLASS_2_4D507DAF1C6DAEA9_METHOD_2_4CD9EB309D3CB768_OFFSET UNITYSDK_OFFSET(0x154E2440)
#define CLASS_2_4D507DAF1C6DAEA9_METHOD_2_542E8C10DA52DB1F_OFFSET UNITYSDK_OFFSET(0x154E2360)
#define CLASS_2_4D507DAF1C6DAEA9_METHOD_2_959C0C43ADD4886A_OFFSET UNITYSDK_OFFSET(0x154E2130)
#define CLASS_2_4D507DAF1C6DAEA9_METHOD_2_AC0DD1E1A2A784A0_OFFSET UNITYSDK_OFFSET(0x154E2200)
#define CLASS_2_4D507DAF1C6DAEA9_METHOD_2_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x154E1D40)
#define CLASS_2_4D507DAF1C6DAEA9__CCTOR_OFFSET UNITYSDK_OFFSET(0x154E2730)
#define CLASS_2_4D507DAF1C6DAEA9__CTOR_OFFSET UNITYSDK_OFFSET(0x154E1860)
#define CLASS_2_4D507DAF1C6DAEA9___NOTIFYFLOWDISPOSE_B__5_0_OFFSET UNITYSDK_OFFSET(0x154E2880)

inline static constexpr unsigned int Class_2_4D507DAF1C6DAEA9_TypeDefinitionIndex = 67635;

class Class_2_4D507DAF1C6DAEA9 : public ::Class_1_90889A2023AB884E_4
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RogueFormulaCategory, ::System::UInt32>** StaticGet_BDPMEPMMHAA()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RogueFormulaCategory, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4D507DAF1C6DAEA9_TypeDefinitionIndex)->GetStaticField(0x607E0);
	}
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueFormulaData*>* OIJFFAAEDNK; // 0x18
	::System::Collections::Generic::List_1<::Class_1_6CB2450063991035_18*>* BALPKNPJIMP; // 0x20

	::System::Void _ctor(::System::Collections::Generic::List_1<::Class_1_6CB2450063991035_18*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_6CB2450063991035_18*>*))((::PBYTE)hIl2Cpp + CLASS_2_4D507DAF1C6DAEA9__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_4D507DAF1C6DAEA9__CCTOR_OFFSET))();
	}

	::System::Void Method_2_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D507DAF1C6DAEA9_METHOD_2_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_2_19FB5FBEA9EA66CD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D507DAF1C6DAEA9_METHOD_2_19FB5FBEA9EA66CD_OFFSET))(this);
	}

	::System::Func_1<::RPG::Client::Promises::IPromise*>* Method_2_959C0C43ADD4886A(::RPG::Client::RogueFormulaData* a1)
	{
		return ((::System::Func_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::RPG::Client::RogueFormulaData*))((::PBYTE)hIl2Cpp + CLASS_2_4D507DAF1C6DAEA9_METHOD_2_959C0C43ADD4886A_OFFSET))(this, a1);
	}

	::System::Func_1<::RPG::Client::Promises::IPromise*>* Method_2_AC0DD1E1A2A784A0(::Class_1_6CB2450063991035_18* a1)
	{
		return ((::System::Func_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID, ::Class_1_6CB2450063991035_18*))((::PBYTE)hIl2Cpp + CLASS_2_4D507DAF1C6DAEA9_METHOD_2_AC0DD1E1A2A784A0_OFFSET))(this, a1);
	}

	::System::Func_1<::RPG::Client::Promises::IPromise*>* Method_2_542E8C10DA52DB1F()
	{
		return ((::System::Func_1<::RPG::Client::Promises::IPromise*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D507DAF1C6DAEA9_METHOD_2_542E8C10DA52DB1F_OFFSET))(this);
	}

	::System::Int32 Method_2_4CD9EB309D3CB768(::Class_1_6CB2450063991035_18* a1, ::Class_1_6CB2450063991035_18* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_6CB2450063991035_18*, ::Class_1_6CB2450063991035_18*))((::PBYTE)hIl2Cpp + CLASS_2_4D507DAF1C6DAEA9_METHOD_2_4CD9EB309D3CB768_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Promises::IPromise* __NotifyFlowDispose_b__5_0()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D507DAF1C6DAEA9___NOTIFYFLOWDISPOSE_B__5_0_OFFSET))(this);
	}
};
