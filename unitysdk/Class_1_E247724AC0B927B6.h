#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E247724AC0B927B6_Struct_2_04B6CBF5144CA7A5.h"
#include "unitysdk/Class_1_E247724AC0B927B6_Struct_2_7AAAE9ED7761A3A5.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/BattleModeState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_E05E7A6D9DE9138B;
class Class_2_07C7244594E3116D;
class Class_2_812B507E8D0401C4;
namespace RPG::GameCore { class ChessUnitRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Sprite; }

#define CLASS_1_E247724AC0B927B6_GET_MARKDISABLE_OFFSET UNITYSDK_OFFSET(0x89449E0)
#define CLASS_1_E247724AC0B927B6_METHOD_1_00DEF5A164D9A9D5_OFFSET UNITYSDK_OFFSET(0x8944470)
#define CLASS_1_E247724AC0B927B6_METHOD_1_028DBF47369183CD_OFFSET UNITYSDK_OFFSET(0x8943250)
#define CLASS_1_E247724AC0B927B6_METHOD_1_106B52AA261DEDE0_OFFSET UNITYSDK_OFFSET(0x8945D30)
#define CLASS_1_E247724AC0B927B6_METHOD_1_2566AD459572DFC3_OFFSET UNITYSDK_OFFSET(0x8943DD0)
#define CLASS_1_E247724AC0B927B6_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x8943CD0)
#define CLASS_1_E247724AC0B927B6_METHOD_1_33E2FA8E6403B93D_OFFSET UNITYSDK_OFFSET(0x8944A00)
#define CLASS_1_E247724AC0B927B6_METHOD_1_51D25B2D4380C816_OFFSET UNITYSDK_OFFSET(0x8945F70)
#define CLASS_1_E247724AC0B927B6_METHOD_1_7443AD94E7275ABA_OFFSET UNITYSDK_OFFSET(0x8943080)
#define CLASS_1_E247724AC0B927B6_METHOD_1_7EECB6EF9A266319_OFFSET UNITYSDK_OFFSET(0x8944E40)
#define CLASS_1_E247724AC0B927B6_METHOD_1_866BE3C21583A26C_OFFSET UNITYSDK_OFFSET(0x8943480)
#define CLASS_1_E247724AC0B927B6_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x8942F90)
#define CLASS_1_E247724AC0B927B6_METHOD_1_8F2C9C3A2496EDD2_OFFSET UNITYSDK_OFFSET(0x8945E20)
#define CLASS_1_E247724AC0B927B6_METHOD_1_A67FA08E342D22C3_OFFSET UNITYSDK_OFFSET(0x8942E90)
#define CLASS_1_E247724AC0B927B6_METHOD_1_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x89459C0)
#define CLASS_1_E247724AC0B927B6_METHOD_1_B64697FCA22C8487_OFFSET UNITYSDK_OFFSET(0x89462D0)
#define CLASS_1_E247724AC0B927B6_METHOD_1_C4F4D1BB18DEE9A4_OFFSET UNITYSDK_OFFSET(0x8945C10)
#define CLASS_1_E247724AC0B927B6_METHOD_1_D20FD81754C01453_OFFSET UNITYSDK_OFFSET(0x8943610)
#define CLASS_1_E247724AC0B927B6_METHOD_1_F63FE1AA9633F811_OFFSET UNITYSDK_OFFSET(0x8943670)
#define CLASS_1_E247724AC0B927B6_SET_MARKDISABLE_OFFSET UNITYSDK_OFFSET(0x89449F0)
#define CLASS_1_E247724AC0B927B6__CTOR_OFFSET UNITYSDK_OFFSET(0x8946490)

inline static constexpr unsigned int Class_1_E247724AC0B927B6_TypeDefinitionIndex = 49497;

