#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Enum_3_45DCCA85C18A63B1.h"
#include "unitysdk/MoleMole/Config/AidAttackType.h"
#include "unitysdk/MoleMole/Config/DamageElementType.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/MoleMole/Config/InlevelCameraState.h"
#include "unitysdk/Struct_2_23357730042A2DE8_1.h"
#include "unitysdk/Struct_2_5887222B9AE38D34.h"
#include "unitysdk/Struct_2_616C3DBF123B7844.h"
#include "unitysdk/Struct_2_F2A7939F5DFF18C1_4.h"

class Class_0_16E4307DCC419505_386;
class Class_1_4F79B92612697C26;
class Class_2_0206DD479BB5C906;
class Class_2_208CC9941471731A_1037;
class Class_2_208CC9941471731A_484;
namespace MoleMole { class SkillCharacterScriptConfig; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_3A3A95CA33F5CFBC_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x13298090)
#define CLASS_3_3A3A95CA33F5CFBC_METHOD_3_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x13299E40)
#define CLASS_3_3A3A95CA33F5CFBC_METHOD_3_37C38CE14588C02B_OFFSET UNITYSDK_OFFSET(0x1329A260)
#define CLASS_3_3A3A95CA33F5CFBC_METHOD_3_49964A8388055B4B_OFFSET UNITYSDK_OFFSET(0x13299CA0)
#define CLASS_3_3A3A95CA33F5CFBC_METHOD_3_507D2B352842C7E4_OFFSET UNITYSDK_OFFSET(0x13298BE0)
#define CLASS_3_3A3A95CA33F5CFBC_METHOD_3_6CAA7A4328C9EF2F_OFFSET UNITYSDK_OFFSET(0x1329A7D0)
#define CLASS_3_3A3A95CA33F5CFBC_METHOD_3_9D5BEBE295BE65D4_OFFSET UNITYSDK_OFFSET(0x13298580)
#define CLASS_3_3A3A95CA33F5CFBC_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1329A980)
#define CLASS_3_3A3A95CA33F5CFBC_METHOD_3_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x1329AA10)
#define CLASS_3_3A3A95CA33F5CFBC_METHOD_3_A6CE5DAA2387E1E2_OFFSET UNITYSDK_OFFSET(0x13299AC0)
#define CLASS_3_3A3A95CA33F5CFBC_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1329ABE0)
#define CLASS_3_3A3A95CA33F5CFBC_METHOD_3_CAAAA03D9552FCE2_OFFSET UNITYSDK_OFFSET(0x13299900)
#define CLASS_3_3A3A95CA33F5CFBC_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x13298760)
#define CLASS_3_3A3A95CA33F5CFBC_METHOD_3_D64FD9A228A1C4E0_1_OFFSET UNITYSDK_OFFSET(0x13299EB0)
#define CLASS_3_3A3A95CA33F5CFBC_METHOD_3_D64FD9A228A1C4E0_2_OFFSET UNITYSDK_OFFSET(0x1329A090)
#define CLASS_3_3A3A95CA33F5CFBC_METHOD_3_D64FD9A228A1C4E0_3_OFFSET UNITYSDK_OFFSET(0x1329A600)
#define CLASS_3_3A3A95CA33F5CFBC_METHOD_3_D64FD9A228A1C4E0_OFFSET UNITYSDK_OFFSET(0x13298A00)
#define CLASS_3_3A3A95CA33F5CFBC_METHOD_3_EAD9091329518CE0_OFFSET UNITYSDK_OFFSET(0x132987E0)
#define CLASS_3_3A3A95CA33F5CFBC_METHOD_3_ED6D25CEB7036748_OFFSET UNITYSDK_OFFSET(0x132983D0)
#define CLASS_3_3A3A95CA33F5CFBC_METHOD_3_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x13299C70)
#define CLASS_3_3A3A95CA33F5CFBC_METHOD_3_F9E939D4E9AAE0E2_OFFSET UNITYSDK_OFFSET(0x13299370)
#define CLASS_3_3A3A95CA33F5CFBC_METHOD_3_FC5102551AF3CB1A_OFFSET UNITYSDK_OFFSET(0x1329A410)
#define CLASS_3_3A3A95CA33F5CFBC_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x13297A30)
#define CLASS_3_3A3A95CA33F5CFBC__CCTOR_OFFSET UNITYSDK_OFFSET(0x132980E0)
#define CLASS_3_3A3A95CA33F5CFBC__CTOR_OFFSET UNITYSDK_OFFSET(0x13298160)

