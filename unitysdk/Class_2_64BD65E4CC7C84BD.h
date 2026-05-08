#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8088D8743C1058EF.h"
#include "unitysdk/Enum_3_0B4A82D7D33DF0CF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
class Class_1_ED5EE319EA265EB6;
namespace MoleMole::Config { class ConfigDynamicValue; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_64BD65E4CC7C84BD_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13A15120)
#define CLASS_2_64BD65E4CC7C84BD_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13A14A60)
#define CLASS_2_64BD65E4CC7C84BD_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x13A15530)
#define CLASS_2_64BD65E4CC7C84BD_METHOD_2_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0x13A14AE0)
#define CLASS_2_64BD65E4CC7C84BD_METHOD_2_1B709936FC68B7D3_OFFSET UNITYSDK_OFFSET(0x13A144D0)
#define CLASS_2_64BD65E4CC7C84BD_METHOD_2_BCCAB6158AD8296E_OFFSET UNITYSDK_OFFSET(0x13A14830)
#define CLASS_2_64BD65E4CC7C84BD_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x13A149F0)
#define CLASS_2_64BD65E4CC7C84BD_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13A156E0)
#define CLASS_2_64BD65E4CC7C84BD_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x13A15770)
#define CLASS_2_64BD65E4CC7C84BD_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x13A148F0)
#define CLASS_2_64BD65E4CC7C84BD_METHOD_2_DDBE9A358A92FDCB_OFFSET UNITYSDK_OFFSET(0x13A15180)
#define CLASS_2_64BD65E4CC7C84BD__CTOR_OFFSET UNITYSDK_OFFSET(0x13A154A0)

inline static constexpr unsigned int Class_2_64BD65E4CC7C84BD_TypeDefinitionIndex = 68366;

class Class_2_64BD65E4CC7C84BD : public ::Class_1_8088D8743C1058EF
{
public:
	::Class_1_ED5EE319EA265EB6* Field_2_2; // 0x30
	::System::String* Field_2_0; // 0x38
	::MoleMole::Config::ConfigDynamicValue* Field_2_3; // 0x40
	::Enum_3_0B4A82D7D33DF0CF Field_2_1; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_64BD65E4CC7C84BD__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_1B709936FC68B7D3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_64BD65E4CC7C84BD_METHOD_2_1B709936FC68B7D3_OFFSET))(this);
	}

	::System::Void Method_2_BCCAB6158AD8296E(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_64BD65E4CC7C84BD_METHOD_2_BCCAB6158AD8296E_OFFSET))(this, a1);
	}

	::Class_1_8088D8743C1058EF* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_8088D8743C1058EF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_64BD65E4CC7C84BD_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_64BD65E4CC7C84BD_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_64BD65E4CC7C84BD_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_64BD65E4CC7C84BD_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_DDBE9A358A92FDCB(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_64BD65E4CC7C84BD_METHOD_2_DDBE9A358A92FDCB_OFFSET))(this, a1, a2);
	}

	static ::Class_2_64BD65E4CC7C84BD* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_64BD65E4CC7C84BD*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_64BD65E4CC7C84BD_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_64BD65E4CC7C84BD_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_64BD65E4CC7C84BD_METHOD_2_0BD393E566CD3D4A_OFFSET))(this, a1);
	}

	static ::Class_2_64BD65E4CC7C84BD* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_64BD65E4CC7C84BD*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_64BD65E4CC7C84BD_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}
};
