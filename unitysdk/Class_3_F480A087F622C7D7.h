#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_D0A42729C2B86D35.h"
#include "unitysdk/Class_3_F480A087F622C7D7_Struct_2_04B6CBF5144CA7A5.h"
#include "unitysdk/Class_3_F480A087F622C7D7_Struct_2_9E8E7FE99BD48FA5.h"
#include "unitysdk/Class_3_F480A087F622C7D7_Struct_2_AFED36C695DAE616.h"
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

#define CLASS_3_F480A087F622C7D7_METHOD_3_028DBF47369183CD_OFFSET UNITYSDK_OFFSET(0x136C9160)
#define CLASS_3_F480A087F622C7D7_METHOD_3_106B52AA261DEDE0_OFFSET UNITYSDK_OFFSET(0x136CD6A0)
#define CLASS_3_F480A087F622C7D7_METHOD_3_1BDA44DCD96B4AC6_OFFSET UNITYSDK_OFFSET(0x136CCFE0)
#define CLASS_3_F480A087F622C7D7_METHOD_3_2566AD459572DFC3_OFFSET UNITYSDK_OFFSET(0x136CB430)
#define CLASS_3_F480A087F622C7D7_METHOD_3_30B62F5CDB9079BD_OFFSET UNITYSDK_OFFSET(0x136C8E70)
#define CLASS_3_F480A087F622C7D7_METHOD_3_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x136CBA40)
#define CLASS_3_F480A087F622C7D7_METHOD_3_33E2FA8E6403B93D_OFFSET UNITYSDK_OFFSET(0x136CA710)
#define CLASS_3_F480A087F622C7D7_METHOD_3_489E0B827662C211_OFFSET UNITYSDK_OFFSET(0x136C9CA0)
#define CLASS_3_F480A087F622C7D7_METHOD_3_51D25B2D4380C816_OFFSET UNITYSDK_OFFSET(0x136CD8D0)
#define CLASS_3_F480A087F622C7D7_METHOD_3_5A5213F2B4CE8066_OFFSET UNITYSDK_OFFSET(0x136CC410)
#define CLASS_3_F480A087F622C7D7_METHOD_3_704FAC4600717444_OFFSET UNITYSDK_OFFSET(0x136CBBC0)
#define CLASS_3_F480A087F622C7D7_METHOD_3_8F2C9C3A2496EDD2_OFFSET UNITYSDK_OFFSET(0x136CD790)
#define CLASS_3_F480A087F622C7D7_METHOD_3_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x136CA4E0)
#define CLASS_3_F480A087F622C7D7_METHOD_3_A67FA08E342D22C3_OFFSET UNITYSDK_OFFSET(0x136C8D50)
#define CLASS_3_F480A087F622C7D7_METHOD_3_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x136CD310)
#define CLASS_3_F480A087F622C7D7_METHOD_3_B64697FCA22C8487_OFFSET UNITYSDK_OFFSET(0x136CDC30)
#define CLASS_3_F480A087F622C7D7_METHOD_3_C4F4D1BB18DEE9A4_OFFSET UNITYSDK_OFFSET(0x136CD560)
#define CLASS_3_F480A087F622C7D7_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x136CC3D0)
#define CLASS_3_F480A087F622C7D7_METHOD_3_E876C8B6D3B840A6_OFFSET UNITYSDK_OFFSET(0x136C9610)
#define CLASS_3_F480A087F622C7D7_METHOD_3_F0B334F84E4C6787_OFFSET UNITYSDK_OFFSET(0x136C9390)
#define CLASS_3_F480A087F622C7D7_METHOD_3_FCB175EE4400634C_OFFSET UNITYSDK_OFFSET(0x136C8FB0)
#define CLASS_3_F480A087F622C7D7_ONGUI_OFFSET UNITYSDK_OFFSET(0x136C9590)
#define CLASS_3_F480A087F622C7D7__CTOR_OFFSET UNITYSDK_OFFSET(0x136CDDF0)
#define CLASS_3_F480A087F622C7D7___IFIXBASEPROXY_ONGUI_OFFSET UNITYSDK_OFFSET(0x136CE430)

inline static constexpr unsigned int Class_3_F480A087F622C7D7_TypeDefinitionIndex = 68428;

