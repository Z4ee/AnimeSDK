#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/UnityEngine/Bounds.h"

class Class_1_B7E341C5F1A6F199;
namespace Foundation { template <typename T1, typename T2> class WriteDeferredDictionary_2; }
namespace MoleMole { class MonoStageCamera; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_E82A8DEF8081DA8E_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1094B2B0)
#define CLASS_3_E82A8DEF8081DA8E_METHOD_3_48F4094B62207807_OFFSET UNITYSDK_OFFSET(0x1094B700)
#define CLASS_3_E82A8DEF8081DA8E_METHOD_3_4E1119525909ECFD_OFFSET UNITYSDK_OFFSET(0x1094B710)
#define CLASS_3_E82A8DEF8081DA8E_METHOD_3_535A39EF5149F23F_OFFSET UNITYSDK_OFFSET(0x1094B430)
#define CLASS_3_E82A8DEF8081DA8E_METHOD_3_641B06838BDFB06A_OFFSET UNITYSDK_OFFSET(0x1094B420)
#define CLASS_3_E82A8DEF8081DA8E_METHOD_3_670697B71ED1789C_OFFSET UNITYSDK_OFFSET(0x1094B6F0)
#define CLASS_3_E82A8DEF8081DA8E_METHOD_3_6F73A40265D5B980_OFFSET UNITYSDK_OFFSET(0x1094B8D0)
#define CLASS_3_E82A8DEF8081DA8E_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1094B840)
#define CLASS_3_E82A8DEF8081DA8E_METHOD_3_D93EC3DDD756C47C_OFFSET UNITYSDK_OFFSET(0x1094B720)
#define CLASS_3_E82A8DEF8081DA8E_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1094B200)
#define CLASS_3_E82A8DEF8081DA8E__CCTOR_OFFSET UNITYSDK_OFFSET(0x1094B300)
#define CLASS_3_E82A8DEF8081DA8E__CTOR_OFFSET UNITYSDK_OFFSET(0x1094B380)

inline static constexpr unsigned int Class_3_E82A8DEF8081DA8E_TypeDefinitionIndex = 51752;

class Class_3_E82A8DEF8081DA8E : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_11 = 0x6A; // 0x0
	::System::Action_4<::MoleMole::Battle::Entity*, ::System::Double, ::System::Double, ::System::Double>* Field_3_6; // 0x48
	::System::Action_4<::MoleMole::Battle::Entity*, ::System::Double, ::System::Double, ::System::Double>* Field_3_5; // 0x50
	::System::Action_4<::MoleMole::Battle::Entity*, ::System::Double, ::System::Double, ::System::Double>* Field_3_4; // 0x58
	::System::Action_1<::System::Single>* Field_3_1; // 0x60
	::Il2CppArray<::MoleMole::MonoStageCamera*>* Field_3_7; // 0x68
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_3_10; // 0x70
	::System::Action_1<::Class_1_B7E341C5F1A6F199*>* Field_3_0; // 0x78
	::System::Action_4<::MoleMole::Battle::Entity*, ::System::Double, ::System::Double, ::System::Double>* Field_3_3; // 0x80
	::System::Action_1<::System::Single>* Field_3_2; // 0x88
	::Foundation::WriteDeferredDictionary_2<::System::Int32, ::UnityEngine::Bounds>* Field_3_8; // 0x90
	::System::Boolean Field_3_9; // 0x98

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_E82A8DEF8081DA8E__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E82A8DEF8081DA8E__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E82A8DEF8081DA8E_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E82A8DEF8081DA8E_GETCLASSID_OFFSET))(this);
	}

	::System::Action_1<::System::Single>* Method_3_641B06838BDFB06A()
	{
		return ((::System::Action_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E82A8DEF8081DA8E_METHOD_3_641B06838BDFB06A_OFFSET))(this);
	}

	::System::Void Method_3_535A39EF5149F23F(::UnityEngine::GameObject* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_E82A8DEF8081DA8E_METHOD_3_535A39EF5149F23F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_670697B71ED1789C(::System::Action_1<::Class_1_B7E341C5F1A6F199*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_B7E341C5F1A6F199*>*))((::PBYTE)hIl2Cpp + CLASS_3_E82A8DEF8081DA8E_METHOD_3_670697B71ED1789C_OFFSET))(this, a1);
	}

	::System::Void Method_3_48F4094B62207807(::System::Action_1<::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_3_E82A8DEF8081DA8E_METHOD_3_48F4094B62207807_OFFSET))(this, a1);
	}

	::System::Action_1<::Class_1_B7E341C5F1A6F199*>* Method_3_4E1119525909ECFD()
	{
		return ((::System::Action_1<::Class_1_B7E341C5F1A6F199*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E82A8DEF8081DA8E_METHOD_3_4E1119525909ECFD_OFFSET))(this);
	}

	static ::Class_3_E82A8DEF8081DA8E* Method_3_D93EC3DDD756C47C()
	{
		return ((::Class_3_E82A8DEF8081DA8E*(*)())((::PBYTE)hIl2Cpp + CLASS_3_E82A8DEF8081DA8E_METHOD_3_D93EC3DDD756C47C_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E82A8DEF8081DA8E_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_6F73A40265D5B980()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E82A8DEF8081DA8E_METHOD_3_6F73A40265D5B980_OFFSET))(this);
	}
};
