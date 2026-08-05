#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_39D3E61C562EE5C6.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_16B475A00B771E91_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18B426A0)
#define CLASS_2_16B475A00B771E91_FROMFLX_OFFSET UNITYSDK_OFFSET(0x18B42A50)
#define CLASS_2_16B475A00B771E91_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x18B43020)
#define CLASS_2_16B475A00B771E91_METHOD_2_297EA0FD117460C4_OFFSET UNITYSDK_OFFSET(0x18B42700)
#define CLASS_2_16B475A00B771E91_METHOD_2_3DC6B5AAFA39829C_OFFSET UNITYSDK_OFFSET(0x18B42AD0)
#define CLASS_2_16B475A00B771E91_METHOD_2_627557CE4CD0ABB4_OFFSET UNITYSDK_OFFSET(0x18B42F60)
#define CLASS_2_16B475A00B771E91_METHOD_2_A042C46DE73C3043_OFFSET UNITYSDK_OFFSET(0x18B42930)
#define CLASS_2_16B475A00B771E91_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x18B42A40)
#define CLASS_2_16B475A00B771E91_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x18B42E00)
#define CLASS_2_16B475A00B771E91_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x18B42940)
#define CLASS_2_16B475A00B771E91_METHOD_2_FBF7F282112D67D9_OFFSET UNITYSDK_OFFSET(0x18B42600)
#define CLASS_2_16B475A00B771E91__CTOR_OFFSET UNITYSDK_OFFSET(0x18B42DF0)

inline static constexpr unsigned int Class_2_16B475A00B771E91_TypeDefinitionIndex = 70029;

class Class_2_16B475A00B771E91 : public ::Class_1_39D3E61C562EE5C6
{
public:
	::System::Single Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16B475A00B771E91__CTOR_OFFSET))(this);
	}

	::System::Single Method_2_FBF7F282112D67D9(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_16B475A00B771E91_METHOD_2_FBF7F282112D67D9_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_16B475A00B771E91_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A042C46DE73C3043(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_16B475A00B771E91_METHOD_2_A042C46DE73C3043_OFFSET))(this, a1);
	}

	::Class_1_39D3E61C562EE5C6* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_39D3E61C562EE5C6*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16B475A00B771E91_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_16B475A00B771E91_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_16B475A00B771E91_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_297EA0FD117460C4(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_16B475A00B771E91_METHOD_2_297EA0FD117460C4_OFFSET))(this, a1, a2);
	}

	static ::Class_2_16B475A00B771E91* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_16B475A00B771E91*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_16B475A00B771E91_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	::System::Single Method_2_627557CE4CD0ABB4(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_16B475A00B771E91_METHOD_2_627557CE4CD0ABB4_OFFSET))(this, a1, a2, a3);
	}

	static ::Class_2_16B475A00B771E91* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_16B475A00B771E91*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_16B475A00B771E91_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_3DC6B5AAFA39829C(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_16B475A00B771E91_METHOD_2_3DC6B5AAFA39829C_OFFSET))(this, a1);
	}
};
