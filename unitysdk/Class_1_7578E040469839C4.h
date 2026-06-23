#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_1CC18F0BDF4AC85F;
class Class_1_236FD73ABC492E3F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_7578E040469839C4_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xFE1C350)
#define CLASS_1_7578E040469839C4_FROMFLX_OFFSET UNITYSDK_OFFSET(0xFE1C0F0)
#define CLASS_1_7578E040469839C4_METHOD_1_42E1B0366D8D72CF_OFFSET UNITYSDK_OFFSET(0xFE1C3B0)
#define CLASS_1_7578E040469839C4_METHOD_1_5253759692D6DAC1_OFFSET UNITYSDK_OFFSET(0xFE1C170)
#define CLASS_1_7578E040469839C4__CTOR_OFFSET UNITYSDK_OFFSET(0xFE1C560)

inline static constexpr unsigned int Class_1_7578E040469839C4_TypeDefinitionIndex = 84223;

class Class_1_7578E040469839C4 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_1CC18F0BDF4AC85F*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7578E040469839C4__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_7578E040469839C4_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7578E040469839C4_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_5253759692D6DAC1(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_7578E040469839C4_METHOD_1_5253759692D6DAC1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_42E1B0366D8D72CF(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7578E040469839C4_METHOD_1_42E1B0366D8D72CF_OFFSET))(this, a1, a2);
	}
};
