#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_57DC80FD7B2B919F.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace MoleMole::Config { class DynamicFloat; }

#define CLASS_1_43DA9F2218BD63EF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AF18BD0)
#define CLASS_1_43DA9F2218BD63EF_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1AF18E00)
#define CLASS_1_43DA9F2218BD63EF_METHOD_1_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0x1AF18E80)
#define CLASS_1_43DA9F2218BD63EF_METHOD_1_FE68BBC7DCCBEB6D_OFFSET UNITYSDK_OFFSET(0x1AF18C30)
#define CLASS_1_43DA9F2218BD63EF__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF191A0)

inline static constexpr unsigned int Class_1_43DA9F2218BD63EF_TypeDefinitionIndex = 60506;

class Class_1_43DA9F2218BD63EF : public ::System::Object
{
public:
	::MoleMole::Config::DynamicFloat* Field_1_0; // 0x10
	::Enum_3_57DC80FD7B2B919F Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43DA9F2218BD63EF__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_43DA9F2218BD63EF_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_43DA9F2218BD63EF_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_FE68BBC7DCCBEB6D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_43DA9F2218BD63EF_METHOD_1_FE68BBC7DCCBEB6D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_43DA9F2218BD63EF_METHOD_1_4E5AC15A8307DCD8_OFFSET))(this, a1);
	}
};
