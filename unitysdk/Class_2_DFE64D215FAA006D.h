#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8088D8743C1058EF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/Struct_2_2EF7AC7A6C04963E.h"
#include "unitysdk/Struct_2_31CE9F74ED7EF316_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;
class Class_1_426492CCD31C6AF7;
class Class_1_ED5EE319EA265EB6;
class Class_1_F157DD73C7C08100;
class Class_3_59F0E78803D70076;
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_DFE64D215FAA006D_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xE8C1EB0)
#define CLASS_2_DFE64D215FAA006D_FROMFLX_OFFSET UNITYSDK_OFFSET(0xE8C0ED0)
#define CLASS_2_DFE64D215FAA006D_METHOD_2_0578713EDB32B89E_OFFSET UNITYSDK_OFFSET(0xE8C0F50)
#define CLASS_2_DFE64D215FAA006D_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0xE8C2670)
#define CLASS_2_DFE64D215FAA006D_METHOD_2_1C9E7861183155D5_OFFSET UNITYSDK_OFFSET(0xE8C1F10)
#define CLASS_2_DFE64D215FAA006D_METHOD_2_4F1A3D4E1D16F1E9_OFFSET UNITYSDK_OFFSET(0xE8C0830)
#define CLASS_2_DFE64D215FAA006D_METHOD_2_74061A67176AC84F_OFFSET UNITYSDK_OFFSET(0xE8BFD70)
#define CLASS_2_DFE64D215FAA006D_METHOD_2_96189EDEF38976A6_OFFSET UNITYSDK_OFFSET(0xE8BEFE0)
#define CLASS_2_DFE64D215FAA006D_METHOD_2_BCCAB6158AD8296E_OFFSET UNITYSDK_OFFSET(0xE8C0C90)
#define CLASS_2_DFE64D215FAA006D_METHOD_2_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0xE8C0E60)
#define CLASS_2_DFE64D215FAA006D_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xE8C2820)
#define CLASS_2_DFE64D215FAA006D_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0xE8C28B0)
#define CLASS_2_DFE64D215FAA006D_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0xE8C0D60)
#define CLASS_2_DFE64D215FAA006D__CTOR_OFFSET UNITYSDK_OFFSET(0xE8C2570)

inline static constexpr unsigned int Class_2_DFE64D215FAA006D_TypeDefinitionIndex = 43285;

class Class_2_DFE64D215FAA006D : public ::Class_1_8088D8743C1058EF
{
public:
	::Class_1_ED5EE319EA265EB6* Field_2_1; // 0x30
	::Struct_2_2EF7AC7A6C04963E<::UnityEngine::Vector3> Field_2_0; // 0x38
	::System::String* Field_2_2; // 0x58
	::Class_1_F157DD73C7C08100* Field_2_7; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_426492CCD31C6AF7*>* Field_2_6; // 0x68
	::Struct_2_2EF7AC7A6C04963E<::System::Boolean> Field_2_8; // 0x70
	::System::Int32 Field_2_5; // 0x90
	::System::Boolean Field_2_3; // 0x94
	::System::Int32 Field_2_4; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFE64D215FAA006D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_96189EDEF38976A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFE64D215FAA006D_METHOD_2_96189EDEF38976A6_OFFSET))(this);
	}

	::System::Void Method_2_BCCAB6158AD8296E(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_DFE64D215FAA006D_METHOD_2_BCCAB6158AD8296E_OFFSET))(this, a1);
	}

	::Class_1_8088D8743C1058EF* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_8088D8743C1058EF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFE64D215FAA006D_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFE64D215FAA006D_METHOD_2_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_DFE64D215FAA006D_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_DFE64D215FAA006D_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_74061A67176AC84F(::System::Int32 a1, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* a2, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::Struct_2_31CE9F74ED7EF316_1>* a3, ::MoleMole::Battle::Entity* a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::Struct_2_31CE9F74ED7EF316_1>*, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DFE64D215FAA006D_METHOD_2_74061A67176AC84F_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::Class_2_DFE64D215FAA006D* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_DFE64D215FAA006D*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_DFE64D215FAA006D_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_0578713EDB32B89E(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_DFE64D215FAA006D_METHOD_2_0578713EDB32B89E_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DFE64D215FAA006D_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	static ::Class_2_DFE64D215FAA006D* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_DFE64D215FAA006D*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_DFE64D215FAA006D_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	::System::Boolean Method_2_1C9E7861183155D5(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_DFE64D215FAA006D_METHOD_2_1C9E7861183155D5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4F1A3D4E1D16F1E9(::MoleMole::Battle::Entity* a1, ::Class_3_59F0E78803D70076* a2, ::System::Collections::Generic::List_1<::System::String*>* a3, ::System::Single a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_59F0E78803D70076*, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_DFE64D215FAA006D_METHOD_2_4F1A3D4E1D16F1E9_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
