#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/Struct_2_9E75F47F2670B678.h"

class Class_1_B7E341C5F1A6F199;
class Class_3_430D60B7258267AD;
class Class_3_C93CC3D2C2AC4067;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_3_3B818E9B7F6DF69E_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x15457B50)
#define CLASS_3_3B818E9B7F6DF69E_METHOD_3_07A37BF76C53D18A_OFFSET UNITYSDK_OFFSET(0x15458A40)
#define CLASS_3_3B818E9B7F6DF69E_METHOD_3_1FDA12833BC8C398_OFFSET UNITYSDK_OFFSET(0x15458810)
#define CLASS_3_3B818E9B7F6DF69E_METHOD_3_9D6D482D0D66151C_OFFSET UNITYSDK_OFFSET(0x15458670)
#define CLASS_3_3B818E9B7F6DF69E_METHOD_3_B657C97BCCA720F2_OFFSET UNITYSDK_OFFSET(0x15458D10)
#define CLASS_3_3B818E9B7F6DF69E_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x15458FA0)
#define CLASS_3_3B818E9B7F6DF69E_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15458F10)
#define CLASS_3_3B818E9B7F6DF69E_METHOD_3_D9ACA6584135F726_OFFSET UNITYSDK_OFFSET(0x154586B0)
#define CLASS_3_3B818E9B7F6DF69E_UPDATE_OFFSET UNITYSDK_OFFSET(0x15458220)
#define CLASS_3_3B818E9B7F6DF69E__CTOR_OFFSET UNITYSDK_OFFSET(0x15458620)

inline static constexpr unsigned int Class_3_3B818E9B7F6DF69E_TypeDefinitionIndex = 74065;

class Class_3_3B818E9B7F6DF69E : public ::Class_2_40CD888D5D4FCB5B
{
public:
	static ::Struct_2_9E75F47F2670B678* StaticGet_Field_3_6()
	{
		return (::Struct_2_9E75F47F2670B678*)Il2CppClass::FromTypeDefinitionIndex(Class_3_3B818E9B7F6DF69E_TypeDefinitionIndex)->GetStaticField(0x11DB0);
	}
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20
	::Nap::NapECS::EcsFilter* Field_3_7; // 0x28
	::Nap::NapECS::EcsFilter* Field_3_1; // 0x30
	::System::Single Field_3_5; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3B818E9B7F6DF69E__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_3B818E9B7F6DF69E_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3B818E9B7F6DF69E_UPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_9D6D482D0D66151C(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_3B818E9B7F6DF69E_METHOD_3_9D6D482D0D66151C_OFFSET))(a1);
	}

	::System::Void Method_3_D9ACA6584135F726(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_3B818E9B7F6DF69E_METHOD_3_D9ACA6584135F726_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_3_1FDA12833BC8C398(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_3B818E9B7F6DF69E_METHOD_3_1FDA12833BC8C398_OFFSET))(a1);
	}

	static ::System::Void Method_3_07A37BF76C53D18A(::Class_3_430D60B7258267AD* a1, ::Class_3_C93CC3D2C2AC4067* a2)
	{
		return ((::System::Void(*)(::Class_3_430D60B7258267AD*, ::Class_3_C93CC3D2C2AC4067*))((::PBYTE)hIl2Cpp + CLASS_3_3B818E9B7F6DF69E_METHOD_3_07A37BF76C53D18A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B657C97BCCA720F2(::Class_3_430D60B7258267AD* a1)
	{
		return ((::System::Void(*)(::Class_3_430D60B7258267AD*))((::PBYTE)hIl2Cpp + CLASS_3_3B818E9B7F6DF69E_METHOD_3_B657C97BCCA720F2_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3B818E9B7F6DF69E_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_3B818E9B7F6DF69E_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}
};
