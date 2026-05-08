#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_2_7C9A70DC3FC57CDC;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A9FEF4FBC6359D54_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xF0BF2A0)
#define CLASS_1_A9FEF4FBC6359D54_FROMFLX_OFFSET UNITYSDK_OFFSET(0xF0BF820)
#define CLASS_1_A9FEF4FBC6359D54_METHOD_1_5B0202969299569F_OFFSET UNITYSDK_OFFSET(0xF0BF8A0)
#define CLASS_1_A9FEF4FBC6359D54_METHOD_1_9E197ECE08E3E272_OFFSET UNITYSDK_OFFSET(0xF0BF300)
#define CLASS_1_A9FEF4FBC6359D54__CTOR_OFFSET UNITYSDK_OFFSET(0xF0C04D0)

inline static constexpr unsigned int Class_1_A9FEF4FBC6359D54_TypeDefinitionIndex = 77359;

class Class_1_A9FEF4FBC6359D54 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_2_7C9A70DC3FC57CDC*>* Field_1_7; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::String* Field_1_6; // 0x20
	::System::String* Field_1_3; // 0x28
	::System::Boolean Field_1_5; // 0x30
	::System::Boolean Field_1_4; // 0x31
	::MoleMole::Config::BaseProperty Field_1_0; // 0x34
	::MoleMole::Config::BaseProperty Field_1_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A9FEF4FBC6359D54__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A9FEF4FBC6359D54_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_A9FEF4FBC6359D54_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5B0202969299569F(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_A9FEF4FBC6359D54_METHOD_1_5B0202969299569F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_9E197ECE08E3E272(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A9FEF4FBC6359D54_METHOD_1_9E197ECE08E3E272_OFFSET))(this, a1, a2);
	}
};
