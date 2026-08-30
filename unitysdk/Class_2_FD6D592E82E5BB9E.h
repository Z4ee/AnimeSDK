#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5AE3120AFB43466F.h"
#include "unitysdk/RPG/GameCore/IceEffectMode.h"

class Class_1_0E117AC86D8E5BCA;
class Class_1_C98B12E65C7C4800;
class Class_1_EB7FD32C4AD9446F;
class Class_2_3616FDE8A71D0590;
class Class_2_AEE59ED8DADEC1A1;
class Class_4_38B51614211CBC7D;
namespace RPG::GameCore { class DiceCombatPresetTurnActorAddLimitedDiceConfig; }
namespace RPG::GameCore { class DiceCombatPresetTurnActorRollConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_FD6D592E82E5BB9E_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x15415030)
#define CLASS_2_FD6D592E82E5BB9E_METHOD_2_00C39663F759F0A9_OFFSET UNITYSDK_OFFSET(0x15418C40)
#define CLASS_2_FD6D592E82E5BB9E_METHOD_2_092BA73D7EB0FBBE_OFFSET UNITYSDK_OFFSET(0x1541B6F0)
#define CLASS_2_FD6D592E82E5BB9E_METHOD_2_0E3F12F42F1DFD7C_OFFSET UNITYSDK_OFFSET(0x15419900)
#define CLASS_2_FD6D592E82E5BB9E_METHOD_2_141A3ED11B852B54_OFFSET UNITYSDK_OFFSET(0x15416E10)
#define CLASS_2_FD6D592E82E5BB9E_METHOD_2_189E801F0012D85C_OFFSET UNITYSDK_OFFSET(0x15418960)
#define CLASS_2_FD6D592E82E5BB9E_METHOD_2_18E1FA9E60967704_OFFSET UNITYSDK_OFFSET(0x154170F0)
#define CLASS_2_FD6D592E82E5BB9E_METHOD_2_1E293D9A74FE7D66_OFFSET UNITYSDK_OFFSET(0x15415190)
#define CLASS_2_FD6D592E82E5BB9E_METHOD_2_2376486C27388F69_OFFSET UNITYSDK_OFFSET(0x154153A0)
#define CLASS_2_FD6D592E82E5BB9E_METHOD_2_24A8CBC1E995DCEA_OFFSET UNITYSDK_OFFSET(0x15417050)
#define CLASS_2_FD6D592E82E5BB9E_METHOD_2_52912D175DACBBA2_OFFSET UNITYSDK_OFFSET(0x154156A0)
#define CLASS_2_FD6D592E82E5BB9E_METHOD_2_55A31F084FCFADBE_OFFSET UNITYSDK_OFFSET(0x15415FD0)
#define CLASS_2_FD6D592E82E5BB9E_METHOD_2_5737A0760C522853_OFFSET UNITYSDK_OFFSET(0x1541BB30)
#define CLASS_2_FD6D592E82E5BB9E_METHOD_2_581885EE1E0E7CDC_OFFSET UNITYSDK_OFFSET(0x15417380)
#define CLASS_2_FD6D592E82E5BB9E_METHOD_2_630F765A52AEB4DA_OFFSET UNITYSDK_OFFSET(0x15419620)
#define CLASS_2_FD6D592E82E5BB9E_METHOD_2_65B5C5147CF436C0_OFFSET UNITYSDK_OFFSET(0x15417910)
#define CLASS_2_FD6D592E82E5BB9E_METHOD_2_68A0EEE682CA91AF_1_OFFSET UNITYSDK_OFFSET(0x15419E00)
#define CLASS_2_FD6D592E82E5BB9E_METHOD_2_68A0EEE682CA91AF_OFFSET UNITYSDK_OFFSET(0x15419C10)
#define CLASS_2_FD6D592E82E5BB9E_METHOD_2_6CF85FC2971A48DD_OFFSET UNITYSDK_OFFSET(0x154181A0)
#define CLASS_2_FD6D592E82E5BB9E_METHOD_2_6E17A52461C8300D_OFFSET UNITYSDK_OFFSET(0x1541AB00)
#define CLASS_2_FD6D592E82E5BB9E_METHOD_2_773AD6D8097DBBF1_OFFSET UNITYSDK_OFFSET(0x154189E0)
#define CLASS_2_FD6D592E82E5BB9E_METHOD_2_782924D6B683ADBD_1_OFFSET UNITYSDK_OFFSET(0x15416180)
#define CLASS_2_FD6D592E82E5BB9E_METHOD_2_782924D6B683ADBD_OFFSET UNITYSDK_OFFSET(0x15415E50)
#define CLASS_2_FD6D592E82E5BB9E_METHOD_2_81DE7E35693C47BE_OFFSET UNITYSDK_OFFSET(0x15419FF0)
#define CLASS_2_FD6D592E82E5BB9E_METHOD_2_87C8FC293612030F_OFFSET UNITYSDK_OFFSET(0x15415450)
#define CLASS_2_FD6D592E82E5BB9E_METHOD_2_90B7AC0E4137759D_OFFSET UNITYSDK_OFFSET(0x15417F80)
#define CLASS_2_FD6D592E82E5BB9E_METHOD_2_926D5A4E1DEEA46C_1_OFFSET UNITYSDK_OFFSET(0x1541AA70)
#define CLASS_2_FD6D592E82E5BB9E_METHOD_2_926D5A4E1DEEA46C_OFFSET UNITYSDK_OFFSET(0x1541A9E0)
#define CLASS_2_FD6D592E82E5BB9E_METHOD_2_9BAE7492E5CF290D_OFFSET UNITYSDK_OFFSET(0x15416570)
#define CLASS_2_FD6D592E82E5BB9E_METHOD_2_B26087396B7166DB_OFFSET UNITYSDK_OFFSET(0x15416300)
#define CLASS_2_FD6D592E82E5BB9E_METHOD_2_D6E41C2CA58A59AC_OFFSET UNITYSDK_OFFSET(0x15415070)
#define CLASS_2_FD6D592E82E5BB9E_METHOD_2_D816D92BF7EAD3BF_1_OFFSET UNITYSDK_OFFSET(0x1541B330)
#define CLASS_2_FD6D592E82E5BB9E_METHOD_2_D816D92BF7EAD3BF_OFFSET UNITYSDK_OFFSET(0x1541AF70)
#define CLASS_2_FD6D592E82E5BB9E_METHOD_2_DDBE3DFE8CDB6F4E_OFFSET UNITYSDK_OFFSET(0x15418480)
#define CLASS_2_FD6D592E82E5BB9E_METHOD_2_E5AB42C246CD3605_OFFSET UNITYSDK_OFFSET(0x15415DA0)
#define CLASS_2_FD6D592E82E5BB9E_METHOD_2_F01B91DA820C7820_OFFSET UNITYSDK_OFFSET(0x154164D0)
#define CLASS_2_FD6D592E82E5BB9E__CTOR_OFFSET UNITYSDK_OFFSET(0x15415020)

