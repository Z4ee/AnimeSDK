#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/Struct_2_9E75F47F2670B678.h"

class Class_1_B7E341C5F1A6F199;
class Class_3_CAE1CE1BAD52952C;
class Class_3_DFD5D1FDB9D2A4AC;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_3_A71C6A98560C324C_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x160BFDC0)
#define CLASS_3_A71C6A98560C324C_METHOD_3_77A0263D7054C23B_OFFSET UNITYSDK_OFFSET(0x160C0F10)
#define CLASS_3_A71C6A98560C324C_METHOD_3_9D6D482D0D66151C_OFFSET UNITYSDK_OFFSET(0x160C0ED0)
#define CLASS_3_A71C6A98560C324C_METHOD_3_B657C97BCCA720F2_OFFSET UNITYSDK_OFFSET(0x160C0A70)
#define CLASS_3_A71C6A98560C324C_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x160C0880)
#define CLASS_3_A71C6A98560C324C_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x160C0E40)
#define CLASS_3_A71C6A98560C324C_METHOD_3_D9ACA6584135F726_OFFSET UNITYSDK_OFFSET(0x160C0910)
#define CLASS_3_A71C6A98560C324C_METHOD_3_EC23DC06D9179AD6_OFFSET UNITYSDK_OFFSET(0x160C0C70)
#define CLASS_3_A71C6A98560C324C_UPDATE_OFFSET UNITYSDK_OFFSET(0x160C0430)
#define CLASS_3_A71C6A98560C324C__CTOR_OFFSET UNITYSDK_OFFSET(0x160C0830)

inline static constexpr unsigned int Class_3_A71C6A98560C324C_TypeDefinitionIndex = 83058;

class Class_3_A71C6A98560C324C : public ::Class_2_40CD888D5D4FCB5B
{
public:
	static ::Struct_2_9E75F47F2670B678* StaticGet_Field_3_3()
	{
		return (::Struct_2_9E75F47F2670B678*)Il2CppClass::FromTypeDefinitionIndex(Class_3_A71C6A98560C324C_TypeDefinitionIndex)->GetStaticField(0xAE50);
	}
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20
	::Nap::NapECS::EcsFilter* Field_3_1; // 0x28
	::Nap::NapECS::EcsFilter* Field_3_2; // 0x30
	::System::Single Field_3_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A71C6A98560C324C__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_A71C6A98560C324C_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A71C6A98560C324C_UPDATE_OFFSET))(this);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_A71C6A98560C324C_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	::System::Void Method_3_D9ACA6584135F726(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_A71C6A98560C324C_METHOD_3_D9ACA6584135F726_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_3_B657C97BCCA720F2(::Class_3_CAE1CE1BAD52952C* a1)
	{
		return ((::System::Void(*)(::Class_3_CAE1CE1BAD52952C*))((::PBYTE)hIl2Cpp + CLASS_3_A71C6A98560C324C_METHOD_3_B657C97BCCA720F2_OFFSET))(a1);
	}

	static ::System::Void Method_3_EC23DC06D9179AD6(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_A71C6A98560C324C_METHOD_3_EC23DC06D9179AD6_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A71C6A98560C324C_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_9D6D482D0D66151C(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_A71C6A98560C324C_METHOD_3_9D6D482D0D66151C_OFFSET))(a1);
	}

	static ::System::Void Method_3_77A0263D7054C23B(::Class_3_CAE1CE1BAD52952C* a1, ::Class_3_DFD5D1FDB9D2A4AC* a2)
	{
		return ((::System::Void(*)(::Class_3_CAE1CE1BAD52952C*, ::Class_3_DFD5D1FDB9D2A4AC*))((::PBYTE)hIl2Cpp + CLASS_3_A71C6A98560C324C_METHOD_3_77A0263D7054C23B_OFFSET))(a1, a2);
	}
};
