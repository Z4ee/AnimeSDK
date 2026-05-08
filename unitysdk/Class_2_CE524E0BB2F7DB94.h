#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_106.h"
#include "unitysdk/Class_2_CE524E0BB2F7DB94_Enum_3_A982ABB36633F4BE.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_0_16E4307DCC419505_393;
class Class_0_16E4307DCC419505_415;
class Class_2_CE524E0BB2F7DB94_Class_1_6F0797083F8D1E40;
class Class_2_CE524E0BB2F7DB94_Class_3_99841154DB7B0E12_4;
namespace MoleMole { class TextureSheetData; }
namespace MoleMole { class TextureSheetLoopFrame; }
namespace MoleMole { class TextureSheetSkipFrameParam; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::Events { class UnityEvent; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_053F693D04F8B72F_OFFSET UNITYSDK_OFFSET(0x154965E0)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_128774387667156B_1_OFFSET UNITYSDK_OFFSET(0x154966B0)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_128774387667156B_2_OFFSET UNITYSDK_OFFSET(0x15496D20)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x15494B20)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x15497FB0)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x15498370)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_1808E1CF7A125519_1_OFFSET UNITYSDK_OFFSET(0x15498430)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x15495BE0)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x15498260)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x15497F50)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_277F8930086803D1_OFFSET UNITYSDK_OFFSET(0x154961A0)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_2DCDFF29E7FDDAA8_1_OFFSET UNITYSDK_OFFSET(0x15496140)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_2DCDFF29E7FDDAA8_OFFSET UNITYSDK_OFFSET(0x15496210)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x15494A90)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_33ACA6CB2ABC73F7_1_OFFSET UNITYSDK_OFFSET(0x15495380)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_33ACA6CB2ABC73F7_2_OFFSET UNITYSDK_OFFSET(0x15495AF0)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_33ACA6CB2ABC73F7_3_OFFSET UNITYSDK_OFFSET(0x154960B0)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_33ACA6CB2ABC73F7_4_OFFSET UNITYSDK_OFFSET(0x15498590)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x154950F0)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_3B194F29DA4D48D1_OFFSET UNITYSDK_OFFSET(0x15496930)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_40E25732BB5C80EB_OFFSET UNITYSDK_OFFSET(0x154966D0)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x15497D40)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_43B48BB4990F6172_OFFSET UNITYSDK_OFFSET(0x15494E90)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_548BCB97778E978C_OFFSET UNITYSDK_OFFSET(0x15493280)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_6A4DA97832E39276_OFFSET UNITYSDK_OFFSET(0x15495A80)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_6AE696AC9399A7DF_OFFSET UNITYSDK_OFFSET(0x15494BB0)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_717C19EF0E62D938_1_OFFSET UNITYSDK_OFFSET(0x154952F0)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_717C19EF0E62D938_2_OFFSET UNITYSDK_OFFSET(0x15496270)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_717C19EF0E62D938_3_OFFSET UNITYSDK_OFFSET(0x15498500)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_717C19EF0E62D938_OFFSET UNITYSDK_OFFSET(0x15495060)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_73082608208D1F45_OFFSET UNITYSDK_OFFSET(0x15496300)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_89CAD4A56F178ED8_OFFSET UNITYSDK_OFFSET(0x15496D40)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_89D7730D9D9846BC_OFFSET UNITYSDK_OFFSET(0x15498490)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x15494E30)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x15493ED0)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_9681042564541CD6_2_OFFSET UNITYSDK_OFFSET(0x15494B40)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_9681042564541CD6_3_OFFSET UNITYSDK_OFFSET(0x15493210)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x154939E0)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x15493D70)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_99AC52A5C48A589D_1_OFFSET UNITYSDK_OFFSET(0x15496880)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_99AC52A5C48A589D_2_OFFSET UNITYSDK_OFFSET(0x154982C0)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_99AC52A5C48A589D_OFFSET UNITYSDK_OFFSET(0x15495180)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0x15493D10)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_A18DDE12E640F622_OFFSET UNITYSDK_OFFSET(0x15493A50)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_A1AA9EB80A93616B_OFFSET UNITYSDK_OFFSET(0x15495E10)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_A7650A84C4AC3D12_OFFSET UNITYSDK_OFFSET(0x154954E0)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_A9677BE26C7CD6D2_OFFSET UNITYSDK_OFFSET(0x15497CB0)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_B3A88D7849969A71_1_OFFSET UNITYSDK_OFFSET(0x15497C30)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_B3A88D7849969A71_2_OFFSET UNITYSDK_OFFSET(0x15497EF0)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_B3A88D7849969A71_OFFSET UNITYSDK_OFFSET(0x15495B80)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_B3DAC475E9292B63_1_OFFSET UNITYSDK_OFFSET(0x15495C40)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_B3DAC475E9292B63_2_OFFSET UNITYSDK_OFFSET(0x15496760)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_B3DAC475E9292B63_OFFSET UNITYSDK_OFFSET(0x15494FB0)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_B54202C5FED7F81A_OFFSET UNITYSDK_OFFSET(0x15495230)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_BCE33580B3F10B5D_OFFSET UNITYSDK_OFFSET(0x15495D60)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_BE6C5DFD43AF1FD7_OFFSET UNITYSDK_OFFSET(0x15492E70)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x15496060)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x15498220)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15494F70)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x15496810)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_D09831639F615812_OFFSET UNITYSDK_OFFSET(0x15495CF0)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_D77D5070B27B1233_OFFSET UNITYSDK_OFFSET(0x15497C00)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_DD4551C0FCFC7507_OFFSET UNITYSDK_OFFSET(0x15496DD0)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_E7F12B3C79C88450_OFFSET UNITYSDK_OFFSET(0x15494C10)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_EBBC49A9109F0F2F_OFFSET UNITYSDK_OFFSET(0x15493810)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_EBF44BC910948FDA_OFFSET UNITYSDK_OFFSET(0x154980C0)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x15496480)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0x154966F0)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x154984E0)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_F3811FFFE51B8315_OFFSET UNITYSDK_OFFSET(0x15494120)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x15496690)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_F5B4708E7805566C_OFFSET UNITYSDK_OFFSET(0x15493F40)
#define CLASS_2_CE524E0BB2F7DB94_METHOD_2_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x15497C90)
#define CLASS_2_CE524E0BB2F7DB94__CCTOR_OFFSET UNITYSDK_OFFSET(0x15495410)
#define CLASS_2_CE524E0BB2F7DB94__CTOR_OFFSET UNITYSDK_OFFSET(0x15492D90)

