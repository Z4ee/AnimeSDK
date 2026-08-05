#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8088D8743C1058EF.h"
#include "unitysdk/Enum_3_C5CFFBB29190E266.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Struct_2_2EF7AC7A6C04963E.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;
class Class_1_ED5EE319EA265EB6;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_38FF7C55FB47FB21_1_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x146614C0)
#define CLASS_2_38FF7C55FB47FB21_1_FROMFLX_OFFSET UNITYSDK_OFFSET(0x14660D10)
#define CLASS_2_38FF7C55FB47FB21_1_METHOD_2_03C4FFAD29DE0852_OFFSET UNITYSDK_OFFSET(0x14660210)
#define CLASS_2_38FF7C55FB47FB21_1_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x14661AE0)
#define CLASS_2_38FF7C55FB47FB21_1_METHOD_2_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0x14660D90)
#define CLASS_2_38FF7C55FB47FB21_1_METHOD_2_5C90773220FA8136_OFFSET UNITYSDK_OFFSET(0x14660B70)
#define CLASS_2_38FF7C55FB47FB21_1_METHOD_2_82F37E818D9FE609_OFFSET UNITYSDK_OFFSET(0x14661520)
#define CLASS_2_38FF7C55FB47FB21_1_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x14660D00)
#define CLASS_2_38FF7C55FB47FB21_1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14661A50)
#define CLASS_2_38FF7C55FB47FB21_1_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x146618F0)
#define CLASS_2_38FF7C55FB47FB21_1_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x14660C00)
#define CLASS_2_38FF7C55FB47FB21_1__CTOR_OFFSET UNITYSDK_OFFSET(0x14661850)

inline static constexpr unsigned int Class_2_38FF7C55FB47FB21_1_TypeDefinitionIndex = 43544;

class Class_2_38FF7C55FB47FB21_1 : public ::Class_1_8088D8743C1058EF
{
public:
	::Struct_2_2EF7AC7A6C04963E<::UnityEngine::Vector3> Field_2_6; // 0x30
	::Struct_2_2EF7AC7A6C04963E<::System::String*> Field_2_7; // 0x50
	::Struct_2_2EF7AC7A6C04963E<::System::String*> Field_2_0; // 0x70
	::Class_1_ED5EE319EA265EB6* Field_2_1; // 0x90
	::Enum_3_C5CFFBB29190E266 Field_2_5; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_38FF7C55FB47FB21_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_03C4FFAD29DE0852()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_38FF7C55FB47FB21_1_METHOD_2_03C4FFAD29DE0852_OFFSET))(this);
	}

	::System::Void Method_2_5C90773220FA8136(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_38FF7C55FB47FB21_1_METHOD_2_5C90773220FA8136_OFFSET))(this, a1);
	}

	::Class_1_8088D8743C1058EF* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_8088D8743C1058EF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_38FF7C55FB47FB21_1_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_38FF7C55FB47FB21_1_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_38FF7C55FB47FB21_1_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_38FF7C55FB47FB21_1_FROMBINARY_OFFSET))(this, a1, a2);
	}

	static ::Class_2_38FF7C55FB47FB21_1* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_38FF7C55FB47FB21_1*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_38FF7C55FB47FB21_1_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	::System::Boolean Method_2_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_38FF7C55FB47FB21_1_METHOD_2_0BD393E566CD3D4A_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_82F37E818D9FE609(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_38FF7C55FB47FB21_1_METHOD_2_82F37E818D9FE609_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_38FF7C55FB47FB21_1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	static ::Class_2_38FF7C55FB47FB21_1* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_38FF7C55FB47FB21_1*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_38FF7C55FB47FB21_1_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}
};
