#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIControlItem; }
namespace System { class String; }
namespace System { class Type; }

#define CLASS_1_204AA13788ADFC8C_CLASS_1_CEBA4B35D1826999_METHOD_1_01B8DF021BE66069_OFFSET UNITYSDK_OFFSET(0x1213EC50)
#define CLASS_1_204AA13788ADFC8C_CLASS_1_CEBA4B35D1826999_METHOD_1_0622A902EE9DE13D_OFFSET UNITYSDK_OFFSET(0x1213ECE0)
#define CLASS_1_204AA13788ADFC8C_CLASS_1_CEBA4B35D1826999_METHOD_1_34016B238DD7F8C6_OFFSET UNITYSDK_OFFSET(0x1213F7B0)
#define CLASS_1_204AA13788ADFC8C_CLASS_1_CEBA4B35D1826999_METHOD_1_DC82225894753817_OFFSET UNITYSDK_OFFSET(0x1213F410)
#define CLASS_1_204AA13788ADFC8C_CLASS_1_CEBA4B35D1826999__CTOR_OFFSET UNITYSDK_OFFSET(0x1213EC40)

inline static constexpr unsigned int Class_1_204AA13788ADFC8C_Class_1_CEBA4B35D1826999_TypeDefinitionIndex = 44946;

class Class_1_204AA13788ADFC8C_Class_1_CEBA4B35D1826999 : public ::System::Object
{
public:
	::System::Type* Field_1_1; // 0x10
	::System::String* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_204AA13788ADFC8C_CLASS_1_CEBA4B35D1826999__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_01B8DF021BE66069(::MoleMole::UIControlItem* a1, ::System::Int32 a2, ::System::String* a3, ::System::Boolean a4)
	{
		return ((::System::String*(*)(::PVOID, ::MoleMole::UIControlItem*, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_204AA13788ADFC8C_CLASS_1_CEBA4B35D1826999_METHOD_1_01B8DF021BE66069_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::String* Method_1_DC82225894753817(::MoleMole::UIControlItem* a1, ::System::Boolean a2)
	{
		return ((::System::String*(*)(::PVOID, ::MoleMole::UIControlItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_204AA13788ADFC8C_CLASS_1_CEBA4B35D1826999_METHOD_1_DC82225894753817_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_0622A902EE9DE13D(::MoleMole::UIControlItem* a1, ::System::String* a2, ::System::String* a3, ::System::Boolean a4)
	{
		return ((::System::String*(*)(::PVOID, ::MoleMole::UIControlItem*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_204AA13788ADFC8C_CLASS_1_CEBA4B35D1826999_METHOD_1_0622A902EE9DE13D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::String* Method_1_34016B238DD7F8C6(::MoleMole::UIControlItem* a1)
	{
		return ((::System::String*(*)(::PVOID, ::MoleMole::UIControlItem*))((::PBYTE)hIl2Cpp + CLASS_1_204AA13788ADFC8C_CLASS_1_CEBA4B35D1826999_METHOD_1_34016B238DD7F8C6_OFFSET))(this, a1);
	}
};
