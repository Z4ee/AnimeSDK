#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"

class Class_3_29AF178C9CE3EC26;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_3_8DEED67EBA66D5AC_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x1206DE20)
#define CLASS_3_8DEED67EBA66D5AC_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1206E000)
#define CLASS_3_8DEED67EBA66D5AC_METHOD_3_00117A41DE15B19B_OFFSET UNITYSDK_OFFSET(0x1206FB10)
#define CLASS_3_8DEED67EBA66D5AC_METHOD_3_450857CD60EF4E85_OFFSET UNITYSDK_OFFSET(0x1206EEB0)
#define CLASS_3_8DEED67EBA66D5AC_METHOD_3_486A325CF406C810_OFFSET UNITYSDK_OFFSET(0x12070AD0)
#define CLASS_3_8DEED67EBA66D5AC_METHOD_3_4E0C407CD63F7EA0_OFFSET UNITYSDK_OFFSET(0x1206E1B0)
#define CLASS_3_8DEED67EBA66D5AC_METHOD_3_4FC412AC83892514_OFFSET UNITYSDK_OFFSET(0x12071120)
#define CLASS_3_8DEED67EBA66D5AC_METHOD_3_55C409F94CDFD05F_OFFSET UNITYSDK_OFFSET(0x12071070)
#define CLASS_3_8DEED67EBA66D5AC_METHOD_3_5B21ADB0DEC21D52_OFFSET UNITYSDK_OFFSET(0x1206E8C0)
#define CLASS_3_8DEED67EBA66D5AC_METHOD_3_66CD3567BE0596D5_OFFSET UNITYSDK_OFFSET(0x12070960)
#define CLASS_3_8DEED67EBA66D5AC_METHOD_3_786637CB8D3A9F96_OFFSET UNITYSDK_OFFSET(0x12070830)
#define CLASS_3_8DEED67EBA66D5AC_METHOD_3_92EEB198074DA183_OFFSET UNITYSDK_OFFSET(0x1206FA20)
#define CLASS_3_8DEED67EBA66D5AC_METHOD_3_99AC64DE92152797_OFFSET UNITYSDK_OFFSET(0x1206FA60)
#define CLASS_3_8DEED67EBA66D5AC_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x1206E4D0)
#define CLASS_3_8DEED67EBA66D5AC_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1206FC90)
#define CLASS_3_8DEED67EBA66D5AC_METHOD_3_D129990F844B33D3_OFFSET UNITYSDK_OFFSET(0x1206F700)
#define CLASS_3_8DEED67EBA66D5AC_METHOD_3_F8CABA453114AB38_OFFSET UNITYSDK_OFFSET(0x1206FD20)
#define CLASS_3_8DEED67EBA66D5AC_METHOD_3_FE430BFA31C09628_OFFSET UNITYSDK_OFFSET(0x1206E560)
#define CLASS_3_8DEED67EBA66D5AC__CTOR_OFFSET UNITYSDK_OFFSET(0x1206E160)

inline static constexpr unsigned int Class_3_8DEED67EBA66D5AC_TypeDefinitionIndex = 81725;

class Class_3_8DEED67EBA66D5AC : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8DEED67EBA66D5AC__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_8DEED67EBA66D5AC_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void LateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8DEED67EBA66D5AC_LATEUPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_4E0C407CD63F7EA0(::Class_3_29AF178C9CE3EC26*& a1, ::System::Collections::Generic::List_1<::System::String*>*& a2)
	{
		return ((::System::Void(*)(::Class_3_29AF178C9CE3EC26*&, ::System::Collections::Generic::List_1<::System::String*>*&))((::PBYTE)hIl2Cpp + CLASS_3_8DEED67EBA66D5AC_METHOD_3_4E0C407CD63F7EA0_OFFSET))(a1, a2);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_8DEED67EBA66D5AC_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_FE430BFA31C09628(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_8DEED67EBA66D5AC_METHOD_3_FE430BFA31C09628_OFFSET))(a1);
	}

	static ::System::Void Method_3_92EEB198074DA183(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_8DEED67EBA66D5AC_METHOD_3_92EEB198074DA183_OFFSET))(a1);
	}

	static ::System::Void Method_3_99AC64DE92152797(::Class_3_29AF178C9CE3EC26* a1, ::System::String* a2, ::System::Collections::Generic::List_1<::System::String*>* a3)
	{
		return ((::System::Void(*)(::Class_3_29AF178C9CE3EC26*, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_3_8DEED67EBA66D5AC_METHOD_3_99AC64DE92152797_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8DEED67EBA66D5AC_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_D129990F844B33D3(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_8DEED67EBA66D5AC_METHOD_3_D129990F844B33D3_OFFSET))(a1);
	}

	static ::System::Void Method_3_F8CABA453114AB38(::Class_3_29AF178C9CE3EC26* a1)
	{
		return ((::System::Void(*)(::Class_3_29AF178C9CE3EC26*))((::PBYTE)hIl2Cpp + CLASS_3_8DEED67EBA66D5AC_METHOD_3_F8CABA453114AB38_OFFSET))(a1);
	}

	static ::System::Void Method_3_66CD3567BE0596D5(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_8DEED67EBA66D5AC_METHOD_3_66CD3567BE0596D5_OFFSET))(a1);
	}

	static ::System::Void Method_3_55C409F94CDFD05F(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_8DEED67EBA66D5AC_METHOD_3_55C409F94CDFD05F_OFFSET))(a1);
	}

	static ::System::Single Method_3_4FC412AC83892514(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Single(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_8DEED67EBA66D5AC_METHOD_3_4FC412AC83892514_OFFSET))(a1);
	}

	static ::System::Single Method_3_786637CB8D3A9F96(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Single(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_8DEED67EBA66D5AC_METHOD_3_786637CB8D3A9F96_OFFSET))(a1);
	}

	static ::System::Void Method_3_5B21ADB0DEC21D52(::UnityEngine::Transform* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_8DEED67EBA66D5AC_METHOD_3_5B21ADB0DEC21D52_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_486A325CF406C810(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_8DEED67EBA66D5AC_METHOD_3_486A325CF406C810_OFFSET))(a1);
	}

	static ::System::Void Method_3_450857CD60EF4E85(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_8DEED67EBA66D5AC_METHOD_3_450857CD60EF4E85_OFFSET))(a1);
	}

	static ::System::Void Method_3_00117A41DE15B19B(::Class_3_29AF178C9CE3EC26* a1, ::System::String* a2, ::System::Collections::Generic::List_1<::System::String*>* a3)
	{
		return ((::System::Void(*)(::Class_3_29AF178C9CE3EC26*, ::System::String*, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_3_8DEED67EBA66D5AC_METHOD_3_00117A41DE15B19B_OFFSET))(a1, a2, a3);
	}
};
