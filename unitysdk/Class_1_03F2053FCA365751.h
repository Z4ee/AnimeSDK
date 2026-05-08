#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_204C453CC79AE4E0;
class Class_1_204C453CC79AE4E0_1;
class Class_1_204C453CC79AE4E0_2;
class Class_1_236FD73ABC492E3F;
class Class_1_50E88D52C3691096;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_03F2053FCA365751_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13A0B4D0)
#define CLASS_1_03F2053FCA365751_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13A0AE00)
#define CLASS_1_03F2053FCA365751_METHOD_1_0CB3D614A4DB34A1_OFFSET UNITYSDK_OFFSET(0x13A0AE80)
#define CLASS_1_03F2053FCA365751_METHOD_1_C7F9ED430E054F62_OFFSET UNITYSDK_OFFSET(0x13A0B530)
#define CLASS_1_03F2053FCA365751__CTOR_OFFSET UNITYSDK_OFFSET(0x13A0B860)

inline static constexpr unsigned int Class_1_03F2053FCA365751_TypeDefinitionIndex = 80282;

class Class_1_03F2053FCA365751 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_204C453CC79AE4E0_1*>* Field_1_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_50E88D52C3691096*>* Field_1_3; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_204C453CC79AE4E0*>* Field_1_1; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_204C453CC79AE4E0_2*>* Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_03F2053FCA365751__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_03F2053FCA365751_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_03F2053FCA365751_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_0CB3D614A4DB34A1(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_03F2053FCA365751_METHOD_1_0CB3D614A4DB34A1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_C7F9ED430E054F62(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_03F2053FCA365751_METHOD_1_C7F9ED430E054F62_OFFSET))(this, a1, a2);
	}
};
