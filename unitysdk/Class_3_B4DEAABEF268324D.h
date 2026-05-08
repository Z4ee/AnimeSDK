#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"

class Class_1_B7E341C5F1A6F199;
class Class_2_552ECB8041B24863;
class Class_2_8092EF5027021CFC;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_B4DEAABEF268324D_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x10B92010)
#define CLASS_3_B4DEAABEF268324D_METHOD_3_28CAC4B70D75C201_OFFSET UNITYSDK_OFFSET(0x10B93970)
#define CLASS_3_B4DEAABEF268324D_METHOD_3_2C28507E78685A18_OFFSET UNITYSDK_OFFSET(0x10B92760)
#define CLASS_3_B4DEAABEF268324D_METHOD_3_42D59398E65EF6BC_OFFSET UNITYSDK_OFFSET(0x10B94420)
#define CLASS_3_B4DEAABEF268324D_METHOD_3_436D887688692A9F_OFFSET UNITYSDK_OFFSET(0x10B92A90)
#define CLASS_3_B4DEAABEF268324D_METHOD_3_548A8CB2235AD386_OFFSET UNITYSDK_OFFSET(0x10B93A80)
#define CLASS_3_B4DEAABEF268324D_METHOD_3_AA6AC38756233BD0_1_OFFSET UNITYSDK_OFFSET(0x10B92710)
#define CLASS_3_B4DEAABEF268324D_METHOD_3_AA6AC38756233BD0_OFFSET UNITYSDK_OFFSET(0x10B92270)
#define CLASS_3_B4DEAABEF268324D_METHOD_3_B95885598311E589_OFFSET UNITYSDK_OFFSET(0x10B922C0)
#define CLASS_3_B4DEAABEF268324D_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x10B938E0)
#define CLASS_3_B4DEAABEF268324D_METHOD_3_EB020A7ED3DF7E78_OFFSET UNITYSDK_OFFSET(0x10B93DB0)
#define CLASS_3_B4DEAABEF268324D_METHOD_3_F836E2FA1BCB50B4_OFFSET UNITYSDK_OFFSET(0x10B92E50)
#define CLASS_3_B4DEAABEF268324D__CTOR_OFFSET UNITYSDK_OFFSET(0x10B92220)

inline static constexpr unsigned int Class_3_B4DEAABEF268324D_TypeDefinitionIndex = 44221;

class Class_3_B4DEAABEF268324D : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B4DEAABEF268324D__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_B4DEAABEF268324D_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Method_3_AA6AC38756233BD0(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_B4DEAABEF268324D_METHOD_3_AA6AC38756233BD0_OFFSET))(this, a1);
	}

	::System::Void Method_3_B95885598311E589(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_B4DEAABEF268324D_METHOD_3_B95885598311E589_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_2C28507E78685A18(::Class_2_552ECB8041B24863* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Boolean(*)(::Class_2_552ECB8041B24863*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_B4DEAABEF268324D_METHOD_3_2C28507E78685A18_OFFSET))(a1, a2);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_B4DEAABEF268324D_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_436D887688692A9F(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::MoleMole::Battle::Entity* a4)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::System::String*>*, ::System::UInt32, ::System::UInt32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_B4DEAABEF268324D_METHOD_3_436D887688692A9F_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_F836E2FA1BCB50B4(::System::Collections::Generic::List_1<::System::String*>* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::String*>*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_B4DEAABEF268324D_METHOD_3_F836E2FA1BCB50B4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_28CAC4B70D75C201(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_B4DEAABEF268324D_METHOD_3_28CAC4B70D75C201_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_EB020A7ED3DF7E78(::System::UInt32 a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::System::UInt32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_B4DEAABEF268324D_METHOD_3_EB020A7ED3DF7E78_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_3_548A8CB2235AD386(::Class_2_8092EF5027021CFC* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Boolean(*)(::Class_2_8092EF5027021CFC*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_B4DEAABEF268324D_METHOD_3_548A8CB2235AD386_OFFSET))(a1, a2);
	}

	::System::Void Method_3_AA6AC38756233BD0_1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_B4DEAABEF268324D_METHOD_3_AA6AC38756233BD0_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_42D59398E65EF6BC(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_B4DEAABEF268324D_METHOD_3_42D59398E65EF6BC_OFFSET))(this, a1);
	}
};
