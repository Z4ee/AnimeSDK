#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

class Class_0_16E4307DCC419505_547;
class Class_2_7492251C5D304310;
namespace RPG::Client { class MonoInControlTip; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class TeamDataComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class Button; }

#define CLASS_2_FF11ACE18418D030_METHOD_2_012F5209D5FA3F65_OFFSET UNITYSDK_OFFSET(0x15A661A0)
#define CLASS_2_FF11ACE18418D030_METHOD_2_0869E1192F8E01DF_OFFSET UNITYSDK_OFFSET(0x15A658F0)
#define CLASS_2_FF11ACE18418D030_METHOD_2_19CCC07C980409E4_1_OFFSET UNITYSDK_OFFSET(0x15A65DA0)
#define CLASS_2_FF11ACE18418D030_METHOD_2_19CCC07C980409E4_OFFSET UNITYSDK_OFFSET(0x15A65C70)
#define CLASS_2_FF11ACE18418D030_METHOD_2_2D2FB6D1979284B0_OFFSET UNITYSDK_OFFSET(0x15A65E30)
#define CLASS_2_FF11ACE18418D030_METHOD_2_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0x15A65BB0)
#define CLASS_2_FF11ACE18418D030_METHOD_2_5E93572F9B9C3F30_OFFSET UNITYSDK_OFFSET(0x15A657D0)
#define CLASS_2_FF11ACE18418D030_METHOD_2_9A7071D23F340B6D_OFFSET UNITYSDK_OFFSET(0x15A660B0)
#define CLASS_2_FF11ACE18418D030_METHOD_2_C7B58231E4F61838_OFFSET UNITYSDK_OFFSET(0x15A662E0)
#define CLASS_2_FF11ACE18418D030_METHOD_2_E52C357E96F7A058_OFFSET UNITYSDK_OFFSET(0x15A66230)
#define CLASS_2_FF11ACE18418D030__CTOR_OFFSET UNITYSDK_OFFSET(0x15A664A0)
#define CLASS_2_FF11ACE18418D030__ONBIND_OFFSET UNITYSDK_OFFSET(0x15A65720)
#define CLASS_2_FF11ACE18418D030__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x15A65CD0)
#define CLASS_2_FF11ACE18418D030__ONTICK_OFFSET UNITYSDK_OFFSET(0x15A65B50)

inline static constexpr unsigned int Class_2_FF11ACE18418D030_TypeDefinitionIndex = 71651;

class Class_2_FF11ACE18418D030 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* IAJEFHLDLCD; // 0x0
	// static const ::System::String* CDFNBCHKFPD; // 0x0
	::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0x60
	::RPG::Client::MonoInControlTip* OOBBOFLHLDH; // 0x68
	::RPG::GameCore::TeamDataComponent* OHACPLHFMLK; // 0x70
	::UnityEngine::Animation* JPHOOFFIAAH; // 0x78
	::UnityEngine::UI::Button* KJIOINOOIHP; // 0x80
	::RPG::GameCore::EventManager* DOBLIBIFBBK; // 0x88
	::Class_2_7492251C5D304310* GPBIMKJCJEG; // 0x90
	::RPG::GameCore::TeamDataComponent* DDBFHLLLICJ; // 0x98
	::System::Boolean FGFLMPNLGPF; // 0xA0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF11ACE18418D030__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF11ACE18418D030__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5E93572F9B9C3F30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF11ACE18418D030_METHOD_2_5E93572F9B9C3F30_OFFSET))(this);
	}

	::System::Void Method_2_0869E1192F8E01DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF11ACE18418D030_METHOD_2_0869E1192F8E01DF_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_FF11ACE18418D030__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_19CCC07C980409E4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FF11ACE18418D030_METHOD_2_19CCC07C980409E4_OFFSET))(this, a1);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF11ACE18418D030__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_19CCC07C980409E4_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_FF11ACE18418D030_METHOD_2_19CCC07C980409E4_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_2D2FB6D1979284B0(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_FF11ACE18418D030_METHOD_2_2D2FB6D1979284B0_OFFSET))(this, a1);
	}

	::System::Void Method_2_9A7071D23F340B6D(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_FF11ACE18418D030_METHOD_2_9A7071D23F340B6D_OFFSET))(this, a1);
	}

	::System::Void Method_2_012F5209D5FA3F65(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_FF11ACE18418D030_METHOD_2_012F5209D5FA3F65_OFFSET))(this, a1);
	}

	::System::Void Method_2_E52C357E96F7A058(::Class_0_16E4307DCC419505_547* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_547*))((::PBYTE)hIl2Cpp + CLASS_2_FF11ACE18418D030_METHOD_2_E52C357E96F7A058_OFFSET))(this, a1);
	}

	::System::Void Method_2_C7B58231E4F61838(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_FF11ACE18418D030_METHOD_2_C7B58231E4F61838_OFFSET))(this, a1);
	}

	::System::Void Method_2_52607DE4C357D269()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FF11ACE18418D030_METHOD_2_52607DE4C357D269_OFFSET))(this);
	}
};
