#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2AD981AB6ACE5E06.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
class Class_1_ADDE2B57A010E39A;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_3AA161153E35FD66_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x110CD340)
#define CLASS_2_3AA161153E35FD66_FROMFLX_OFFSET UNITYSDK_OFFSET(0x110CCAE0)
#define CLASS_2_3AA161153E35FD66_METHOD_2_00531776927FE5B6_OFFSET UNITYSDK_OFFSET(0x110CCB60)
#define CLASS_2_3AA161153E35FD66_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x110CDA00)
#define CLASS_2_3AA161153E35FD66_METHOD_2_8AF11A4113B593B4_OFFSET UNITYSDK_OFFSET(0x110CD9D0)
#define CLASS_2_3AA161153E35FD66_METHOD_2_B070903CA9837250_OFFSET UNITYSDK_OFFSET(0x110CD9E0)
#define CLASS_2_3AA161153E35FD66_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x110CCA70)
#define CLASS_2_3AA161153E35FD66_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x110CDBB0)
#define CLASS_2_3AA161153E35FD66_METHOD_2_D4ABEF7DE8CFDB8D_OFFSET UNITYSDK_OFFSET(0x110CC8F0)
#define CLASS_2_3AA161153E35FD66_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x110CC970)
#define CLASS_2_3AA161153E35FD66_METHOD_2_DF5526BA6D1A4902_OFFSET UNITYSDK_OFFSET(0x110CD3A0)
#define CLASS_2_3AA161153E35FD66__CTOR_OFFSET UNITYSDK_OFFSET(0x110CD9F0)

inline static constexpr unsigned int Class_2_3AA161153E35FD66_TypeDefinitionIndex = 38161;

class Class_2_3AA161153E35FD66 : public ::Class_1_2AD981AB6ACE5E06
{
public:
	::Il2CppArray<::Class_1_ADDE2B57A010E39A*>* Field_2_4; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_2_1; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_2_3; // 0x30
	::System::Int32 Field_2_0; // 0x38
	::System::Int32 Field_2_2; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3AA161153E35FD66__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_D4ABEF7DE8CFDB8D(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_3AA161153E35FD66_METHOD_2_D4ABEF7DE8CFDB8D_OFFSET))(this, a1);
	}

	::Class_1_2AD981AB6ACE5E06* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_2AD981AB6ACE5E06*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3AA161153E35FD66_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3AA161153E35FD66_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_3AA161153E35FD66_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3AA161153E35FD66_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Method_2_8AF11A4113B593B4()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3AA161153E35FD66_METHOD_2_8AF11A4113B593B4_OFFSET))(this);
	}

	::Il2CppArray<::Class_1_ADDE2B57A010E39A*>* Method_2_B070903CA9837250()
	{
		return ((::Il2CppArray<::Class_1_ADDE2B57A010E39A*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3AA161153E35FD66_METHOD_2_B070903CA9837250_OFFSET))(this);
	}

	::System::Boolean Method_2_00531776927FE5B6(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_3AA161153E35FD66_METHOD_2_00531776927FE5B6_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_DF5526BA6D1A4902(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3AA161153E35FD66_METHOD_2_DF5526BA6D1A4902_OFFSET))(this, a1, a2);
	}

	static ::Class_2_3AA161153E35FD66* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_3AA161153E35FD66*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3AA161153E35FD66_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	static ::Class_2_3AA161153E35FD66* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_3AA161153E35FD66*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_3AA161153E35FD66_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}
};
