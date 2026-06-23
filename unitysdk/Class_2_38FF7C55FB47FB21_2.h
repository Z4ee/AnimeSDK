#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8088D8743C1058EF.h"
#include "unitysdk/Enum_3_C5CFFBB29190E266.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Struct_2_B352564924EC2DFE.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;
class Class_1_ED5EE319EA265EB6;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_38FF7C55FB47FB21_2_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x165B9420)
#define CLASS_2_38FF7C55FB47FB21_2_FROMFLX_OFFSET UNITYSDK_OFFSET(0x165B8C70)
#define CLASS_2_38FF7C55FB47FB21_2_METHOD_2_03C4FFAD29DE0852_OFFSET UNITYSDK_OFFSET(0x165B8110)
#define CLASS_2_38FF7C55FB47FB21_2_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x165B99B0)
#define CLASS_2_38FF7C55FB47FB21_2_METHOD_2_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0x165B8CF0)
#define CLASS_2_38FF7C55FB47FB21_2_METHOD_2_5C90773220FA8136_OFFSET UNITYSDK_OFFSET(0x165B8A70)
#define CLASS_2_38FF7C55FB47FB21_2_METHOD_2_82F37E818D9FE609_OFFSET UNITYSDK_OFFSET(0x165B9480)
#define CLASS_2_38FF7C55FB47FB21_2_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x165B8C00)
#define CLASS_2_38FF7C55FB47FB21_2_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x165B9B60)
#define CLASS_2_38FF7C55FB47FB21_2_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x165B9850)
#define CLASS_2_38FF7C55FB47FB21_2_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x165B8B00)
#define CLASS_2_38FF7C55FB47FB21_2__CTOR_OFFSET UNITYSDK_OFFSET(0x165B97B0)

inline static constexpr unsigned int Class_2_38FF7C55FB47FB21_2_TypeDefinitionIndex = 57223;

class Class_2_38FF7C55FB47FB21_2 : public ::Class_1_8088D8743C1058EF
{
public:
	::Struct_2_B352564924EC2DFE<::UnityEngine::Vector3> Field_2_3; // 0x30
	::Class_1_ED5EE319EA265EB6* Field_2_0; // 0x50
	::Struct_2_B352564924EC2DFE<::System::String*> Field_2_2; // 0x58
	::Struct_2_B352564924EC2DFE<::System::String*> Field_2_1; // 0x78
	::Enum_3_C5CFFBB29190E266 Field_2_4; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_38FF7C55FB47FB21_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_03C4FFAD29DE0852()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_38FF7C55FB47FB21_2_METHOD_2_03C4FFAD29DE0852_OFFSET))(this);
	}

	::System::Void Method_2_5C90773220FA8136(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_38FF7C55FB47FB21_2_METHOD_2_5C90773220FA8136_OFFSET))(this, a1);
	}

	::Class_1_8088D8743C1058EF* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_8088D8743C1058EF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_38FF7C55FB47FB21_2_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_38FF7C55FB47FB21_2_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_38FF7C55FB47FB21_2_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_38FF7C55FB47FB21_2_FROMBINARY_OFFSET))(this, a1, a2);
	}

	static ::Class_2_38FF7C55FB47FB21_2* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_38FF7C55FB47FB21_2*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_38FF7C55FB47FB21_2_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	::System::Boolean Method_2_82F37E818D9FE609(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_38FF7C55FB47FB21_2_METHOD_2_82F37E818D9FE609_OFFSET))(this, a1, a2);
	}

	static ::Class_2_38FF7C55FB47FB21_2* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_38FF7C55FB47FB21_2*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_38FF7C55FB47FB21_2_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_38FF7C55FB47FB21_2_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_38FF7C55FB47FB21_2_METHOD_2_0BD393E566CD3D4A_OFFSET))(this, a1);
	}
};
