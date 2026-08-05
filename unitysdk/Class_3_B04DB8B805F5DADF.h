#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MeshRenderer; }

#define CLASS_3_B04DB8B805F5DADF_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x139A0830)
#define CLASS_3_B04DB8B805F5DADF_METHOD_3_3A54EBF263D9FC88_OFFSET UNITYSDK_OFFSET(0x139A0950)
#define CLASS_3_B04DB8B805F5DADF_METHOD_3_3EEEA77014B05956_OFFSET UNITYSDK_OFFSET(0x139A0A40)
#define CLASS_3_B04DB8B805F5DADF_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x139A0AF0)
#define CLASS_3_B04DB8B805F5DADF_METHOD_3_AA6AC38756233BD0_OFFSET UNITYSDK_OFFSET(0x139A0B80)
#define CLASS_3_B04DB8B805F5DADF_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x139A07C0)
#define CLASS_3_B04DB8B805F5DADF__CCTOR_OFFSET UNITYSDK_OFFSET(0x139A0880)
#define CLASS_3_B04DB8B805F5DADF__CTOR_OFFSET UNITYSDK_OFFSET(0x139A0900)

inline static constexpr unsigned int Class_3_B04DB8B805F5DADF_TypeDefinitionIndex = 73895;

class Class_3_B04DB8B805F5DADF : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_9 = 0x34; // 0x0
	::MoleMole::Battle::Entity* Field_3_3; // 0x48
	::UnityEngine::MeshRenderer* Field_3_2; // 0x50
	::UnityEngine::MaterialPropertyBlock* Field_3_1; // 0x58
	::System::Boolean Field_3_10; // 0x60
	::System::Boolean Field_3_0; // 0x61
	::System::Boolean Field_3_11; // 0x62
	::System::Single Field_3_5; // 0x64
	::System::Int32 Field_3_7; // 0x68
	::System::Single Field_3_4; // 0x6C
	::System::Single Field_3_6; // 0x70

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_B04DB8B805F5DADF__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B04DB8B805F5DADF__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B04DB8B805F5DADF_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B04DB8B805F5DADF_GETCLASSID_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_3_3A54EBF263D9FC88()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B04DB8B805F5DADF_METHOD_3_3A54EBF263D9FC88_OFFSET))(this);
	}

	static ::Class_3_B04DB8B805F5DADF* Method_3_3EEEA77014B05956()
	{
		return ((::Class_3_B04DB8B805F5DADF*(*)())((::PBYTE)hIl2Cpp + CLASS_3_B04DB8B805F5DADF_METHOD_3_3EEEA77014B05956_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B04DB8B805F5DADF_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_AA6AC38756233BD0(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_B04DB8B805F5DADF_METHOD_3_AA6AC38756233BD0_OFFSET))(this, a1);
	}
};
