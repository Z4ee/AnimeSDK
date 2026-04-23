#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_8F4CDCCAACC4B733.h"
#include "unitysdk/Class_3_2F246A045AA9B5FF_Struct_2_04B6CBF5144CA7A5.h"
#include "unitysdk/Class_3_2F246A045AA9B5FF_Struct_2_5964903CF97AE085.h"
#include "unitysdk/Class_3_2F246A045AA9B5FF_Struct_2_AFED36C695DAE616.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/BattleModeState.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_E05E7A6D9DE9138B;
class Class_2_718A51E22CB71EC4;
class Class_2_CE3CDAB9AE02936C;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RtDefenceUnitRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Sprite; }

#define CLASS_3_2F246A045AA9B5FF_METHOD_3_00DEF5A164D9A9D5_OFFSET UNITYSDK_OFFSET(0x12895B50)
#define CLASS_3_2F246A045AA9B5FF_METHOD_3_028DBF47369183CD_OFFSET UNITYSDK_OFFSET(0x12893AE0)
#define CLASS_3_2F246A045AA9B5FF_METHOD_3_106B52AA261DEDE0_OFFSET UNITYSDK_OFFSET(0x12897BB0)
#define CLASS_3_2F246A045AA9B5FF_METHOD_3_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x128937E0)
#define CLASS_3_2F246A045AA9B5FF_METHOD_3_19FB5FBEA9EA66CD_OFFSET UNITYSDK_OFFSET(0x12896240)
#define CLASS_3_2F246A045AA9B5FF_METHOD_3_1BDA44DCD96B4AC6_OFFSET UNITYSDK_OFFSET(0x128974F0)
#define CLASS_3_2F246A045AA9B5FF_METHOD_3_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x128960C0)
#define CLASS_3_2F246A045AA9B5FF_METHOD_3_51D25B2D4380C816_OFFSET UNITYSDK_OFFSET(0x12897DF0)
#define CLASS_3_2F246A045AA9B5FF_METHOD_3_5A5213F2B4CE8066_OFFSET UNITYSDK_OFFSET(0x12896960)
#define CLASS_3_2F246A045AA9B5FF_METHOD_3_7443AD94E7275ABA_OFFSET UNITYSDK_OFFSET(0x12893910)
#define CLASS_3_2F246A045AA9B5FF_METHOD_3_866BE3C21583A26C_OFFSET UNITYSDK_OFFSET(0x12893D10)
#define CLASS_3_2F246A045AA9B5FF_METHOD_3_8F2C9C3A2496EDD2_OFFSET UNITYSDK_OFFSET(0x12897CA0)
#define CLASS_3_2F246A045AA9B5FF_METHOD_3_96189EDEF38976A6_OFFSET UNITYSDK_OFFSET(0x12894590)
#define CLASS_3_2F246A045AA9B5FF_METHOD_3_9AB55F553C4AC6E8_OFFSET UNITYSDK_OFFSET(0x12893F20)
#define CLASS_3_2F246A045AA9B5FF_METHOD_3_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x12894D30)
#define CLASS_3_2F246A045AA9B5FF_METHOD_3_A67FA08E342D22C3_OFFSET UNITYSDK_OFFSET(0x128936E0)
#define CLASS_3_2F246A045AA9B5FF_METHOD_3_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x12897820)
#define CLASS_3_2F246A045AA9B5FF_METHOD_3_B43C848B078B3C34_OFFSET UNITYSDK_OFFSET(0x12894F60)
#define CLASS_3_2F246A045AA9B5FF_METHOD_3_B64697FCA22C8487_OFFSET UNITYSDK_OFFSET(0x12898150)
#define CLASS_3_2F246A045AA9B5FF_METHOD_3_C4F4D1BB18DEE9A4_OFFSET UNITYSDK_OFFSET(0x12897A70)
#define CLASS_3_2F246A045AA9B5FF_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12896920)
#define CLASS_3_2F246A045AA9B5FF_ONGUI_OFFSET UNITYSDK_OFFSET(0x12893EA0)
#define CLASS_3_2F246A045AA9B5FF__CTOR_OFFSET UNITYSDK_OFFSET(0x12898310)
#define CLASS_3_2F246A045AA9B5FF___IFIXBASEPROXY_ONGUI_OFFSET UNITYSDK_OFFSET(0x12898960)

inline static constexpr unsigned int Class_3_2F246A045AA9B5FF_TypeDefinitionIndex = 67476;

