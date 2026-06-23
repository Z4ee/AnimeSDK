#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_22FE7B3FF5958EFB.h"
#include "unitysdk/Struct_2_4495C6EC85BB961A.h"

class Class_1_B7E341C5F1A6F199;
class Class_3_1CF0AE513797DBD3;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class Transform; }
template <typename T1, typename T2> class Class_0_16E4307DCC419505_518;

#define CLASS_3_EC49B1A43D51FC3E_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x11DE4E40)
#define CLASS_3_EC49B1A43D51FC3E_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x11DE5410)
#define CLASS_3_EC49B1A43D51FC3E_METHOD_3_19568EB6C9F08F16_OFFSET UNITYSDK_OFFSET(0x11DE55A0)
#define CLASS_3_EC49B1A43D51FC3E_METHOD_3_31BE21535CC9AC14_OFFSET UNITYSDK_OFFSET(0x11DE8090)
#define CLASS_3_EC49B1A43D51FC3E_METHOD_3_6E6B099753330E76_OFFSET UNITYSDK_OFFSET(0x11DE7F60)
#define CLASS_3_EC49B1A43D51FC3E_METHOD_3_7DE8C3871EA55998_OFFSET UNITYSDK_OFFSET(0x11DE56A0)
#define CLASS_3_EC49B1A43D51FC3E_METHOD_3_93B742A4D6835F98_OFFSET UNITYSDK_OFFSET(0x11DE81C0)
#define CLASS_3_EC49B1A43D51FC3E_METHOD_3_9D8893CD130270AA_OFFSET UNITYSDK_OFFSET(0x11DE7B80)
#define CLASS_3_EC49B1A43D51FC3E_METHOD_3_AB69D60610F40EBB_OFFSET UNITYSDK_OFFSET(0x11DE5D90)
#define CLASS_3_EC49B1A43D51FC3E_METHOD_3_AEB4DAA1C5F9FEC3_OFFSET UNITYSDK_OFFSET(0x11DE61D0)
#define CLASS_3_EC49B1A43D51FC3E_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x11DE6140)
#define CLASS_3_EC49B1A43D51FC3E_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x11DE8260)
#define CLASS_3_EC49B1A43D51FC3E_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11DE60B0)
#define CLASS_3_EC49B1A43D51FC3E_METHOD_3_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x11DE5D30)
#define CLASS_3_EC49B1A43D51FC3E_METHOD_3_D8B33D85DA000951_OFFSET UNITYSDK_OFFSET(0x11DE6440)
#define CLASS_3_EC49B1A43D51FC3E_METHOD_3_DD15181F38049F33_OFFSET UNITYSDK_OFFSET(0x11DE7810)
#define CLASS_3_EC49B1A43D51FC3E_METHOD_3_EBB3F4D0E50CC634_OFFSET UNITYSDK_OFFSET(0x11DE68B0)
#define CLASS_3_EC49B1A43D51FC3E_METHOD_3_FAF74DF55B709D32_OFFSET UNITYSDK_OFFSET(0x11DE7140)
#define CLASS_3_EC49B1A43D51FC3E_UPDATE_OFFSET UNITYSDK_OFFSET(0x11DE52B0)
#define CLASS_3_EC49B1A43D51FC3E__CCTOR_OFFSET UNITYSDK_OFFSET(0x11DE5590)
#define CLASS_3_EC49B1A43D51FC3E__CTOR_OFFSET UNITYSDK_OFFSET(0x11DE5540)

inline static constexpr unsigned int Class_3_EC49B1A43D51FC3E_TypeDefinitionIndex = 55013;

class Class_3_EC49B1A43D51FC3E : public ::Class_2_40CD888D5D4FCB5B
{
public:
	static ::System::Boolean* StaticGet_Field_3_0()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_3_EC49B1A43D51FC3E_TypeDefinitionIndex)->GetStaticField(0x119F0);
	}
	::Nap::NapECS::EcsFilter* Field_3_1; // 0x20
	::Nap::NapECS::EcsFilter* Field_3_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EC49B1A43D51FC3E__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_EC49B1A43D51FC3E__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_EC49B1A43D51FC3E_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EC49B1A43D51FC3E_UPDATE_OFFSET))(this);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EC49B1A43D51FC3E_LATEUPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_19568EB6C9F08F16(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_EC49B1A43D51FC3E_METHOD_3_19568EB6C9F08F16_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_3_EC49B1A43D51FC3E_METHOD_3_CE34EA208837238D_OFFSET))();
	}

	static ::System::Void Method_3_AB69D60610F40EBB(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_EC49B1A43D51FC3E_METHOD_3_AB69D60610F40EBB_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EC49B1A43D51FC3E_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_EC49B1A43D51FC3E_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Single Method_3_AEB4DAA1C5F9FEC3(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Single(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_EC49B1A43D51FC3E_METHOD_3_AEB4DAA1C5F9FEC3_OFFSET))(a1);
	}

	static ::Class_0_16E4307DCC419505_518<::Struct_2_22FE7B3FF5958EFB, ::Struct_2_4495C6EC85BB961A>* Method_3_D8B33D85DA000951(::Class_3_1CF0AE513797DBD3*& a1)
	{
		return ((::Class_0_16E4307DCC419505_518<::Struct_2_22FE7B3FF5958EFB, ::Struct_2_4495C6EC85BB961A>*(*)(::Class_3_1CF0AE513797DBD3*&))((::PBYTE)hIl2Cpp + CLASS_3_EC49B1A43D51FC3E_METHOD_3_D8B33D85DA000951_OFFSET))(a1);
	}

	::System::Void Method_3_EBB3F4D0E50CC634(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_EC49B1A43D51FC3E_METHOD_3_EBB3F4D0E50CC634_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_DD15181F38049F33(::MoleMole::EntityHandle& a1, ::System::Single& a2)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle&, ::System::Single&))((::PBYTE)hIl2Cpp + CLASS_3_EC49B1A43D51FC3E_METHOD_3_DD15181F38049F33_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9D8893CD130270AA(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_EC49B1A43D51FC3E_METHOD_3_9D8893CD130270AA_OFFSET))(a1);
	}

	::System::Void Method_3_6E6B099753330E76(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_3_EC49B1A43D51FC3E_METHOD_3_6E6B099753330E76_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_31BE21535CC9AC14(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_EC49B1A43D51FC3E_METHOD_3_31BE21535CC9AC14_OFFSET))(a1);
	}

	static ::System::Void Method_3_7DE8C3871EA55998(::System::Boolean a1, ::MoleMole::Battle::Entity* a2, ::System::Int32 a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::System::Boolean, ::MoleMole::Battle::Entity*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_EC49B1A43D51FC3E_METHOD_3_7DE8C3871EA55998_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_3_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EC49B1A43D51FC3E_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
	}

	static ::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_3_93B742A4D6835F98(::Class_3_1CF0AE513797DBD3* a1, ::System::Boolean a2, ::System::Single a3)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::Class_3_1CF0AE513797DBD3*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_EC49B1A43D51FC3E_METHOD_3_93B742A4D6835F98_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_FAF74DF55B709D32(::Class_3_1CF0AE513797DBD3* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_1CF0AE513797DBD3*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_3_EC49B1A43D51FC3E_METHOD_3_FAF74DF55B709D32_OFFSET))(this, a1, a2);
	}
};
