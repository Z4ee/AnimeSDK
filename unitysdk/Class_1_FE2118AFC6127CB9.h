#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_D5C6B7155F87FB8F.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_1_9AABCF9E4188EF07;
namespace MoleMole::Config { class DynamicInt; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_FE2118AFC6127CB9_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xF09E7A0)
#define CLASS_1_FE2118AFC6127CB9_FROMFLX_OFFSET UNITYSDK_OFFSET(0xF09EA60)
#define CLASS_1_FE2118AFC6127CB9_METHOD_1_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0xF09EAE0)
#define CLASS_1_FE2118AFC6127CB9_METHOD_1_E091A92EA4DC55B8_OFFSET UNITYSDK_OFFSET(0xF09E800)
#define CLASS_1_FE2118AFC6127CB9__CTOR_OFFSET UNITYSDK_OFFSET(0xF09EF40)

inline static constexpr unsigned int Class_1_FE2118AFC6127CB9_TypeDefinitionIndex = 58252;

class Class_1_FE2118AFC6127CB9 : public ::System::Object
{
public:
	::MoleMole::Config::DynamicInt* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Class_1_9AABCF9E4188EF07*>* Field_1_7; // 0x18
	::Enum_3_D5C6B7155F87FB8F Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE2118AFC6127CB9__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FE2118AFC6127CB9_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_FE2118AFC6127CB9_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_FE2118AFC6127CB9_METHOD_1_DF413489329CBAF8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E091A92EA4DC55B8(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_FE2118AFC6127CB9_METHOD_1_E091A92EA4DC55B8_OFFSET))(this, a1, a2);
	}
};
