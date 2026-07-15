#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_1_1C6D038ACA57B217;
class Class_1_9015B34004B876E5;
class Class_2_7FC6A0FDC1765FA8;
class Class_2_C14495BD13DDA597;
class Class_2_CDA79B2C607C695E;
namespace RPG::Client { class GridFightRole; }
namespace RPG::GameCore { class BattleGridFightTeamTraitData; }
namespace RPG::GameCore { class GridFightManager; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_ABDB9F9EEB76D625_METHOD_2_0C60A530AA0118C2_OFFSET UNITYSDK_OFFSET(0x155C3B70)
#define CLASS_2_ABDB9F9EEB76D625_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x169A9130)
#define CLASS_2_ABDB9F9EEB76D625_METHOD_2_5A6A96C2D40609C4_OFFSET UNITYSDK_OFFSET(0x169A8CD0)
#define CLASS_2_ABDB9F9EEB76D625_METHOD_2_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x169A8D40)
#define CLASS_2_ABDB9F9EEB76D625_METHOD_2_C6E4AB6C40FAF7DC_OFFSET UNITYSDK_OFFSET(0x169A92A0)
#define CLASS_2_ABDB9F9EEB76D625_METHOD_2_DDDB3490E38FF95F_OFFSET UNITYSDK_OFFSET(0x169A94D0)
#define CLASS_2_ABDB9F9EEB76D625_METHOD_2_E7B33E32CA371E57_OFFSET UNITYSDK_OFFSET(0x169A93D0)
#define CLASS_2_ABDB9F9EEB76D625_METHOD_2_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x169A8F40)
#define CLASS_2_ABDB9F9EEB76D625__CTOR_OFFSET UNITYSDK_OFFSET(0x169A9650)
#define CLASS_2_ABDB9F9EEB76D625__ONBIND_OFFSET UNITYSDK_OFFSET(0x155C3960)

inline static constexpr unsigned int Class_2_ABDB9F9EEB76D625_TypeDefinitionIndex = 69004;

class Class_2_ABDB9F9EEB76D625 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::UnityEngine::UI::Button* Field_2_1; // 0x60
	::Class_2_CDA79B2C607C695E* Field_2_2; // 0x68
	::Class_2_C14495BD13DDA597* Field_2_3; // 0x70
	::UnityEngine::UI::Image* Field_2_4; // 0x78
	::RPG::GameCore::BattleGridFightTeamTraitData* Field_2_5; // 0x80
	::Class_2_7FC6A0FDC1765FA8* Field_2_6; // 0x88
	::Class_1_1C6D038ACA57B217* Field_2_7; // 0x90
	::RPG::Client::GridFightRole* Field_2_8; // 0x98
	::Class_1_9015B34004B876E5* Field_2_9; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ABDB9F9EEB76D625__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ABDB9F9EEB76D625__ONBIND_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_2_0C60A530AA0118C2()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ABDB9F9EEB76D625_METHOD_2_0C60A530AA0118C2_OFFSET))(this);
	}

	::System::Void Method_2_5A6A96C2D40609C4(::Class_1_1C6D038ACA57B217* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1C6D038ACA57B217*))((::PBYTE)hIl2Cpp + CLASS_2_ABDB9F9EEB76D625_METHOD_2_5A6A96C2D40609C4_OFFSET))(this, a1);
	}

	::System::Void Method_2_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ABDB9F9EEB76D625_METHOD_2_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Void Method_2_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ABDB9F9EEB76D625_METHOD_2_E7EF6BC52B28648C_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ABDB9F9EEB76D625_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_C6E4AB6C40FAF7DC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ABDB9F9EEB76D625_METHOD_2_C6E4AB6C40FAF7DC_OFFSET))(this);
	}

	::System::Void Method_2_E7B33E32CA371E57(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_ABDB9F9EEB76D625_METHOD_2_E7B33E32CA371E57_OFFSET))(this, a1);
	}

	::RPG::GameCore::GridFightManager* Method_2_DDDB3490E38FF95F()
	{
		return ((::RPG::GameCore::GridFightManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ABDB9F9EEB76D625_METHOD_2_DDDB3490E38FF95F_OFFSET))(this);
	}
};
