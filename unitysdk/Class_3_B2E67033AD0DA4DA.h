#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"

class Class_1_B7E341C5F1A6F199;
class Class_3_4875884AB352B34E;
class Class_3_D6DA183EF60F02C8;
namespace MoleMole { class MonoEffect; }
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_3_B2E67033AD0DA4DA_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x137DD810)
#define CLASS_3_B2E67033AD0DA4DA_METHOD_3_407007B242A08940_OFFSET UNITYSDK_OFFSET(0x137DEDC0)
#define CLASS_3_B2E67033AD0DA4DA_METHOD_3_47269B68659B81CF_OFFSET UNITYSDK_OFFSET(0x137DDE70)
#define CLASS_3_B2E67033AD0DA4DA_METHOD_3_6A8BC08449E36907_OFFSET UNITYSDK_OFFSET(0x137DDBD0)
#define CLASS_3_B2E67033AD0DA4DA_METHOD_3_8F697642FBF3BDA7_OFFSET UNITYSDK_OFFSET(0x137DDB20)
#define CLASS_3_B2E67033AD0DA4DA_METHOD_3_AA0DFD8C22D30009_OFFSET UNITYSDK_OFFSET(0x137DEF80)
#define CLASS_3_B2E67033AD0DA4DA_METHOD_3_B28FD94EB7C542ED_OFFSET UNITYSDK_OFFSET(0x137DF190)
#define CLASS_3_B2E67033AD0DA4DA_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x137DF870)
#define CLASS_3_B2E67033AD0DA4DA_METHOD_3_EFBE57A1AA4482D7_OFFSET UNITYSDK_OFFSET(0x137DE2C0)
#define CLASS_3_B2E67033AD0DA4DA__CTOR_OFFSET UNITYSDK_OFFSET(0x137DDAD0)

inline static constexpr unsigned int Class_3_B2E67033AD0DA4DA_TypeDefinitionIndex = 65142;

class Class_3_B2E67033AD0DA4DA : public ::Class_2_40CD888D5D4FCB5B
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B2E67033AD0DA4DA__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_B2E67033AD0DA4DA_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Method_3_8F697642FBF3BDA7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_B2E67033AD0DA4DA_METHOD_3_8F697642FBF3BDA7_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_6A8BC08449E36907(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_B2E67033AD0DA4DA_METHOD_3_6A8BC08449E36907_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_EFBE57A1AA4482D7(::MoleMole::MonoEffect* a1, ::Class_3_D6DA183EF60F02C8* a2)
	{
		return ((::System::Void(*)(::MoleMole::MonoEffect*, ::Class_3_D6DA183EF60F02C8*))((::PBYTE)hIl2Cpp + CLASS_3_B2E67033AD0DA4DA_METHOD_3_EFBE57A1AA4482D7_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_407007B242A08940(::Class_3_D6DA183EF60F02C8* a1, ::Class_3_4875884AB352B34E* a2)
	{
		return ((::System::Void(*)(::Class_3_D6DA183EF60F02C8*, ::Class_3_4875884AB352B34E*))((::PBYTE)hIl2Cpp + CLASS_3_B2E67033AD0DA4DA_METHOD_3_407007B242A08940_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_47269B68659B81CF(::Class_3_4875884AB352B34E* a1, ::System::Int32 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::Class_3_4875884AB352B34E*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_B2E67033AD0DA4DA_METHOD_3_47269B68659B81CF_OFFSET))(a1, a2, a3);
	}

	::System::Void Method_3_AA0DFD8C22D30009(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_B2E67033AD0DA4DA_METHOD_3_AA0DFD8C22D30009_OFFSET))(this, a1);
	}

	::System::Void Method_3_B28FD94EB7C542ED(::Class_3_D6DA183EF60F02C8* a1, ::Class_3_4875884AB352B34E* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D6DA183EF60F02C8*, ::Class_3_4875884AB352B34E*))((::PBYTE)hIl2Cpp + CLASS_3_B2E67033AD0DA4DA_METHOD_3_B28FD94EB7C542ED_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_B2E67033AD0DA4DA_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}
};
