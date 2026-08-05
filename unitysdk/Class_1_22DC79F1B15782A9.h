#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1A39E1B51756BF41;
class Class_2_B4378B46E0020E85;
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }

#define CLASS_1_22DC79F1B15782A9__CTOR_OFFSET UNITYSDK_OFFSET(0x13C33920)

inline static constexpr unsigned int Class_1_22DC79F1B15782A9_TypeDefinitionIndex = 73991;

class Class_1_22DC79F1B15782A9 : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_2; // 0x10
	::Class_2_B4378B46E0020E85* Field_1_1; // 0x18
	::UnityEngine::GameObject* Field_1_7; // 0x20
	::UnityEngine::GameObject* Field_1_10; // 0x28
	::Class_2_1A39E1B51756BF41* Field_1_11; // 0x30
	::Class_2_1A39E1B51756BF41* Field_1_4; // 0x38
	::UnityEngine::GameObject* Field_1_5; // 0x40
	::Class_2_1A39E1B51756BF41* Field_1_9; // 0x48
	::Class_2_1A39E1B51756BF41* Field_1_0; // 0x50
	::UnityEngine::UI::Text* Field_1_6; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_22DC79F1B15782A9__CTOR_OFFSET))(this);
	}
};
