#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_4F5BD18B1E642C11;
class Class_2_921296CE04546AF9;
namespace System { class Action; }
namespace UnityEngine { class Transform; }

#define CLASS_2_4F5BD18B1E642C11___C__DISPLAYCLASS11_0__CREATEBOARD_B__0_OFFSET UNITYSDK_OFFSET(0x118253F0)
#define CLASS_2_4F5BD18B1E642C11___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11820610)

inline static constexpr unsigned int Class_2_4F5BD18B1E642C11___c__DisplayClass11_0_TypeDefinitionIndex = 62415;

class Class_2_4F5BD18B1E642C11___c__DisplayClass11_0 : public ::System::Object
{
public:
	::System::Action* onBoardLoad; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
	}

	::System::Void _CreateBoard_b__0(::Class_2_4F5BD18B1E642C11* self, ::Class_2_921296CE04546AF9* ent, ::UnityEngine::Transform* parent, ::System::Action* exAction)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_4F5BD18B1E642C11*, ::Class_2_921296CE04546AF9*, ::UnityEngine::Transform*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11___C__DISPLAYCLASS11_0__CREATEBOARD_B__0_OFFSET))(this, self, ent, parent, exAction);
	}
};
