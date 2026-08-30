#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine::UI { class Button; }

#define CLASS_1_F8CCE338A0EBE567___C__DISPLAYCLASS0_0__BIND_B__0_OFFSET UNITYSDK_OFFSET(0x1633E060)
#define CLASS_1_F8CCE338A0EBE567___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1633D820)

inline static constexpr unsigned int Class_1_F8CCE338A0EBE567___c__DisplayClass0_0_TypeDefinitionIndex = 72945;

class Class_1_F8CCE338A0EBE567___c__DisplayClass0_0 : public ::System::Object
{
public:
	::System::Action_1<::System::Object*>* cb; // 0x10
	::UnityEngine::UI::Button* button; // 0x18
	::System::Object* cbp; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8CCE338A0EBE567___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
	}

	::System::Void _Bind_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F8CCE338A0EBE567___C__DISPLAYCLASS0_0__BIND_B__0_OFFSET))(this);
	}
};