inline static constexpr unsigned int Class_2_CE524E0BB2F7DB94_TypeDefinitionIndex = 75186;

class Class_2_CE524E0BB2F7DB94 : public ::Class_1_43BD383C98B4C0C5_106
{
public:
	static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_Field_2_5()
	{
		return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_CE524E0BB2F7DB94_TypeDefinitionIndex)->GetStaticField(0x41260);
	}
	// static const ::System::String* Field_2_1; // 0x0
	::UnityEngine::Events::UnityEvent* Field_2_6; // 0x10
	::UnityEngine::Events::UnityEvent* Field_2_8; // 0x18
	::System::Action* Field_2_9; // 0x20
	::Class_2_CE524E0BB2F7DB94_Class_3_99841154DB7B0E12_4* Field_2_11; // 0x28
	::UnityEngine::Events::UnityEvent* Field_2_7; // 0x30
	::Class_0_16E4307DCC419505_393* Field_2_0; // 0x38
	::UnityEngine::Events::UnityEvent* Field_2_10; // 0x40
	::System::Action* Field_2_3; // 0x48
	::Class_2_CE524E0BB2F7DB94_Class_1_6F0797083F8D1E40* Field_2_4; // 0x50
	::System::Boolean Field_2_2; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94__CCTOR_OFFSET))();
	}

	::System::Void Method_2_BE6C5DFD43AF1FD7(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7, ::System::String* a8, ::System::Boolean a9, ::System::Boolean a10, ::System::Collections::Generic::List_1<::MoleMole::TextureSheetLoopFrame*>* a11, ::System::Int32 a12, ::System::Boolean a13, ::System::Single a14, ::System::Single a15, ::MoleMole::TextureSheetSkipFrameParam* a16, ::System::Int32 a17, ::System::String* a18, ::Class_0_16E4307DCC419505_415* a19)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Collections::Generic::List_1<::MoleMole::TextureSheetLoopFrame*>*, ::System::Int32, ::System::Boolean, ::System::Single, ::System::Single, ::MoleMole::TextureSheetSkipFrameParam*, ::System::Int32, ::System::String*, ::Class_0_16E4307DCC419505_415*))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_BE6C5DFD43AF1FD7_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_A1781348F0A89177()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_A1781348F0A89177_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_9681042564541CD6_1_OFFSET))(this);
	}

	::System::Void Method_2_F3811FFFE51B8315(::System::Single a1, ::System::Int32& a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_F3811FFFE51B8315_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Single Method_2_43B48BB4990F6172(::System::String* a1, ::System::Boolean& a2)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_43B48BB4990F6172_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_B3DAC475E9292B63(::UnityEngine::Events::UnityAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_B3DAC475E9292B63_OFFSET))(this, a1);
	}

	::System::Void Method_2_717C19EF0E62D938(::UnityEngine::Events::UnityAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_717C19EF0E62D938_OFFSET))(this, a1);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_2_99AC52A5C48A589D(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_99AC52A5C48A589D_OFFSET))(this, a1);
	}

	::System::Void Method_2_B54202C5FED7F81A(::UnityEngine::Events::UnityAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_B54202C5FED7F81A_OFFSET))(this, a1);
	}

	::System::Void Method_2_717C19EF0E62D938_1(::UnityEngine::Events::UnityAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_717C19EF0E62D938_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_33ACA6CB2ABC73F7_1_OFFSET))(this);
	}

	::System::Boolean Method_2_A7650A84C4AC3D12(::System::Boolean a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_A7650A84C4AC3D12_OFFSET))(this, a1);
	}

	::System::Void Method_2_6A4DA97832E39276(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_6A4DA97832E39276_OFFSET))(this, a1);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_33ACA6CB2ABC73F7_2_OFFSET))(this);
	}

	::System::Void Method_2_B3A88D7849969A71(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_B3A88D7849969A71_OFFSET))(this, a1);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_128774387667156B_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_2_B3DAC475E9292B63_1(::UnityEngine::Events::UnityAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_B3DAC475E9292B63_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_E7F12B3C79C88450(::System::Single a1, ::System::Int32& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_E7F12B3C79C88450_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D09831639F615812(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_D09831639F615812_OFFSET))(this, a1);
	}

	::System::Void Method_2_BCE33580B3F10B5D(::UnityEngine::Events::UnityAction_1<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_BCE33580B3F10B5D_OFFSET))(this, a1);
	}

	::System::Void Method_2_A1AA9EB80A93616B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_A1AA9EB80A93616B_OFFSET))(this);
	}

	::System::Void Method_2_F5B4708E7805566C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_F5B4708E7805566C_OFFSET))(this);
	}

	::System::Void Method_2_717C19EF0E62D938_2(::UnityEngine::Events::UnityAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_717C19EF0E62D938_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_73082608208D1F45(::MoleMole::TextureSheetData* a1, ::System::String* a2, ::System::Boolean a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Boolean a6, ::System::Boolean a7, ::System::String* a8)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::TextureSheetData*, ::System::String*, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_73082608208D1F45_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::UnityEngine::Events::UnityAction* Method_2_053F693D04F8B72F(::UnityEngine::Events::UnityAction* a1)
	{
		return ((::UnityEngine::Events::UnityAction*(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_053F693D04F8B72F_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::System::String* Method_2_128774387667156B_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_128774387667156B_1_OFFSET))(this);
	}

	::Class_2_CE524E0BB2F7DB94_Enum_3_A982ABB36633F4BE Method_2_40E25732BB5C80EB()
	{
		return ((::Class_2_CE524E0BB2F7DB94_Enum_3_A982ABB36633F4BE(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_40E25732BB5C80EB_OFFSET))(this);
	}

	::System::Void Method_2_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Int32 Method_2_F026F9F94BAA5E1F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_F026F9F94BAA5E1F_OFFSET))(this);
	}

	::System::Void Method_2_6AE696AC9399A7DF(::UnityEngine::Vector4 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_6AE696AC9399A7DF_OFFSET))(this, a1);
	}

	::System::Void Method_2_B3DAC475E9292B63_2(::UnityEngine::Events::UnityAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_B3DAC475E9292B63_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_A18DDE12E640F622()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_A18DDE12E640F622_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_9681042564541CD6_2_OFFSET))(this);
	}

	::System::Void Method_2_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}

	::System::Void Method_2_99AC52A5C48A589D_1(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_99AC52A5C48A589D_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_3B194F29DA4D48D1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_3B194F29DA4D48D1_OFFSET))(this, a1);
	}

	::System::Void Method_2_2DCDFF29E7FDDAA8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_2DCDFF29E7FDDAA8_OFFSET))(this);
	}

	::System::Void Method_2_89CAD4A56F178ED8(::UnityEngine::Events::UnityAction* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_89CAD4A56F178ED8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2DCDFF29E7FDDAA8_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_2DCDFF29E7FDDAA8_1_OFFSET))(this);
	}

	::System::String* Method_2_DD4551C0FCFC7507()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_DD4551C0FCFC7507_OFFSET))(this);
	}

	::System::Void Method_2_B3A88D7849969A71_1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_B3A88D7849969A71_1_OFFSET))(this, a1);
	}

	::System::Single Method_2_FB4BE762B6186C23()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_FB4BE762B6186C23_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_9681042564541CD6_3_OFFSET))(this);
	}

	::System::Void Method_2_A9677BE26C7CD6D2(::System::Single a1, ::System::Int32& a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_A9677BE26C7CD6D2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_EBBC49A9109F0F2F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_EBBC49A9109F0F2F_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7_3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_33ACA6CB2ABC73F7_3_OFFSET))(this);
	}

	::System::String* Method_2_128774387667156B_2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_128774387667156B_2_OFFSET))(this);
	}

	static ::System::Void Method_2_EBF44BC910948FDA(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_EBF44BC910948FDA_OFFSET))(a1);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_2_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_99AC52A5C48A589D_2(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_99AC52A5C48A589D_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_277F8930086803D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_277F8930086803D1_OFFSET))(this);
	}

	::System::Void Method_2_B3A88D7849969A71_2(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_B3A88D7849969A71_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_1808E1CF7A125519_1_OFFSET))(this);
	}

	::System::Void Method_2_89D7730D9D9846BC(::UnityEngine::Events::UnityAction_1<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_89D7730D9D9846BC_OFFSET))(this, a1);
	}

	::UnityEngine::Vector4 Method_2_D77D5070B27B1233()
	{
		return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_D77D5070B27B1233_OFFSET))(this);
	}

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}

	::System::Void Method_2_717C19EF0E62D938_3(::UnityEngine::Events::UnityAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_717C19EF0E62D938_3_OFFSET))(this, a1);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7_4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_33ACA6CB2ABC73F7_4_OFFSET))(this);
	}

	::System::Void Method_2_548BCB97778E978C(::System::String* a1, ::System::String* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7, ::System::String* a8, ::System::Boolean a9, ::System::Boolean a10, ::System::Collections::Generic::List_1<::MoleMole::TextureSheetLoopFrame*>* a11, ::System::Int32 a12, ::System::Boolean a13, ::System::Single a14, ::System::Single a15, ::MoleMole::TextureSheetSkipFrameParam* a16, ::System::Int32 a17, ::System::String* a18, ::Class_0_16E4307DCC419505_415* a19)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Collections::Generic::List_1<::MoleMole::TextureSheetLoopFrame*>*, ::System::Int32, ::System::Boolean, ::System::Single, ::System::Single, ::MoleMole::TextureSheetSkipFrameParam*, ::System::Int32, ::System::String*, ::Class_0_16E4307DCC419505_415*))((::PBYTE)hIl2Cpp + CLASS_2_CE524E0BB2F7DB94_METHOD_2_548BCB97778E978C_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19);
	}
};
