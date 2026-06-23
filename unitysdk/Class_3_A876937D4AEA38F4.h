#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_10A9F99BCFBAF496;
class Class_2_80FD8D6DCEB53EC0;
namespace MoleMole { class MonoEffectPluginHitWallBullet; }
namespace MoleMole { class MonoEffectPluginHitWallScratch; }
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_3_A876937D4AEA38F4_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x14373D70)
#define CLASS_3_A876937D4AEA38F4_METHOD_3_2F4F7FB74439CD85_OFFSET UNITYSDK_OFFSET(0x143743E0)
#define CLASS_3_A876937D4AEA38F4_METHOD_3_44640A0B494F04AB_OFFSET UNITYSDK_OFFSET(0x14373F20)
#define CLASS_3_A876937D4AEA38F4_METHOD_3_52843B847BEFBCAA_OFFSET UNITYSDK_OFFSET(0x143741F0)
#define CLASS_3_A876937D4AEA38F4_METHOD_3_56297AB3FE0810F0_OFFSET UNITYSDK_OFFSET(0x14374680)
#define CLASS_3_A876937D4AEA38F4_METHOD_3_89111A8500FC83C9_OFFSET UNITYSDK_OFFSET(0x14374350)
#define CLASS_3_A876937D4AEA38F4_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x14374160)
#define CLASS_3_A876937D4AEA38F4_METHOD_3_FB954E52B14A2E3D_OFFSET UNITYSDK_OFFSET(0x14374470)
#define CLASS_3_A876937D4AEA38F4_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x14373AA0)
#define CLASS_3_A876937D4AEA38F4__CCTOR_OFFSET UNITYSDK_OFFSET(0x14373DC0)
#define CLASS_3_A876937D4AEA38F4__CTOR_OFFSET UNITYSDK_OFFSET(0x14373E40)

inline static constexpr unsigned int Class_3_A876937D4AEA38F4_TypeDefinitionIndex = 76937;

class Class_3_A876937D4AEA38F4 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_4 = 0x6A; // 0x0
	::MoleMole::MonoEffectPluginHitWallScratch* Field_3_1; // 0x48
	::System::Collections::Generic::List_1<::Class_2_10A9F99BCFBAF496*>* Field_3_0; // 0x50
	::System::Collections::Generic::List_1<::Class_2_80FD8D6DCEB53EC0*>* Field_3_2; // 0x58
	::MoleMole::MonoEffectPluginHitWallBullet* Field_3_3; // 0x60

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_A876937D4AEA38F4__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A876937D4AEA38F4__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A876937D4AEA38F4_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A876937D4AEA38F4_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_44640A0B494F04AB(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_A876937D4AEA38F4_METHOD_3_44640A0B494F04AB_OFFSET))(this, a1);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A876937D4AEA38F4_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_A876937D4AEA38F4* Method_3_52843B847BEFBCAA()
	{
		return ((::Class_3_A876937D4AEA38F4*(*)())((::PBYTE)hIl2Cpp + CLASS_3_A876937D4AEA38F4_METHOD_3_52843B847BEFBCAA_OFFSET))();
	}

	static ::System::Void Method_3_89111A8500FC83C9(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::GameObject* a4)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_3_A876937D4AEA38F4_METHOD_3_89111A8500FC83C9_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Void Method_3_2F4F7FB74439CD85(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Color a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_A876937D4AEA38F4_METHOD_3_2F4F7FB74439CD85_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_3_FB954E52B14A2E3D(::MoleMole::MonoEffectPluginHitWallBullet* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectPluginHitWallBullet*))((::PBYTE)hIl2Cpp + CLASS_3_A876937D4AEA38F4_METHOD_3_FB954E52B14A2E3D_OFFSET))(this, a1);
	}

	::System::Void Method_3_56297AB3FE0810F0(::MoleMole::MonoEffectPluginHitWallScratch* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectPluginHitWallScratch*))((::PBYTE)hIl2Cpp + CLASS_3_A876937D4AEA38F4_METHOD_3_56297AB3FE0810F0_OFFSET))(this, a1);
	}
};
