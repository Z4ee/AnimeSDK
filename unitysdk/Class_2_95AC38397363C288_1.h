#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D0D2B3C2533F6DF2_5.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }

#define CLASS_2_95AC38397363C288_1_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18E95910)
#define CLASS_2_95AC38397363C288_1_FROMFLX_OFFSET UNITYSDK_OFFSET(0x18E95680)
#define CLASS_2_95AC38397363C288_1_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x18E95E20)
#define CLASS_2_95AC38397363C288_1_METHOD_2_157E312840A3BD00_OFFSET UNITYSDK_OFFSET(0x18E95970)
#define CLASS_2_95AC38397363C288_1_METHOD_2_49128280A131ACC1_OFFSET UNITYSDK_OFFSET(0x18E95D80)
#define CLASS_2_95AC38397363C288_1_METHOD_2_5253759692D6DAC1_OFFSET UNITYSDK_OFFSET(0x18E95700)
#define CLASS_2_95AC38397363C288_1_METHOD_2_8C704EC832EDEFC8_OFFSET UNITYSDK_OFFSET(0x18E95610)
#define CLASS_2_95AC38397363C288_1_METHOD_2_B73F62522113F21F_OFFSET UNITYSDK_OFFSET(0x18E95450)
#define CLASS_2_95AC38397363C288_1_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x18E955A0)
#define CLASS_2_95AC38397363C288_1_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x18E95C20)
#define CLASS_2_95AC38397363C288_1_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x18E954A0)
#define CLASS_2_95AC38397363C288_1_METHOD_2_E2C9D1E6837C3261_OFFSET UNITYSDK_OFFSET(0x18E95B40)
#define CLASS_2_95AC38397363C288_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18E95C10)

inline static constexpr unsigned int Class_2_95AC38397363C288_1_TypeDefinitionIndex = 54562;

class Class_2_95AC38397363C288_1 : public ::Class_1_D0D2B3C2533F6DF2_5
{
public:
	::Il2CppArray<::Class_1_D0D2B3C2533F6DF2_5*>* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_95AC38397363C288_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B73F62522113F21F(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_95AC38397363C288_1_METHOD_2_B73F62522113F21F_OFFSET))(this, a1);
	}

	::Class_1_D0D2B3C2533F6DF2_5* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_D0D2B3C2533F6DF2_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_95AC38397363C288_1_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_95AC38397363C288_1_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Void Method_2_8C704EC832EDEFC8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_95AC38397363C288_1_METHOD_2_8C704EC832EDEFC8_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_95AC38397363C288_1_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_95AC38397363C288_1_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_E2C9D1E6837C3261(::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>* a1, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>*, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_95AC38397363C288_1_METHOD_2_E2C9D1E6837C3261_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_157E312840A3BD00(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_95AC38397363C288_1_METHOD_2_157E312840A3BD00_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_5253759692D6DAC1(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_95AC38397363C288_1_METHOD_2_5253759692D6DAC1_OFFSET))(this, a1);
	}

	static ::Class_2_95AC38397363C288_1* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_95AC38397363C288_1*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_95AC38397363C288_1_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	::System::Boolean Method_2_49128280A131ACC1(::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>* a1, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>*, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_95AC38397363C288_1_METHOD_2_49128280A131ACC1_OFFSET))(this, a1, a2);
	}

	static ::Class_2_95AC38397363C288_1* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_95AC38397363C288_1*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_95AC38397363C288_1_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}
};
