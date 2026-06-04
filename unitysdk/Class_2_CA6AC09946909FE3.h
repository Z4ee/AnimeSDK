#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_401;
class Class_1_B2388953D46D7EF4;
namespace RPG::Client { class UIFollow3DTarget; }
namespace RPG::GameCore { class CharacterDataComponent; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_CA6AC09946909FE3_METHOD_2_4538E9501054E688_OFFSET UNITYSDK_OFFSET(0x143429C0)
#define CLASS_2_CA6AC09946909FE3_METHOD_2_464B71A2914AB336_OFFSET UNITYSDK_OFFSET(0x14342E10)
#define CLASS_2_CA6AC09946909FE3_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x14344170)
#define CLASS_2_CA6AC09946909FE3_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x14344110)
#define CLASS_2_CA6AC09946909FE3_METHOD_2_5D9CF83CFC617CF9_OFFSET UNITYSDK_OFFSET(0x143440B0)
#define CLASS_2_CA6AC09946909FE3_METHOD_2_66F42CE2EDA79734_OFFSET UNITYSDK_OFFSET(0x14343080)
#define CLASS_2_CA6AC09946909FE3_METHOD_2_791E2E44FCCE0018_OFFSET UNITYSDK_OFFSET(0x14342F40)
#define CLASS_2_CA6AC09946909FE3_METHOD_2_8CA05BCD86E125DF_1_OFFSET UNITYSDK_OFFSET(0x14342C30)
#define CLASS_2_CA6AC09946909FE3_METHOD_2_8CA05BCD86E125DF_OFFSET UNITYSDK_OFFSET(0x14342D20)
#define CLASS_2_CA6AC09946909FE3_METHOD_2_9587E5276DF8AE82_OFFSET UNITYSDK_OFFSET(0x143435F0)
#define CLASS_2_CA6AC09946909FE3_METHOD_2_A88B36294D55B85C_OFFSET UNITYSDK_OFFSET(0x143436B0)
#define CLASS_2_CA6AC09946909FE3_METHOD_2_B799DB9989A18F1D_OFFSET UNITYSDK_OFFSET(0x14342A40)
#define CLASS_2_CA6AC09946909FE3_METHOD_2_B9BD5FB09F313D71_OFFSET UNITYSDK_OFFSET(0x14343AB0)
#define CLASS_2_CA6AC09946909FE3_METHOD_2_CC9DCB1EBAA03C60_OFFSET UNITYSDK_OFFSET(0x14343900)
#define CLASS_2_CA6AC09946909FE3_METHOD_2_D2DD924C607646D3_OFFSET UNITYSDK_OFFSET(0x14343CC0)
#define CLASS_2_CA6AC09946909FE3_METHOD_2_F7BA13C72A6B3F58_OFFSET UNITYSDK_OFFSET(0x14343020)
#define CLASS_2_CA6AC09946909FE3_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x14342860)
#define CLASS_2_CA6AC09946909FE3_ONRETURN_OFFSET UNITYSDK_OFFSET(0x14342AA0)
#define CLASS_2_CA6AC09946909FE3__CCTOR_OFFSET UNITYSDK_OFFSET(0x14344020)
#define CLASS_2_CA6AC09946909FE3__CTOR_OFFSET UNITYSDK_OFFSET(0x14343FF0)
#define CLASS_2_CA6AC09946909FE3__ONBIND_OFFSET UNITYSDK_OFFSET(0x14343F30)
#define CLASS_2_CA6AC09946909FE3__ONRETURN_B__1_0_OFFSET UNITYSDK_OFFSET(0x14344040)
#define CLASS_2_CA6AC09946909FE3___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x143441D0)

inline static constexpr unsigned int Class_2_CA6AC09946909FE3_TypeDefinitionIndex = 67051;

class Class_2_CA6AC09946909FE3 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	static ::System::Single* StaticGet_Field_2_0()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_CA6AC09946909FE3_TypeDefinitionIndex)->GetStaticField(0xBDA0);
	}
	static ::System::Single* StaticGet_Field_2_1()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_CA6AC09946909FE3_TypeDefinitionIndex)->GetStaticField(0xBDA4);
	}
	static ::System::Single* StaticGet_Field_2_2()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_CA6AC09946909FE3_TypeDefinitionIndex)->GetStaticField(0xBDA8);
	}
	static ::System::Single* StaticGet_Field_2_3()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_CA6AC09946909FE3_TypeDefinitionIndex)->GetStaticField(0xBDAC);
	}
	static ::System::Single* StaticGet_Field_2_4()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_CA6AC09946909FE3_TypeDefinitionIndex)->GetStaticField(0xBDB0);
	}
	// static const ::System::Single Field_2_5; // 0x0
	// static const ::System::Single Field_2_6; // 0x0
	// static const ::System::Single Field_2_7; // 0x0
	::RPG::GameCore::TurnBasedGameMode* Field_2_8; // 0x60
	::RPG::Client::UIFollow3DTarget* Field_2_9; // 0x68
	::Class_1_B2388953D46D7EF4* Field_2_10; // 0x70
	::RPG::GameCore::GameEntity* Field_2_11; // 0x78
	::RPG::GameCore::CharacterDataComponent* Field_2_12; // 0x80
	::UnityEngine::RectTransform* Field_2_13; // 0x88
	::UnityEngine::Animation* Field_2_14; // 0x90
	::RPG::GameCore::LevelUIComponent* Field_2_15; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA6AC09946909FE3__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_CA6AC09946909FE3__CCTOR_OFFSET))();
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_CA6AC09946909FE3_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA6AC09946909FE3_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_2_8CA05BCD86E125DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA6AC09946909FE3_METHOD_2_8CA05BCD86E125DF_OFFSET))(this);
	}

	::RPG::GameCore::EventManager* Method_2_464B71A2914AB336()
	{
		return ((::RPG::GameCore::EventManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA6AC09946909FE3_METHOD_2_464B71A2914AB336_OFFSET))(this);
	}

	::System::Void Method_2_791E2E44FCCE0018(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_CA6AC09946909FE3_METHOD_2_791E2E44FCCE0018_OFFSET))(this, a1);
	}

	::System::Void Method_2_F7BA13C72A6B3F58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA6AC09946909FE3_METHOD_2_F7BA13C72A6B3F58_OFFSET))(this);
	}

	::System::Void Method_2_8CA05BCD86E125DF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA6AC09946909FE3_METHOD_2_8CA05BCD86E125DF_1_OFFSET))(this);
	}

	::System::Void Method_2_9587E5276DF8AE82(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_CA6AC09946909FE3_METHOD_2_9587E5276DF8AE82_OFFSET))(this, a1);
	}

	::System::Void Method_2_A88B36294D55B85C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA6AC09946909FE3_METHOD_2_A88B36294D55B85C_OFFSET))(this);
	}

	::System::Void Method_2_B799DB9989A18F1D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA6AC09946909FE3_METHOD_2_B799DB9989A18F1D_OFFSET))(this);
	}

	::System::Void Method_2_4538E9501054E688(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_CA6AC09946909FE3_METHOD_2_4538E9501054E688_OFFSET))(this, a1);
	}

	::System::Void Method_2_66F42CE2EDA79734()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA6AC09946909FE3_METHOD_2_66F42CE2EDA79734_OFFSET))(this);
	}

	::System::Void Method_2_B9BD5FB09F313D71(::RPG::Client::UIFollow3DTarget* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIFollow3DTarget*))((::PBYTE)hIl2Cpp + CLASS_2_CA6AC09946909FE3_METHOD_2_B9BD5FB09F313D71_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_D2DD924C607646D3(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_CA6AC09946909FE3_METHOD_2_D2DD924C607646D3_OFFSET))(this, a1);
	}

	::UnityEngine::Rect Method_2_CC9DCB1EBAA03C60()
	{
		return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA6AC09946909FE3_METHOD_2_CC9DCB1EBAA03C60_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA6AC09946909FE3__ONBIND_OFFSET))(this);
	}

	::System::Void _OnReturn_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA6AC09946909FE3__ONRETURN_B__1_0_OFFSET))(this);
	}

	::System::Void Method_2_5D9CF83CFC617CF9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_CA6AC09946909FE3_METHOD_2_5D9CF83CFC617CF9_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA6AC09946909FE3_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA6AC09946909FE3_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA6AC09946909FE3___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}
};
