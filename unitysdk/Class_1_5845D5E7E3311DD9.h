#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_1F80ACDC6C476D82;
class Class_1_236FD73ABC492E3F;
class Class_1_3FA5D0827BD681C1;
class Class_1_B85817849BC6CF88;
namespace MoleMole::Config { class ConfigDynamicValue; }
namespace MoleMole::Config { class ConfigViewObjectTraitBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5845D5E7E3311DD9_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18111CF0)
#define CLASS_1_5845D5E7E3311DD9_FROMFLX_OFFSET UNITYSDK_OFFSET(0x18111460)
#define CLASS_1_5845D5E7E3311DD9_METHOD_1_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0x181114E0)
#define CLASS_1_5845D5E7E3311DD9_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x18112530)
#define CLASS_1_5845D5E7E3311DD9_METHOD_1_F1E860E871BA353D_OFFSET UNITYSDK_OFFSET(0x18112290)
#define CLASS_1_5845D5E7E3311DD9_METHOD_1_F7BD93A4FE3C1F71_OFFSET UNITYSDK_OFFSET(0x18111D50)
#define CLASS_1_5845D5E7E3311DD9__CCTOR_OFFSET UNITYSDK_OFFSET(0x18112250)
#define CLASS_1_5845D5E7E3311DD9__CTOR_OFFSET UNITYSDK_OFFSET(0x18112240)

inline static constexpr unsigned int Class_1_5845D5E7E3311DD9_TypeDefinitionIndex = 68898;

class Class_1_5845D5E7E3311DD9 : public ::System::Object
{
public:
	static ::Class_1_3FA5D0827BD681C1** StaticGet_Field_1_5()
	{
		return (::Class_1_3FA5D0827BD681C1**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5845D5E7E3311DD9_TypeDefinitionIndex)->GetStaticField(0x49950);
	}
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigDynamicValue*>* Field_1_1; // 0x10
	::System::String* Field_1_7; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigViewObjectTraitBase*>* Field_1_0; // 0x20
	::Class_1_B85817849BC6CF88* Field_1_6; // 0x28
	::System::Int32 Field_1_3; // 0x30
	::System::Int32 Field_1_2; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5845D5E7E3311DD9__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5845D5E7E3311DD9__CCTOR_OFFSET))();
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_5845D5E7E3311DD9_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5845D5E7E3311DD9_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F7BD93A4FE3C1F71(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5845D5E7E3311DD9_METHOD_1_F7BD93A4FE3C1F71_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_5845D5E7E3311DD9_METHOD_1_4E5AC15A8307DCD8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F1E860E871BA353D(::Class_1_1F80ACDC6C476D82* a1, ::Class_1_B85817849BC6CF88*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_1F80ACDC6C476D82*, ::Class_1_B85817849BC6CF88*&))((::PBYTE)hIl2Cpp + CLASS_1_5845D5E7E3311DD9_METHOD_1_F1E860E871BA353D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5845D5E7E3311DD9_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
