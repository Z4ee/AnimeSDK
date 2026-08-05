#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_D58A178B2A5AF1FA.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
class Class_1_2AD981AB6ACE5E06_2;
class Class_1_D5AA5C925893357D;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_C5136A7A7911A5D4_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15FE3810)
#define CLASS_3_C5136A7A7911A5D4_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15FE21B0)
#define CLASS_3_C5136A7A7911A5D4_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x15FE4490)
#define CLASS_3_C5136A7A7911A5D4_METHOD_3_4B2A55B54410AF3F_OFFSET UNITYSDK_OFFSET(0x15FE1F80)
#define CLASS_3_C5136A7A7911A5D4_METHOD_3_662E57923E038746_OFFSET UNITYSDK_OFFSET(0x15FE4310)
#define CLASS_3_C5136A7A7911A5D4_METHOD_3_82A3EC7819F9DAA7_OFFSET UNITYSDK_OFFSET(0x15FE2230)
#define CLASS_3_C5136A7A7911A5D4_METHOD_3_8AF11A4113B593B4_OFFSET UNITYSDK_OFFSET(0x15FE4300)
#define CLASS_3_C5136A7A7911A5D4_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x15FE4330)
#define CLASS_3_C5136A7A7911A5D4_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x15FE21A0)
#define CLASS_3_C5136A7A7911A5D4_METHOD_3_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x15FE20A0)
#define CLASS_3_C5136A7A7911A5D4_METHOD_3_DCC1A04AAD39A4D8_OFFSET UNITYSDK_OFFSET(0x15FE3870)
#define CLASS_3_C5136A7A7911A5D4__CTOR_OFFSET UNITYSDK_OFFSET(0x15FE4320)

inline static constexpr unsigned int Class_3_C5136A7A7911A5D4_TypeDefinitionIndex = 47904;

class Class_3_C5136A7A7911A5D4 : public ::Class_2_D58A178B2A5AF1FA
{
public:
	::Il2CppArray<::System::Int32>* Field_3_7; // 0x28
	::Il2CppArray<::System::String*>* Field_3_10; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_3_4; // 0x38
	::Il2CppArray<::Class_1_D5AA5C925893357D*>* Field_3_13; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_3_14; // 0x48
	::Il2CppArray<::System::Int32>* Field_3_6; // 0x50
	::Il2CppArray<::System::Int32>* Field_3_0; // 0x58
	::Il2CppArray<::System::Int32>* Field_3_1; // 0x60
	::System::Int32 Field_3_5; // 0x68
	::System::Int32 Field_3_2; // 0x6C
	::System::Int32 Field_3_9; // 0x70
	::System::Int32 Field_3_15; // 0x74
	::System::Int32 Field_3_11; // 0x78
	::System::Int32 Field_3_8; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C5136A7A7911A5D4__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_4B2A55B54410AF3F(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_C5136A7A7911A5D4_METHOD_3_4B2A55B54410AF3F_OFFSET))(this, a1);
	}

	::Class_1_2AD981AB6ACE5E06_2* Method_3_D8A163211C06267F()
	{
		return ((::Class_1_2AD981AB6ACE5E06_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C5136A7A7911A5D4_METHOD_3_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C5136A7A7911A5D4_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_C5136A7A7911A5D4_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_C5136A7A7911A5D4_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Method_3_8AF11A4113B593B4()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C5136A7A7911A5D4_METHOD_3_8AF11A4113B593B4_OFFSET))(this);
	}

	::Il2CppArray<::Class_1_D5AA5C925893357D*>* Method_3_662E57923E038746()
	{
		return ((::Il2CppArray<::Class_1_D5AA5C925893357D*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C5136A7A7911A5D4_METHOD_3_662E57923E038746_OFFSET))(this);
	}

	static ::Class_3_C5136A7A7911A5D4* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_C5136A7A7911A5D4*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_C5136A7A7911A5D4_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	::System::Boolean Method_3_82A3EC7819F9DAA7(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_C5136A7A7911A5D4_METHOD_3_82A3EC7819F9DAA7_OFFSET))(this, a1);
	}

	static ::Class_3_C5136A7A7911A5D4* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_C5136A7A7911A5D4*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_C5136A7A7911A5D4_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::System::Boolean Method_3_DCC1A04AAD39A4D8(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_C5136A7A7911A5D4_METHOD_3_DCC1A04AAD39A4D8_OFFSET))(this, a1, a2);
	}
};