class Class_1_E247724AC0B927B6 : public ::System::Object
{
public:
	::Class_2_07C7244594E3116D* Field_1_4; // 0x10
	::System::Collections::Generic::List_1<::Class_1_E247724AC0B927B6_Struct_2_7AAAE9ED7761A3A5>* Field_1_6; // 0x18
	::Class_2_812B507E8D0401C4* Field_1_5; // 0x20
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::RPG::Client::TextID>* Field_1_3; // 0x28
	::System::Collections::Generic::List_1<::Class_1_E247724AC0B927B6_Struct_2_04B6CBF5144CA7A5>* Field_1_7; // 0x30
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::UnityEngine::Sprite*>* Field_1_8; // 0x38
	::Class_1_E05E7A6D9DE9138B* Field_1_9; // 0x40
	::System::UInt32 Field_1_2; // 0x48
	::UnityEngine::Vector2 Field_1_1; // 0x4C
	::System::Boolean _MarkDisable_k__BackingField; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E247724AC0B927B6__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A67FA08E342D22C3(::Class_2_07C7244594E3116D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_07C7244594E3116D*))((::PBYTE)hIl2Cpp + CLASS_1_E247724AC0B927B6_METHOD_1_A67FA08E342D22C3_OFFSET))(this, a1);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E247724AC0B927B6_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_028DBF47369183CD(::RPG::GameCore::BattleModeState a1, ::RPG::GameCore::BattleModeState a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleModeState, ::RPG::GameCore::BattleModeState))((::PBYTE)hIl2Cpp + CLASS_1_E247724AC0B927B6_METHOD_1_028DBF47369183CD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D20FD81754C01453()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E247724AC0B927B6_METHOD_1_D20FD81754C01453_OFFSET))(this);
	}

	::System::Boolean get_MarkDisable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E247724AC0B927B6_GET_MARKDISABLE_OFFSET))(this);
	}

	::System::Void set_MarkDisable(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E247724AC0B927B6_SET_MARKDISABLE_OFFSET))(this, value);
	}

	::System::Void Method_1_F63FE1AA9633F811()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E247724AC0B927B6_METHOD_1_F63FE1AA9633F811_OFFSET))(this);
	}

	::System::Void Method_1_33E2FA8E6403B93D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E247724AC0B927B6_METHOD_1_33E2FA8E6403B93D_OFFSET))(this);
	}

	::System::Void Method_1_2566AD459572DFC3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E247724AC0B927B6_METHOD_1_2566AD459572DFC3_OFFSET))(this);
	}

	::System::Boolean Method_1_7EECB6EF9A266319(::UnityEngine::Rect a1, ::RPG::GameCore::ChessUnitRow* a2, ::UnityEngine::Color a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rect, ::RPG::GameCore::ChessUnitRow*, ::UnityEngine::Color, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E247724AC0B927B6_METHOD_1_7EECB6EF9A266319_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_866BE3C21583A26C(::System::String* a1, ::UnityEngine::Color a2, ::System::Single a3, ::UnityEngine::Vector2 a4, ::UnityEngine::Vector2 a5, ::UnityEngine::Vector2 a6, ::UnityEngine::Vector2 a7, ::System::Single a8, ::System::Single a9)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Color, ::System::Single, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E247724AC0B927B6_METHOD_1_866BE3C21583A26C_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_1_00DEF5A164D9A9D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E247724AC0B927B6_METHOD_1_00DEF5A164D9A9D5_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E247724AC0B927B6_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E247724AC0B927B6_METHOD_1_AA169839CB93802A_OFFSET))(this);
	}

	::System::String* Method_1_C4F4D1BB18DEE9A4(::RPG::GameCore::AvatarBaseType a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AvatarBaseType))((::PBYTE)hIl2Cpp + CLASS_1_E247724AC0B927B6_METHOD_1_C4F4D1BB18DEE9A4_OFFSET))(this, a1);
	}

	::UnityEngine::Color Method_1_106B52AA261DEDE0(::RPG::GameCore::AttackDamageType a1)
	{
		return ((::UnityEngine::Color(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_1_E247724AC0B927B6_METHOD_1_106B52AA261DEDE0_OFFSET))(this, a1);
	}

	::System::String* Method_1_8F2C9C3A2496EDD2(::RPG::GameCore::AttackDamageType a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_1_E247724AC0B927B6_METHOD_1_8F2C9C3A2496EDD2_OFFSET))(this, a1);
	}

	::System::Void Method_1_51D25B2D4380C816(::UnityEngine::Rect a1, ::UnityEngine::Sprite* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + CLASS_1_E247724AC0B927B6_METHOD_1_51D25B2D4380C816_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Sprite* Method_1_B64697FCA22C8487(::RPG::GameCore::AttackDamageType a1)
	{
		return ((::UnityEngine::Sprite*(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_1_E247724AC0B927B6_METHOD_1_B64697FCA22C8487_OFFSET))(this, a1);
	}

	::System::Void Method_1_7443AD94E7275ABA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E247724AC0B927B6_METHOD_1_7443AD94E7275ABA_OFFSET))(this);
	}
};
