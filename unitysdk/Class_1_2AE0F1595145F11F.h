#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Struct_2_2F8FC043285F98CD.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_2_43C12E8BF4D3B0DF_2;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2AE0F1595145F11F_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17FCEC50)
#define CLASS_1_2AE0F1595145F11F_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17FCE870)
#define CLASS_1_2AE0F1595145F11F_METHOD_1_464B80C09A37526F_OFFSET UNITYSDK_OFFSET(0x17FCE800)
#define CLASS_1_2AE0F1595145F11F_METHOD_1_5789597FCF3BA428_OFFSET UNITYSDK_OFFSET(0x17FCE8F0)
#define CLASS_1_2AE0F1595145F11F_METHOD_1_FE68BBC7DCCBEB6D_OFFSET UNITYSDK_OFFSET(0x17FCECB0)
#define CLASS_1_2AE0F1595145F11F__CTOR_OFFSET UNITYSDK_OFFSET(0x17FCEEC0)

inline static constexpr unsigned int Class_1_2AE0F1595145F11F_TypeDefinitionIndex = 75531;

class Class_1_2AE0F1595145F11F : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_2_43C12E8BF4D3B0DF_2*>* Field_1_1; // 0x10
	::Struct_2_2F8FC043285F98CD Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AE0F1595145F11F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_464B80C09A37526F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2AE0F1595145F11F_METHOD_1_464B80C09A37526F_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_2AE0F1595145F11F_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2AE0F1595145F11F_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_5789597FCF3BA428(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_2AE0F1595145F11F_METHOD_1_5789597FCF3BA428_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_FE68BBC7DCCBEB6D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_2AE0F1595145F11F_METHOD_1_FE68BBC7DCCBEB6D_OFFSET))(this, a1, a2);
	}
};