class Class_3_2F246A045AA9B5FF : public ::Class_2_8F4CDCCAACC4B733
{
public:
	::Class_1_E05E7A6D9DE9138B* Field_3_13; // 0x48
	::System::Collections::Generic::List_1<::Class_3_2F246A045AA9B5FF_Struct_2_AFED36C695DAE616>* Field_3_4; // 0x50
	::Class_2_CE3CDAB9AE02936C* Field_3_8; // 0x58
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::UnityEngine::Sprite*>* Field_3_12; // 0x60
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::RPG::Client::TextID>* Field_3_7; // 0x68
	::System::Collections::Generic::List_1<::Class_3_2F246A045AA9B5FF_Struct_2_04B6CBF5144CA7A5>* Field_3_11; // 0x70
	::Class_2_718A51E22CB71EC4* Field_3_9; // 0x78
	::System::Collections::Generic::List_1<::Class_3_2F246A045AA9B5FF_Struct_2_5964903CF97AE085>* Field_3_10; // 0x80
	::RPG::GameCore::GameEntity* Field_3_3; // 0x88
	::Il2CppArray<::System::UInt32>* Field_3_6; // 0x90
	::System::UInt32 Field_3_1; // 0x98
	::System::Boolean Field_3_5; // 0x9C
	::System::UInt32 Field_3_2; // 0xA0
	::UnityEngine::Vector2 Field_3_0; // 0xA4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2F246A045AA9B5FF__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_A67FA08E342D22C3(::Class_2_CE3CDAB9AE02936C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_CE3CDAB9AE02936C*))((::PBYTE)hIl2Cpp + CLASS_3_2F246A045AA9B5FF_METHOD_3_A67FA08E342D22C3_OFFSET))(this, a1);
	}

	::System::Void Method_3_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2F246A045AA9B5FF_METHOD_3_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_3_028DBF47369183CD(::RPG::GameCore::BattleModeState a1, ::RPG::GameCore::BattleModeState a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleModeState, ::RPG::GameCore::BattleModeState))((::PBYTE)hIl2Cpp + CLASS_3_2F246A045AA9B5FF_METHOD_3_028DBF47369183CD_OFFSET))(this, a1, a2);
	}

	::System::Void OnGUI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2F246A045AA9B5FF_ONGUI_OFFSET))(this);
	}

	::System::Void Method_3_9AB55F553C4AC6E8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2F246A045AA9B5FF_METHOD_3_9AB55F553C4AC6E8_OFFSET))(this);
	}

	::System::Void Method_3_19FB5FBEA9EA66CD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2F246A045AA9B5FF_METHOD_3_19FB5FBEA9EA66CD_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2F246A045AA9B5FF_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_3_5A5213F2B4CE8066(::UnityEngine::Rect a1, ::RPG::GameCore::RtDefenceUnitRow* a2, ::UnityEngine::Color a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rect, ::RPG::GameCore::RtDefenceUnitRow*, ::UnityEngine::Color, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_2F246A045AA9B5FF_METHOD_3_5A5213F2B4CE8066_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_1BDA44DCD96B4AC6(::UnityEngine::Rect a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_2F246A045AA9B5FF_METHOD_3_1BDA44DCD96B4AC6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_B43C848B078B3C34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2F246A045AA9B5FF_METHOD_3_B43C848B078B3C34_OFFSET))(this);
	}

	::System::Void Method_3_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2F246A045AA9B5FF_METHOD_3_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_3_866BE3C21583A26C(::System::String* a1, ::UnityEngine::Color a2, ::System::Single a3, ::UnityEngine::Vector2 a4, ::UnityEngine::Vector2 a5, ::UnityEngine::Vector2 a6, ::UnityEngine::Vector2 a7, ::System::Single a8, ::System::Single a9)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Color, ::System::Single, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_2F246A045AA9B5FF_METHOD_3_866BE3C21583A26C_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_3_00DEF5A164D9A9D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2F246A045AA9B5FF_METHOD_3_00DEF5A164D9A9D5_OFFSET))(this);
	}

	::System::Void Method_3_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2F246A045AA9B5FF_METHOD_3_A1ADC999CFACEB89_OFFSET))(this);
	}

	::System::Void Method_3_96189EDEF38976A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2F246A045AA9B5FF_METHOD_3_96189EDEF38976A6_OFFSET))(this);
	}

	::System::Void Method_3_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2F246A045AA9B5FF_METHOD_3_AA169839CB93802A_OFFSET))(this);
	}

	::System::String* Method_3_C4F4D1BB18DEE9A4(::RPG::GameCore::AvatarBaseType a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AvatarBaseType))((::PBYTE)hIl2Cpp + CLASS_3_2F246A045AA9B5FF_METHOD_3_C4F4D1BB18DEE9A4_OFFSET))(this, a1);
	}

	::UnityEngine::Color Method_3_106B52AA261DEDE0(::RPG::GameCore::AttackDamageType a1)
	{
		return ((::UnityEngine::Color(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_3_2F246A045AA9B5FF_METHOD_3_106B52AA261DEDE0_OFFSET))(this, a1);
	}

	::System::String* Method_3_8F2C9C3A2496EDD2(::RPG::GameCore::AttackDamageType a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_3_2F246A045AA9B5FF_METHOD_3_8F2C9C3A2496EDD2_OFFSET))(this, a1);
	}

	::System::Void Method_3_51D25B2D4380C816(::UnityEngine::Rect a1, ::UnityEngine::Sprite* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + CLASS_3_2F246A045AA9B5FF_METHOD_3_51D25B2D4380C816_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Sprite* Method_3_B64697FCA22C8487(::RPG::GameCore::AttackDamageType a1)
	{
		return ((::UnityEngine::Sprite*(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_3_2F246A045AA9B5FF_METHOD_3_B64697FCA22C8487_OFFSET))(this, a1);
	}

	::System::Void Method_3_7443AD94E7275ABA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2F246A045AA9B5FF_METHOD_3_7443AD94E7275ABA_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnGUI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2F246A045AA9B5FF___IFIXBASEPROXY_ONGUI_OFFSET))(this);
	}
};
