#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_D7133233F10774E0_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x181F61E0)
#define CLASS_1_D7133233F10774E0_FROMFLX_OFFSET UNITYSDK_OFFSET(0x181F6860)
#define CLASS_1_D7133233F10774E0_METHOD_1_0CB3D614A4DB34A1_OFFSET UNITYSDK_OFFSET(0x181F68E0)
#define CLASS_1_D7133233F10774E0_METHOD_1_41430AFD3BF44B19_OFFSET UNITYSDK_OFFSET(0x181F6240)
#define CLASS_1_D7133233F10774E0__CTOR_OFFSET UNITYSDK_OFFSET(0x181F7170)

inline static constexpr unsigned int Class_1_D7133233F10774E0_TypeDefinitionIndex = 49718;

class Class_1_D7133233F10774E0 : public ::System::Object
{
public:
	::System::String* Field_1_3; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Field_1_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_1_1; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* Field_1_0; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* Field_1_7; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7133233F10774E0__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D7133233F10774E0_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_D7133233F10774E0_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_41430AFD3BF44B19(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D7133233F10774E0_METHOD_1_41430AFD3BF44B19_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_0CB3D614A4DB34A1(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_D7133233F10774E0_METHOD_1_0CB3D614A4DB34A1_OFFSET))(this, a1);
	}
};
