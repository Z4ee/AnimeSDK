#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_E668906428D15DDE_2;
namespace MoleMole { class UIHollowCardOptionsDialogContext; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_2CE6897AD8BF7607_METHOD_1_27683CB99217251C_OFFSET UNITYSDK_OFFSET(0x11D51010)
#define CLASS_1_2CE6897AD8BF7607_METHOD_1_4AADAF19CDCB660E_OFFSET UNITYSDK_OFFSET(0x11D50EE0)
#define CLASS_1_2CE6897AD8BF7607_METHOD_1_61552390C1BD83A5_OFFSET UNITYSDK_OFFSET(0x11D51120)
#define CLASS_1_2CE6897AD8BF7607_METHOD_1_6D8B8CD47CD59618_OFFSET UNITYSDK_OFFSET(0x11D51440)
#define CLASS_1_2CE6897AD8BF7607_METHOD_1_F87F502BB53431DE_OFFSET UNITYSDK_OFFSET(0x11D512C0)
#define CLASS_1_2CE6897AD8BF7607__CTOR_OFFSET UNITYSDK_OFFSET(0x11D50ED0)

inline static constexpr unsigned int Class_1_2CE6897AD8BF7607_TypeDefinitionIndex = 49972;

class Class_1_2CE6897AD8BF7607 : public ::System::Object
{
public:
	::MoleMole::UIHollowCardOptionsDialogContext* Field_1_2; // 0x10
	::System::Action_1<::System::Boolean>* Field_1_1; // 0x18
	::System::UInt32 Field_1_0; // 0x20

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2CE6897AD8BF7607__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4AADAF19CDCB660E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CE6897AD8BF7607_METHOD_1_4AADAF19CDCB660E_OFFSET))(this);
	}

	::System::Int32 Method_1_27683CB99217251C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CE6897AD8BF7607_METHOD_1_27683CB99217251C_OFFSET))(this);
	}

	::System::Void Method_1_61552390C1BD83A5(::MoleMole::UIHollowCardOptionsDialogContext* a1, ::System::Action_1<::System::Boolean>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIHollowCardOptionsDialogContext*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_2CE6897AD8BF7607_METHOD_1_61552390C1BD83A5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F87F502BB53431DE(::Class_3_E668906428D15DDE_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_E668906428D15DDE_2*))((::PBYTE)hIl2Cpp + CLASS_1_2CE6897AD8BF7607_METHOD_1_F87F502BB53431DE_OFFSET))(this, a1);
	}

	::System::Void Method_1_6D8B8CD47CD59618()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2CE6897AD8BF7607_METHOD_1_6D8B8CD47CD59618_OFFSET))(this);
	}
};
