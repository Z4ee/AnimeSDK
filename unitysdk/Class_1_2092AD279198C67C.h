#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EEA0111A28582B57;
class Class_2_79AE422BA06F6D26_65;
namespace MoleMole { class UIGroceryActivityPageController; }
namespace System { class String; }

#define CLASS_1_2092AD279198C67C_METHOD_1_73ECB962C2058A5E_OFFSET UNITYSDK_OFFSET(0x14D25C50)
#define CLASS_1_2092AD279198C67C_METHOD_1_A6544B958241856F_OFFSET UNITYSDK_OFFSET(0x14D26640)
#define CLASS_1_2092AD279198C67C_METHOD_1_EC3445F1FE5C927C_OFFSET UNITYSDK_OFFSET(0x14D263F0)
#define CLASS_1_2092AD279198C67C__CTOR_OFFSET UNITYSDK_OFFSET(0x14D25BD0)

inline static constexpr unsigned int Class_1_2092AD279198C67C_TypeDefinitionIndex = 48400;

class Class_1_2092AD279198C67C : public ::System::Object
{
public:
	// static const ::System::String* Field_1_2; // 0x0
	// static const ::System::String* Field_1_3; // 0x0
	::MoleMole::UIGroceryActivityPageController* Field_1_0; // 0x10
	::Class_2_79AE422BA06F6D26_65* Field_1_1; // 0x18
	::System::Boolean Field_1_5; // 0x20
	::System::Int32 Field_1_4; // 0x24

	::System::Void _ctor(::MoleMole::UIGroceryActivityPageController* a1, ::Class_1_EEA0111A28582B57* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGroceryActivityPageController*, ::Class_1_EEA0111A28582B57*))((::PBYTE)hIl2Cpp + CLASS_1_2092AD279198C67C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_73ECB962C2058A5E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2092AD279198C67C_METHOD_1_73ECB962C2058A5E_OFFSET))(this, a1);
	}

	::System::Void Method_1_EC3445F1FE5C927C(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2092AD279198C67C_METHOD_1_EC3445F1FE5C927C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A6544B958241856F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2092AD279198C67C_METHOD_1_A6544B958241856F_OFFSET))(this);
	}
};
