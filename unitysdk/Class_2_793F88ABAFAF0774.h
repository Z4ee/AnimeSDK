#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2AD981AB6ACE5E06_2.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
class Class_1_D5AA5C925893357D;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_793F88ABAFAF0774_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17E81AE0)
#define CLASS_2_793F88ABAFAF0774_FROMFLX_OFFSET UNITYSDK_OFFSET(0x17E81290)
#define CLASS_2_793F88ABAFAF0774_METHOD_2_00531776927FE5B6_OFFSET UNITYSDK_OFFSET(0x17E81310)
#define CLASS_2_793F88ABAFAF0774_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x17E82300)
#define CLASS_2_793F88ABAFAF0774_METHOD_2_662E57923E038746_OFFSET UNITYSDK_OFFSET(0x17E82180)
#define CLASS_2_793F88ABAFAF0774_METHOD_2_8AF11A4113B593B4_OFFSET UNITYSDK_OFFSET(0x17E82170)
#define CLASS_2_793F88ABAFAF0774_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x17E81280)
#define CLASS_2_793F88ABAFAF0774_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x17E821A0)
#define CLASS_2_793F88ABAFAF0774_METHOD_2_D4ABEF7DE8CFDB8D_OFFSET UNITYSDK_OFFSET(0x17E81100)
#define CLASS_2_793F88ABAFAF0774_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x17E81180)
#define CLASS_2_793F88ABAFAF0774_METHOD_2_DF5526BA6D1A4902_OFFSET UNITYSDK_OFFSET(0x17E81B40)
#define CLASS_2_793F88ABAFAF0774__CTOR_OFFSET UNITYSDK_OFFSET(0x17E82190)

inline static constexpr unsigned int Class_2_793F88ABAFAF0774_TypeDefinitionIndex = 54336;

class Class_2_793F88ABAFAF0774 : public ::Class_1_2AD981AB6ACE5E06_2
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_2_0; // 0x20
	::Il2CppArray<::Class_1_D5AA5C925893357D*>* Field_2_7; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_2_2; // 0x30
	::System::Int32 Field_2_1; // 0x38
	::System::Int32 Field_2_3; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_793F88ABAFAF0774__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_D4ABEF7DE8CFDB8D(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_793F88ABAFAF0774_METHOD_2_D4ABEF7DE8CFDB8D_OFFSET))(this, a1);
	}

	::Class_1_2AD981AB6ACE5E06_2* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_2AD981AB6ACE5E06_2*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_793F88ABAFAF0774_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_793F88ABAFAF0774_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_793F88ABAFAF0774_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_793F88ABAFAF0774_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Method_2_8AF11A4113B593B4()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_793F88ABAFAF0774_METHOD_2_8AF11A4113B593B4_OFFSET))(this);
	}

	::Il2CppArray<::Class_1_D5AA5C925893357D*>* Method_2_662E57923E038746()
	{
		return ((::Il2CppArray<::Class_1_D5AA5C925893357D*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_793F88ABAFAF0774_METHOD_2_662E57923E038746_OFFSET))(this);
	}

	static ::Class_2_793F88ABAFAF0774* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_793F88ABAFAF0774*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_793F88ABAFAF0774_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	static ::Class_2_793F88ABAFAF0774* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_793F88ABAFAF0774*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_793F88ABAFAF0774_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_00531776927FE5B6(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_793F88ABAFAF0774_METHOD_2_00531776927FE5B6_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_DF5526BA6D1A4902(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_793F88ABAFAF0774_METHOD_2_DF5526BA6D1A4902_OFFSET))(this, a1, a2);
	}
};
