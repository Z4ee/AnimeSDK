#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define CLASS_1_3662FC1DFD6A3E67_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x148AEDA0)
#define CLASS_1_3662FC1DFD6A3E67_FROMFLX_OFFSET UNITYSDK_OFFSET(0x148AF250)
#define CLASS_1_3662FC1DFD6A3E67_METHOD_1_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0x148AF2D0)
#define CLASS_1_3662FC1DFD6A3E67_METHOD_1_F1153A4377815E0F_OFFSET UNITYSDK_OFFSET(0x148AEE00)
#define CLASS_1_3662FC1DFD6A3E67__CTOR_OFFSET UNITYSDK_OFFSET(0x148AF7B0)

inline static constexpr unsigned int Class_1_3662FC1DFD6A3E67_TypeDefinitionIndex = 79801;

class Class_1_3662FC1DFD6A3E67 : public ::System::Object
{
public:
	::Il2CppArray<::System::Int32>* Field_1_1; // 0x10
	::Il2CppArray<::System::String*>* Field_1_0; // 0x18
	::System::Boolean Field_1_7; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3662FC1DFD6A3E67__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3662FC1DFD6A3E67_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_3662FC1DFD6A3E67_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F1153A4377815E0F(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3662FC1DFD6A3E67_METHOD_1_F1153A4377815E0F_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_3662FC1DFD6A3E67_METHOD_1_DF413489329CBAF8_OFFSET))(this, a1);
	}
};
