#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_1_503F91D5A9A9E6E5_1;
class Class_2_7CCE1EDB2270143F;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class MonoInControlTip; }
namespace RPG::GameCore { class CharacterDataComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace UnityEngine::UI { class Button; }

#define CLASS_2_BEBFA6F35799FF11_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x16C76060)
#define CLASS_2_BEBFA6F35799FF11_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x16C76130)
#define CLASS_2_BEBFA6F35799FF11_METHOD_2_5022DB1DC5AA8CB4_OFFSET UNITYSDK_OFFSET(0x16C75CB0)
#define CLASS_2_BEBFA6F35799FF11_METHOD_2_6240D6A70F158712_OFFSET UNITYSDK_OFFSET(0x16C75E70)
#define CLASS_2_BEBFA6F35799FF11_METHOD_2_66DB3CB36C1BD375_OFFSET UNITYSDK_OFFSET(0x16C75950)
#define CLASS_2_BEBFA6F35799FF11_METHOD_2_7DD84EAFF333A1E4_1_OFFSET UNITYSDK_OFFSET(0x16C75C60)
#define CLASS_2_BEBFA6F35799FF11_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x16C75C10)
#define CLASS_2_BEBFA6F35799FF11_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x16C75D80)
#define CLASS_2_BEBFA6F35799FF11_METHOD_2_A9AE92A8BD1FF115_OFFSET UNITYSDK_OFFSET(0x16C757A0)
#define CLASS_2_BEBFA6F35799FF11_METHOD_2_AC1BFDB3D2FC0C79_OFFSET UNITYSDK_OFFSET(0x16C758E0)
#define CLASS_2_BEBFA6F35799FF11_METHOD_2_C5F2E178DAEB1793_OFFSET UNITYSDK_OFFSET(0x18666510)
#define CLASS_2_BEBFA6F35799FF11_METHOD_2_CB613A5EF970C11B_OFFSET UNITYSDK_OFFSET(0x16C75B80)
#define CLASS_2_BEBFA6F35799FF11_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x16C75AB0)
#define CLASS_2_BEBFA6F35799FF11_METHOD_2_EDE51B31CB05573F_OFFSET UNITYSDK_OFFSET(0x16C75E00)
#define CLASS_2_BEBFA6F35799FF11_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x16C75EE0)
#define CLASS_2_BEBFA6F35799FF11__CTOR_OFFSET UNITYSDK_OFFSET(0x16C761D0)
#define CLASS_2_BEBFA6F35799FF11__ONBIND_OFFSET UNITYSDK_OFFSET(0x18666430)
#define CLASS_2_BEBFA6F35799FF11__ONTICK_OFFSET UNITYSDK_OFFSET(0x18666690)

inline static constexpr unsigned int Class_2_BEBFA6F35799FF11_TypeDefinitionIndex = 68541;

class Class_2_BEBFA6F35799FF11 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::RPG::GameCore::GameEntity* Field_2_0; // 0x60
	::RPG::Client::LocalizedText* Field_2_1; // 0x68
	::UnityEngine::UI::Button* Field_2_2; // 0x70
	::Class_2_7CCE1EDB2270143F* Field_2_3; // 0x78
	::RPG::Client::MonoInControlTip* Field_2_4; // 0x80
	::RPG::GameCore::CharacterDataComponent* Field_2_5; // 0x88
	::System::Boolean Field_2_6; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEBFA6F35799FF11__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEBFA6F35799FF11__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_C5F2E178DAEB1793()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEBFA6F35799FF11_METHOD_2_C5F2E178DAEB1793_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_BEBFA6F35799FF11__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_A9AE92A8BD1FF115(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_BEBFA6F35799FF11_METHOD_2_A9AE92A8BD1FF115_OFFSET))(this, a1);
	}

	::System::Void Method_2_AC1BFDB3D2FC0C79(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BEBFA6F35799FF11_METHOD_2_AC1BFDB3D2FC0C79_OFFSET))(this, a1);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEBFA6F35799FF11_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_2_CB613A5EF970C11B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_BEBFA6F35799FF11_METHOD_2_CB613A5EF970C11B_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BEBFA6F35799FF11_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DD84EAFF333A1E4_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BEBFA6F35799FF11_METHOD_2_7DD84EAFF333A1E4_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_5022DB1DC5AA8CB4(::Class_1_503F91D5A9A9E6E5_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_503F91D5A9A9E6E5_1*))((::PBYTE)hIl2Cpp + CLASS_2_BEBFA6F35799FF11_METHOD_2_5022DB1DC5AA8CB4_OFFSET))(this, a1);
	}

	::System::Void Method_2_66DB3CB36C1BD375(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_BEBFA6F35799FF11_METHOD_2_66DB3CB36C1BD375_OFFSET))(this, a1);
	}

	::System::Void Method_2_EDE51B31CB05573F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_BEBFA6F35799FF11_METHOD_2_EDE51B31CB05573F_OFFSET))(this, a1);
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEBFA6F35799FF11_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_2_6240D6A70F158712(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BEBFA6F35799FF11_METHOD_2_6240D6A70F158712_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BEBFA6F35799FF11_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEBFA6F35799FF11_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BEBFA6F35799FF11_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
