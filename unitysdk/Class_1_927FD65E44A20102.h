#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_927FD65E44A20102_Enum_3_58B12CFBA77A1702.h"
#include "unitysdk/Class_2_CE524E0BB2F7DB94_Enum_3_A982ABB36633F4BE.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_0_16E4307DCC419505_516;
class Class_2_CA67A9CEB871FFD3;
class Class_2_CE524E0BB2F7DB94;
namespace MoleMole { class TextureSheetData; }
namespace MoleMole { class TextureSheetLoopFrame; }
namespace MoleMole { class TextureSheetSkipFrameParam; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::UI { class RawImage; }

#define CLASS_1_927FD65E44A20102_METHOD_1_00EA38007E41B7DC_OFFSET UNITYSDK_OFFSET(0x13A13E30)
#define CLASS_1_927FD65E44A20102_METHOD_1_03B6C7E5DCDBEE1A_OFFSET UNITYSDK_OFFSET(0x13A15060)
#define CLASS_1_927FD65E44A20102_METHOD_1_044ADDEF50CCDA78_OFFSET UNITYSDK_OFFSET(0x13A14670)
#define CLASS_1_927FD65E44A20102_METHOD_1_0CF86B1A0D6775B2_OFFSET UNITYSDK_OFFSET(0x13A15BD0)
#define CLASS_1_927FD65E44A20102_METHOD_1_0E25E7D623425226_OFFSET UNITYSDK_OFFSET(0x13A153D0)
#define CLASS_1_927FD65E44A20102_METHOD_1_10FB26BCCEC382A9_OFFSET UNITYSDK_OFFSET(0x13A14C10)
#define CLASS_1_927FD65E44A20102_METHOD_1_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x13A14770)
#define CLASS_1_927FD65E44A20102_METHOD_1_1BD63EC50F3374F5_OFFSET UNITYSDK_OFFSET(0x13A15CF0)
#define CLASS_1_927FD65E44A20102_METHOD_1_29233D60F5F7BAAB_OFFSET UNITYSDK_OFFSET(0x13A15DD0)
#define CLASS_1_927FD65E44A20102_METHOD_1_2ACF2A61FB239D23_OFFSET UNITYSDK_OFFSET(0x13A161B0)
#define CLASS_1_927FD65E44A20102_METHOD_1_2BC63F0B237B0804_OFFSET UNITYSDK_OFFSET(0x13A141B0)
#define CLASS_1_927FD65E44A20102_METHOD_1_2F5777144CCF937C_OFFSET UNITYSDK_OFFSET(0x13A160F0)
#define CLASS_1_927FD65E44A20102_METHOD_1_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x13A14F40)
#define CLASS_1_927FD65E44A20102_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x13A15670)
#define CLASS_1_927FD65E44A20102_METHOD_1_43A46E5F9FAC62B8_OFFSET UNITYSDK_OFFSET(0x13A161C0)
#define CLASS_1_927FD65E44A20102_METHOD_1_44B377A038B9D2F3_OFFSET UNITYSDK_OFFSET(0x13A15F70)
#define CLASS_1_927FD65E44A20102_METHOD_1_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x13A14EF0)
#define CLASS_1_927FD65E44A20102_METHOD_1_6444EC585FF34548_OFFSET UNITYSDK_OFFSET(0x13A15AF0)
#define CLASS_1_927FD65E44A20102_METHOD_1_721755941E36FB08_OFFSET UNITYSDK_OFFSET(0x13A15E50)
#define CLASS_1_927FD65E44A20102_METHOD_1_78037B64B814568E_OFFSET UNITYSDK_OFFSET(0x13A15750)
#define CLASS_1_927FD65E44A20102_METHOD_1_988BFD308A49965D_OFFSET UNITYSDK_OFFSET(0x13A15740)
#define CLASS_1_927FD65E44A20102_METHOD_1_9A34582197D203A0_OFFSET UNITYSDK_OFFSET(0x13A160E0)
#define CLASS_1_927FD65E44A20102_METHOD_1_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x13A13AA0)
#define CLASS_1_927FD65E44A20102_METHOD_1_AC3009196FFE7496_1_OFFSET UNITYSDK_OFFSET(0x13A15C20)
#define CLASS_1_927FD65E44A20102_METHOD_1_AC3009196FFE7496_2_OFFSET UNITYSDK_OFFSET(0x13A15DE0)
#define CLASS_1_927FD65E44A20102_METHOD_1_AC3009196FFE7496_OFFSET UNITYSDK_OFFSET(0x13A156D0)
#define CLASS_1_927FD65E44A20102_METHOD_1_B3CBC181390C9CD1_OFFSET UNITYSDK_OFFSET(0x13A161D0)
#define CLASS_1_927FD65E44A20102_METHOD_1_C0BD9E87C171A9E0_OFFSET UNITYSDK_OFFSET(0x13A146E0)
#define CLASS_1_927FD65E44A20102_METHOD_1_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x13A15B50)
#define CLASS_1_927FD65E44A20102_METHOD_1_CC9C9A9047B24E05_OFFSET UNITYSDK_OFFSET(0x13A15C90)
#define CLASS_1_927FD65E44A20102_METHOD_1_D30A71AA7084EA04_OFFSET UNITYSDK_OFFSET(0x13A148C0)
#define CLASS_1_927FD65E44A20102_METHOD_1_E8006AF8E860CF21_OFFSET UNITYSDK_OFFSET(0x13A154F0)
#define CLASS_1_927FD65E44A20102__CCTOR_OFFSET UNITYSDK_OFFSET(0x13A14FA0)
#define CLASS_1_927FD65E44A20102__CTOR_1_OFFSET UNITYSDK_OFFSET(0x13A13BE0)
#define CLASS_1_927FD65E44A20102__CTOR_2_OFFSET UNITYSDK_OFFSET(0x13A13D20)
#define CLASS_1_927FD65E44A20102__CTOR_OFFSET UNITYSDK_OFFSET(0x13A13970)

inline static constexpr unsigned int Class_1_927FD65E44A20102_TypeDefinitionIndex = 54935;

class Class_1_927FD65E44A20102 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_Field_1_12()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_927FD65E44A20102_TypeDefinitionIndex)->GetStaticField(0x3FA10);
	}
	static ::System::Int32* StaticGet_Field_1_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_927FD65E44A20102_TypeDefinitionIndex)->GetStaticField(0xF4F0);
	}
	static ::System::Int32* StaticGet_Field_1_6()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_927FD65E44A20102_TypeDefinitionIndex)->GetStaticField(0xF4F4);
	}
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_7; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_8; // 0x18
	::UnityEngine::Texture2D* Field_1_9; // 0x20
	::Class_2_CE524E0BB2F7DB94* Field_1_2; // 0x28
	::UnityEngine::Material* Field_1_3; // 0x30
	::System::Action* Field_1_0; // 0x38
	::UnityEngine::UI::RawImage* Field_1_4; // 0x40
	::System::Single Field_1_10; // 0x48
	::System::Int32 Field_1_13; // 0x4C
	::Class_1_927FD65E44A20102_Enum_3_58B12CFBA77A1702 Field_1_11; // 0x50
	::System::Boolean Field_1_1; // 0x51
	::System::Int32 Field_1_14; // 0x54

	::System::Void _ctor(::UnityEngine::Material* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_927FD65E44A20102__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void _ctor_1(::UnityEngine::Material* a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_927FD65E44A20102__CTOR_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ctor_2(::Class_2_CA67A9CEB871FFD3* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_CA67A9CEB871FFD3*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_927FD65E44A20102__CTOR_2_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_927FD65E44A20102__CCTOR_OFFSET))();
	}

	::System::Void Method_1_00EA38007E41B7DC(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::String* a7, ::System::Boolean a8, ::System::Boolean a9, ::System::Int32 a10, ::System::Int32 a11, ::System::Collections::Generic::List_1<::MoleMole::TextureSheetLoopFrame*>* a12, ::System::Boolean a13, ::System::Single a14, ::System::Single a15, ::MoleMole::TextureSheetSkipFrameParam* a16, ::System::Int32 a17)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::TextureSheetLoopFrame*>*, ::System::Boolean, ::System::Single, ::System::Single, ::MoleMole::TextureSheetSkipFrameParam*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_927FD65E44A20102_METHOD_1_00EA38007E41B7DC_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
	}

	::System::Void Method_1_044ADDEF50CCDA78(::UnityEngine::Events::UnityAction* a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_927FD65E44A20102_METHOD_1_044ADDEF50CCDA78_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_C0BD9E87C171A9E0(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_927FD65E44A20102_METHOD_1_C0BD9E87C171A9E0_OFFSET))(this, a1);
	}

	::System::Void Method_1_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_927FD65E44A20102_METHOD_1_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void Method_1_03B6C7E5DCDBEE1A(::UnityEngine::Texture2D* a1, ::MoleMole::TextureSheetData* a2, ::System::Boolean a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*, ::MoleMole::TextureSheetData*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_927FD65E44A20102_METHOD_1_03B6C7E5DCDBEE1A_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_10FB26BCCEC382A9(::UnityEngine::Vector4 a1, ::UnityEngine::Material* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_1_927FD65E44A20102_METHOD_1_10FB26BCCEC382A9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_927FD65E44A20102_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_AC3009196FFE7496(::UnityEngine::Events::UnityAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + CLASS_1_927FD65E44A20102_METHOD_1_AC3009196FFE7496_OFFSET))(this, a1);
	}

	::System::Void Method_1_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_927FD65E44A20102_METHOD_1_AAD864A9DF964170_OFFSET))(this);
	}

	::UnityEngine::Material* Method_1_988BFD308A49965D()
	{
		return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_927FD65E44A20102_METHOD_1_988BFD308A49965D_OFFSET))(this);
	}

	::System::Void Method_1_78037B64B814568E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_927FD65E44A20102_METHOD_1_78037B64B814568E_OFFSET))(this);
	}

	::Class_2_CE524E0BB2F7DB94_Enum_3_A982ABB36633F4BE Method_1_6444EC585FF34548()
	{
		return ((::Class_2_CE524E0BB2F7DB94_Enum_3_A982ABB36633F4BE(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_927FD65E44A20102_METHOD_1_6444EC585FF34548_OFFSET))(this);
	}

	::System::Void Method_1_0E25E7D623425226(::System::Single a1, ::UnityEngine::Material* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + CLASS_1_927FD65E44A20102_METHOD_1_0E25E7D623425226_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_0CF86B1A0D6775B2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_927FD65E44A20102_METHOD_1_0CF86B1A0D6775B2_OFFSET))(this);
	}

	::System::Void Method_1_2BC63F0B237B0804(::UnityEngine::Texture2D* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::String* a7, ::System::Boolean a8, ::System::Boolean a9, ::System::Boolean a10, ::System::Collections::Generic::List_1<::MoleMole::TextureSheetLoopFrame*>* a11, ::System::Single a12, ::System::Single a13, ::MoleMole::TextureSheetSkipFrameParam* a14)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Collections::Generic::List_1<::MoleMole::TextureSheetLoopFrame*>*, ::System::Single, ::System::Single, ::MoleMole::TextureSheetSkipFrameParam*))((::PBYTE)hIl2Cpp + CLASS_1_927FD65E44A20102_METHOD_1_2BC63F0B237B0804_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
	}

	::System::Void Method_1_E8006AF8E860CF21(::UnityEngine::Vector4 a1, ::UnityEngine::UI::RawImage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4, ::UnityEngine::UI::RawImage*))((::PBYTE)hIl2Cpp + CLASS_1_927FD65E44A20102_METHOD_1_E8006AF8E860CF21_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_927FD65E44A20102_METHOD_1_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Void Method_1_AC3009196FFE7496_1(::UnityEngine::Events::UnityAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + CLASS_1_927FD65E44A20102_METHOD_1_AC3009196FFE7496_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_CC9C9A9047B24E05(::Class_0_16E4307DCC419505_516* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_516*))((::PBYTE)hIl2Cpp + CLASS_1_927FD65E44A20102_METHOD_1_CC9C9A9047B24E05_OFFSET))(this, a1);
	}

	::System::Void Method_1_1BD63EC50F3374F5(::System::Single a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_927FD65E44A20102_METHOD_1_1BD63EC50F3374F5_OFFSET))(this, a1, a2);
	}

	::UnityEngine::UI::RawImage* Method_1_29233D60F5F7BAAB()
	{
		return ((::UnityEngine::UI::RawImage*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_927FD65E44A20102_METHOD_1_29233D60F5F7BAAB_OFFSET))(this);
	}

	::System::Void Method_1_AC3009196FFE7496_2(::UnityEngine::Events::UnityAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + CLASS_1_927FD65E44A20102_METHOD_1_AC3009196FFE7496_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_721755941E36FB08(::System::Single a1, ::UnityEngine::UI::RawImage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::UI::RawImage*))((::PBYTE)hIl2Cpp + CLASS_1_927FD65E44A20102_METHOD_1_721755941E36FB08_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_44B377A038B9D2F3(::System::Single a1, ::UnityEngine::Material* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Material*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_927FD65E44A20102_METHOD_1_44B377A038B9D2F3_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Texture2D* Method_1_9A34582197D203A0()
	{
		return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_927FD65E44A20102_METHOD_1_9A34582197D203A0_OFFSET))(this);
	}

	::System::Void Method_1_2F5777144CCF937C(::UnityEngine::Events::UnityAction* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + CLASS_1_927FD65E44A20102_METHOD_1_2F5777144CCF937C_OFFSET))(this, a1);
	}

	::Class_1_927FD65E44A20102_Enum_3_58B12CFBA77A1702 Method_1_2ACF2A61FB239D23()
	{
		return ((::Class_1_927FD65E44A20102_Enum_3_58B12CFBA77A1702(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_927FD65E44A20102_METHOD_1_2ACF2A61FB239D23_OFFSET))(this);
	}

	::Class_2_CE524E0BB2F7DB94* Method_1_43A46E5F9FAC62B8()
	{
		return ((::Class_2_CE524E0BB2F7DB94*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_927FD65E44A20102_METHOD_1_43A46E5F9FAC62B8_OFFSET))(this);
	}

	::System::Void Method_1_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_927FD65E44A20102_METHOD_1_56CE4AFC5339F746_OFFSET))(this);
	}

	::System::Void Method_1_B3CBC181390C9CD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_927FD65E44A20102_METHOD_1_B3CBC181390C9CD1_OFFSET))(this);
	}

	::System::Void Method_1_D30A71AA7084EA04(::UnityEngine::Texture2D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + CLASS_1_927FD65E44A20102_METHOD_1_D30A71AA7084EA04_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA6BDDCC5F7CE11E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_927FD65E44A20102_METHOD_1_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
	}
};
