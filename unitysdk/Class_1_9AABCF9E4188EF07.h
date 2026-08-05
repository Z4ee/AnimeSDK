#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_986F7CD46D50B7E1.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_2_2A56CCCB20A346FA;
namespace MoleMole::Config { class DynamicFloat; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9AABCF9E4188EF07_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1575D480)
#define CLASS_1_9AABCF9E4188EF07_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1575D760)
#define CLASS_1_9AABCF9E4188EF07_METHOD_1_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0x1575D7E0)
#define CLASS_1_9AABCF9E4188EF07_METHOD_1_E091A92EA4DC55B8_OFFSET UNITYSDK_OFFSET(0x1575D4E0)
#define CLASS_1_9AABCF9E4188EF07__CTOR_OFFSET UNITYSDK_OFFSET(0x1575DC80)

inline static constexpr unsigned int Class_1_9AABCF9E4188EF07_TypeDefinitionIndex = 73725;

class Class_1_9AABCF9E4188EF07 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_6; // 0x10
	::MoleMole::Config::DynamicFloat* Field_1_7; // 0x18
	::Enum_3_986F7CD46D50B7E1 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AABCF9E4188EF07__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9AABCF9E4188EF07_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_9AABCF9E4188EF07_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_9AABCF9E4188EF07_METHOD_1_4E5AC15A8307DCD8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E091A92EA4DC55B8(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9AABCF9E4188EF07_METHOD_1_E091A92EA4DC55B8_OFFSET))(this, a1, a2);
	}
};
