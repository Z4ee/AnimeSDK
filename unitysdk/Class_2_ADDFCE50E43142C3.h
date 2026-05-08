#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8088D8743C1058EF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigAttackPatternType.h"
#include "unitysdk/Struct_2_2EF7AC7A6C04963E.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;
class Class_1_ED5EE319EA265EB6;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityAnimEvent; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_ADDFCE50E43142C3_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1248C7F0)
#define CLASS_2_ADDFCE50E43142C3_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1248BC30)
#define CLASS_2_ADDFCE50E43142C3_METHOD_2_0578713EDB32B89E_OFFSET UNITYSDK_OFFSET(0x1248BCB0)
#define CLASS_2_ADDFCE50E43142C3_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x1248CDE0)
#define CLASS_2_ADDFCE50E43142C3_METHOD_2_265E4866B54132DD_OFFSET UNITYSDK_OFFSET(0x1248B5E0)
#define CLASS_2_ADDFCE50E43142C3_METHOD_2_4857357D5C1BFCE8_OFFSET UNITYSDK_OFFSET(0x12489710)
#define CLASS_2_ADDFCE50E43142C3_METHOD_2_B02211135C5665F9_OFFSET UNITYSDK_OFFSET(0x1248C850)
#define CLASS_2_ADDFCE50E43142C3_METHOD_2_BCCAB6158AD8296E_OFFSET UNITYSDK_OFFSET(0x1248B9F0)
#define CLASS_2_ADDFCE50E43142C3_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x1248BBC0)
#define CLASS_2_ADDFCE50E43142C3_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1248CF90)
#define CLASS_2_ADDFCE50E43142C3_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x1248D020)
#define CLASS_2_ADDFCE50E43142C3_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x1248BAC0)
#define CLASS_2_ADDFCE50E43142C3_METHOD_2_F6C3DE075ACF702A_OFFSET UNITYSDK_OFFSET(0x1248B290)
#define CLASS_2_ADDFCE50E43142C3__CTOR_OFFSET UNITYSDK_OFFSET(0x1248CD50)

inline static constexpr unsigned int Class_2_ADDFCE50E43142C3_TypeDefinitionIndex = 59052;

class Class_2_ADDFCE50E43142C3 : public ::Class_1_8088D8743C1058EF
{
public:
	::Class_1_ED5EE319EA265EB6* Field_2_3; // 0x30
	::Struct_2_2EF7AC7A6C04963E<::System::String*> Field_2_0; // 0x38
	::Class_1_ED5EE319EA265EB6* Field_2_2; // 0x58
	::Class_1_ED5EE319EA265EB6* Field_2_4; // 0x60
	::Class_1_ED5EE319EA265EB6* Field_2_1; // 0x68
	::System::Boolean Field_2_5; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ADDFCE50E43142C3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4857357D5C1BFCE8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ADDFCE50E43142C3_METHOD_2_4857357D5C1BFCE8_OFFSET))(this);
	}

	::System::Void Method_2_BCCAB6158AD8296E(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_ADDFCE50E43142C3_METHOD_2_BCCAB6158AD8296E_OFFSET))(this, a1);
	}

	::Class_1_8088D8743C1058EF* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_8088D8743C1058EF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ADDFCE50E43142C3_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ADDFCE50E43142C3_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_ADDFCE50E43142C3_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_ADDFCE50E43142C3_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_265E4866B54132DD(::MoleMole::Config::ConfigEntityAnimEvent* a1, ::System::String* a2, ::MoleMole::Battle::Entity* a3, ::MoleMole::Battle::Entity* a4, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a5, ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* a6, ::System::Collections::Generic::List_1<::System::UInt32>* a7, ::MoleMole::Config::ConfigAttackPatternType a8)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityAnimEvent*, ::System::String*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::MoleMole::Config::ConfigAttackPatternType))((::PBYTE)hIl2Cpp + CLASS_2_ADDFCE50E43142C3_METHOD_2_265E4866B54132DD_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	static ::Class_2_ADDFCE50E43142C3* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_ADDFCE50E43142C3*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_ADDFCE50E43142C3_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_0578713EDB32B89E(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_ADDFCE50E43142C3_METHOD_2_0578713EDB32B89E_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ADDFCE50E43142C3_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	static ::Class_2_ADDFCE50E43142C3* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_ADDFCE50E43142C3*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_ADDFCE50E43142C3_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	::System::Boolean Method_2_B02211135C5665F9(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_ADDFCE50E43142C3_METHOD_2_B02211135C5665F9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F6C3DE075ACF702A(::MoleMole::Config::ConfigEntityAnimEvent* a1, ::System::String* a2, ::MoleMole::Battle::Entity* a3, ::MoleMole::Battle::Entity* a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Quaternion a6, ::System::UInt32 a7)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityAnimEvent*, ::System::String*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_ADDFCE50E43142C3_METHOD_2_F6C3DE075ACF702A_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}
};
