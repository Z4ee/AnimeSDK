#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIMarcelNameWidgetController_Display.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGrandMarcelAdventureChildWindowController; }
namespace MoleMole { class UIMarcelNameWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_1_0B94CD9F9343FE1E_METHOD_1_1B51EDF8FE2AAC4F_OFFSET UNITYSDK_OFFSET(0x140B1200)
#define CLASS_1_0B94CD9F9343FE1E_METHOD_1_32DB677092944B96_OFFSET UNITYSDK_OFFSET(0x140B10A0)
#define CLASS_1_0B94CD9F9343FE1E_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x140B11B0)
#define CLASS_1_0B94CD9F9343FE1E_METHOD_1_6BB86695870EFBD1_OFFSET UNITYSDK_OFFSET(0x140B0F50)
#define CLASS_1_0B94CD9F9343FE1E_METHOD_1_6F6DD3DC870AC77B_OFFSET UNITYSDK_OFFSET(0x140B13B0)
#define CLASS_1_0B94CD9F9343FE1E_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x140B0EE0)
#define CLASS_1_0B94CD9F9343FE1E__CTOR_OFFSET UNITYSDK_OFFSET(0x140B0E50)

inline static constexpr unsigned int Class_1_0B94CD9F9343FE1E_TypeDefinitionIndex = 68387;

class Class_1_0B94CD9F9343FE1E : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::UIMarcelNameWidgetController*>* Field_1_2; // 0x10
	::MoleMole::UIGrandMarcelAdventureChildWindowController* Field_1_0; // 0x18
	::UnityEngine::Transform* Field_1_1; // 0x20

	::System::Void _ctor(::MoleMole::UIGrandMarcelAdventureChildWindowController* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGrandMarcelAdventureChildWindowController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_0B94CD9F9343FE1E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B94CD9F9343FE1E_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_6BB86695870EFBD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B94CD9F9343FE1E_METHOD_1_6BB86695870EFBD1_OFFSET))(this);
	}

	::System::Void Method_1_32DB677092944B96(::System::UInt32 a1, ::System::UInt32 a2, ::MoleMole::UIMarcelNameWidgetController_Display a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::MoleMole::UIMarcelNameWidgetController_Display))((::PBYTE)hIl2Cpp + CLASS_1_0B94CD9F9343FE1E_METHOD_1_32DB677092944B96_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0B94CD9F9343FE1E_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_1B51EDF8FE2AAC4F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0B94CD9F9343FE1E_METHOD_1_1B51EDF8FE2AAC4F_OFFSET))(this, a1);
	}

	::System::Void Method_1_6F6DD3DC870AC77B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0B94CD9F9343FE1E_METHOD_1_6F6DD3DC870AC77B_OFFSET))(this);
	}
};
