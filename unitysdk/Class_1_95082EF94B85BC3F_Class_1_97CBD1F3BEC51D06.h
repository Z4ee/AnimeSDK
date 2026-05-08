#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIControlItem; }
namespace System { class String; }
namespace System { class Type; }

#define CLASS_1_95082EF94B85BC3F_CLASS_1_97CBD1F3BEC51D06_METHOD_1_308BAA37C9C6C27C_OFFSET UNITYSDK_OFFSET(0xD4999C0)
#define CLASS_1_95082EF94B85BC3F_CLASS_1_97CBD1F3BEC51D06_METHOD_1_34016B238DD7F8C6_OFFSET UNITYSDK_OFFSET(0xD49A190)
#define CLASS_1_95082EF94B85BC3F_CLASS_1_97CBD1F3BEC51D06_METHOD_1_DC82225894753817_OFFSET UNITYSDK_OFFSET(0xD49A250)
#define CLASS_1_95082EF94B85BC3F_CLASS_1_97CBD1F3BEC51D06_METHOD_1_E8AF0CFC27C01C45_OFFSET UNITYSDK_OFFSET(0xD499A50)
#define CLASS_1_95082EF94B85BC3F_CLASS_1_97CBD1F3BEC51D06__CTOR_OFFSET UNITYSDK_OFFSET(0xD4999B0)

inline static constexpr unsigned int Class_1_95082EF94B85BC3F_Class_1_97CBD1F3BEC51D06_TypeDefinitionIndex = 38745;

class Class_1_95082EF94B85BC3F_Class_1_97CBD1F3BEC51D06 : public ::System::Object
{
public:
	::System::Type* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95082EF94B85BC3F_CLASS_1_97CBD1F3BEC51D06__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_308BAA37C9C6C27C(::MoleMole::UIControlItem* a1, ::System::Int32 a2, ::System::String* a3, ::System::Boolean a4)
	{
		return ((::System::String*(*)(::PVOID, ::MoleMole::UIControlItem*, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_95082EF94B85BC3F_CLASS_1_97CBD1F3BEC51D06_METHOD_1_308BAA37C9C6C27C_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::String* Method_1_34016B238DD7F8C6(::MoleMole::UIControlItem* a1)
	{
		return ((::System::String*(*)(::PVOID, ::MoleMole::UIControlItem*))((::PBYTE)hIl2Cpp + CLASS_1_95082EF94B85BC3F_CLASS_1_97CBD1F3BEC51D06_METHOD_1_34016B238DD7F8C6_OFFSET))(this, a1);
	}

	::System::String* Method_1_E8AF0CFC27C01C45(::MoleMole::UIControlItem* a1, ::System::String* a2, ::System::String* a3, ::System::Boolean a4)
	{
		return ((::System::String*(*)(::PVOID, ::MoleMole::UIControlItem*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_95082EF94B85BC3F_CLASS_1_97CBD1F3BEC51D06_METHOD_1_E8AF0CFC27C01C45_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::String* Method_1_DC82225894753817(::MoleMole::UIControlItem* a1, ::System::Boolean a2)
	{
		return ((::System::String*(*)(::PVOID, ::MoleMole::UIControlItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_95082EF94B85BC3F_CLASS_1_97CBD1F3BEC51D06_METHOD_1_DC82225894753817_OFFSET))(this, a1, a2);
	}
};
