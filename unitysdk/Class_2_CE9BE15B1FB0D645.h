#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_0_16E4307DCC419505_401;
class Class_2_E4C329253233FBD0;
namespace RPG::Client { class MonoInControlTip; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class TeamDataComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Button; }

#define CLASS_2_CE9BE15B1FB0D645_METHOD_2_0869E1192F8E01DF_OFFSET UNITYSDK_OFFSET(0x13988220)
#define CLASS_2_CE9BE15B1FB0D645_METHOD_2_19CCC07C980409E4_1_OFFSET UNITYSDK_OFFSET(0x139886D0)
#define CLASS_2_CE9BE15B1FB0D645_METHOD_2_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x139885A0)
#define CLASS_2_CE9BE15B1FB0D645_METHOD_2_2D2FB6D1979284B0_OFFSET UNITYSDK_OFFSET(0x13988760)
#define CLASS_2_CE9BE15B1FB0D645_METHOD_2_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0x139884E0)
#define CLASS_2_CE9BE15B1FB0D645_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x13989420)
#define CLASS_2_CE9BE15B1FB0D645_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x139893C0)
#define CLASS_2_CE9BE15B1FB0D645_METHOD_2_5EBE23180774F4D5_OFFSET UNITYSDK_OFFSET(0x13988100)
#define CLASS_2_CE9BE15B1FB0D645_METHOD_2_9A7071D23F340B6D_OFFSET UNITYSDK_OFFSET(0x139889E0)
#define CLASS_2_CE9BE15B1FB0D645_METHOD_2_C7B58231E4F61838_OFFSET UNITYSDK_OFFSET(0x13989150)
#define CLASS_2_CE9BE15B1FB0D645_METHOD_2_C91E5170F9E36EED_OFFSET UNITYSDK_OFFSET(0x139894E0)
#define CLASS_2_CE9BE15B1FB0D645_METHOD_2_DFF4B66A65F23F6B_OFFSET UNITYSDK_OFFSET(0x13988AD0)
#define CLASS_2_CE9BE15B1FB0D645_METHOD_2_E52C357E96F7A058_OFFSET UNITYSDK_OFFSET(0x139890A0)
#define CLASS_2_CE9BE15B1FB0D645__CTOR_OFFSET UNITYSDK_OFFSET(0x13989320)
#define CLASS_2_CE9BE15B1FB0D645__ONBIND_OFFSET UNITYSDK_OFFSET(0x13988050)
#define CLASS_2_CE9BE15B1FB0D645__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x13988600)
#define CLASS_2_CE9BE15B1FB0D645__ONTICK_OFFSET UNITYSDK_OFFSET(0x13988480)
#define CLASS_2_CE9BE15B1FB0D645___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x13989360)
#define CLASS_2_CE9BE15B1FB0D645___IFIXBASEPROXY__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x13989540)
#define CLASS_2_CE9BE15B1FB0D645___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x13989480)

inline static constexpr unsigned int Class_2_CE9BE15B1FB0D645_TypeDefinitionIndex = 66975;

class Class_2_CE9BE15B1FB0D645 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	::Class_2_E4C329253233FBD0* Field_2_2; // 0x60
	::RPG::Client::MonoInControlTip* Field_2_3; // 0x68
	::RPG::GameCore::BattleInstance* Field_2_4; // 0x70
	::UnityEngine::Animation* Field_2_5; // 0x78
	::RPG::GameCore::EventManager* Field_2_6; // 0x80
	::RPG::GameCore::TeamDataComponent* Field_2_7; // 0x88
	::RPG::GameCore::TeamDataComponent* Field_2_8; // 0x90
	::UnityEngine::UI::Button* Field_2_9; // 0x98
	::System::Boolean Field_2_10; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE9BE15B1FB0D645__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE9BE15B1FB0D645__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5EBE23180774F4D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE9BE15B1FB0D645_METHOD_2_5EBE23180774F4D5_OFFSET))(this);
	}

	::System::Void Method_2_0869E1192F8E01DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE9BE15B1FB0D645_METHOD_2_0869E1192F8E01DF_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CE9BE15B1FB0D645__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CE9BE15B1FB0D645_METHOD_2_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE9BE15B1FB0D645__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_19CCC07C980409E4_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CE9BE15B1FB0D645_METHOD_2_19CCC07C980409E4_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_2D2FB6D1979284B0(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CE9BE15B1FB0D645_METHOD_2_2D2FB6D1979284B0_OFFSET))(this, a1);
	}

	::System::Void Method_2_9A7071D23F340B6D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CE9BE15B1FB0D645_METHOD_2_9A7071D23F340B6D_OFFSET))(this, a1);
	}

	::System::Void Method_2_DFF4B66A65F23F6B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CE9BE15B1FB0D645_METHOD_2_DFF4B66A65F23F6B_OFFSET))(this, a1);
	}

	::System::Void Method_2_E52C357E96F7A058(::Class_0_16E4307DCC419505_401* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_401*))((::PBYTE)hIl2Cpp + CLASS_2_CE9BE15B1FB0D645_METHOD_2_E52C357E96F7A058_OFFSET))(this, a1);
	}

	::System::Void Method_2_C7B58231E4F61838(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_CE9BE15B1FB0D645_METHOD_2_C7B58231E4F61838_OFFSET))(this, a1);
	}

	::System::Void Method_2_52607DE4C357D269()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE9BE15B1FB0D645_METHOD_2_52607DE4C357D269_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE9BE15B1FB0D645___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE9BE15B1FB0D645_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE9BE15B1FB0D645_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_CE9BE15B1FB0D645___IFIXBASEPROXY__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_C91E5170F9E36EED(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CE9BE15B1FB0D645_METHOD_2_C91E5170F9E36EED_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy__OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE9BE15B1FB0D645___IFIXBASEPROXY__ONDISPOSE_OFFSET))(this);
	}
};
