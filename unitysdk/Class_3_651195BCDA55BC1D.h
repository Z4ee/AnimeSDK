#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_40CD888D5D4FCB5B.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_B7E341C5F1A6F199;
class Class_3_DFD5D1FDB9D2A4AC;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_3_651195BCDA55BC1D_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x18655C40)
#define CLASS_3_651195BCDA55BC1D_METHOD_3_07A48CE1AA24868D_OFFSET UNITYSDK_OFFSET(0x18657460)
#define CLASS_3_651195BCDA55BC1D_METHOD_3_25AC4EEE0A89BE2B_OFFSET UNITYSDK_OFFSET(0x18657140)
#define CLASS_3_651195BCDA55BC1D_METHOD_3_40742BB292FA4709_OFFSET UNITYSDK_OFFSET(0x18656D30)
#define CLASS_3_651195BCDA55BC1D_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x18656980)
#define CLASS_3_651195BCDA55BC1D_METHOD_3_760D5A3ED8C68F03_OFFSET UNITYSDK_OFFSET(0x18656EA0)
#define CLASS_3_651195BCDA55BC1D_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0x186568F0)
#define CLASS_3_651195BCDA55BC1D_METHOD_3_BEE3B999EFBA2802_OFFSET UNITYSDK_OFFSET(0x186569C0)
#define CLASS_3_651195BCDA55BC1D_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x186573D0)
#define CLASS_3_651195BCDA55BC1D_METHOD_3_D41D09491F79C734_OFFSET UNITYSDK_OFFSET(0x18656CB0)
#define CLASS_3_651195BCDA55BC1D_METHOD_3_ECE88F9991412C09_OFFSET UNITYSDK_OFFSET(0x18657300)
#define CLASS_3_651195BCDA55BC1D_UPDATE_OFFSET UNITYSDK_OFFSET(0x18656630)
#define CLASS_3_651195BCDA55BC1D__CCTOR_OFFSET UNITYSDK_OFFSET(0x186568D0)
#define CLASS_3_651195BCDA55BC1D__CTOR_OFFSET UNITYSDK_OFFSET(0x18656880)

inline static constexpr unsigned int Class_3_651195BCDA55BC1D_TypeDefinitionIndex = 38106;

class Class_3_651195BCDA55BC1D : public ::Class_2_40CD888D5D4FCB5B
{
public:
	static ::UnityEngine::Vector3* StaticGet_Field_3_3()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Class_3_651195BCDA55BC1D_TypeDefinitionIndex)->GetStaticField(0x100D0);
	}
	::Nap::NapECS::EcsFilter* Field_3_2; // 0x20
	::Nap::NapECS::EcsFilter* Field_3_1; // 0x28
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x30

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

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_651195BCDA55BC1D_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_651195BCDA55BC1D_METHOD_3_5790A55946AA509D_OFFSET))();
	}

	::System::Void Method_3_BEE3B999EFBA2802(::Nap::NapECS::EcsEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + CLASS_3_651195BCDA55BC1D_METHOD_3_BEE3B999EFBA2802_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_D41D09491F79C734(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_651195BCDA55BC1D_METHOD_3_D41D09491F79C734_OFFSET))(a1);
	}

	static ::System::Void Method_3_40742BB292FA4709(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_3_651195BCDA55BC1D_METHOD_3_40742BB292FA4709_OFFSET))(a1);
	}

	::System::Void Method_3_25AC4EEE0A89BE2B(::Class_1_B7E341C5F1A6F199* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_651195BCDA55BC1D_METHOD_3_25AC4EEE0A89BE2B_OFFSET))(this, a1, a2);
	}

	static ::UnityEngine::Bounds Method_3_760D5A3ED8C68F03(::MoleMole::EntityHandle a1)
	{
		return ((::UnityEngine::Bounds(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_3_651195BCDA55BC1D_METHOD_3_760D5A3ED8C68F03_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_651195BCDA55BC1D_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::UnityEngine::Bounds Method_3_ECE88F9991412C09(::Class_3_DFD5D1FDB9D2A4AC* a1)
	{
		return ((::UnityEngine::Bounds(*)(::Class_3_DFD5D1FDB9D2A4AC*))((::PBYTE)hIl2Cpp + CLASS_3_651195BCDA55BC1D_METHOD_3_ECE88F9991412C09_OFFSET))(a1);
	}

	::System::Void Method_3_07A48CE1AA24868D(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_651195BCDA55BC1D_METHOD_3_07A48CE1AA24868D_OFFSET))(this, a1);
	}
};
