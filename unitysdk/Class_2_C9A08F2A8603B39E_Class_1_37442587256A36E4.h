#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_2_C9A08F2A8603B39E;
namespace MoleMole { class MonoGamepadVirtualCursor; }
namespace MoleMole { class UITwoDMapElement_Data; }

#define CLASS_2_C9A08F2A8603B39E_CLASS_1_37442587256A36E4_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1591A750)
#define CLASS_2_C9A08F2A8603B39E_CLASS_1_37442587256A36E4_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x1591A7A0)
#define CLASS_2_C9A08F2A8603B39E_CLASS_1_37442587256A36E4_METHOD_1_F0E5333B48B6C5FF_OFFSET UNITYSDK_OFFSET(0x15919CE0)
#define CLASS_2_C9A08F2A8603B39E_CLASS_1_37442587256A36E4__CTOR_OFFSET UNITYSDK_OFFSET(0x15919CD0)

inline static constexpr unsigned int Class_2_C9A08F2A8603B39E_Class_1_37442587256A36E4_TypeDefinitionIndex = 74877;

class Class_2_C9A08F2A8603B39E_Class_1_37442587256A36E4 : public ::System::Object
{
public:
	::Class_2_C9A08F2A8603B39E* Field_1_0; // 0x10
	::MoleMole::UITwoDMapElement_Data* Field_1_11; // 0x18
	::MoleMole::MonoGamepadVirtualCursor* Field_1_7; // 0x20
	::System::Single Field_1_5; // 0x28
	::System::Single Field_1_4; // 0x2C
	::System::Single Field_1_6; // 0x30
	::UnityEngine::Vector2 Field_1_10; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_CLASS_1_37442587256A36E4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F0E5333B48B6C5FF(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_CLASS_1_37442587256A36E4_METHOD_1_F0E5333B48B6C5FF_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_CLASS_1_37442587256A36E4_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9A08F2A8603B39E_CLASS_1_37442587256A36E4_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}
};
