#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_1_4ED21A115C97704D;
class Class_2_7C9A70DC3FC57CDC;
namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace MoleMole::Config { class DynamicString; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_AB4E9C6220DB54FF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13A1BBC0)
#define CLASS_1_AB4E9C6220DB54FF_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13A1C620)
#define CLASS_1_AB4E9C6220DB54FF_METHOD_1_3DF538A263488B84_OFFSET UNITYSDK_OFFSET(0x13A1BC20)
#define CLASS_1_AB4E9C6220DB54FF_METHOD_1_993A24B415B41A1C_OFFSET UNITYSDK_OFFSET(0x13A1C6A0)
#define CLASS_1_AB4E9C6220DB54FF__CTOR_OFFSET UNITYSDK_OFFSET(0x13A1E2D0)

inline static constexpr unsigned int Class_1_AB4E9C6220DB54FF_TypeDefinitionIndex = 56291;

class Class_1_AB4E9C6220DB54FF : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_2_7C9A70DC3FC57CDC*>* Field_1_12; // 0x10
	::MoleMole::Config::DynamicFloat* Field_1_2; // 0x18
	::MoleMole::Config::DynamicInt* Field_1_0; // 0x20
	::Class_1_4ED21A115C97704D* Field_1_10; // 0x28
	::Class_1_4ED21A115C97704D* Field_1_9; // 0x30
	::MoleMole::Config::ConfigPosRot* Field_1_7; // 0x38
	::MoleMole::Config::DynamicInt* Field_1_8; // 0x40
	::MoleMole::Config::DynamicInt* Field_1_1; // 0x48
	::System::Collections::Generic::List_1<::Class_2_7C9A70DC3FC57CDC*>* Field_1_13; // 0x50
	::MoleMole::Config::DynamicString* Field_1_4; // 0x58
	::MoleMole::Config::ConfigPosRot* Field_1_6; // 0x60
	::MoleMole::Config::DynamicFloat* Field_1_3; // 0x68
	::System::Collections::Generic::List_1<::Class_2_7C9A70DC3FC57CDC*>* Field_1_11; // 0x70
	::MoleMole::Config::ConfigPosRot* Field_1_5; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AB4E9C6220DB54FF__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AB4E9C6220DB54FF_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_AB4E9C6220DB54FF_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_993A24B415B41A1C(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_AB4E9C6220DB54FF_METHOD_1_993A24B415B41A1C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_3DF538A263488B84(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_AB4E9C6220DB54FF_METHOD_1_3DF538A263488B84_OFFSET))(this, a1, a2);
	}
};
