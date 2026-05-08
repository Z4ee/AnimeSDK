#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_1_B810A3B5B6A63A27;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_7BC460568DB72882_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x11940E70)
#define CLASS_1_7BC460568DB72882_FROMFLX_OFFSET UNITYSDK_OFFSET(0x11940990)
#define CLASS_1_7BC460568DB72882_METHOD_1_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0x11940A60)
#define CLASS_1_7BC460568DB72882_METHOD_1_F1153A4377815E0F_OFFSET UNITYSDK_OFFSET(0x11940F20)
#define CLASS_1_7BC460568DB72882__CTOR_OFFSET UNITYSDK_OFFSET(0x11941180)

inline static constexpr unsigned int Class_1_7BC460568DB72882_TypeDefinitionIndex = 77471;

class Class_1_7BC460568DB72882 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_B810A3B5B6A63A27*>* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7BC460568DB72882__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_7BC460568DB72882_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7BC460568DB72882_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F1153A4377815E0F(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7BC460568DB72882_METHOD_1_F1153A4377815E0F_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_7BC460568DB72882_METHOD_1_DF413489329CBAF8_OFFSET))(this, a1);
	}
};
