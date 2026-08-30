#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LimaoNewsEmployeeStateType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_766E1CF11E204F43_5;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class LimaoNewsDutyCheckOptionTalkInfo; }
namespace RPG::Client::LimaoNews { class LimaoNewsEmployeeCheckData; }
namespace System { class Random; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_AB4ED2B21F301DB7_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17846E60)
#define CLASS_1_AB4ED2B21F301DB7_GET_CURRENTCHECKINGEMPLOYEEID_OFFSET UNITYSDK_OFFSET(0x17847760)
#define CLASS_1_AB4ED2B21F301DB7_METHOD_1_07051057F2BC7D76_OFFSET UNITYSDK_OFFSET(0x178479F0)
#define CLASS_1_AB4ED2B21F301DB7_METHOD_1_12BD710286438776_OFFSET UNITYSDK_OFFSET(0x1784BD60)
#define CLASS_1_AB4ED2B21F301DB7_METHOD_1_1E905427758D98F2_OFFSET UNITYSDK_OFFSET(0x1784A300)
#define CLASS_1_AB4ED2B21F301DB7_METHOD_1_220C120D2015F84C_OFFSET UNITYSDK_OFFSET(0x1784B050)
#define CLASS_1_AB4ED2B21F301DB7_METHOD_1_3098819977C2F32C_OFFSET UNITYSDK_OFFSET(0x17847470)
#define CLASS_1_AB4ED2B21F301DB7_METHOD_1_36049433DC4FDE13_OFFSET UNITYSDK_OFFSET(0x1784B830)
#define CLASS_1_AB4ED2B21F301DB7_METHOD_1_3C56638E934D1D21_OFFSET UNITYSDK_OFFSET(0x178498E0)
#define CLASS_1_AB4ED2B21F301DB7_METHOD_1_458B816EE51C8A9E_OFFSET UNITYSDK_OFFSET(0x1784BA60)
#define CLASS_1_AB4ED2B21F301DB7_METHOD_1_51D4C4EE6EA0D8EF_OFFSET UNITYSDK_OFFSET(0x17849650)
#define CLASS_1_AB4ED2B21F301DB7_METHOD_1_5522CC4CE0973BFE_OFFSET UNITYSDK_OFFSET(0x1784BB90)
#define CLASS_1_AB4ED2B21F301DB7_METHOD_1_5FAD56E9E208220A_OFFSET UNITYSDK_OFFSET(0x17849990)
#define CLASS_1_AB4ED2B21F301DB7_METHOD_1_684F14C3B7AFA31D_OFFSET UNITYSDK_OFFSET(0x17847020)
#define CLASS_1_AB4ED2B21F301DB7_METHOD_1_74814830ABF500E5_OFFSET UNITYSDK_OFFSET(0x1784B3B0)
#define CLASS_1_AB4ED2B21F301DB7_METHOD_1_76063BDB452DE638_OFFSET UNITYSDK_OFFSET(0x17848CA0)
#define CLASS_1_AB4ED2B21F301DB7_METHOD_1_786F810ABB57AF39_OFFSET UNITYSDK_OFFSET(0x17849AD0)
#define CLASS_1_AB4ED2B21F301DB7_METHOD_1_901A4F07F0046C04_OFFSET UNITYSDK_OFFSET(0x178473E0)
#define CLASS_1_AB4ED2B21F301DB7_METHOD_1_9B4C3ED53FE64466_OFFSET UNITYSDK_OFFSET(0x17847650)
#define CLASS_1_AB4ED2B21F301DB7_METHOD_1_A375D274F48510A7_OFFSET UNITYSDK_OFFSET(0x1784A090)
#define CLASS_1_AB4ED2B21F301DB7_METHOD_1_B35B6EE597C3E17C_OFFSET UNITYSDK_OFFSET(0x178476B0)
#define CLASS_1_AB4ED2B21F301DB7_METHOD_1_BCB6F3C69BC15158_OFFSET UNITYSDK_OFFSET(0x17847780)
#define CLASS_1_AB4ED2B21F301DB7_METHOD_1_C706B1EC6D2E1C64_OFFSET UNITYSDK_OFFSET(0x17849B30)
#define CLASS_1_AB4ED2B21F301DB7_METHOD_1_D3FC0587B4D2DB91_OFFSET UNITYSDK_OFFSET(0x178492C0)
#define CLASS_1_AB4ED2B21F301DB7_METHOD_1_D565E2F9F1E2C1F7_OFFSET UNITYSDK_OFFSET(0x17848600)
#define CLASS_1_AB4ED2B21F301DB7_METHOD_1_DEE0F45697B74DE4_OFFSET UNITYSDK_OFFSET(0x17847570)
#define CLASS_1_AB4ED2B21F301DB7_METHOD_1_E6C6AA7B0F9CF426_1_OFFSET UNITYSDK_OFFSET(0x178488B0)
#define CLASS_1_AB4ED2B21F301DB7_METHOD_1_E6C6AA7B0F9CF426_OFFSET UNITYSDK_OFFSET(0x178489C0)
#define CLASS_1_AB4ED2B21F301DB7_METHOD_1_F493CB4BD666D9C0_OFFSET UNITYSDK_OFFSET(0x1784A430)
#define CLASS_1_AB4ED2B21F301DB7_METHOD_1_F516CA53332D5370_OFFSET UNITYSDK_OFFSET(0x1784B260)
#define CLASS_1_AB4ED2B21F301DB7_SET_CURRENTCHECKINGEMPLOYEEID_OFFSET UNITYSDK_OFFSET(0x17847770)
#define CLASS_1_AB4ED2B21F301DB7__CCTOR_OFFSET UNITYSDK_OFFSET(0x1784BF00)
#define CLASS_1_AB4ED2B21F301DB7__CTOR_OFFSET UNITYSDK_OFFSET(0x17846DB0)

