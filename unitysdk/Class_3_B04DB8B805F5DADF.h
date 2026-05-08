#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MeshRenderer; }

#define CLASS_3_B04DB8B805F5DADF_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x14BBCAF0)
#define CLASS_3_B04DB8B805F5DADF_METHOD_3_3A54EBF263D9FC88_OFFSET UNITYSDK_OFFSET(0x14BBCC60)
#define CLASS_3_B04DB8B805F5DADF_METHOD_3_3EEEA77014B05956_OFFSET UNITYSDK_OFFSET(0x14BBCDE0)
#define CLASS_3_B04DB8B805F5DADF_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x14BBCD50)
#define CLASS_3_B04DB8B805F5DADF_METHOD_3_AA6AC38756233BD0_OFFSET UNITYSDK_OFFSET(0x14BBCC10)
#define CLASS_3_B04DB8B805F5DADF_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x14BBCA80)
#define CLASS_3_B04DB8B805F5DADF__CCTOR_OFFSET UNITYSDK_OFFSET(0x14BBCB40)
#define CLASS_3_B04DB8B805F5DADF__CTOR_OFFSET UNITYSDK_OFFSET(0x14BBCBC0)

inline static constexpr unsigned int Class_3_B04DB8B805F5DADF_TypeDefinitionIndex = 65565;

class Class_3_B04DB8B805F5DADF : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_10 = 0x32; // 0x0
	::UnityEngine::MaterialPropertyBlock* Field_3_2; // 0x48
	::MoleMole::Battle::Entity* Field_3_0; // 0x50
	::UnityEngine::MeshRenderer* Field_3_1; // 0x58
	::System::Single Field_3_5; // 0x60
	::System::Int32 Field_3_4; // 0x64
	::System::Single Field_3_7; // 0x68
	::System::Boolean Field_3_3; // 0x6C
	::System::Boolean Field_3_8; // 0x6D
	::System::Boolean Field_3_9; // 0x6E
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

	::System::Void Method_3_AA6AC38756233BD0(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_B04DB8B805F5DADF_METHOD_3_AA6AC38756233BD0_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_3_3A54EBF263D9FC88()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B04DB8B805F5DADF_METHOD_3_3A54EBF263D9FC88_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B04DB8B805F5DADF_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	static ::Class_3_B04DB8B805F5DADF* Method_3_3EEEA77014B05956()
	{
		return ((::Class_3_B04DB8B805F5DADF*(*)())((::PBYTE)hIl2Cpp + CLASS_3_B04DB8B805F5DADF_METHOD_3_3EEEA77014B05956_OFFSET))();
	}
};
