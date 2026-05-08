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

#define CLASS_2_606F5253C4301FD5_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xD0960A0)
#define CLASS_2_606F5253C4301FD5_FROMFLX_OFFSET UNITYSDK_OFFSET(0xD095100)
#define CLASS_2_606F5253C4301FD5_METHOD_2_0578713EDB32B89E_OFFSET UNITYSDK_OFFSET(0xD095180)
#define CLASS_2_606F5253C4301FD5_METHOD_2_0860F812E446AE7C_OFFSET UNITYSDK_OFFSET(0xD094310)
#define CLASS_2_606F5253C4301FD5_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0xD096740)
#define CLASS_2_606F5253C4301FD5_METHOD_2_BCCAB6158AD8296E_OFFSET UNITYSDK_OFFSET(0xD094ED0)
#define CLASS_2_606F5253C4301FD5_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0xD095090)
#define CLASS_2_606F5253C4301FD5_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD0968F0)
#define CLASS_2_606F5253C4301FD5_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0xD096980)
#define CLASS_2_606F5253C4301FD5_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0xD094F90)
#define CLASS_2_606F5253C4301FD5_METHOD_2_E6899EA6AE497B7E_OFFSET UNITYSDK_OFFSET(0xD096100)
#define CLASS_2_606F5253C4301FD5__CTOR_OFFSET UNITYSDK_OFFSET(0xD096630)

inline static constexpr unsigned int Class_2_606F5253C4301FD5_TypeDefinitionIndex = 81897;

class Class_2_606F5253C4301FD5 : public ::Class_1_8088D8743C1058EF
{
public:
	::System::Collections::Generic::List_1<::Enum_3_5DCDD8ECEFDFD5D9>* Field_2_4; // 0x30
	::Struct_2_2EF7AC7A6C04963E<::UnityEngine::Vector3> Field_2_0; // 0x38
	::Struct_2_2EF7AC7A6C04963E<::System::Single> Field_2_2; // 0x58
	::Struct_2_2EF7AC7A6C04963E<::System::String*> Field_2_3; // 0x78
	::Class_1_F157DD73C7C08100* Field_2_5; // 0x98
	::Class_1_ED5EE319EA265EB6* Field_2_1; // 0xA0
	::System::Boolean Field_2_6; // 0xA8
	::System::Boolean Field_2_7; // 0xA9
	::System::Single Field_2_8; // 0xAC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_606F5253C4301FD5__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_0860F812E446AE7C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_606F5253C4301FD5_METHOD_2_0860F812E446AE7C_OFFSET))(this);
	}

	::System::Void Method_2_BCCAB6158AD8296E(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_606F5253C4301FD5_METHOD_2_BCCAB6158AD8296E_OFFSET))(this, a1);
	}

	::Class_1_8088D8743C1058EF* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_8088D8743C1058EF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_606F5253C4301FD5_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_606F5253C4301FD5_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
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

	::System::Boolean Method_2_0578713EDB32B89E(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_606F5253C4301FD5_METHOD_2_0578713EDB32B89E_OFFSET))(this, a1);
	}

	static ::Class_2_606F5253C4301FD5* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_606F5253C4301FD5*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_606F5253C4301FD5_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_606F5253C4301FD5_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	static ::Class_2_606F5253C4301FD5* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_606F5253C4301FD5*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_606F5253C4301FD5_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}
};
