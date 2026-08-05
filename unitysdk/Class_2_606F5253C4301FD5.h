#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8088D8743C1058EF.h"
#include "unitysdk/Enum_3_5DCDD8ECEFDFD5D9.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Struct_2_2EF7AC7A6C04963E.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;
class Class_1_ED5EE319EA265EB6;
class Class_1_F157DD73C7C08100;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_606F5253C4301FD5_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16584AC0)
#define CLASS_2_606F5253C4301FD5_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16583B00)
#define CLASS_2_606F5253C4301FD5_METHOD_2_0578713EDB32B89E_OFFSET UNITYSDK_OFFSET(0x16583B80)
#define CLASS_2_606F5253C4301FD5_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x165852C0)
#define CLASS_2_606F5253C4301FD5_METHOD_2_BCCAB6158AD8296E_OFFSET UNITYSDK_OFFSET(0x16583930)
#define CLASS_2_606F5253C4301FD5_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x16583AF0)
#define CLASS_2_606F5253C4301FD5_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16585470)
#define CLASS_2_606F5253C4301FD5_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x16585160)
#define CLASS_2_606F5253C4301FD5_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x165839F0)
#define CLASS_2_606F5253C4301FD5_METHOD_2_E6899EA6AE497B7E_OFFSET UNITYSDK_OFFSET(0x16584B20)
#define CLASS_2_606F5253C4301FD5_METHOD_2_FE268EA0D7E91617_OFFSET UNITYSDK_OFFSET(0x16582D70)
#define CLASS_2_606F5253C4301FD5__CTOR_OFFSET UNITYSDK_OFFSET(0x16585050)

inline static constexpr unsigned int Class_2_606F5253C4301FD5_TypeDefinitionIndex = 50422;

class Class_2_606F5253C4301FD5 : public ::Class_1_8088D8743C1058EF
{
public:
	::Struct_2_2EF7AC7A6C04963E<::System::Single> Field_2_0; // 0x30
	::System::Collections::Generic::List_1<::Enum_3_5DCDD8ECEFDFD5D9>* Field_2_6; // 0x50
	::Class_1_ED5EE319EA265EB6* Field_2_1; // 0x58
	::Struct_2_2EF7AC7A6C04963E<::System::String*> Field_2_7; // 0x60
	::Class_1_F157DD73C7C08100* Field_2_5; // 0x80
	::Struct_2_2EF7AC7A6C04963E<::UnityEngine::Vector3> Field_2_2; // 0x88
	::System::Single Field_2_10; // 0xA8
	::System::Boolean Field_2_4; // 0xAC
	::System::Boolean Field_2_11; // 0xAD

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_606F5253C4301FD5__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_FE268EA0D7E91617()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_606F5253C4301FD5_METHOD_2_FE268EA0D7E91617_OFFSET))(this);
	}

	::System::Void Method_2_BCCAB6158AD8296E(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_606F5253C4301FD5_METHOD_2_BCCAB6158AD8296E_OFFSET))(this, a1);
	}

	::Class_1_8088D8743C1058EF* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_8088D8743C1058EF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_606F5253C4301FD5_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_606F5253C4301FD5_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_606F5253C4301FD5_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_606F5253C4301FD5_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_E6899EA6AE497B7E(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_606F5253C4301FD5_METHOD_2_E6899EA6AE497B7E_OFFSET))(this, a1, a2);
	}

	static ::Class_2_606F5253C4301FD5* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_606F5253C4301FD5*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_606F5253C4301FD5_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	static ::Class_2_606F5253C4301FD5* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_606F5253C4301FD5*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_606F5253C4301FD5_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_606F5253C4301FD5_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_0578713EDB32B89E(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_606F5253C4301FD5_METHOD_2_0578713EDB32B89E_OFFSET))(this, a1);
	}
};
