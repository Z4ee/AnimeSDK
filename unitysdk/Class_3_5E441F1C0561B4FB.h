#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_6B57C0CB1CF5E075.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_1_2A97E60807F449E7;
namespace RPG::Client { class ShowAttackTimeParam; }
namespace RPG::GameCore { class LevelTurnLimitChange; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_3_5E441F1C0561B4FB_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x192473A0)
#define CLASS_3_5E441F1C0561B4FB_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x15138F70)
#define CLASS_3_5E441F1C0561B4FB_METHOD_3_00004B41EFDB322F_OFFSET UNITYSDK_OFFSET(0x19246970)
#define CLASS_3_5E441F1C0561B4FB_METHOD_3_0115C0C3E970EDD2_OFFSET UNITYSDK_OFFSET(0x19246E60)
#define CLASS_3_5E441F1C0561B4FB_METHOD_3_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x192466C0)
#define CLASS_3_5E441F1C0561B4FB_METHOD_3_4AC7BEFAB2317D4A_OFFSET UNITYSDK_OFFSET(0x19246900)
#define CLASS_3_5E441F1C0561B4FB_METHOD_3_5022DB1DC5AA8CB4_OFFSET UNITYSDK_OFFSET(0x19246B20)
#define CLASS_3_5E441F1C0561B4FB_METHOD_3_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0x19246670)
#define CLASS_3_5E441F1C0561B4FB_METHOD_3_9AB87E6FBE1EB9E8_OFFSET UNITYSDK_OFFSET(0x192465D0)
#define CLASS_3_5E441F1C0561B4FB_METHOD_3_9F88E35FE931B81A_OFFSET UNITYSDK_OFFSET(0x19247130)
#define CLASS_3_5E441F1C0561B4FB_METHOD_3_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0x19247020)
#define CLASS_3_5E441F1C0561B4FB_METHOD_3_D14D1C669EDC2D6B_OFFSET UNITYSDK_OFFSET(0x192470B0)
#define CLASS_3_5E441F1C0561B4FB_METHOD_3_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x19246F40)
#define CLASS_3_5E441F1C0561B4FB_METHOD_3_E6D6625F79A63882_OFFSET UNITYSDK_OFFSET(0x19246D00)
#define CLASS_3_5E441F1C0561B4FB_METHOD_3_F04C04E6DB6D6224_OFFSET UNITYSDK_OFFSET(0x19246DB0)
#define CLASS_3_5E441F1C0561B4FB_METHOD_3_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x192472E0)
#define CLASS_3_5E441F1C0561B4FB_METHOD_3_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x19247220)
#define CLASS_3_5E441F1C0561B4FB_METHOD_3_FB1C56FCE4ABD259_OFFSET UNITYSDK_OFFSET(0x192467F0)
#define CLASS_3_5E441F1C0561B4FB__CTOR_OFFSET UNITYSDK_OFFSET(0x151391B0)
#define CLASS_3_5E441F1C0561B4FB__ONBIND_OFFSET UNITYSDK_OFFSET(0x19246450)
#define CLASS_3_5E441F1C0561B4FB__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x19246870)

inline static constexpr unsigned int Class_3_5E441F1C0561B4FB_TypeDefinitionIndex = 68016;

class Class_3_5E441F1C0561B4FB : public ::Class_2_6B57C0CB1CF5E075
{
public:
	// static const ::System::String* Field_3_0; // 0x0
	// static const ::System::String* Field_3_1; // 0x0
	// static const ::System::String* Field_3_2; // 0x0
	// static const ::System::String* Field_3_3; // 0x0
	// static const ::System::String* Field_3_4; // 0x0
	::UnityEngine::Animation* Field_3_5; // 0xE0
	::UnityEngine::UI::Text* Field_3_6; // 0xE8
	::UnityEngine::UI::Text* Field_3_7; // 0xF0
	::UnityEngine::UI::Text* Field_3_8; // 0xF8
	::UnityEngine::UI::Text* Field_3_9; // 0x100
	::System::String* Field_3_10; // 0x108
	::UnityEngine::Transform* Field_3_11; // 0x110
	::UnityEngine::UI::Text* Field_3_12; // 0x118
	::System::Int32 Field_3_13; // 0x120

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5E441F1C0561B4FB__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5E441F1C0561B4FB__ONBIND_OFFSET))(this);
	}

	::System::Void Method_3_9AB87E6FBE1EB9E8(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_3_5E441F1C0561B4FB_METHOD_3_9AB87E6FBE1EB9E8_OFFSET))(this, a1);
	}

	::System::Void Method_3_805C56F44231AEF9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5E441F1C0561B4FB_METHOD_3_805C56F44231AEF9_OFFSET))(this);
	}

	::System::Void Method_3_FB1C56FCE4ABD259(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_5E441F1C0561B4FB_METHOD_3_FB1C56FCE4ABD259_OFFSET))(this, a1);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5E441F1C0561B4FB__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_3_4AC7BEFAB2317D4A(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_3_5E441F1C0561B4FB_METHOD_3_4AC7BEFAB2317D4A_OFFSET))(this, a1);
	}

	::System::Void Method_3_00004B41EFDB322F(::Class_1_2A97E60807F449E7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2A97E60807F449E7*))((::PBYTE)hIl2Cpp + CLASS_3_5E441F1C0561B4FB_METHOD_3_00004B41EFDB322F_OFFSET))(this, a1);
	}

	::System::Void Method_3_E6D6625F79A63882(::RPG::Client::ShowAttackTimeParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ShowAttackTimeParam*))((::PBYTE)hIl2Cpp + CLASS_3_5E441F1C0561B4FB_METHOD_3_E6D6625F79A63882_OFFSET))(this, a1);
	}

	::System::Void Method_3_0115C0C3E970EDD2(::RPG::GameCore::LevelTurnLimitChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelTurnLimitChange*))((::PBYTE)hIl2Cpp + CLASS_3_5E441F1C0561B4FB_METHOD_3_0115C0C3E970EDD2_OFFSET))(this, a1);
	}

	::System::Void Method_3_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5E441F1C0561B4FB_METHOD_3_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_3_5022DB1DC5AA8CB4(::Class_1_2A97E60807F449E7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2A97E60807F449E7*))((::PBYTE)hIl2Cpp + CLASS_3_5E441F1C0561B4FB_METHOD_3_5022DB1DC5AA8CB4_OFFSET))(this, a1);
	}

	::System::Void Method_3_9F88E35FE931B81A(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_5E441F1C0561B4FB_METHOD_3_9F88E35FE931B81A_OFFSET))(this, a1);
	}

	::System::Void Method_3_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5E441F1C0561B4FB_METHOD_3_DE52BD42C4B0B772_OFFSET))(this);
	}

	::System::Void Method_3_A1781348F0A89177()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5E441F1C0561B4FB_METHOD_3_A1781348F0A89177_OFFSET))(this);
	}

	::System::Void Method_3_D14D1C669EDC2D6B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5E441F1C0561B4FB_METHOD_3_D14D1C669EDC2D6B_OFFSET))(this);
	}

	::System::Void Method_3_F04C04E6DB6D6224()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5E441F1C0561B4FB_METHOD_3_F04C04E6DB6D6224_OFFSET))(this);
	}

	::System::Void Method_3_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_5E441F1C0561B4FB_METHOD_3_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_3_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_5E441F1C0561B4FB_METHOD_3_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5E441F1C0561B4FB_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5E441F1C0561B4FB_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
