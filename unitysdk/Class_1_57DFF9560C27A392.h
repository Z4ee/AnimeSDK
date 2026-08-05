#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_CD0EFC7FB96FAA42.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_1_3D490DD7A2CAB721;
class Class_1_B7E341C5F1A6F199;
class Class_2_14986121AA61AD99;
class Class_2_1C93660C39236995;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_57DFF9560C27A392_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13CFC3D0)
#define CLASS_1_57DFF9560C27A392_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13CFC640)
#define CLASS_1_57DFF9560C27A392_METHOD_1_48187424CEF13D3A_1_OFFSET UNITYSDK_OFFSET(0x13CFD0A0)
#define CLASS_1_57DFF9560C27A392_METHOD_1_48187424CEF13D3A_OFFSET UNITYSDK_OFFSET(0x13CFCF40)
#define CLASS_1_57DFF9560C27A392_METHOD_1_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0x13CFC6C0)
#define CLASS_1_57DFF9560C27A392_METHOD_1_7DFB0273BBE9232D_OFFSET UNITYSDK_OFFSET(0x13CFC9F0)
#define CLASS_1_57DFF9560C27A392_METHOD_1_FE68BBC7DCCBEB6D_OFFSET UNITYSDK_OFFSET(0x13CFC430)
#define CLASS_1_57DFF9560C27A392__CTOR_OFFSET UNITYSDK_OFFSET(0x13CFC9E0)

inline static constexpr unsigned int Class_1_57DFF9560C27A392_TypeDefinitionIndex = 91294;

class Class_1_57DFF9560C27A392 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_3D490DD7A2CAB721*>* Field_1_7; // 0x10
	::Enum_3_CD0EFC7FB96FAA42 Field_1_0; // 0x18

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

	::System::Boolean Method_1_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_57DFF9560C27A392_METHOD_1_4E5AC15A8307DCD8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_7DFB0273BBE9232D(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3, ::Class_1_B7E341C5F1A6F199* a4, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*& a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::Class_1_B7E341C5F1A6F199*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*&))((::PBYTE)hIl2Cpp + CLASS_1_57DFF9560C27A392_METHOD_1_7DFB0273BBE9232D_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_48187424CEF13D3A(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_57DFF9560C27A392_METHOD_1_48187424CEF13D3A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_FE68BBC7DCCBEB6D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_57DFF9560C27A392_METHOD_1_FE68BBC7DCCBEB6D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_48187424CEF13D3A_1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_57DFF9560C27A392_METHOD_1_48187424CEF13D3A_1_OFFSET))(this, a1);
	}
};
