#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class LevelGameModeStateChanged; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define CLASS_2_B4DB9A5A774AA67E_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x9026730)
#define CLASS_2_B4DB9A5A774AA67E_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x9026920)
#define CLASS_2_B4DB9A5A774AA67E_METHOD_2_04E967564E8CD234_OFFSET UNITYSDK_OFFSET(0x9026570)
#define CLASS_2_B4DB9A5A774AA67E_METHOD_2_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x90262D0)
#define CLASS_2_B4DB9A5A774AA67E_METHOD_2_1A9B29AC8BB11A86_OFFSET UNITYSDK_OFFSET(0x90265D0)
#define CLASS_2_B4DB9A5A774AA67E_METHOD_2_4307B2A4B4A12C1A_1_OFFSET UNITYSDK_OFFSET(0x9026450)
#define CLASS_2_B4DB9A5A774AA67E_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x9026150)
#define CLASS_2_B4DB9A5A774AA67E_METHOD_2_455E250D679F9642_OFFSET UNITYSDK_OFFSET(0x9026270)
#define CLASS_2_B4DB9A5A774AA67E_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x9026B60)
#define CLASS_2_B4DB9A5A774AA67E_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x9026670)
#define CLASS_2_B4DB9A5A774AA67E__CTOR_OFFSET UNITYSDK_OFFSET(0x9026AD0)
#define CLASS_2_B4DB9A5A774AA67E__ONBIND_OFFSET UNITYSDK_OFFSET(0x90260F0)
#define CLASS_2_B4DB9A5A774AA67E___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x9026BC0)
#define CLASS_2_B4DB9A5A774AA67E___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x9026C20)
#define CLASS_2_B4DB9A5A774AA67E___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x9026B00)

inline static constexpr unsigned int Class_2_B4DB9A5A774AA67E_TypeDefinitionIndex = 66024;

class Class_2_B4DB9A5A774AA67E : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_2; // 0x0
	// static const ::System::String* Field_2_3; // 0x0
	::UnityEngine::Animation* Field_2_0; // 0x60
	::Class_1_CA217ABF4E3B4F3F* Field_2_4; // 0x68
	::RPG::GameCore::BattleInstance* Field_2_1; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4DB9A5A774AA67E__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4DB9A5A774AA67E__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4DB9A5A774AA67E_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_455E250D679F9642()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4DB9A5A774AA67E_METHOD_2_455E250D679F9642_OFFSET))(this);
	}

	::System::Void Method_2_04E967564E8CD234(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B4DB9A5A774AA67E_METHOD_2_04E967564E8CD234_OFFSET))(this, a1);
	}

	::System::Void Method_2_1A9B29AC8BB11A86(::RPG::GameCore::LevelGameModeStateChanged* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGameModeStateChanged*))((::PBYTE)hIl2Cpp + CLASS_2_B4DB9A5A774AA67E_METHOD_2_1A9B29AC8BB11A86_OFFSET))(this, a1);
	}

	::System::Void Method_2_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4DB9A5A774AA67E_METHOD_2_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4DB9A5A774AA67E_METHOD_2_4307B2A4B4A12C1A_1_OFFSET))(this);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B4DB9A5A774AA67E_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4DB9A5A774AA67E_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4DB9A5A774AA67E_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4DB9A5A774AA67E___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4DB9A5A774AA67E_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4DB9A5A774AA67E___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4DB9A5A774AA67E___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
