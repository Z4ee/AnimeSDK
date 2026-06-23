#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_1_EF896E1D0FDF202A;
namespace MoleMole::Config { class DynamicFloat; }

#define CLASS_1_A8BFEF3643A40590_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1309FDC0)
#define CLASS_1_A8BFEF3643A40590_FROMFLX_OFFSET UNITYSDK_OFFSET(0x130A0110)
#define CLASS_1_A8BFEF3643A40590_METHOD_1_33D9277D1D76DE9B_OFFSET UNITYSDK_OFFSET(0x1309FE20)
#define CLASS_1_A8BFEF3643A40590_METHOD_1_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0x130A0190)
#define CLASS_1_A8BFEF3643A40590__CTOR_OFFSET UNITYSDK_OFFSET(0x130A0810)

inline static constexpr unsigned int Class_1_A8BFEF3643A40590_TypeDefinitionIndex = 46245;

class Class_1_A8BFEF3643A40590 : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_EF896E1D0FDF202A*>* Field_1_3; // 0x10
	::MoleMole::Config::DynamicFloat* Field_1_1; // 0x18
	::MoleMole::Config::DynamicFloat* Field_1_2; // 0x20
	::MoleMole::Config::PropertyModifyFunction Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A8BFEF3643A40590__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A8BFEF3643A40590_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_A8BFEF3643A40590_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_A8BFEF3643A40590_METHOD_1_4E5AC15A8307DCD8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_33D9277D1D76DE9B(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A8BFEF3643A40590_METHOD_1_33D9277D1D76DE9B_OFFSET))(this, a1, a2);
	}
};
