#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8088D8743C1058EF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Struct_2_2EF7AC7A6C04963E.h"

class Class_1_236FD73ABC492E3F;
class Class_1_ED5EE319EA265EB6;
class Class_1_F157DD73C7C08100;
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_FA369E4FFAFB6E96_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13E690A0)
#define CLASS_2_FA369E4FFAFB6E96_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13E68B60)
#define CLASS_2_FA369E4FFAFB6E96_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x13E69630)
#define CLASS_2_FA369E4FFAFB6E96_METHOD_2_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0x13E68BE0)
#define CLASS_2_FA369E4FFAFB6E96_METHOD_2_24FE016FD8ACDD68_OFFSET UNITYSDK_OFFSET(0x13E69100)
#define CLASS_2_FA369E4FFAFB6E96_METHOD_2_368E5E4406B93B0C_OFFSET UNITYSDK_OFFSET(0x13E68840)
#define CLASS_2_FA369E4FFAFB6E96_METHOD_2_5C90773220FA8136_OFFSET UNITYSDK_OFFSET(0x13E689B0)
#define CLASS_2_FA369E4FFAFB6E96_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x13E68B50)
#define CLASS_2_FA369E4FFAFB6E96_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13E695A0)
#define CLASS_2_FA369E4FFAFB6E96_METHOD_2_CD9F3CEFB366C27A_OFFSET UNITYSDK_OFFSET(0x13E681A0)
#define CLASS_2_FA369E4FFAFB6E96_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x13E69440)
#define CLASS_2_FA369E4FFAFB6E96_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x13E68A50)
#define CLASS_2_FA369E4FFAFB6E96__CTOR_OFFSET UNITYSDK_OFFSET(0x13E693B0)

inline static constexpr unsigned int Class_2_FA369E4FFAFB6E96_TypeDefinitionIndex = 77608;

class Class_2_FA369E4FFAFB6E96 : public ::Class_1_8088D8743C1058EF
{
public:
	::Class_1_ED5EE319EA265EB6* Field_2_1; // 0x30
	::Class_1_F157DD73C7C08100* Field_2_7; // 0x38
	::Struct_2_2EF7AC7A6C04963E<::System::String*> Field_2_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA369E4FFAFB6E96__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CD9F3CEFB366C27A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA369E4FFAFB6E96_METHOD_2_CD9F3CEFB366C27A_OFFSET))(this);
	}

	::System::Void Method_2_5C90773220FA8136(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_FA369E4FFAFB6E96_METHOD_2_5C90773220FA8136_OFFSET))(this, a1);
	}

	::Class_1_8088D8743C1058EF* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_8088D8743C1058EF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA369E4FFAFB6E96_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA369E4FFAFB6E96_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_FA369E4FFAFB6E96_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_FA369E4FFAFB6E96_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_368E5E4406B93B0C(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2, ::System::String* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_FA369E4FFAFB6E96_METHOD_2_368E5E4406B93B0C_OFFSET))(this, a1, a2, a3);
	}

	static ::Class_2_FA369E4FFAFB6E96* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_FA369E4FFAFB6E96*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_FA369E4FFAFB6E96_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FA369E4FFAFB6E96_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_FA369E4FFAFB6E96_METHOD_2_0BD393E566CD3D4A_OFFSET))(this, a1);
	}

	static ::Class_2_FA369E4FFAFB6E96* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_FA369E4FFAFB6E96*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_FA369E4FFAFB6E96_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_24FE016FD8ACDD68(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_FA369E4FFAFB6E96_METHOD_2_24FE016FD8ACDD68_OFFSET))(this, a1, a2);
	}
};