inline static constexpr unsigned int Class_2_FD6D592E82E5BB9E_TypeDefinitionIndex = 35817;

class Class_2_FD6D592E82E5BB9E : public ::Class_1_5AE3120AFB43466F
{
public:
	::Class_2_3616FDE8A71D0590* EEFMDEHLLFI; // 0x18
	::Class_4_38B51614211CBC7D* IBGLIGGOIEK; // 0x20

	::System::Void _ctor(::Class_4_38B51614211CBC7D* a1, ::Class_2_3616FDE8A71D0590* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_38B51614211CBC7D*, ::Class_2_3616FDE8A71D0590*))((::PBYTE)hIl2Cpp + CLASS_2_FD6D592E82E5BB9E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD6D592E82E5BB9E_INITIALIZE_OFFSET))(this);
	}

	::System::Void Method_2_D6E41C2CA58A59AC(::System::Collections::Generic::List_1<::Class_2_AEE59ED8DADEC1A1*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_AEE59ED8DADEC1A1*>*))((::PBYTE)hIl2Cpp + CLASS_2_FD6D592E82E5BB9E_METHOD_2_D6E41C2CA58A59AC_OFFSET))(this, a1);
	}

	::System::Void Method_2_1E293D9A74FE7D66(::Class_2_AEE59ED8DADEC1A1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*))((::PBYTE)hIl2Cpp + CLASS_2_FD6D592E82E5BB9E_METHOD_2_1E293D9A74FE7D66_OFFSET))(this, a1);
	}

	::System::Void Method_2_2376486C27388F69(::Class_2_AEE59ED8DADEC1A1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*))((::PBYTE)hIl2Cpp + CLASS_2_FD6D592E82E5BB9E_METHOD_2_2376486C27388F69_OFFSET))(this, a1);
	}

	::System::Void Method_2_87C8FC293612030F(::Class_2_AEE59ED8DADEC1A1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*))((::PBYTE)hIl2Cpp + CLASS_2_FD6D592E82E5BB9E_METHOD_2_87C8FC293612030F_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Method_2_52912D175DACBBA2(::Class_2_AEE59ED8DADEC1A1* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::RPG::GameCore::DiceCombatPresetTurnActorRollConfig* a3)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::System::Collections::Generic::List_1<::System::Int32>*, ::RPG::GameCore::DiceCombatPresetTurnActorRollConfig*))((::PBYTE)hIl2Cpp + CLASS_2_FD6D592E82E5BB9E_METHOD_2_52912D175DACBBA2_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_2_E5AB42C246CD3605(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_FD6D592E82E5BB9E_METHOD_2_E5AB42C246CD3605_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_782924D6B683ADBD(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_FD6D592E82E5BB9E_METHOD_2_782924D6B683ADBD_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_55A31F084FCFADBE(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_FD6D592E82E5BB9E_METHOD_2_55A31F084FCFADBE_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_782924D6B683ADBD_1(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_FD6D592E82E5BB9E_METHOD_2_782924D6B683ADBD_1_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::UInt32>* Method_2_B26087396B7166DB(::Class_2_AEE59ED8DADEC1A1* a1, ::System::UInt32 a2)
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_FD6D592E82E5BB9E_METHOD_2_B26087396B7166DB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F01B91DA820C7820(::Class_2_AEE59ED8DADEC1A1* a1, ::System::UInt32 a2, ::Il2CppArray<::System::UInt32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::System::UInt32, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_FD6D592E82E5BB9E_METHOD_2_F01B91DA820C7820_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_9BAE7492E5CF290D(::Class_2_AEE59ED8DADEC1A1* a1, ::System::UInt32 a2, ::Il2CppArray<::System::UInt32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::System::UInt32, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_FD6D592E82E5BB9E_METHOD_2_9BAE7492E5CF290D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_141A3ED11B852B54(::Class_2_AEE59ED8DADEC1A1* a1, ::System::UInt32 a2, ::Il2CppArray<::System::UInt32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::System::UInt32, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_FD6D592E82E5BB9E_METHOD_2_141A3ED11B852B54_OFFSET))(this, a1, a2, a3);
	}

	::Il2CppArray<::System::UInt32>* Method_2_24A8CBC1E995DCEA(::Class_2_AEE59ED8DADEC1A1* a1, ::System::UInt32 a2)
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_FD6D592E82E5BB9E_METHOD_2_24A8CBC1E995DCEA_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_18E1FA9E60967704(::Class_2_AEE59ED8DADEC1A1* a1, ::System::Int32 a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_FD6D592E82E5BB9E_METHOD_2_18E1FA9E60967704_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Method_2_581885EE1E0E7CDC(::Class_2_AEE59ED8DADEC1A1* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_FD6D592E82E5BB9E_METHOD_2_581885EE1E0E7CDC_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Method_2_65B5C5147CF436C0(::Class_2_AEE59ED8DADEC1A1* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_FD6D592E82E5BB9E_METHOD_2_65B5C5147CF436C0_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Method_2_90B7AC0E4137759D(::Class_2_AEE59ED8DADEC1A1* a1, ::System::Int32 a2, ::RPG::GameCore::DiceCombatPresetTurnActorAddLimitedDiceConfig* a3)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::System::Int32, ::RPG::GameCore::DiceCombatPresetTurnActorAddLimitedDiceConfig*))((::PBYTE)hIl2Cpp + CLASS_2_FD6D592E82E5BB9E_METHOD_2_90B7AC0E4137759D_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Method_2_6CF85FC2971A48DD(::Class_2_AEE59ED8DADEC1A1* a1, ::System::Int32 a2)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_FD6D592E82E5BB9E_METHOD_2_6CF85FC2971A48DD_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Method_2_DDBE3DFE8CDB6F4E(::Class_2_AEE59ED8DADEC1A1* a1, ::System::Int32 a2)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_FD6D592E82E5BB9E_METHOD_2_DDBE3DFE8CDB6F4E_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_2_189E801F0012D85C(::Class_1_C98B12E65C7C4800* a1, ::Class_2_AEE59ED8DADEC1A1* a2)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::Class_1_C98B12E65C7C4800*, ::Class_2_AEE59ED8DADEC1A1*))((::PBYTE)hIl2Cpp + CLASS_2_FD6D592E82E5BB9E_METHOD_2_189E801F0012D85C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_773AD6D8097DBBF1(::Class_2_AEE59ED8DADEC1A1* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_FD6D592E82E5BB9E_METHOD_2_773AD6D8097DBBF1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_00C39663F759F0A9(::Class_2_AEE59ED8DADEC1A1* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_FD6D592E82E5BB9E_METHOD_2_00C39663F759F0A9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_630F765A52AEB4DA(::Class_2_AEE59ED8DADEC1A1* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_FD6D592E82E5BB9E_METHOD_2_630F765A52AEB4DA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0E3F12F42F1DFD7C(::Class_2_AEE59ED8DADEC1A1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*))((::PBYTE)hIl2Cpp + CLASS_2_FD6D592E82E5BB9E_METHOD_2_0E3F12F42F1DFD7C_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_68A0EEE682CA91AF(::Class_1_0E117AC86D8E5BCA* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_1_0E117AC86D8E5BCA*))((::PBYTE)hIl2Cpp + CLASS_2_FD6D592E82E5BB9E_METHOD_2_68A0EEE682CA91AF_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_68A0EEE682CA91AF_1(::Class_1_0E117AC86D8E5BCA* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_1_0E117AC86D8E5BCA*))((::PBYTE)hIl2Cpp + CLASS_2_FD6D592E82E5BB9E_METHOD_2_68A0EEE682CA91AF_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_81DE7E35693C47BE(::Class_2_AEE59ED8DADEC1A1* a1, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a2, ::RPG::GameCore::IceEffectMode a3, ::System::UInt32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*, ::RPG::GameCore::IceEffectMode, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_FD6D592E82E5BB9E_METHOD_2_81DE7E35693C47BE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_926D5A4E1DEEA46C(::Class_2_AEE59ED8DADEC1A1* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_FD6D592E82E5BB9E_METHOD_2_926D5A4E1DEEA46C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_926D5A4E1DEEA46C_1(::Class_2_AEE59ED8DADEC1A1* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_FD6D592E82E5BB9E_METHOD_2_926D5A4E1DEEA46C_1_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_EB7FD32C4AD9446F*>* Method_2_6E17A52461C8300D(::Class_2_AEE59ED8DADEC1A1* a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_EB7FD32C4AD9446F*>*(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*))((::PBYTE)hIl2Cpp + CLASS_2_FD6D592E82E5BB9E_METHOD_2_6E17A52461C8300D_OFFSET))(this, a1);
	}

	::System::Void Method_2_D816D92BF7EAD3BF(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_EB7FD32C4AD9446F*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_EB7FD32C4AD9446F*>*))((::PBYTE)hIl2Cpp + CLASS_2_FD6D592E82E5BB9E_METHOD_2_D816D92BF7EAD3BF_OFFSET))(this, a1);
	}

	::System::Void Method_2_D816D92BF7EAD3BF_1(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_EB7FD32C4AD9446F*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_EB7FD32C4AD9446F*>*))((::PBYTE)hIl2Cpp + CLASS_2_FD6D592E82E5BB9E_METHOD_2_D816D92BF7EAD3BF_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_092BA73D7EB0FBBE(::Class_2_AEE59ED8DADEC1A1* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_FD6D592E82E5BB9E_METHOD_2_092BA73D7EB0FBBE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5737A0760C522853(::Class_2_AEE59ED8DADEC1A1* a1, ::Class_1_0E117AC86D8E5BCA* a2, ::System::Collections::Generic::List_1<::System::UInt32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::Class_1_0E117AC86D8E5BCA*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_FD6D592E82E5BB9E_METHOD_2_5737A0760C522853_OFFSET))(this, a1, a2, a3);
	}
};
