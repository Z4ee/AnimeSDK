#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_427230C11B37EF42.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole { class ConfigNewbie_CircleEffect; }
namespace MoleMole { class ConfigNewbie_NewbieStep; }
namespace MoleMole { class ConfigNewbie_TargetPath; }
namespace MoleMole { class UINewbiePopWindowController; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_273B14EA75966018_METHOD_2_C21B19058C89B65E_OFFSET UNITYSDK_OFFSET(0x10F35670)
#define CLASS_2_273B14EA75966018_METHOD_2_CA64C05DB7DEDD1F_OFFSET UNITYSDK_OFFSET(0x10F35310)
#define CLASS_2_273B14EA75966018_METHOD_2_CFD678939A1EAA1F_OFFSET UNITYSDK_OFFSET(0x10F357E0)
#define CLASS_2_273B14EA75966018_METHOD_2_D57A067EAA407158_OFFSET UNITYSDK_OFFSET(0x10F35A90)
#define CLASS_2_273B14EA75966018_METHOD_2_F653B8FB883DCCF7_1_OFFSET UNITYSDK_OFFSET(0x10F35F30)
#define CLASS_2_273B14EA75966018_METHOD_2_F653B8FB883DCCF7_OFFSET UNITYSDK_OFFSET(0x10F35EA0)
#define CLASS_2_273B14EA75966018__CTOR_OFFSET UNITYSDK_OFFSET(0x10F35E90)

inline static constexpr unsigned int Class_2_273B14EA75966018_TypeDefinitionIndex = 71765;

class Class_2_273B14EA75966018 : public ::Class_1_427230C11B37EF42
{
public:
	::MoleMole::ConfigNewbie_TargetPath* Field_2_4; // 0x10
	::UnityEngine::GameObject* Field_2_3; // 0x18
	::System::Single Field_2_0; // 0x20
	::System::Single Field_2_2; // 0x24
	::System::Single Field_2_5; // 0x28
	::System::Single Field_2_1; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_273B14EA75966018__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA64C05DB7DEDD1F(::MoleMole::UINewbiePopWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UINewbiePopWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_273B14EA75966018_METHOD_2_CA64C05DB7DEDD1F_OFFSET))(this, a1);
	}

	::System::Void Method_2_D57A067EAA407158(::MoleMole::UINewbiePopWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UINewbiePopWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_273B14EA75966018_METHOD_2_D57A067EAA407158_OFFSET))(this, a1);
	}

	::System::Void Method_2_F653B8FB883DCCF7(::MoleMole::UINewbiePopWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UINewbiePopWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_273B14EA75966018_METHOD_2_F653B8FB883DCCF7_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2 Method_2_CFD678939A1EAA1F(::UnityEngine::GameObject* a1)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_273B14EA75966018_METHOD_2_CFD678939A1EAA1F_OFFSET))(this, a1);
	}

	::MoleMole::ConfigNewbie_CircleEffect* Method_2_C21B19058C89B65E(::MoleMole::ConfigNewbie_NewbieStep* a1)
	{
		return ((::MoleMole::ConfigNewbie_CircleEffect*(*)(::PVOID, ::MoleMole::ConfigNewbie_NewbieStep*))((::PBYTE)hIl2Cpp + CLASS_2_273B14EA75966018_METHOD_2_C21B19058C89B65E_OFFSET))(this, a1);
	}

	::System::Void Method_2_F653B8FB883DCCF7_1(::MoleMole::UINewbiePopWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UINewbiePopWindowController*))((::PBYTE)hIl2Cpp + CLASS_2_273B14EA75966018_METHOD_2_F653B8FB883DCCF7_1_OFFSET))(this, a1);
	}
};
