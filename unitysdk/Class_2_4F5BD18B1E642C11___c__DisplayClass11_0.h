#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_17EDF3520C9FC3DE;
class Class_2_4F5BD18B1E642C11;
namespace System { class Action; }
namespace UnityEngine { class Transform; }

#define CLASS_2_4F5BD18B1E642C11___C__DISPLAYCLASS11_0__CREATEBOARD_B__0_OFFSET UNITYSDK_OFFSET(0x16891370)
#define CLASS_2_4F5BD18B1E642C11___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1688C8A0)

inline static constexpr unsigned int Class_2_4F5BD18B1E642C11___c__DisplayClass11_0_TypeDefinitionIndex = 76179;

class Class_2_4F5BD18B1E642C11___c__DisplayClass11_0 : public ::System::Object
{
public:
	::System::Action* onBoardLoad; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
	}

	::System::Void _CreateBoard_b__0(::Class_2_4F5BD18B1E642C11* a1, ::Class_2_17EDF3520C9FC3DE* a2, ::UnityEngine::Transform* a3, ::System::Action* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_4F5BD18B1E642C11*, ::Class_2_17EDF3520C9FC3DE*, ::UnityEngine::Transform*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_4F5BD18B1E642C11___C__DISPLAYCLASS11_0__CREATEBOARD_B__0_OFFSET))(this, a1, a2, a3, a4);
	}
};
