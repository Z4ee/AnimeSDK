#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigBlackboardParam.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_198;
class Class_1_236FD73ABC492E3F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_11127330146926EE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x13298960)
#define CLASS_1_11127330146926EE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13298F50)
#define CLASS_1_11127330146926EE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13298AD0)
#define CLASS_1_11127330146926EE_METHOD_1_1A0B790695E07CE5_OFFSET UNITYSDK_OFFSET(0x13298FB0)
#define CLASS_1_11127330146926EE_METHOD_1_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0x13298B50)
#define CLASS_1_11127330146926EE__CTOR_OFFSET UNITYSDK_OFFSET(0x132991C0)

inline static constexpr unsigned int Class_1_11127330146926EE_TypeDefinitionIndex = 88695;

class Class_1_11127330146926EE : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_11127330146926EE__CTOR_OFFSET))(this);
	}

	::System::Void ExposeMember(::Class_0_16E4307DCC419505_198* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_198*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_11127330146926EE_EXPOSEMEMBER_OFFSET))(this, a1, a2);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_11127330146926EE_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_11127330146926EE_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_11127330146926EE_METHOD_1_DF413489329CBAF8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1A0B790695E07CE5(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_11127330146926EE_METHOD_1_1A0B790695E07CE5_OFFSET))(this, a1, a2);
	}
};
