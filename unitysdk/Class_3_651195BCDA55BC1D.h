#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_B7E341C5F1A6F199;
class Class_3_C93CC3D2C2AC4067;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_3_651195BCDA55BC1D_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x12338100)
#define CLASS_3_651195BCDA55BC1D_METHOD_3_07A48CE1AA24868D_OFFSET UNITYSDK_OFFSET(0x12339490)
#define CLASS_3_651195BCDA55BC1D_METHOD_3_25AC4EEE0A89BE2B_OFFSET UNITYSDK_OFFSET(0x123396E0)
#define CLASS_3_651195BCDA55BC1D_METHOD_3_40742BB292FA4709_OFFSET UNITYSDK_OFFSET(0x12338CE0)
#define CLASS_3_651195BCDA55BC1D_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x123396A0)
#define CLASS_3_651195BCDA55BC1D_METHOD_3_760D5A3ED8C68F03_OFFSET UNITYSDK_OFFSET(0x12338E50)
#define CLASS_3_651195BCDA55BC1D_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x12339370)
#define CLASS_3_651195BCDA55BC1D_METHOD_3_C7597C4ED927AF60_OFFSET UNITYSDK_OFFSET(0x123390F0)
#define CLASS_3_651195BCDA55BC1D_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12339400)
#define CLASS_3_651195BCDA55BC1D_METHOD_3_D41D09491F79C734_OFFSET UNITYSDK_OFFSET(0x12338B90)
#define CLASS_3_651195BCDA55BC1D_METHOD_3_ECE88F9991412C09_OFFSET UNITYSDK_OFFSET(0x12338C10)
#define CLASS_3_651195BCDA55BC1D_UPDATE_OFFSET UNITYSDK_OFFSET(0x123388D0)
#define CLASS_3_651195BCDA55BC1D__CCTOR_OFFSET UNITYSDK_OFFSET(0x12338B70)
#define CLASS_3_651195BCDA55BC1D__CTOR_OFFSET UNITYSDK_OFFSET(0x12338B20)

inline static constexpr unsigned int Class_3_651195BCDA55BC1D_TypeDefinitionIndex = 71164;

class Class_3_651195BCDA55BC1D : public ::Class_2_40CD888D5D4FCB5B
{
public:
	static ::UnityEngine::Vector3* StaticGet_Field_3_7()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Class_3_651195BCDA55BC1D_TypeDefinitionIndex)->GetStaticField(0x11960);
	}
	::Nap::NapECS::EcsFilter* Field_3_2; // 0x20
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x28
	::Nap::NapECS::EcsFilter* Field_3_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_651195BCDA55BC1D__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_651195BCDA55BC1D__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_651195BCDA55BC1D_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_651195BCDA55BC1D_UPDATE_OFFSET))(this);
	}

	static ::System::Void Method_3_D41D09491F79C734(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_651195BCDA55BC1D_METHOD_3_D41D09491F79C734_OFFSET))(a1);
	}

	static ::UnityEngine::Bounds Method_3_ECE88F9991412C09(::Class_3_C93CC3D2C2AC4067* a1)
	{
		return ((::UnityEngine::Bounds(*)(::Class_3_C93CC3D2C2AC4067*))((::PBYTE)hIl2Cpp + CLASS_3_651195BCDA55BC1D_METHOD_3_ECE88F9991412C09_OFFSET))(a1);
	}

	static ::System::Void Method_3_40742BB292FA4709(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_3_651195BCDA55BC1D_METHOD_3_40742BB292FA4709_OFFSET))(a1);
	}

	::System::Void Method_3_C7597C4ED927AF60(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_651195BCDA55BC1D_METHOD_3_C7597C4ED927AF60_OFFSET))(this, a1);
	}

	static ::UnityEngine::Bounds Method_3_760D5A3ED8C68F03(::MoleMole::EntityHandle a1)
	{
		return ((::UnityEngine::Bounds(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_3_651195BCDA55BC1D_METHOD_3_760D5A3ED8C68F03_OFFSET))(a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_651195BCDA55BC1D_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_651195BCDA55BC1D_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_07A48CE1AA24868D(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_651195BCDA55BC1D_METHOD_3_07A48CE1AA24868D_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_651195BCDA55BC1D_METHOD_3_5790A55946AA509D_OFFSET))();
	}

	::System::Void Method_3_25AC4EEE0A89BE2B(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_651195BCDA55BC1D_METHOD_3_25AC4EEE0A89BE2B_OFFSET))(this, a1, a2);
	}
};
