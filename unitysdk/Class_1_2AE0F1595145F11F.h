#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Struct_2_2F8FC043285F98CD_1.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_2_43C12E8BF4D3B0DF;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2AE0F1595145F11F_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13ECD4A0)
#define CLASS_1_2AE0F1595145F11F_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13ECD0E0)
#define CLASS_1_2AE0F1595145F11F_METHOD_1_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0x13ECD160)
#define CLASS_1_2AE0F1595145F11F_METHOD_1_BA1BB49741CFDFE1_OFFSET UNITYSDK_OFFSET(0x13ECD070)
#define CLASS_1_2AE0F1595145F11F_METHOD_1_FE68BBC7DCCBEB6D_OFFSET UNITYSDK_OFFSET(0x13ECD500)
#define CLASS_1_2AE0F1595145F11F__CTOR_OFFSET UNITYSDK_OFFSET(0x13ECD710)

inline static constexpr unsigned int Class_1_2AE0F1595145F11F_TypeDefinitionIndex = 50881;

class Class_1_2AE0F1595145F11F : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_2_43C12E8BF4D3B0DF*>* Field_1_0; // 0x10
	::Struct_2_2F8FC043285F98CD_1 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AE0F1595145F11F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BA1BB49741CFDFE1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AE0F1595145F11F_METHOD_1_BA1BB49741CFDFE1_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_2AE0F1595145F11F_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2AE0F1595145F11F_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_FE68BBC7DCCBEB6D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2AE0F1595145F11F_METHOD_1_FE68BBC7DCCBEB6D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_2AE0F1595145F11F_METHOD_1_0BD393E566CD3D4A_OFFSET))(this, a1);
	}
};
