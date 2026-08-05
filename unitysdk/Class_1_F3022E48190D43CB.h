#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_197;
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_F3022E48190D43CB_GET_SOUNDACTIONSOURCEHINT_OFFSET UNITYSDK_OFFSET(0x17D199A0)
#define CLASS_1_F3022E48190D43CB_GET_SOUNDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x17D19990)
#define CLASS_1_F3022E48190D43CB_METHOD_1_285F0A7971057BD2_OFFSET UNITYSDK_OFFSET(0x17D19EC0)
#define CLASS_1_F3022E48190D43CB_METHOD_1_67219316361D9A7F_OFFSET UNITYSDK_OFFSET(0x17D19CB0)
#define CLASS_1_F3022E48190D43CB_POLISH_OFFSET UNITYSDK_OFFSET(0x17D19C50)
#define CLASS_1_F3022E48190D43CB_RECYCLE_OFFSET UNITYSDK_OFFSET(0x17D19B80)
#define CLASS_1_F3022E48190D43CB__CTOR_OFFSET UNITYSDK_OFFSET(0x17D19CA0)

inline static constexpr unsigned int Class_1_F3022E48190D43CB_TypeDefinitionIndex = 72882;

class Class_1_F3022E48190D43CB : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::UnityEngine::GameObject* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3022E48190D43CB__CTOR_OFFSET))(this);
	}

	::UnityEngine::GameObject* get_soundGameObject()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3022E48190D43CB_GET_SOUNDGAMEOBJECT_OFFSET))(this);
	}

	::System::String* get_soundActionSourceHint()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3022E48190D43CB_GET_SOUNDACTIONSOURCEHINT_OFFSET))(this);
	}

	::System::Void Recycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3022E48190D43CB_RECYCLE_OFFSET))(this);
	}

	::System::Void Polish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3022E48190D43CB_POLISH_OFFSET))(this);
	}

	static ::Class_1_F3022E48190D43CB* Method_1_67219316361D9A7F(::Class_0_16E4307DCC419505_197* a1)
	{
		return ((::Class_1_F3022E48190D43CB*(*)(::Class_0_16E4307DCC419505_197*))((::PBYTE)hIl2Cpp + CLASS_1_F3022E48190D43CB_METHOD_1_67219316361D9A7F_OFFSET))(a1);
	}

	static ::Class_1_F3022E48190D43CB* Method_1_285F0A7971057BD2(::UnityEngine::GameObject* a1, ::System::String* a2)
	{
		return ((::Class_1_F3022E48190D43CB*(*)(::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F3022E48190D43CB_METHOD_1_285F0A7971057BD2_OFFSET))(a1, a2);
	}
};
