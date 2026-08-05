#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/MoleMole/Config/TeamRelationship.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class CampTypeConfig; }
namespace MoleMole::Config { class CampTypeConfig_CampTypeItem; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_633DB309E7B1660C_METHOD_1_2E44B9076F743E3D_1_OFFSET UNITYSDK_OFFSET(0x1702A550)
#define CLASS_1_633DB309E7B1660C_METHOD_1_2E44B9076F743E3D_OFFSET UNITYSDK_OFFSET(0x1702A290)
#define CLASS_1_633DB309E7B1660C_METHOD_1_3ED5CC57CC60662B_1_OFFSET UNITYSDK_OFFSET(0x17029B40)
#define CLASS_1_633DB309E7B1660C_METHOD_1_3ED5CC57CC60662B_2_OFFSET UNITYSDK_OFFSET(0x1702B0D0)
#define CLASS_1_633DB309E7B1660C_METHOD_1_3ED5CC57CC60662B_OFFSET UNITYSDK_OFFSET(0x17029900)
#define CLASS_1_633DB309E7B1660C_METHOD_1_568741080C655D57_OFFSET UNITYSDK_OFFSET(0x1702A810)
#define CLASS_1_633DB309E7B1660C_METHOD_1_6FB1A0F2794ECBA3_OFFSET UNITYSDK_OFFSET(0x17029D80)
#define CLASS_1_633DB309E7B1660C_METHOD_1_756F58D0CBF126C8_OFFSET UNITYSDK_OFFSET(0x1702A050)
#define CLASS_1_633DB309E7B1660C_METHOD_1_DFD86F820EB356E2_OFFSET UNITYSDK_OFFSET(0x17029670)
#define CLASS_1_633DB309E7B1660C_METHOD_1_E77B24F9A93470BE_OFFSET UNITYSDK_OFFSET(0x170296B0)
#define CLASS_1_633DB309E7B1660C_METHOD_1_FDDC5A41F149A0CC_OFFSET UNITYSDK_OFFSET(0x1702AFC0)
#define CLASS_1_633DB309E7B1660C__CCTOR_OFFSET UNITYSDK_OFFSET(0x170295B0)

inline static constexpr unsigned int Class_1_633DB309E7B1660C_TypeDefinitionIndex = 52486;

class Class_1_633DB309E7B1660C : public ::System::Object
{
public:
	static ::MoleMole::Config::CampTypeConfig_CampTypeItem** StaticGet_Field_1_0()
	{
		return (::MoleMole::Config::CampTypeConfig_CampTypeItem**)Il2CppClass::FromTypeDefinitionIndex(Class_1_633DB309E7B1660C_TypeDefinitionIndex)->GetStaticField(0x4EF20);
	}
	static ::Il2CppArray<::Il2CppArray<::MoleMole::Config::CampTypeConfig_CampTypeItem*>*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::Il2CppArray<::MoleMole::Config::CampTypeConfig_CampTypeItem*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_633DB309E7B1660C_TypeDefinitionIndex)->GetStaticField(0x4EF28);
	}
	// static const ::System::UInt32 Field_1_2 = 0x5; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_633DB309E7B1660C__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_DFD86F820EB356E2(::MoleMole::Config::CampType a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::CampType))((::PBYTE)hIl2Cpp + CLASS_1_633DB309E7B1660C_METHOD_1_DFD86F820EB356E2_OFFSET))(a1);
	}

	static ::System::Void Method_1_E77B24F9A93470BE(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_633DB309E7B1660C_METHOD_1_E77B24F9A93470BE_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_3ED5CC57CC60662B(::MoleMole::Config::CampType a1, ::MoleMole::Config::CampType a2)
	{
		return ((::System::Single(*)(::MoleMole::Config::CampType, ::MoleMole::Config::CampType))((::PBYTE)hIl2Cpp + CLASS_1_633DB309E7B1660C_METHOD_1_3ED5CC57CC60662B_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_3ED5CC57CC60662B_1(::MoleMole::Config::CampType a1, ::MoleMole::Config::CampType a2)
	{
		return ((::System::Single(*)(::MoleMole::Config::CampType, ::MoleMole::Config::CampType))((::PBYTE)hIl2Cpp + CLASS_1_633DB309E7B1660C_METHOD_1_3ED5CC57CC60662B_1_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::MoleMole::Config::CampType>* Method_1_6FB1A0F2794ECBA3(::MoleMole::Config::CampType a1, ::MoleMole::Config::TeamRelationship a2)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Config::CampType>*(*)(::MoleMole::Config::CampType, ::MoleMole::Config::TeamRelationship))((::PBYTE)hIl2Cpp + CLASS_1_633DB309E7B1660C_METHOD_1_6FB1A0F2794ECBA3_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_2E44B9076F743E3D(::MoleMole::Config::CampType a1, ::MoleMole::Config::CampType a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::MoleMole::Config::CampType, ::MoleMole::Config::CampType, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_633DB309E7B1660C_METHOD_1_2E44B9076F743E3D_OFFSET))(a1, a2, a3);
	}

	static ::MoleMole::Config::TeamRelationship Method_1_756F58D0CBF126C8(::MoleMole::Config::CampType a1, ::MoleMole::Config::CampType a2)
	{
		return ((::MoleMole::Config::TeamRelationship(*)(::MoleMole::Config::CampType, ::MoleMole::Config::CampType))((::PBYTE)hIl2Cpp + CLASS_1_633DB309E7B1660C_METHOD_1_756F58D0CBF126C8_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_2E44B9076F743E3D_1(::MoleMole::Config::CampType a1, ::MoleMole::Config::CampType a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::MoleMole::Config::CampType, ::MoleMole::Config::CampType, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_633DB309E7B1660C_METHOD_1_2E44B9076F743E3D_1_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_568741080C655D57(::MoleMole::Config::CampTypeConfig* a1)
	{
		return ((::System::Void(*)(::MoleMole::Config::CampTypeConfig*))((::PBYTE)hIl2Cpp + CLASS_1_633DB309E7B1660C_METHOD_1_568741080C655D57_OFFSET))(a1);
	}

	static ::System::Void Method_1_FDDC5A41F149A0CC(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_633DB309E7B1660C_METHOD_1_FDDC5A41F149A0CC_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Single Method_1_3ED5CC57CC60662B_2(::MoleMole::Config::CampType a1, ::MoleMole::Config::CampType a2)
	{
		return ((::System::Single(*)(::MoleMole::Config::CampType, ::MoleMole::Config::CampType))((::PBYTE)hIl2Cpp + CLASS_1_633DB309E7B1660C_METHOD_1_3ED5CC57CC60662B_2_OFFSET))(a1, a2);
	}
};