inline static constexpr unsigned int Class_1_AB4ED2B21F301DB7_TypeDefinitionIndex = 78988;

class Class_1_AB4ED2B21F301DB7 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::System::UInt32>** StaticGet_IFNLOIFPBJG()
	{
		return (::System::Collections::Generic::List_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AB4ED2B21F301DB7_TypeDefinitionIndex)->GetStaticField(0x60240);
	}
	// static const ::System::UInt32 OIKHFDHPMFK = 0xFFFFFFFF; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::RPG::GameCore::LimaoNewsEmployeeStateType>, ::System::Collections::Generic::List_1<::System::UInt32>*>* OKIDEFOEJND; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData*>* MEJOIBFBHLP; // 0x18
	::System::Random* OLEEIPHBJKB; // 0x20
	::System::UInt32 _CurrentCheckingEmployeeID_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB4ED2B21F301DB7__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AB4ED2B21F301DB7__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB4ED2B21F301DB7_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_684F14C3B7AFA31D(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_766E1CF11E204F43_5*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_766E1CF11E204F43_5*>*))((::PBYTE)hIl2Cpp + CLASS_1_AB4ED2B21F301DB7_METHOD_1_684F14C3B7AFA31D_OFFSET))(this, a1);
	}

	::System::Void Method_1_901A4F07F0046C04(::Class_1_766E1CF11E204F43_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_766E1CF11E204F43_5*))((::PBYTE)hIl2Cpp + CLASS_1_AB4ED2B21F301DB7_METHOD_1_901A4F07F0046C04_OFFSET))(this, a1);
	}

	::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData* Method_1_3098819977C2F32C(::System::UInt32 a1)
	{
		return ((::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AB4ED2B21F301DB7_METHOD_1_3098819977C2F32C_OFFSET))(this, a1);
	}

	::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData* Method_1_DEE0F45697B74DE4(::System::UInt32 a1)
	{
		return ((::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AB4ED2B21F301DB7_METHOD_1_DEE0F45697B74DE4_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_9B4C3ED53FE64466(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AB4ED2B21F301DB7_METHOD_1_9B4C3ED53FE64466_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_B35B6EE597C3E17C(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AB4ED2B21F301DB7_METHOD_1_B35B6EE597C3E17C_OFFSET))(this, a1, a2);
	}

	::System::UInt32 get_CurrentCheckingEmployeeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB4ED2B21F301DB7_GET_CURRENTCHECKINGEMPLOYEEID_OFFSET))(this);
	}

	::System::Void set_CurrentCheckingEmployeeID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AB4ED2B21F301DB7_SET_CURRENTCHECKINGEMPLOYEEID_OFFSET))(this, a1);
	}

	::System::Void Method_1_BCB6F3C69BC15158(::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData*))((::PBYTE)hIl2Cpp + CLASS_1_AB4ED2B21F301DB7_METHOD_1_BCB6F3C69BC15158_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::LimaoNewsDutyCheckOptionTalkInfo*>* Method_1_07051057F2BC7D76(::System::UInt32 a1, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::LimaoNewsDutyCheckOptionTalkInfo*>* a2, ::System::UInt32 a3)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::LimaoNewsDutyCheckOptionTalkInfo*>*(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::LimaoNewsDutyCheckOptionTalkInfo*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AB4ED2B21F301DB7_METHOD_1_07051057F2BC7D76_OFFSET))(this, a1, a2, a3);
	}

	static ::System::Void Method_1_76063BDB452DE638(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::LimaoNewsDutyCheckOptionTalkInfo*>* a1, ::System::Collections::Generic::List_1<::RPG::Client::LimaoNewsDutyCheckOptionTalkInfo*>* a2, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a3, ::System::UInt32 a4, ::System::Func_2<::RPG::Client::LimaoNewsDutyCheckOptionTalkInfo*, ::System::Boolean>* a5, ::System::Func_2<::RPG::Client::LimaoNewsDutyCheckOptionTalkInfo*, ::System::Boolean>* a6)
	{
		return ((::System::Void(*)(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::LimaoNewsDutyCheckOptionTalkInfo*>*, ::System::Collections::Generic::List_1<::RPG::Client::LimaoNewsDutyCheckOptionTalkInfo*>*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::UInt32, ::System::Func_2<::RPG::Client::LimaoNewsDutyCheckOptionTalkInfo*, ::System::Boolean>*, ::System::Func_2<::RPG::Client::LimaoNewsDutyCheckOptionTalkInfo*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_AB4ED2B21F301DB7_METHOD_1_76063BDB452DE638_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Collections::Generic::List_1<::RPG::Client::LimaoNewsDutyCheckOptionTalkInfo*>* Method_1_D565E2F9F1E2C1F7(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::LimaoNewsDutyCheckOptionTalkInfo*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::LimaoNewsDutyCheckOptionTalkInfo*>*(*)(::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::LimaoNewsDutyCheckOptionTalkInfo*>*))((::PBYTE)hIl2Cpp + CLASS_1_AB4ED2B21F301DB7_METHOD_1_D565E2F9F1E2C1F7_OFFSET))(a1);
	}

	::System::Void Method_1_51D4C4EE6EA0D8EF(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AB4ED2B21F301DB7_METHOD_1_51D4C4EE6EA0D8EF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3C56638E934D1D21(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_1_AB4ED2B21F301DB7_METHOD_1_3C56638E934D1D21_OFFSET))(this, a1);
	}

	::System::Void Method_1_786F810ABB57AF39(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_AB4ED2B21F301DB7_METHOD_1_786F810ABB57AF39_OFFSET))(this, a1);
	}

	::System::Void Method_1_5FAD56E9E208220A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB4ED2B21F301DB7_METHOD_1_5FAD56E9E208220A_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_1_E6C6AA7B0F9CF426(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AB4ED2B21F301DB7_METHOD_1_E6C6AA7B0F9CF426_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_1_E6C6AA7B0F9CF426_1(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AB4ED2B21F301DB7_METHOD_1_E6C6AA7B0F9CF426_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_D3FC0587B4D2DB91(::System::UInt32 a1, ::System::Collections::Generic::List_1<::RPG::Client::LimaoNewsDutyCheckOptionTalkInfo*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::LimaoNewsDutyCheckOptionTalkInfo*>*))((::PBYTE)hIl2Cpp + CLASS_1_AB4ED2B21F301DB7_METHOD_1_D3FC0587B4D2DB91_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A375D274F48510A7(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AB4ED2B21F301DB7_METHOD_1_A375D274F48510A7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C706B1EC6D2E1C64()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB4ED2B21F301DB7_METHOD_1_C706B1EC6D2E1C64_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::UInt32>* Method_1_1E905427758D98F2()
	{
		return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB4ED2B21F301DB7_METHOD_1_1E905427758D98F2_OFFSET))(this);
	}

	::System::UInt32 Method_1_F493CB4BD666D9C0(::System::Collections::Generic::HashSet_1<::System::UInt32>* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_AB4ED2B21F301DB7_METHOD_1_F493CB4BD666D9C0_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_220C120D2015F84C(::System::UInt32 a1, ::RPG::GameCore::LimaoNewsEmployeeStateType a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LimaoNewsEmployeeStateType))((::PBYTE)hIl2Cpp + CLASS_1_AB4ED2B21F301DB7_METHOD_1_220C120D2015F84C_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_1_F516CA53332D5370(::System::UInt32 a1, ::RPG::GameCore::LimaoNewsEmployeeStateType a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LimaoNewsEmployeeStateType))((::PBYTE)hIl2Cpp + CLASS_1_AB4ED2B21F301DB7_METHOD_1_F516CA53332D5370_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_1_74814830ABF500E5(::System::UInt32 a1, ::RPG::GameCore::LimaoNewsEmployeeStateType a2)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::LimaoNewsEmployeeStateType))((::PBYTE)hIl2Cpp + CLASS_1_AB4ED2B21F301DB7_METHOD_1_74814830ABF500E5_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData*>* Method_1_36049433DC4FDE13()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB4ED2B21F301DB7_METHOD_1_36049433DC4FDE13_OFFSET))(this);
	}

	::System::Boolean Method_1_458B816EE51C8A9E(::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData*))((::PBYTE)hIl2Cpp + CLASS_1_AB4ED2B21F301DB7_METHOD_1_458B816EE51C8A9E_OFFSET))(this, a1);
	}

	::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData* Method_1_5522CC4CE0973BFE(::System::UInt32 a1)
	{
		return ((::RPG::Client::LimaoNews::LimaoNewsEmployeeCheckData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AB4ED2B21F301DB7_METHOD_1_5522CC4CE0973BFE_OFFSET))(this, a1);
	}

	::System::Void Method_1_12BD710286438776(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AB4ED2B21F301DB7_METHOD_1_12BD710286438776_OFFSET))(this, a1);
	}
};