inline static constexpr unsigned int Class_3_3A3A95CA33F5CFBC_TypeDefinitionIndex = 72066;

class Class_3_3A3A95CA33F5CFBC : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::String* Field_3_33; // 0x0
	// static const ::System::Int32 Field_3_44 = 0x15; // 0x0
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::DamageElementType, ::System::Int32>* Field_3_12; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_3_42; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_3_37; // 0x58
	::System::String* Field_3_22; // 0x60
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::AidAttackType, ::System::Int32>* Field_3_19; // 0x68
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::InlevelCameraState, ::System::Single>* Field_3_10; // 0x70
	::System::Collections::Generic::List_1<::Struct_2_5887222B9AE38D34>* Field_3_38; // 0x78
	::System::Collections::Generic::List_1<::Struct_2_F2A7939F5DFF18C1_4>* Field_3_35; // 0x80
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_3_43; // 0x88
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::DamageElementType, ::System::Int32>* Field_3_13; // 0x90
	::System::Collections::Generic::List_1<::Struct_2_616C3DBF123B7844>* Field_3_36; // 0x98
	::Class_2_208CC9941471731A_484* Field_3_2; // 0xA0
	::MoleMole::SkillCharacterScriptConfig* Field_3_3; // 0xA8
	::Class_0_16E4307DCC419505_386* Field_3_1; // 0xB0
	::System::Collections::Generic::List_1<::System::String*>* Field_3_6; // 0xB8
	::Class_1_4F79B92612697C26* Field_3_7; // 0xC0
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::AidAttackType, ::System::Single>* Field_3_20; // 0xC8
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_4F79B92612697C26*>* Field_3_8; // 0xD0
	::System::Collections::Generic::List_1<::System::String*>* Field_3_9; // 0xD8
	::System::Collections::Generic::Dictionary_2<::MoleMole::Config::AidAttackType, ::MoleMole::Config::ConfigPosRot*>* Field_3_18; // 0xE0
	::System::Collections::Generic::List_1<::Struct_2_23357730042A2DE8_1>* Field_3_32; // 0xE8
	::Class_2_0206DD479BB5C906* Field_3_5; // 0xF0
	::System::Single Field_3_27; // 0xF8
	::System::Int32 Field_3_17; // 0xFC
	::System::Int32 Field_3_14; // 0x100
	::System::Int32 Field_3_16; // 0x104
	::System::Single Field_3_30; // 0x108
	::Enum_3_45DCCA85C18A63B1 Field_3_11; // 0x10C
	::System::Boolean Field_3_34; // 0x110
	::System::Boolean Field_3_23; // 0x111
	::System::Boolean Field_3_40; // 0x112
	::System::Boolean Field_3_39; // 0x113
	::System::Single Field_3_29; // 0x114
	::System::Boolean Field_3_24; // 0x118
	::System::Boolean Field_3_25; // 0x119
	::System::Single Field_3_28; // 0x11C
	::System::Int32 Field_3_15; // 0x120
	::MoleMole::Config::EntityType Field_3_0; // 0x124
	::System::Boolean Field_3_4; // 0x128
	::System::Boolean Field_3_26; // 0x129
	::System::Boolean Field_3_21; // 0x12A
	::System::Boolean Field_3_41; // 0x12B
	::System::Single Field_3_31; // 0x12C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_3A3A95CA33F5CFBC__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3A3A95CA33F5CFBC__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3A3A95CA33F5CFBC_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3A3A95CA33F5CFBC_GETCLASSID_OFFSET))(this);
	}

	::MoleMole::Config::InlevelCameraState Method_3_ED6D25CEB7036748()
	{
		return ((::MoleMole::Config::InlevelCameraState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3A3A95CA33F5CFBC_METHOD_3_ED6D25CEB7036748_OFFSET))(this);
	}

	::System::Single Method_3_9D5BEBE295BE65D4()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3A3A95CA33F5CFBC_METHOD_3_9D5BEBE295BE65D4_OFFSET))(this);
	}

	static ::Class_3_3A3A95CA33F5CFBC* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_3A3A95CA33F5CFBC*(*)())((::PBYTE)hIl2Cpp + CLASS_3_3A3A95CA33F5CFBC_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Void Method_3_EAD9091329518CE0(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_3A3A95CA33F5CFBC_METHOD_3_EAD9091329518CE0_OFFSET))(this, a1);
	}

	::System::Single Method_3_D64FD9A228A1C4E0()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3A3A95CA33F5CFBC_METHOD_3_D64FD9A228A1C4E0_OFFSET))(this);
	}

	::System::Void Method_3_507D2B352842C7E4(::Class_0_16E4307DCC419505_386* a1, ::MoleMole::SkillCharacterScriptConfig* a2, ::System::Boolean a3, ::Class_2_208CC9941471731A_484* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_386*, ::MoleMole::SkillCharacterScriptConfig*, ::System::Boolean, ::Class_2_208CC9941471731A_484*))((::PBYTE)hIl2Cpp + CLASS_3_3A3A95CA33F5CFBC_METHOD_3_507D2B352842C7E4_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_3_A6CE5DAA2387E1E2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3A3A95CA33F5CFBC_METHOD_3_A6CE5DAA2387E1E2_OFFSET))(this);
	}

	::System::Boolean Method_3_49964A8388055B4B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3A3A95CA33F5CFBC_METHOD_3_49964A8388055B4B_OFFSET))(this);
	}

	::System::Void Method_3_CAAAA03D9552FCE2(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_3A3A95CA33F5CFBC_METHOD_3_CAAAA03D9552FCE2_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3A3A95CA33F5CFBC_METHOD_3_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Single Method_3_D64FD9A228A1C4E0_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3A3A95CA33F5CFBC_METHOD_3_D64FD9A228A1C4E0_1_OFFSET))(this);
	}

	::System::Single Method_3_D64FD9A228A1C4E0_2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3A3A95CA33F5CFBC_METHOD_3_D64FD9A228A1C4E0_2_OFFSET))(this);
	}

	::System::Boolean Method_3_37C38CE14588C02B(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_3A3A95CA33F5CFBC_METHOD_3_37C38CE14588C02B_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3A3A95CA33F5CFBC_METHOD_3_F0E307B84478A272_OFFSET))(this);
	}

	::System::Single Method_3_FC5102551AF3CB1A()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3A3A95CA33F5CFBC_METHOD_3_FC5102551AF3CB1A_OFFSET))(this);
	}

	::System::Single Method_3_D64FD9A228A1C4E0_3()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3A3A95CA33F5CFBC_METHOD_3_D64FD9A228A1C4E0_3_OFFSET))(this);
	}

	::System::Void Method_3_F9E939D4E9AAE0E2(::Class_2_208CC9941471731A_1037* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_1037*))((::PBYTE)hIl2Cpp + CLASS_3_3A3A95CA33F5CFBC_METHOD_3_F9E939D4E9AAE0E2_OFFSET))(this, a1);
	}

	::System::Void Method_3_6CAA7A4328C9EF2F(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_3A3A95CA33F5CFBC_METHOD_3_6CAA7A4328C9EF2F_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3A3A95CA33F5CFBC_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Boolean Method_3_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3A3A95CA33F5CFBC_METHOD_3_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3A3A95CA33F5CFBC_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