class Class_3_F480A087F622C7D7 : public ::Class_2_D0A42729C2B86D35
{
public:
	::System::Collections::Generic::List_1<::Class_3_F480A087F622C7D7_Struct_2_9E8E7FE99BD48FA5>* Field_3_0; // 0x48
	::Class_2_CE3CDAB9AE02936C* Field_3_1; // 0x50
	::Class_1_E05E7A6D9DE9138B* Field_3_2; // 0x58
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::UnityEngine::Sprite*>* Field_3_3; // 0x60
	::Class_2_718A51E22CB71EC4* Field_3_4; // 0x68
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::RPG::Client::TextID>* Field_3_5; // 0x70
	::System::Collections::Generic::List_1<::Class_3_F480A087F622C7D7_Struct_2_AFED36C695DAE616>* Field_3_6; // 0x78
	::RPG::GameCore::GameEntity* Field_3_7; // 0x80
	::Il2CppArray<::System::UInt32>* Field_3_8; // 0x88
	::System::Collections::Generic::List_1<::Class_3_F480A087F622C7D7_Struct_2_04B6CBF5144CA7A5>* Field_3_9; // 0x90
	::System::Boolean Field_3_10; // 0x98
	::UnityEngine::Vector2 Field_3_11; // 0x9C
	::System::UInt32 Field_3_12; // 0xA4
	::System::UInt32 Field_3_13; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F480A087F622C7D7__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_A67FA08E342D22C3(::Class_2_CE3CDAB9AE02936C* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_CE3CDAB9AE02936C*))((::PBYTE)hIl2Cpp + CLASS_3_F480A087F622C7D7_METHOD_3_A67FA08E342D22C3_OFFSET))(this, a1);
	}

	::System::Void Method_3_30B62F5CDB9079BD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F480A087F622C7D7_METHOD_3_30B62F5CDB9079BD_OFFSET))(this);
	}

	::System::Void Method_3_028DBF47369183CD(::RPG::GameCore::BattleModeState a1, ::RPG::GameCore::BattleModeState a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleModeState, ::RPG::GameCore::BattleModeState))((::PBYTE)hIl2Cpp + CLASS_3_F480A087F622C7D7_METHOD_3_028DBF47369183CD_OFFSET))(this, a1, a2);
	}

	::System::Void OnGUI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F480A087F622C7D7_ONGUI_OFFSET))(this);
	}

	::System::Void Method_3_E876C8B6D3B840A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F480A087F622C7D7_METHOD_3_E876C8B6D3B840A6_OFFSET))(this);
	}

	::System::Void Method_3_704FAC4600717444()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F480A087F622C7D7_METHOD_3_704FAC4600717444_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F480A087F622C7D7_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_3_5A5213F2B4CE8066(::UnityEngine::Rect a1, ::RPG::GameCore::RtDefenceUnitRow* a2, ::UnityEngine::Color a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rect, ::RPG::GameCore::RtDefenceUnitRow*, ::UnityEngine::Color, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_F480A087F622C7D7_METHOD_3_5A5213F2B4CE8066_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_1BDA44DCD96B4AC6(::UnityEngine::Rect a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_F480A087F622C7D7_METHOD_3_1BDA44DCD96B4AC6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_33E2FA8E6403B93D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F480A087F622C7D7_METHOD_3_33E2FA8E6403B93D_OFFSET))(this);
	}

	::System::Void Method_3_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F480A087F622C7D7_METHOD_3_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_3_F0B334F84E4C6787(::System::String* a1, ::UnityEngine::Color a2, ::System::Single a3, ::UnityEngine::Vector2 a4, ::UnityEngine::Vector2 a5, ::UnityEngine::Vector2 a6, ::UnityEngine::Vector2 a7, ::System::Single a8, ::System::Single a9)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Color, ::System::Single, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_F480A087F622C7D7_METHOD_3_F0B334F84E4C6787_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_3_2566AD459572DFC3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F480A087F622C7D7_METHOD_3_2566AD459572DFC3_OFFSET))(this);
	}

	::System::Void Method_3_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F480A087F622C7D7_METHOD_3_A1ADC999CFACEB89_OFFSET))(this);
	}

	::System::Void Method_3_489E0B827662C211()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F480A087F622C7D7_METHOD_3_489E0B827662C211_OFFSET))(this);
	}

	::System::Void Method_3_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F480A087F622C7D7_METHOD_3_AA169839CB93802A_OFFSET))(this);
	}

	::System::String* Method_3_C4F4D1BB18DEE9A4(::RPG::GameCore::AvatarBaseType a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AvatarBaseType))((::PBYTE)hIl2Cpp + CLASS_3_F480A087F622C7D7_METHOD_3_C4F4D1BB18DEE9A4_OFFSET))(this, a1);
	}

	::UnityEngine::Color Method_3_106B52AA261DEDE0(::RPG::GameCore::AttackDamageType a1)
	{
		return ((::UnityEngine::Color(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_3_F480A087F622C7D7_METHOD_3_106B52AA261DEDE0_OFFSET))(this, a1);
	}

	::System::String* Method_3_8F2C9C3A2496EDD2(::RPG::GameCore::AttackDamageType a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_3_F480A087F622C7D7_METHOD_3_8F2C9C3A2496EDD2_OFFSET))(this, a1);
	}

	::System::Void Method_3_51D25B2D4380C816(::UnityEngine::Rect a1, ::UnityEngine::Sprite* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + CLASS_3_F480A087F622C7D7_METHOD_3_51D25B2D4380C816_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Sprite* Method_3_B64697FCA22C8487(::RPG::GameCore::AttackDamageType a1)
	{
		return ((::UnityEngine::Sprite*(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_3_F480A087F622C7D7_METHOD_3_B64697FCA22C8487_OFFSET))(this, a1);
	}

	::System::Void Method_3_FCB175EE4400634C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F480A087F622C7D7_METHOD_3_FCB175EE4400634C_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnGUI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F480A087F622C7D7___IFIXBASEPROXY_ONGUI_OFFSET))(this);
	}
};
