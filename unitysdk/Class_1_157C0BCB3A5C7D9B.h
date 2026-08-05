#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_1CC18F0BDF4AC85F;
class Class_1_236FD73ABC492E3F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_157C0BCB3A5C7D9B_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13E226B0)
#define CLASS_1_157C0BCB3A5C7D9B_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13E22470)
#define CLASS_1_157C0BCB3A5C7D9B_METHOD_1_157E312840A3BD00_OFFSET UNITYSDK_OFFSET(0x13E22710)
#define CLASS_1_157C0BCB3A5C7D9B_METHOD_1_5253759692D6DAC1_OFFSET UNITYSDK_OFFSET(0x13E224F0)
#define CLASS_1_157C0BCB3A5C7D9B__CTOR_OFFSET UNITYSDK_OFFSET(0x13E228C0)

inline static constexpr unsigned int Class_1_157C0BCB3A5C7D9B_TypeDefinitionIndex = 49594;

class Class_1_157C0BCB3A5C7D9B : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_1CC18F0BDF4AC85F*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_157C0BCB3A5C7D9B__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_157C0BCB3A5C7D9B_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_157C0BCB3A5C7D9B_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_157E312840A3BD00(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_157C0BCB3A5C7D9B_METHOD_1_157E312840A3BD00_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_5253759692D6DAC1(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_157C0BCB3A5C7D9B_METHOD_1_5253759692D6DAC1_OFFSET))(this, a1);
	}
};
