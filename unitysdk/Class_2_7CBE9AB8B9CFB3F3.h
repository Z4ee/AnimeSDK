#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D0D2B3C2533F6DF2_5.h"
#include "unitysdk/Enum_3_DD0F7A9CA3B9D9DA.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"

class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }

#define CLASS_2_7CBE9AB8B9CFB3F3_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1672D0A0)
#define CLASS_2_7CBE9AB8B9CFB3F3_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1672CA80)
#define CLASS_2_7CBE9AB8B9CFB3F3_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x1672D840)
#define CLASS_2_7CBE9AB8B9CFB3F3_METHOD_2_23CDE0DA18CF2028_OFFSET UNITYSDK_OFFSET(0x1672D410)
#define CLASS_2_7CBE9AB8B9CFB3F3_METHOD_2_49128280A131ACC1_OFFSET UNITYSDK_OFFSET(0x1672DB50)
#define CLASS_2_7CBE9AB8B9CFB3F3_METHOD_2_8FF96CDDF39B2A01_OFFSET UNITYSDK_OFFSET(0x1672D100)
#define CLASS_2_7CBE9AB8B9CFB3F3_METHOD_2_B73F62522113F21F_OFFSET UNITYSDK_OFFSET(0x1672C8C0)
#define CLASS_2_7CBE9AB8B9CFB3F3_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x1672CA10)
#define CLASS_2_7CBE9AB8B9CFB3F3_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x1672D9F0)
#define CLASS_2_7CBE9AB8B9CFB3F3_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x1672C910)
#define CLASS_2_7CBE9AB8B9CFB3F3_METHOD_2_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0x1672CB00)
#define CLASS_2_7CBE9AB8B9CFB3F3__CTOR_OFFSET UNITYSDK_OFFSET(0x1672D830)

inline static constexpr unsigned int Class_2_7CBE9AB8B9CFB3F3_TypeDefinitionIndex = 48617;

class Class_2_7CBE9AB8B9CFB3F3 : public ::Class_1_D0D2B3C2533F6DF2_5
{
public:
	::System::String* Field_2_0; // 0x10
	::Enum_3_DD0F7A9CA3B9D9DA Field_2_1; // 0x18
	::MoleMole::Config::ValueCompareType Field_2_2; // 0x1C
	::System::Int32 Field_2_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CBE9AB8B9CFB3F3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B73F62522113F21F(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_7CBE9AB8B9CFB3F3_METHOD_2_B73F62522113F21F_OFFSET))(this, a1);
	}

	::Class_1_D0D2B3C2533F6DF2_5* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_D0D2B3C2533F6DF2_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CBE9AB8B9CFB3F3_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7CBE9AB8B9CFB3F3_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_7CBE9AB8B9CFB3F3_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7CBE9AB8B9CFB3F3_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_23CDE0DA18CF2028(::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>* a1, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>*, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_7CBE9AB8B9CFB3F3_METHOD_2_23CDE0DA18CF2028_OFFSET))(this, a1, a2);
	}

	static ::Class_2_7CBE9AB8B9CFB3F3* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_7CBE9AB8B9CFB3F3*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7CBE9AB8B9CFB3F3_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	static ::Class_2_7CBE9AB8B9CFB3F3* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_7CBE9AB8B9CFB3F3*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_7CBE9AB8B9CFB3F3_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	::System::Boolean Method_2_8FF96CDDF39B2A01(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7CBE9AB8B9CFB3F3_METHOD_2_8FF96CDDF39B2A01_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_49128280A131ACC1(::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>* a1, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>*, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_7CBE9AB8B9CFB3F3_METHOD_2_49128280A131ACC1_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_7CBE9AB8B9CFB3F3_METHOD_2_DF413489329CBAF8_OFFSET))(this, a1);
	}
};
