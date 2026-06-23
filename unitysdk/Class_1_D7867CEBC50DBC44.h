#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_1_B110B5AB4B019878;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class Stream; }

#define CLASS_1_D7867CEBC50DBC44_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x143D92D0)
#define CLASS_1_D7867CEBC50DBC44_FROMFLX_OFFSET UNITYSDK_OFFSET(0x143D9070)
#define CLASS_1_D7867CEBC50DBC44_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x143DA070)
#define CLASS_1_D7867CEBC50DBC44_METHOD_1_3096E66776FB7F38_OFFSET UNITYSDK_OFFSET(0x143D9890)
#define CLASS_1_D7867CEBC50DBC44_METHOD_1_42E1B0366D8D72CF_OFFSET UNITYSDK_OFFSET(0x143D9330)
#define CLASS_1_D7867CEBC50DBC44_METHOD_1_5253759692D6DAC1_OFFSET UNITYSDK_OFFSET(0x143D90F0)
#define CLASS_1_D7867CEBC50DBC44_METHOD_1_597DA41F6629F73F_OFFSET UNITYSDK_OFFSET(0x143D9B70)
#define CLASS_1_D7867CEBC50DBC44_METHOD_1_96F3903C0F268C82_OFFSET UNITYSDK_OFFSET(0x143D9760)
#define CLASS_1_D7867CEBC50DBC44_METHOD_1_DAFB0CB11B77534F_OFFSET UNITYSDK_OFFSET(0x143DA140)
#define CLASS_1_D7867CEBC50DBC44_METHOD_1_F24A112B56A2E4B4_OFFSET UNITYSDK_OFFSET(0x143DA0B0)
#define CLASS_1_D7867CEBC50DBC44_TOSTRING_OFFSET UNITYSDK_OFFSET(0x143D94E0)
#define CLASS_1_D7867CEBC50DBC44__CTOR_OFFSET UNITYSDK_OFFSET(0x143D9750)

inline static constexpr unsigned int Class_1_D7867CEBC50DBC44_TypeDefinitionIndex = 42064;

class Class_1_D7867CEBC50DBC44 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_1; // 0x0
	::Il2CppArray<::Class_1_B110B5AB4B019878*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7867CEBC50DBC44__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_D7867CEBC50DBC44_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D7867CEBC50DBC44_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7867CEBC50DBC44_TOSTRING_OFFSET))(this);
	}

	::System::Boolean Method_1_5253759692D6DAC1(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_D7867CEBC50DBC44_METHOD_1_5253759692D6DAC1_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_1_96F3903C0F268C82()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7867CEBC50DBC44_METHOD_1_96F3903C0F268C82_OFFSET))(this);
	}

	::System::Boolean Method_1_42E1B0366D8D72CF(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D7867CEBC50DBC44_METHOD_1_42E1B0366D8D72CF_OFFSET))(this, a1, a2);
	}

	static ::Il2CppArray<::System::Byte>* Method_1_3096E66776FB7F38(::System::IO::Stream* a1)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::System::IO::Stream*))((::PBYTE)hIl2Cpp + CLASS_1_D7867CEBC50DBC44_METHOD_1_3096E66776FB7F38_OFFSET))(a1);
	}

	static ::Class_1_D7867CEBC50DBC44* Method_1_597DA41F6629F73F(::System::String* a1)
	{
		return ((::Class_1_D7867CEBC50DBC44*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D7867CEBC50DBC44_METHOD_1_597DA41F6629F73F_OFFSET))(a1);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7867CEBC50DBC44_METHOD_1_128774387667156B_OFFSET))(this);
	}

	static ::System::String* Method_1_F24A112B56A2E4B4()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D7867CEBC50DBC44_METHOD_1_F24A112B56A2E4B4_OFFSET))();
	}

	::System::Void Method_1_DAFB0CB11B77534F(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D7867CEBC50DBC44_METHOD_1_DAFB0CB11B77534F_OFFSET))(this, a1);
	}
};
