#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesDialogStyleType.h"
#include "unitysdk/RPG/GameCore/ChenLingFesProperty.h"
#include "unitysdk/Struct_2_511C221C8C61EF49.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_9E452112C875A714_METHOD_1_11A077281D26C844_OFFSET UNITYSDK_OFFSET(0x17570D10)
#define CLASS_1_9E452112C875A714_METHOD_1_209CF9E0DC3E1AEE_OFFSET UNITYSDK_OFFSET(0x175715F0)
#define CLASS_1_9E452112C875A714_METHOD_1_22F4DB58A257230D_OFFSET UNITYSDK_OFFSET(0x17571850)
#define CLASS_1_9E452112C875A714_METHOD_1_31B20697021C707C_OFFSET UNITYSDK_OFFSET(0x17571A40)
#define CLASS_1_9E452112C875A714_METHOD_1_B31100A5E82D8C54_OFFSET UNITYSDK_OFFSET(0x175712C0)
#define CLASS_1_9E452112C875A714_METHOD_1_BC08B0A73804132F_OFFSET UNITYSDK_OFFSET(0x17570FB0)
#define CLASS_1_9E452112C875A714_METHOD_1_C0B2C621E6246D8A_OFFSET UNITYSDK_OFFSET(0x17571B70)
#define CLASS_1_9E452112C875A714_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17570DC0)
#define CLASS_1_9E452112C875A714_METHOD_1_D8BEE25C97B3F2EB_OFFSET UNITYSDK_OFFSET(0x17571990)
#define CLASS_1_9E452112C875A714_METHOD_1_EE4FCE5117125408_OFFSET UNITYSDK_OFFSET(0x17570E40)
#define CLASS_1_9E452112C875A714__CTOR_OFFSET UNITYSDK_OFFSET(0x17571C50)

inline static constexpr unsigned int Class_1_9E452112C875A714_TypeDefinitionIndex = 41112;

class Class_1_9E452112C875A714 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChenLingFesDialogStyleType, ::Struct_2_511C221C8C61EF49>* Field_1_2; // 0x20
	::System::String* Field_1_3; // 0x28
	::RPG::GameCore::ChenLingFesProperty Field_1_4; // 0x30
	::RPG::GameCore::ChenLingFesDialogStyleType Field_1_5; // 0x34
	::RPG::GameCore::ChenLingFesDialogStyleType Field_1_6; // 0x38
	::RPG::GameCore::ChenLingFesDialogStyleType Field_1_7; // 0x3C
	::System::Boolean Field_1_8; // 0x40
	::System::Boolean Field_1_9; // 0x41
	::System::Single Field_1_10; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E452112C875A714__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_11A077281D26C844(::RPG::GameCore::ChenLingFesDialogStyleType a1, ::Struct_2_511C221C8C61EF49 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingFesDialogStyleType, ::Struct_2_511C221C8C61EF49))((::PBYTE)hIl2Cpp + CLASS_1_9E452112C875A714_METHOD_1_11A077281D26C844_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E452112C875A714_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_EE4FCE5117125408(::RPG::GameCore::ChenLingFesDialogStyleType a1, ::Struct_2_511C221C8C61EF49 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingFesDialogStyleType, ::Struct_2_511C221C8C61EF49))((::PBYTE)hIl2Cpp + CLASS_1_9E452112C875A714_METHOD_1_EE4FCE5117125408_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BC08B0A73804132F(::RPG::GameCore::ChenLingFesDialogStyleType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChenLingFesDialogStyleType))((::PBYTE)hIl2Cpp + CLASS_1_9E452112C875A714_METHOD_1_BC08B0A73804132F_OFFSET))(this, a1);
	}

	::System::Void Method_1_B31100A5E82D8C54(::System::String* a1, ::System::String* a2, ::System::String* a3, ::RPG::GameCore::ChenLingFesProperty a4, ::System::Single a5, ::RPG::GameCore::ChenLingFesDialogStyleType a6, ::System::Boolean a7, ::System::Boolean a8)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::RPG::GameCore::ChenLingFesProperty, ::System::Single, ::RPG::GameCore::ChenLingFesDialogStyleType, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9E452112C875A714_METHOD_1_B31100A5E82D8C54_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Boolean Method_1_209CF9E0DC3E1AEE(::RPG::GameCore::ChenLingFesDialogStyleType a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChenLingFesDialogStyleType, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9E452112C875A714_METHOD_1_209CF9E0DC3E1AEE_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_22F4DB58A257230D(::RPG::GameCore::ChenLingFesDialogStyleType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChenLingFesDialogStyleType))((::PBYTE)hIl2Cpp + CLASS_1_9E452112C875A714_METHOD_1_22F4DB58A257230D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D8BEE25C97B3F2EB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9E452112C875A714_METHOD_1_D8BEE25C97B3F2EB_OFFSET))(this);
	}

	::System::Boolean Method_1_31B20697021C707C(::RPG::GameCore::ChenLingFesDialogStyleType a1, ::Struct_2_511C221C8C61EF49& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChenLingFesDialogStyleType, ::Struct_2_511C221C8C61EF49&))((::PBYTE)hIl2Cpp + CLASS_1_9E452112C875A714_METHOD_1_31B20697021C707C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_C0B2C621E6246D8A(::RPG::GameCore::ChenLingFesDialogStyleType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ChenLingFesDialogStyleType))((::PBYTE)hIl2Cpp + CLASS_1_9E452112C875A714_METHOD_1_C0B2C621E6246D8A_OFFSET))(this, a1);
	}
};
