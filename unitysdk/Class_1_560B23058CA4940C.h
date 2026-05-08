#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_EA1FEF8121ADE963_Class_1_FD175DAB7C350E4D;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityAttackPattern; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define CLASS_1_560B23058CA4940C_METHOD_1_30AA7A50D55D1119_OFFSET UNITYSDK_OFFSET(0x16DCD350)
#define CLASS_1_560B23058CA4940C_METHOD_1_78DC6C43A5577862_OFFSET UNITYSDK_OFFSET(0x16DCD710)
#define CLASS_1_560B23058CA4940C_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x16DCD5B0)
#define CLASS_1_560B23058CA4940C_METHOD_1_C260E39B3046D957_OFFSET UNITYSDK_OFFSET(0x16DCD890)
#define CLASS_1_560B23058CA4940C_METHOD_1_C760E371AB59C541_OFFSET UNITYSDK_OFFSET(0x16DCDB40)
#define CLASS_1_560B23058CA4940C_METHOD_1_D0184A04A8D1A671_OFFSET UNITYSDK_OFFSET(0x16DCDD50)
#define CLASS_1_560B23058CA4940C_METHOD_1_D2B616B217AC2C24_OFFSET UNITYSDK_OFFSET(0x16DCD930)
#define CLASS_1_560B23058CA4940C_METHOD_1_F83ECE3F9999BF18_OFFSET UNITYSDK_OFFSET(0x16DCDE40)
#define CLASS_1_560B23058CA4940C__CTOR_OFFSET UNITYSDK_OFFSET(0x16DCD300)

inline static constexpr unsigned int Class_1_560B23058CA4940C_TypeDefinitionIndex = 70731;

class Class_1_560B23058CA4940C : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_0; // 0x10
	::MoleMole::Config::ConfigEntityAttackPattern* Field_1_13; // 0x18
	::UnityEngine::Collider* Field_1_15; // 0x20
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_7; // 0x28
	::System::UInt32 Field_1_12; // 0x30
	::System::Int32 Field_1_5; // 0x34
	::System::Int32 Field_1_6; // 0x38
	::UnityEngine::Vector3 Field_1_2; // 0x3C
	::UnityEngine::Vector3 Field_1_3; // 0x48
	::UnityEngine::Vector3 Field_1_1; // 0x54
	::UnityEngine::Vector3 Field_1_4; // 0x60
	::UnityEngine::Vector3 Field_1_10; // 0x6C
	::System::Boolean Field_1_14; // 0x78
	::UnityEngine::Vector3 Field_1_9; // 0x7C
	::UnityEngine::Vector3 Field_1_11; // 0x88
	::UnityEngine::Vector3 Field_1_8; // 0x94

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_560B23058CA4940C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_30AA7A50D55D1119(::MoleMole::Battle::Entity* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Int32 a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6, ::UnityEngine::Vector3 a7, ::UnityEngine::Vector3 a8, ::UnityEngine::Vector3 a9)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_560B23058CA4940C_METHOD_1_30AA7A50D55D1119_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_560B23058CA4940C_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	static ::System::Void Method_1_78DC6C43A5577862(::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*& a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*&))((::PBYTE)hIl2Cpp + CLASS_1_560B23058CA4940C_METHOD_1_78DC6C43A5577862_OFFSET))(a1);
	}

	::System::Void Method_1_D2B616B217AC2C24(::UnityEngine::Collider* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_560B23058CA4940C_METHOD_1_D2B616B217AC2C24_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_C760E371AB59C541(::UnityEngine::RaycastHit a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RaycastHit, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_560B23058CA4940C_METHOD_1_C760E371AB59C541_OFFSET))(this, a1, a2);
	}

	static ::Class_1_EA1FEF8121ADE963_Class_1_FD175DAB7C350E4D* Method_1_D0184A04A8D1A671(::Class_1_560B23058CA4940C* a1, ::Class_1_EA1FEF8121ADE963_Class_1_FD175DAB7C350E4D* a2)
	{
		return ((::Class_1_EA1FEF8121ADE963_Class_1_FD175DAB7C350E4D*(*)(::Class_1_560B23058CA4940C*, ::Class_1_EA1FEF8121ADE963_Class_1_FD175DAB7C350E4D*))((::PBYTE)hIl2Cpp + CLASS_1_560B23058CA4940C_METHOD_1_D0184A04A8D1A671_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F83ECE3F9999BF18(::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Class_1_560B23058CA4940C*>*))((::PBYTE)hIl2Cpp + CLASS_1_560B23058CA4940C_METHOD_1_F83ECE3F9999BF18_OFFSET))(a1);
	}

	static ::System::Void Method_1_C260E39B3046D957(::Class_1_560B23058CA4940C* a1)
	{
		return ((::System::Void(*)(::Class_1_560B23058CA4940C*))((::PBYTE)hIl2Cpp + CLASS_1_560B23058CA4940C_METHOD_1_C260E39B3046D957_OFFSET))(a1);
	}
};
