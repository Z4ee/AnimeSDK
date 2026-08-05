#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_2_2A56CCCB20A346FA;
namespace MoleMole::Config { class DynamicInt; }
namespace MoleMole::Config { class DynamicString; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5CA50437B2E7C28A_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17155580)
#define CLASS_1_5CA50437B2E7C28A_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17155C30)
#define CLASS_1_5CA50437B2E7C28A_METHOD_1_0688B0C508114601_OFFSET UNITYSDK_OFFSET(0x171555E0)
#define CLASS_1_5CA50437B2E7C28A_METHOD_1_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0x17155CB0)
#define CLASS_1_5CA50437B2E7C28A__CTOR_OFFSET UNITYSDK_OFFSET(0x17156980)

inline static constexpr unsigned int Class_1_5CA50437B2E7C28A_TypeDefinitionIndex = 72799;

class Class_1_5CA50437B2E7C28A : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_6; // 0x10
	::MoleMole::Config::DynamicInt* Field_1_7; // 0x18
	::MoleMole::Config::DynamicString* Field_1_1; // 0x20
	::MoleMole::Config::DynamicInt* Field_1_2; // 0x28
	::System::Boolean Field_1_4; // 0x30
	::System::Boolean Field_1_11; // 0x31
	::System::Boolean Field_1_0; // 0x32
	::System::Boolean Field_1_5; // 0x33

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5CA50437B2E7C28A__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5CA50437B2E7C28A_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_5CA50437B2E7C28A_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_0688B0C508114601(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_5CA50437B2E7C28A_METHOD_1_0688B0C508114601_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_5CA50437B2E7C28A_METHOD_1_0BD393E566CD3D4A_OFFSET))(this, a1);
	}
};
