#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7CFB31C413D16E14.h"
#include "unitysdk/System/Object.h"

class Class_2_1824EF69C8E376A3;
namespace MoleMole { class UIGeneralHeadRowWidgetController; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_AB7939998F4685EB_METHOD_1_1E13A8A5C0FF7D62_OFFSET UNITYSDK_OFFSET(0x1414F900)
#define CLASS_1_AB7939998F4685EB_METHOD_1_4848172904E68A9D_OFFSET UNITYSDK_OFFSET(0x1414FD20)
#define CLASS_1_AB7939998F4685EB_METHOD_1_52EC5223DA50775D_OFFSET UNITYSDK_OFFSET(0x14150220)
#define CLASS_1_AB7939998F4685EB_METHOD_1_534CE553EA0CD586_OFFSET UNITYSDK_OFFSET(0x14150000)
#define CLASS_1_AB7939998F4685EB_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x14150280)
#define CLASS_1_AB7939998F4685EB_METHOD_1_F6A335EC9AF9EF45_OFFSET UNITYSDK_OFFSET(0x1414F880)
#define CLASS_1_AB7939998F4685EB__CTOR_OFFSET UNITYSDK_OFFSET(0x1414F7E0)

inline static constexpr unsigned int Class_1_AB7939998F4685EB_TypeDefinitionIndex = 58260;

class Class_1_AB7939998F4685EB : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::UIGeneralHeadRowWidgetController*>* Field_1_3; // 0x18
	::System::Action_1<::System::Int32>* Field_1_5; // 0x20
	::System::Int32 Field_1_0; // 0x28
	::Enum_3_7CFB31C413D16E14 Field_1_4; // 0x2C
	::System::Int32 Field_1_1; // 0x30

	::System::Void _ctor(::System::Collections::Generic::List_1<::MoleMole::UIGeneralHeadRowWidgetController*>*& a1, ::System::Action_1<::System::Int32>* a2, ::Enum_3_7CFB31C413D16E14 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::UIGeneralHeadRowWidgetController*>*&, ::System::Action_1<::System::Int32>*, ::Enum_3_7CFB31C413D16E14))((::PBYTE)hIl2Cpp + CLASS_1_AB7939998F4685EB__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_F6A335EC9AF9EF45(::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>*& a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>*&, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AB7939998F4685EB_METHOD_1_F6A335EC9AF9EF45_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1E13A8A5C0FF7D62()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB7939998F4685EB_METHOD_1_1E13A8A5C0FF7D62_OFFSET))(this);
	}

	::System::Void Method_1_534CE553EA0CD586(::MoleMole::UIGeneralHeadRowWidgetController* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralHeadRowWidgetController*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AB7939998F4685EB_METHOD_1_534CE553EA0CD586_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_52EC5223DA50775D(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AB7939998F4685EB_METHOD_1_52EC5223DA50775D_OFFSET))(this, a1);
	}

	::System::Void Method_1_4848172904E68A9D(::MoleMole::UIGeneralHeadRowWidgetController* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralHeadRowWidgetController*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AB7939998F4685EB_METHOD_1_4848172904E68A9D_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB7939998F4685EB_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}
};
