#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/Class_3_DB486632DF14666C_Enum_3_2D42152837537601.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_DB3A5EFF78BBB49D;
class Class_3_DB486632DF14666C;
class Class_3_DFD5D1FDB9D2A4AC;
class Class_3_FFD0045B4597F294;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_C6DE81A012ED838B_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x133BFA10)
#define CLASS_3_C6DE81A012ED838B_METHOD_3_0384A6BDCFD27D53_OFFSET UNITYSDK_OFFSET(0x133C1250)
#define CLASS_3_C6DE81A012ED838B_METHOD_3_05D4132215F9E46E_OFFSET UNITYSDK_OFFSET(0x133C0CD0)
#define CLASS_3_C6DE81A012ED838B_METHOD_3_2010678FCC0A7300_OFFSET UNITYSDK_OFFSET(0x133C0600)
#define CLASS_3_C6DE81A012ED838B_METHOD_3_288671463047830A_OFFSET UNITYSDK_OFFSET(0x133BFFE0)
#define CLASS_3_C6DE81A012ED838B_METHOD_3_6EE6A27960654DB8_OFFSET UNITYSDK_OFFSET(0x133C1B60)
#define CLASS_3_C6DE81A012ED838B_METHOD_3_7A9967D1D5FF0D89_OFFSET UNITYSDK_OFFSET(0x133C08F0)
#define CLASS_3_C6DE81A012ED838B_METHOD_3_8AA70EB1BC254C4F_OFFSET UNITYSDK_OFFSET(0x133BFD10)
#define CLASS_3_C6DE81A012ED838B_METHOD_3_9879FF951B7059E0_OFFSET UNITYSDK_OFFSET(0x133C17D0)
#define CLASS_3_C6DE81A012ED838B_METHOD_3_9A57F29F28168952_OFFSET UNITYSDK_OFFSET(0x133C1200)
#define CLASS_3_C6DE81A012ED838B_METHOD_3_9AC500DE3DB1ECCF_OFFSET UNITYSDK_OFFSET(0x133C04B0)
#define CLASS_3_C6DE81A012ED838B_METHOD_3_9D6D482D0D66151C_OFFSET UNITYSDK_OFFSET(0x133C1B20)
#define CLASS_3_C6DE81A012ED838B_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x133BFC80)
#define CLASS_3_C6DE81A012ED838B_METHOD_3_C5302287C045AD55_OFFSET UNITYSDK_OFFSET(0x133C1640)
#define CLASS_3_C6DE81A012ED838B_METHOD_3_C779354735B704E5_OFFSET UNITYSDK_OFFSET(0x133C1EA0)
#define CLASS_3_C6DE81A012ED838B__CTOR_OFFSET UNITYSDK_OFFSET(0x133BFC30)

inline static constexpr unsigned int Class_3_C6DE81A012ED838B_TypeDefinitionIndex = 83149;

class Class_3_C6DE81A012ED838B : public ::Class_2_40CD888D5D4FCB5B
{
public:
	// static const ::System::String* Field_3_1; // 0x0
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C6DE81A012ED838B__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_C6DE81A012ED838B_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_C6DE81A012ED838B_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_8AA70EB1BC254C4F(::Class_3_DFD5D1FDB9D2A4AC* a1, ::Class_3_FFD0045B4597F294* a2, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::Boolean>>*& a3)
	{
		return ((::System::Void(*)(::Class_3_DFD5D1FDB9D2A4AC*, ::Class_3_FFD0045B4597F294*, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::String*, ::System::Boolean>>*&))((::PBYTE)hIl2Cpp + CLASS_3_C6DE81A012ED838B_METHOD_3_8AA70EB1BC254C4F_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_288671463047830A(::Class_3_DB486632DF14666C* a1, ::System::Int32 a2, ::System::Action_2<::System::Boolean, ::Class_1_DB3A5EFF78BBB49D*>* a3)
	{
		return ((::System::Boolean(*)(::Class_3_DB486632DF14666C*, ::System::Int32, ::System::Action_2<::System::Boolean, ::Class_1_DB3A5EFF78BBB49D*>*))((::PBYTE)hIl2Cpp + CLASS_3_C6DE81A012ED838B_METHOD_3_288671463047830A_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_9AC500DE3DB1ECCF(::System::Collections::Generic::List_1<::System::Int32>* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_C6DE81A012ED838B_METHOD_3_9AC500DE3DB1ECCF_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_7A9967D1D5FF0D89(::Class_3_DB486632DF14666C* a1, ::Class_3_DFD5D1FDB9D2A4AC* a2)
	{
		return ((::System::Void(*)(::Class_3_DB486632DF14666C*, ::Class_3_DFD5D1FDB9D2A4AC*))((::PBYTE)hIl2Cpp + CLASS_3_C6DE81A012ED838B_METHOD_3_7A9967D1D5FF0D89_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_05D4132215F9E46E(::MoleMole::Battle::Entity* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2, ::System::Collections::Generic::List_1<::System::Int32>* a3)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_C6DE81A012ED838B_METHOD_3_05D4132215F9E46E_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_3_9A57F29F28168952(::Class_3_DB486632DF14666C* a1)
	{
		return ((::System::Boolean(*)(::Class_3_DB486632DF14666C*))((::PBYTE)hIl2Cpp + CLASS_3_C6DE81A012ED838B_METHOD_3_9A57F29F28168952_OFFSET))(a1);
	}

	static ::System::Void Method_3_0384A6BDCFD27D53(::MoleMole::Battle::Entity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_C6DE81A012ED838B_METHOD_3_0384A6BDCFD27D53_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_C5302287C045AD55(::Class_1_DB3A5EFF78BBB49D* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::Class_1_DB3A5EFF78BBB49D*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_C6DE81A012ED838B_METHOD_3_C5302287C045AD55_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9879FF951B7059E0(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_C6DE81A012ED838B_METHOD_3_9879FF951B7059E0_OFFSET))(a1);
	}

	static ::System::Void Method_3_2010678FCC0A7300(::Class_3_DB486632DF14666C* a1, ::System::Int32 a2, ::System::Action_1<::Class_1_DB3A5EFF78BBB49D*>* a3)
	{
		return ((::System::Void(*)(::Class_3_DB486632DF14666C*, ::System::Int32, ::System::Action_1<::Class_1_DB3A5EFF78BBB49D*>*))((::PBYTE)hIl2Cpp + CLASS_3_C6DE81A012ED838B_METHOD_3_2010678FCC0A7300_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_3_9D6D482D0D66151C(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_C6DE81A012ED838B_METHOD_3_9D6D482D0D66151C_OFFSET))(a1);
	}

	static ::System::Void Method_3_6EE6A27960654DB8(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_C6DE81A012ED838B_METHOD_3_6EE6A27960654DB8_OFFSET))(a1);
	}

	static ::System::Void Method_3_C779354735B704E5(::Class_3_DB486632DF14666C* a1, ::Class_3_DB486632DF14666C_Enum_3_2D42152837537601 a2)
	{
		return ((::System::Void(*)(::Class_3_DB486632DF14666C*, ::Class_3_DB486632DF14666C_Enum_3_2D42152837537601))((::PBYTE)hIl2Cpp + CLASS_3_C6DE81A012ED838B_METHOD_3_C779354735B704E5_OFFSET))(a1, a2);
	}
};
