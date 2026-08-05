#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_63BB0318F1FE77F0;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_2F3C7D4EFC74D485_CLASS_1_D843EF275C1BA655_METHOD_1_76246C5338217F00_OFFSET UNITYSDK_OFFSET(0x12D84F60)
#define CLASS_2_2F3C7D4EFC74D485_CLASS_1_D843EF275C1BA655_METHOD_1_BBDDAAF43A9AD89B_OFFSET UNITYSDK_OFFSET(0x12D84FC0)
#define CLASS_2_2F3C7D4EFC74D485_CLASS_1_D843EF275C1BA655__CTOR_OFFSET UNITYSDK_OFFSET(0x12D84F50)

inline static constexpr unsigned int Class_2_2F3C7D4EFC74D485_Class_1_D843EF275C1BA655_TypeDefinitionIndex = 43376;

class Class_2_2F3C7D4EFC74D485_Class_1_D843EF275C1BA655 : public ::System::Object
{
public:
	::System::Action_1<::Class_3_63BB0318F1FE77F0*>* Field_1_1; // 0x10
	::System::Action* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F3C7D4EFC74D485_CLASS_1_D843EF275C1BA655__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_76246C5338217F00(::Class_3_63BB0318F1FE77F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_63BB0318F1FE77F0*))((::PBYTE)hIl2Cpp + CLASS_2_2F3C7D4EFC74D485_CLASS_1_D843EF275C1BA655_METHOD_1_76246C5338217F00_OFFSET))(this, a1);
	}

	::System::Void Method_1_BBDDAAF43A9AD89B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2F3C7D4EFC74D485_CLASS_1_D843EF275C1BA655_METHOD_1_BBDDAAF43A9AD89B_OFFSET))(this, a1);
	}
};
