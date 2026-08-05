#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_2_2A56CCCB20A346FA;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B7637CFF22586878_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x194861B0)
#define CLASS_1_B7637CFF22586878_FROMFLX_OFFSET UNITYSDK_OFFSET(0x194865D0)
#define CLASS_1_B7637CFF22586878_METHOD_1_1DFF921950D5D3D5_OFFSET UNITYSDK_OFFSET(0x19486210)
#define CLASS_1_B7637CFF22586878_METHOD_1_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0x19486650)
#define CLASS_1_B7637CFF22586878__CTOR_OFFSET UNITYSDK_OFFSET(0x19486CE0)

inline static constexpr unsigned int Class_1_B7637CFF22586878_TypeDefinitionIndex = 54080;

class Class_1_B7637CFF22586878 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_2_2A56CCCB20A346FA*>* Field_1_2; // 0x10
	::Il2CppArray<::System::String*>* Field_1_0; // 0x18
	::System::String* Field_1_1; // 0x20
	::System::Single Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7637CFF22586878__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B7637CFF22586878_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_B7637CFF22586878_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1DFF921950D5D3D5(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B7637CFF22586878_METHOD_1_1DFF921950D5D3D5_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_B7637CFF22586878_METHOD_1_4E5AC15A8307DCD8_OFFSET))(this, a1);
	}
};
