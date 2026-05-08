#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_C36C9C9BACEEE3B1.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
class Class_1_2AD981AB6ACE5E06;
class Class_1_ADDE2B57A010E39A;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_8FBD577311575282_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x140CC310)
#define CLASS_3_8FBD577311575282_FROMFLX_OFFSET UNITYSDK_OFFSET(0x140CAD00)
#define CLASS_3_8FBD577311575282_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x140CCFA0)
#define CLASS_3_8FBD577311575282_METHOD_3_4B2A55B54410AF3F_OFFSET UNITYSDK_OFFSET(0x140CAA70)
#define CLASS_3_8FBD577311575282_METHOD_3_7DB601338350FF7F_OFFSET UNITYSDK_OFFSET(0x140CC370)
#define CLASS_3_8FBD577311575282_METHOD_3_82A3EC7819F9DAA7_OFFSET UNITYSDK_OFFSET(0x140CAD80)
#define CLASS_3_8FBD577311575282_METHOD_3_8AF11A4113B593B4_OFFSET UNITYSDK_OFFSET(0x140CCE10)
#define CLASS_3_8FBD577311575282_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x140CCE40)
#define CLASS_3_8FBD577311575282_METHOD_3_B070903CA9837250_OFFSET UNITYSDK_OFFSET(0x140CCE20)
#define CLASS_3_8FBD577311575282_METHOD_3_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x140CAC90)
#define CLASS_3_8FBD577311575282_METHOD_3_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x140CAB90)
#define CLASS_3_8FBD577311575282__CTOR_OFFSET UNITYSDK_OFFSET(0x140CCE30)

inline static constexpr unsigned int Class_3_8FBD577311575282_TypeDefinitionIndex = 72698;

class Class_3_8FBD577311575282 : public ::Class_2_C36C9C9BACEEE3B1
{
public:
	::Il2CppArray<::System::Int32>* Field_3_3; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_3_6; // 0x30
	::Il2CppArray<::Class_1_ADDE2B57A010E39A*>* Field_3_13; // 0x38
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_3_12; // 0x40
	::Il2CppArray<::System::Int32>* Field_3_4; // 0x48
	::Il2CppArray<::System::Int32>* Field_3_1; // 0x50
	::Il2CppArray<::System::String*>* Field_3_8; // 0x58
	::Il2CppArray<::System::Int32>* Field_3_2; // 0x60
	::System::Int32 Field_3_10; // 0x68
	::System::Int32 Field_3_11; // 0x6C
	::System::Int32 Field_3_9; // 0x70
	::System::Int32 Field_3_7; // 0x74
	::System::Int32 Field_3_5; // 0x78
	::System::Int32 Field_3_0; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8FBD577311575282__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_4B2A55B54410AF3F(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_8FBD577311575282_METHOD_3_4B2A55B54410AF3F_OFFSET))(this, a1);
	}

	::Class_1_2AD981AB6ACE5E06* Method_3_D8A163211C06267F()
	{
		return ((::Class_1_2AD981AB6ACE5E06*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8FBD577311575282_METHOD_3_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_3_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8FBD577311575282_METHOD_3_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_8FBD577311575282_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_8FBD577311575282_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Method_3_8AF11A4113B593B4()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8FBD577311575282_METHOD_3_8AF11A4113B593B4_OFFSET))(this);
	}

	::Il2CppArray<::Class_1_ADDE2B57A010E39A*>* Method_3_B070903CA9837250()
	{
		return ((::Il2CppArray<::Class_1_ADDE2B57A010E39A*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8FBD577311575282_METHOD_3_B070903CA9837250_OFFSET))(this);
	}

	::System::Boolean Method_3_7DB601338350FF7F(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_8FBD577311575282_METHOD_3_7DB601338350FF7F_OFFSET))(this, a1, a2);
	}

	static ::Class_3_8FBD577311575282* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_8FBD577311575282*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_8FBD577311575282_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	::System::Boolean Method_3_82A3EC7819F9DAA7(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_8FBD577311575282_METHOD_3_82A3EC7819F9DAA7_OFFSET))(this, a1);
	}

	static ::Class_3_8FBD577311575282* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_8FBD577311575282*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_8FBD577311575282_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}
};
