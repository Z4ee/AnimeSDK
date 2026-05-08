#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_145E2DA042628BC6;
class Class_1_236FD73ABC492E3F;
class Class_1_2AE0F1595145F11F;
class Class_1_8088D8743C1058EF;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0768A23EA341CE72_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18263130)
#define CLASS_1_0768A23EA341CE72_FROMFLX_OFFSET UNITYSDK_OFFSET(0x18262BD0)
#define CLASS_1_0768A23EA341CE72_METHOD_1_5253759692D6DAC1_OFFSET UNITYSDK_OFFSET(0x18262C50)
#define CLASS_1_0768A23EA341CE72_METHOD_1_C68CB15A07D0E2EF_OFFSET UNITYSDK_OFFSET(0x18263190)
#define CLASS_1_0768A23EA341CE72_METHOD_1_C8E2469222842786_OFFSET UNITYSDK_OFFSET(0x18262B40)
#define CLASS_1_0768A23EA341CE72__CTOR_OFFSET UNITYSDK_OFFSET(0x18263460)

inline static constexpr unsigned int Class_1_0768A23EA341CE72_TypeDefinitionIndex = 63046;

class Class_1_0768A23EA341CE72 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_145E2DA042628BC6*>* Field_1_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_2AE0F1595145F11F*>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::Class_1_8088D8743C1058EF*>* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0768A23EA341CE72__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C8E2469222842786()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0768A23EA341CE72_METHOD_1_C8E2469222842786_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_0768A23EA341CE72_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0768A23EA341CE72_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_C68CB15A07D0E2EF(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0768A23EA341CE72_METHOD_1_C68CB15A07D0E2EF_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_5253759692D6DAC1(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_0768A23EA341CE72_METHOD_1_5253759692D6DAC1_OFFSET))(this, a1);
	}
};
