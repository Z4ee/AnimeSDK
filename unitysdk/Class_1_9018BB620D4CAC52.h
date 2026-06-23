#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_1_EF896E1D0FDF202A;
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class String; }

#define CLASS_1_9018BB620D4CAC52_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1673FCA0)
#define CLASS_1_9018BB620D4CAC52_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1673FD00)
#define CLASS_1_9018BB620D4CAC52_METHOD_1_034C81DB422D5131_OFFSET UNITYSDK_OFFSET(0x16749D00)
#define CLASS_1_9018BB620D4CAC52_METHOD_1_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0x1674A090)
#define CLASS_1_9018BB620D4CAC52__CTOR_OFFSET UNITYSDK_OFFSET(0x1673FC90)

inline static constexpr unsigned int Class_1_9018BB620D4CAC52_TypeDefinitionIndex = 60215;

class Class_1_9018BB620D4CAC52 : public ::System::Object
{
public:
	::MoleMole::Config::DynamicFloat* Field_1_3; // 0x10
	::Il2CppArray<::Class_1_EF896E1D0FDF202A*>* Field_1_5; // 0x18
	::System::String* Field_1_1; // 0x20
	::MoleMole::Config::DynamicFloat* Field_1_4; // 0x28
	::MoleMole::Config::BaseProperty Field_1_0; // 0x30
	::MoleMole::Config::PropertyModifyFunction Field_1_2; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9018BB620D4CAC52__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9018BB620D4CAC52_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_9018BB620D4CAC52_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_034C81DB422D5131(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9018BB620D4CAC52_METHOD_1_034C81DB422D5131_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_9018BB620D4CAC52_METHOD_1_4E5AC15A8307DCD8_OFFSET))(this, a1);
	}
};
