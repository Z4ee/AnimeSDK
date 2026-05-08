#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_39D3E61C562EE5C6.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/AbilityTargetting.h"

class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_B82EB30E0EF7C354_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13630100)
#define CLASS_2_B82EB30E0EF7C354_FROMFLX_OFFSET UNITYSDK_OFFSET(0x136306B0)
#define CLASS_2_B82EB30E0EF7C354_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x13630D00)
#define CLASS_2_B82EB30E0EF7C354_METHOD_2_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0x13630730)
#define CLASS_2_B82EB30E0EF7C354_METHOD_2_627557CE4CD0ABB4_1_OFFSET UNITYSDK_OFFSET(0x13631010)
#define CLASS_2_B82EB30E0EF7C354_METHOD_2_627557CE4CD0ABB4_OFFSET UNITYSDK_OFFSET(0x13630080)
#define CLASS_2_B82EB30E0EF7C354_METHOD_2_643D279011CA951E_OFFSET UNITYSDK_OFFSET(0x13630160)
#define CLASS_2_B82EB30E0EF7C354_METHOD_2_A042C46DE73C3043_OFFSET UNITYSDK_OFFSET(0x13630530)
#define CLASS_2_B82EB30E0EF7C354_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x13630640)
#define CLASS_2_B82EB30E0EF7C354_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x13630EB0)
#define CLASS_2_B82EB30E0EF7C354_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x13630540)
#define CLASS_2_B82EB30E0EF7C354__CTOR_OFFSET UNITYSDK_OFFSET(0x13630CF0)

inline static constexpr unsigned int Class_2_B82EB30E0EF7C354_TypeDefinitionIndex = 81926;

class Class_2_B82EB30E0EF7C354 : public ::Class_1_39D3E61C562EE5C6
{
public:
	::MoleMole::Config::AbilityTargetting Field_2_3; // 0x10
	::System::Boolean Field_2_1; // 0x14
	::System::Boolean Field_2_2; // 0x15
	::System::Boolean Field_2_0; // 0x16

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B82EB30E0EF7C354__CTOR_OFFSET))(this);
	}

	::System::Single Method_2_627557CE4CD0ABB4(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B82EB30E0EF7C354_METHOD_2_627557CE4CD0ABB4_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B82EB30E0EF7C354_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A042C46DE73C3043(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B82EB30E0EF7C354_METHOD_2_A042C46DE73C3043_OFFSET))(this, a1);
	}

	::Class_1_39D3E61C562EE5C6* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_39D3E61C562EE5C6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B82EB30E0EF7C354_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B82EB30E0EF7C354_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_B82EB30E0EF7C354_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_643D279011CA951E(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B82EB30E0EF7C354_METHOD_2_643D279011CA951E_OFFSET))(this, a1, a2);
	}

	static ::Class_2_B82EB30E0EF7C354* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_B82EB30E0EF7C354*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B82EB30E0EF7C354_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	static ::Class_2_B82EB30E0EF7C354* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_B82EB30E0EF7C354*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_B82EB30E0EF7C354_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	::System::Boolean Method_2_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_B82EB30E0EF7C354_METHOD_2_4E5AC15A8307DCD8_OFFSET))(this, a1);
	}

	::System::Single Method_2_627557CE4CD0ABB4_1(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B82EB30E0EF7C354_METHOD_2_627557CE4CD0ABB4_1_OFFSET))(this, a1, a2, a3);
	}
};
