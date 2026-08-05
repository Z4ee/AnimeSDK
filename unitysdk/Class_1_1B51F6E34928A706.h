#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_1_EF896E1D0FDF202A;
namespace MoleMole::Config { class DynamicFloat; }

#define CLASS_1_1B51F6E34928A706_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xF1F1F60)
#define CLASS_1_1B51F6E34928A706_FROMFLX_OFFSET UNITYSDK_OFFSET(0xF1F2240)
#define CLASS_1_1B51F6E34928A706_METHOD_1_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0xF1F22C0)
#define CLASS_1_1B51F6E34928A706_METHOD_1_E091A92EA4DC55B8_OFFSET UNITYSDK_OFFSET(0xF1F1FC0)
#define CLASS_1_1B51F6E34928A706__CTOR_OFFSET UNITYSDK_OFFSET(0xF1F2760)

inline static constexpr unsigned int Class_1_1B51F6E34928A706_TypeDefinitionIndex = 81883;

class Class_1_1B51F6E34928A706 : public ::System::Object
{
public:
	::MoleMole::Config::DynamicFloat* Field_1_0; // 0x10
	::Il2CppArray<::Class_1_EF896E1D0FDF202A*>* Field_1_7; // 0x18
	::MoleMole::Config::PropertyModifyFunction Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B51F6E34928A706__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1B51F6E34928A706_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_1B51F6E34928A706_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_1B51F6E34928A706_METHOD_1_4E5AC15A8307DCD8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E091A92EA4DC55B8(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1B51F6E34928A706_METHOD_1_E091A92EA4DC55B8_OFFSET))(this, a1, a2);
	}
};
