#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_79AE422BA06F6D26_68;
class Class_2_9A16BB53176B1EDB;
namespace MoleMole { class UIInterKnowCoursePanelWidgetController; }
namespace UnityEngine { class RectTransform; }

#define CLASS_1_00C315291498A552_METHOD_1_CCEC9A98054BAF73_OFFSET UNITYSDK_OFFSET(0x11A397C0)
#define CLASS_1_00C315291498A552__CTOR_OFFSET UNITYSDK_OFFSET(0x11A397B0)

inline static constexpr unsigned int Class_1_00C315291498A552_TypeDefinitionIndex = 89526;

class Class_1_00C315291498A552 : public ::System::Object
{
public:
	::UnityEngine::RectTransform* Field_1_1; // 0x10
	::Class_2_79AE422BA06F6D26_68* Field_1_7; // 0x18
	::UnityEngine::RectTransform* Field_1_2; // 0x20
	::MoleMole::UIInterKnowCoursePanelWidgetController* Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_00C315291498A552__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CCEC9A98054BAF73(::Class_2_9A16BB53176B1EDB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9A16BB53176B1EDB*))((::PBYTE)hIl2Cpp + CLASS_1_00C315291498A552_METHOD_1_CCEC9A98054BAF73_OFFSET))(this, a1);
	}
};
