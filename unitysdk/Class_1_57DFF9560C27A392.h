#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0C62734E5B82ABD6.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_1_8E43B68B61BC780E;
class Class_1_B7E341C5F1A6F199;
class Class_2_167BB37617B940E3;
class Class_2_EA995402651EF7A9;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_57DFF9560C27A392_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19E1C670)
#define CLASS_1_57DFF9560C27A392_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19E1C8E0)
#define CLASS_1_57DFF9560C27A392_METHOD_1_48187424CEF13D3A_1_OFFSET UNITYSDK_OFFSET(0x19E1D350)
#define CLASS_1_57DFF9560C27A392_METHOD_1_48187424CEF13D3A_OFFSET UNITYSDK_OFFSET(0x19E1CCA0)
#define CLASS_1_57DFF9560C27A392_METHOD_1_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0x19E1C960)
#define CLASS_1_57DFF9560C27A392_METHOD_1_7DFB0273BBE9232D_OFFSET UNITYSDK_OFFSET(0x19E1CE00)
#define CLASS_1_57DFF9560C27A392_METHOD_1_FE68BBC7DCCBEB6D_OFFSET UNITYSDK_OFFSET(0x19E1C6D0)
#define CLASS_1_57DFF9560C27A392__CTOR_OFFSET UNITYSDK_OFFSET(0x19E1CC90)

inline static constexpr unsigned int Class_1_57DFF9560C27A392_TypeDefinitionIndex = 68308;

class Class_1_57DFF9560C27A392 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_8E43B68B61BC780E*>* Field_1_1; // 0x10
	::Enum_3_0C62734E5B82ABD6 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_57DFF9560C27A392__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_57DFF9560C27A392_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_57DFF9560C27A392_FROMFLX_OFFSET))(this, a1);
	}

	::System::Void Method_1_48187424CEF13D3A(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_57DFF9560C27A392_METHOD_1_48187424CEF13D3A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_FE68BBC7DCCBEB6D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_57DFF9560C27A392_METHOD_1_FE68BBC7DCCBEB6D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_57DFF9560C27A392_METHOD_1_4E5AC15A8307DCD8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_7DFB0273BBE9232D(::Class_3_F41D242A20F8FE06* a1, ::Class_2_167BB37617B940E3* a2, ::Class_2_EA995402651EF7A9* a3, ::Class_1_B7E341C5F1A6F199* a4, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_167BB37617B940E3*, ::Class_2_EA995402651EF7A9*, ::Class_1_B7E341C5F1A6F199*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*&))((::PBYTE)hIl2Cpp + CLASS_1_57DFF9560C27A392_METHOD_1_7DFB0273BBE9232D_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_48187424CEF13D3A_1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_57DFF9560C27A392_METHOD_1_48187424CEF13D3A_1_OFFSET))(this, a1);
	}
};
