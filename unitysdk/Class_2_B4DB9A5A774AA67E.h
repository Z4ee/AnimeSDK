#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class LevelGameModeStateChanged; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define CLASS_2_B4DB9A5A774AA67E_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x16707890)
#define CLASS_2_B4DB9A5A774AA67E_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x16707AA0)
#define CLASS_2_B4DB9A5A774AA67E_METHOD_2_04E967564E8CD234_OFFSET UNITYSDK_OFFSET(0x167076C0)
#define CLASS_2_B4DB9A5A774AA67E_METHOD_2_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x16707420)
#define CLASS_2_B4DB9A5A774AA67E_METHOD_2_1A9B29AC8BB11A86_OFFSET UNITYSDK_OFFSET(0x16707730)
#define CLASS_2_B4DB9A5A774AA67E_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x167072A0)
#define CLASS_2_B4DB9A5A774AA67E_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x167075A0)
#define CLASS_2_B4DB9A5A774AA67E_METHOD_2_455E250D679F9642_OFFSET UNITYSDK_OFFSET(0x167073C0)
#define CLASS_2_B4DB9A5A774AA67E_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x167077D0)
#define CLASS_2_B4DB9A5A774AA67E__CTOR_OFFSET UNITYSDK_OFFSET(0x16707C70)
#define CLASS_2_B4DB9A5A774AA67E__ONBIND_OFFSET UNITYSDK_OFFSET(0x16707240)

inline static constexpr unsigned int Class_2_B4DB9A5A774AA67E_TypeDefinitionIndex = 68401;

class Class_2_B4DB9A5A774AA67E : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::String* Field_2_1; // 0x0
	::UnityEngine::Animation* Field_2_2; // 0x60
	::Class_1_CA217ABF4E3B4F3F* Field_2_3; // 0x68
	::RPG::GameCore::BattleInstance* Field_2_4; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4DB9A5A774AA67E__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4DB9A5A774AA67E__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4DB9A5A774AA67E_METHOD_2_41A074549EF25F63_OFFSET))(this);
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

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4DB9A5A774AA67E_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B4DB9A5A774AA67E_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4DB9A5A774AA67E_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4DB9A5A774AA67E_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};
