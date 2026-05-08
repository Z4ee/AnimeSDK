#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8088D8743C1058EF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/PropertyModifyFunction.h"
#include "unitysdk/Struct_2_2EF7AC7A6C04963E.h"

class Class_1_236FD73ABC492E3F;
class Class_1_ED5EE319EA265EB6;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_4233FE9DB8C2873E_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x137CAA80)
#define CLASS_2_4233FE9DB8C2873E_FROMFLX_OFFSET UNITYSDK_OFFSET(0x137CA0A0)
#define CLASS_2_4233FE9DB8C2873E_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x137CB070)
#define CLASS_2_4233FE9DB8C2873E_METHOD_2_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0x137CA120)
#define CLASS_2_4233FE9DB8C2873E_METHOD_2_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0x137C9AD0)
#define CLASS_2_4233FE9DB8C2873E_METHOD_2_5C90773220FA8136_OFFSET UNITYSDK_OFFSET(0x137C9E90)
#define CLASS_2_4233FE9DB8C2873E_METHOD_2_82F37E818D9FE609_OFFSET UNITYSDK_OFFSET(0x137CAAE0)
#define CLASS_2_4233FE9DB8C2873E_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x137CA030)
#define CLASS_2_4233FE9DB8C2873E_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x137CB220)
#define CLASS_2_4233FE9DB8C2873E_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x137CAF10)
#define CLASS_2_4233FE9DB8C2873E_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x137C9F30)
#define CLASS_2_4233FE9DB8C2873E__CTOR_OFFSET UNITYSDK_OFFSET(0x137CAE70)

inline static constexpr unsigned int Class_2_4233FE9DB8C2873E_TypeDefinitionIndex = 65699;

class Class_2_4233FE9DB8C2873E : public ::Class_1_8088D8743C1058EF
{
public:
	::System::String* Field_2_4; // 0x30
	::Struct_2_2EF7AC7A6C04963E<::System::Single> Field_2_1; // 0x38
	::Struct_2_2EF7AC7A6C04963E<::System::Single> Field_2_2; // 0x58
	::Class_1_ED5EE319EA265EB6* Field_2_0; // 0x78
	::MoleMole::Config::BaseProperty Field_2_3; // 0x80
	::MoleMole::Config::PropertyModifyFunction Field_2_5; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4233FE9DB8C2873E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_289F28027FF47717()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4233FE9DB8C2873E_METHOD_2_289F28027FF47717_OFFSET))(this);
	}

	::System::Void Method_2_5C90773220FA8136(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_4233FE9DB8C2873E_METHOD_2_5C90773220FA8136_OFFSET))(this, a1);
	}

	::Class_1_8088D8743C1058EF* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_8088D8743C1058EF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4233FE9DB8C2873E_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4233FE9DB8C2873E_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_4233FE9DB8C2873E_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4233FE9DB8C2873E_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_4233FE9DB8C2873E_METHOD_2_0BD393E566CD3D4A_OFFSET))(this, a1);
	}

	static ::Class_2_4233FE9DB8C2873E* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_4233FE9DB8C2873E*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_4233FE9DB8C2873E_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	static ::Class_2_4233FE9DB8C2873E* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_4233FE9DB8C2873E*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4233FE9DB8C2873E_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_82F37E818D9FE609(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4233FE9DB8C2873E_METHOD_2_82F37E818D9FE609_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4233FE9DB8C2873E_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
