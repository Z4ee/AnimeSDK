#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_2_7C9A70DC3FC57CDC;
namespace MoleMole::Config { class DynamicFloat; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_54AC34684E951BD3_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x123A8E60)
#define CLASS_1_54AC34684E951BD3_FROMFLX_OFFSET UNITYSDK_OFFSET(0x123A9180)
#define CLASS_1_54AC34684E951BD3_METHOD_1_1A0B790695E07CE5_OFFSET UNITYSDK_OFFSET(0x123A8EC0)
#define CLASS_1_54AC34684E951BD3_METHOD_1_464B80C09A37526F_OFFSET UNITYSDK_OFFSET(0x123A9100)
#define CLASS_1_54AC34684E951BD3_METHOD_1_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0x123A9200)
#define CLASS_1_54AC34684E951BD3__CTOR_OFFSET UNITYSDK_OFFSET(0x123A95C0)

inline static constexpr unsigned int Class_1_54AC34684E951BD3_TypeDefinitionIndex = 40708;

class Class_1_54AC34684E951BD3 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_2_7C9A70DC3FC57CDC*>* Field_1_1; // 0x10
	::MoleMole::Config::DynamicFloat* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54AC34684E951BD3__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_54AC34684E951BD3_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_464B80C09A37526F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54AC34684E951BD3_METHOD_1_464B80C09A37526F_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_54AC34684E951BD3_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1A0B790695E07CE5(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_54AC34684E951BD3_METHOD_1_1A0B790695E07CE5_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_54AC34684E951BD3_METHOD_1_DF413489329CBAF8_OFFSET))(this, a1);
	}
};
