#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_1_4ED21A115C97704D;
class Class_2_2A56CCCB20A346FA;
namespace MoleMole::Config { class ConfigPosRot; }
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicInt; }
namespace MoleMole::Config { class DynamicString; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_077219EE5F3510E3_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x12F48B40)
#define CLASS_1_077219EE5F3510E3_FROMFLX_OFFSET UNITYSDK_OFFSET(0x12F49620)
#define CLASS_1_077219EE5F3510E3_METHOD_1_3DF538A263488B84_OFFSET UNITYSDK_OFFSET(0x12F48BA0)
#define CLASS_1_077219EE5F3510E3_METHOD_1_82A3EC7819F9DAA7_OFFSET UNITYSDK_OFFSET(0x12F496A0)
#define CLASS_1_077219EE5F3510E3__CTOR_OFFSET UNITYSDK_OFFSET(0x12F4B3B0)

inline static constexpr unsigned int Class_1_077219EE5F3510E3_TypeDefinitionIndex = 76397;

class Class_1_077219EE5F3510E3 : public ::System::Object
{
public:
	::MoleMole::Config::DynamicString* Field_1_6; // 0x10
	::MoleMole::Config::ConfigPosRot* Field_1_11; // 0x18
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_14; // 0x20
	::MoleMole::Config::DynamicFloat* Field_1_0; // 0x28
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_12; // 0x30
	::Class_1_4ED21A115C97704D* Field_1_15; // 0x38
	::MoleMole::Config::DynamicInt* Field_1_1; // 0x40
	::Class_1_4ED21A115C97704D* Field_1_8; // 0x48
	::MoleMole::Config::DynamicInt* Field_1_10; // 0x50
	::MoleMole::Config::DynamicInt* Field_1_2; // 0x58
	::MoleMole::Config::ConfigPosRot* Field_1_4; // 0x60
	::MoleMole::Config::DynamicFloat* Field_1_7; // 0x68
	::MoleMole::Config::ConfigPosRot* Field_1_5; // 0x70
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_13; // 0x78
	::Class_1_4ED21A115C97704D* Field_1_9; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_077219EE5F3510E3__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_077219EE5F3510E3_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_077219EE5F3510E3_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_82A3EC7819F9DAA7(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_077219EE5F3510E3_METHOD_1_82A3EC7819F9DAA7_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_3DF538A263488B84(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_077219EE5F3510E3_METHOD_1_3DF538A263488B84_OFFSET))(this, a1, a2);
	}
};
