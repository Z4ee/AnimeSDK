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

#define CLASS_2_E672EF306595EE66_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x158A0620)
#define CLASS_2_E672EF306595EE66_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1589FA60)
#define CLASS_2_E672EF306595EE66_METHOD_2_0578713EDB32B89E_OFFSET UNITYSDK_OFFSET(0x1589FAE0)
#define CLASS_2_E672EF306595EE66_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x158A0CA0)
#define CLASS_2_E672EF306595EE66_METHOD_2_4857357D5C1BFCE8_OFFSET UNITYSDK_OFFSET(0x1589D540)
#define CLASS_2_E672EF306595EE66_METHOD_2_8C8DFBF6A42830C0_OFFSET UNITYSDK_OFFSET(0x1589F460)
#define CLASS_2_E672EF306595EE66_METHOD_2_B02211135C5665F9_OFFSET UNITYSDK_OFFSET(0x158A0680)
#define CLASS_2_E672EF306595EE66_METHOD_2_BCCAB6158AD8296E_OFFSET UNITYSDK_OFFSET(0x1589F880)
#define CLASS_2_E672EF306595EE66_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x1589FA50)
#define CLASS_2_E672EF306595EE66_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x158A0C10)
#define CLASS_2_E672EF306595EE66_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x158A0E50)
#define CLASS_2_E672EF306595EE66_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x1589F950)
#define CLASS_2_E672EF306595EE66_METHOD_2_F6C3DE075ACF702A_OFFSET UNITYSDK_OFFSET(0x1589F0F0)
#define CLASS_2_E672EF306595EE66__CTOR_OFFSET UNITYSDK_OFFSET(0x158A0B80)

inline static constexpr unsigned int Class_2_E672EF306595EE66_TypeDefinitionIndex = 40381;

class Class_2_E672EF306595EE66 : public ::Class_1_8088D8743C1058EF
{
public:
	::Class_1_ED5EE319EA265EB6* Field_2_7; // 0x30
	::Class_1_ED5EE319EA265EB6* Field_2_5; // 0x38
	::Class_1_ED5EE319EA265EB6* Field_2_6; // 0x40
	::Struct_2_2EF7AC7A6C04963E<::System::String*> Field_2_1; // 0x48
	::Class_1_ED5EE319EA265EB6* Field_2_0; // 0x68
	::System::Boolean Field_2_4; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E672EF306595EE66__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4857357D5C1BFCE8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E672EF306595EE66_METHOD_2_4857357D5C1BFCE8_OFFSET))(this);
	}

	::System::Void Method_2_BCCAB6158AD8296E(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_E672EF306595EE66_METHOD_2_BCCAB6158AD8296E_OFFSET))(this, a1);
	}

	::Class_1_8088D8743C1058EF* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_8088D8743C1058EF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E672EF306595EE66_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E672EF306595EE66_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_E672EF306595EE66_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E672EF306595EE66_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E672EF306595EE66_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_8C8DFBF6A42830C0(::MoleMole::Config::ConfigEntityAnimEvent* a1, ::System::String* a2, ::MoleMole::Battle::Entity* a3, ::MoleMole::Battle::Entity* a4, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a5, ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* a6, ::System::Collections::Generic::List_1<::System::UInt32>* a7, ::MoleMole::Config::ConfigAttackPatternType a8)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityAnimEvent*, ::System::String*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::MoleMole::Config::ConfigAttackPatternType))((::PBYTE)hIl2Cpp + CLASS_2_E672EF306595EE66_METHOD_2_8C8DFBF6A42830C0_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_F6C3DE075ACF702A(::MoleMole::Config::ConfigEntityAnimEvent* a1, ::System::String* a2, ::MoleMole::Battle::Entity* a3, ::MoleMole::Battle::Entity* a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Quaternion a6, ::System::UInt32 a7)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityAnimEvent*, ::System::String*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_E672EF306595EE66_METHOD_2_F6C3DE075ACF702A_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	static ::Class_2_E672EF306595EE66* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_E672EF306595EE66*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E672EF306595EE66_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_0578713EDB32B89E(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_E672EF306595EE66_METHOD_2_0578713EDB32B89E_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_B02211135C5665F9(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E672EF306595EE66_METHOD_2_B02211135C5665F9_OFFSET))(this, a1, a2);
	}

	static ::Class_2_E672EF306595EE66* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_E672EF306595EE66*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_E672EF306595EE66_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}
};
