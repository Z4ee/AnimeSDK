#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D0D2B3C2533F6DF2_3.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }

#define CLASS_2_62EC625751F3A21B_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x12DC88D0)
#define CLASS_2_62EC625751F3A21B_FROMFLX_OFFSET UNITYSDK_OFFSET(0x12DC8670)
#define CLASS_2_62EC625751F3A21B_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x12DC8DE0)
#define CLASS_2_62EC625751F3A21B_METHOD_2_157E312840A3BD00_OFFSET UNITYSDK_OFFSET(0x12DC8930)
#define CLASS_2_62EC625751F3A21B_METHOD_2_49128280A131ACC1_OFFSET UNITYSDK_OFFSET(0x12DC8D40)
#define CLASS_2_62EC625751F3A21B_METHOD_2_5253759692D6DAC1_OFFSET UNITYSDK_OFFSET(0x12DC86F0)
#define CLASS_2_62EC625751F3A21B_METHOD_2_73D84FE77DE90D8B_OFFSET UNITYSDK_OFFSET(0x12DC8B00)
#define CLASS_2_62EC625751F3A21B_METHOD_2_777C630B90A28EF1_OFFSET UNITYSDK_OFFSET(0x12DC8600)
#define CLASS_2_62EC625751F3A21B_METHOD_2_B73F62522113F21F_OFFSET UNITYSDK_OFFSET(0x12DC84A0)
#define CLASS_2_62EC625751F3A21B_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x12DC85F0)
#define CLASS_2_62EC625751F3A21B_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x12DC8BE0)
#define CLASS_2_62EC625751F3A21B_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x12DC84F0)
#define CLASS_2_62EC625751F3A21B__CTOR_OFFSET UNITYSDK_OFFSET(0x12DC8BD0)

inline static constexpr unsigned int Class_2_62EC625751F3A21B_TypeDefinitionIndex = 45742;

class Class_2_62EC625751F3A21B : public ::Class_1_D0D2B3C2533F6DF2_3
{
public:
	::Il2CppArray<::Class_1_D0D2B3C2533F6DF2_3*>* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62EC625751F3A21B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B73F62522113F21F(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_62EC625751F3A21B_METHOD_2_B73F62522113F21F_OFFSET))(this, a1);
	}

	::Class_1_D0D2B3C2533F6DF2_3* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_D0D2B3C2533F6DF2_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62EC625751F3A21B_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62EC625751F3A21B_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_2_777C630B90A28EF1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62EC625751F3A21B_METHOD_2_777C630B90A28EF1_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_62EC625751F3A21B_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_62EC625751F3A21B_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_73D84FE77DE90D8B(::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>* a1, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>*, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_62EC625751F3A21B_METHOD_2_73D84FE77DE90D8B_OFFSET))(this, a1, a2);
	}

	static ::Class_2_62EC625751F3A21B* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_62EC625751F3A21B*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_62EC625751F3A21B_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	::System::Boolean Method_2_157E312840A3BD00(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_62EC625751F3A21B_METHOD_2_157E312840A3BD00_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_49128280A131ACC1(::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>* a1, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>*, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_62EC625751F3A21B_METHOD_2_49128280A131ACC1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_5253759692D6DAC1(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_62EC625751F3A21B_METHOD_2_5253759692D6DAC1_OFFSET))(this, a1);
	}

	static ::Class_2_62EC625751F3A21B* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_62EC625751F3A21B*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_62EC625751F3A21B_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}
};
