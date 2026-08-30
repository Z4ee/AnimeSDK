#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MonoRotatingBlockControl; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_057C3FE8F02A318D_METHOD_2_00DC6C482249EA10_OFFSET UNITYSDK_OFFSET(0xD263CD0)
#define CLASS_2_057C3FE8F02A318D_METHOD_2_450252B9487A83AF_OFFSET UNITYSDK_OFFSET(0xD263C80)
#define CLASS_2_057C3FE8F02A318D_METHOD_2_6F7A31748A3BE99F_OFFSET UNITYSDK_OFFSET(0xD263390)
#define CLASS_2_057C3FE8F02A318D_METHOD_2_D545E2F706415F81_OFFSET UNITYSDK_OFFSET(0xD264580)
#define CLASS_2_057C3FE8F02A318D_METHOD_2_DFEC27F1F6CA5A80_OFFSET UNITYSDK_OFFSET(0xD2644E0)
#define CLASS_2_057C3FE8F02A318D__CTOR_OFFSET UNITYSDK_OFFSET(0xD266270)

inline static constexpr unsigned int Class_2_057C3FE8F02A318D_TypeDefinitionIndex = 70341;

class Class_2_057C3FE8F02A318D : public ::RPG::Client::BehaviorBase
{
public:
	::UnityEngine::GameObject* JPCMHJPCJLP; // 0x18
	::UnityEngine::GameObject* JJGCCEGHDDM; // 0x20
	::UnityEngine::MaterialPropertyBlock* HMHMGLCEALK; // 0x28
	::UnityEngine::GameObject* EJDCMEDEBGO; // 0x30
	::UnityEngine::Quaternion NCMEPPHLGEG; // 0x38
	::System::Single AJOEFOBJGBH; // 0x48
	::System::Single JBMGKOLIJBD; // 0x4C
	::UnityEngine::Vector3 NOKOFCBMICO; // 0x50
	::System::Single NECEODNNDMA; // 0x5C
	::UnityEngine::Vector3 ICNBBLAOJGH; // 0x60
	::UnityEngine::Vector3 NFBLJCEJGDL; // 0x6C
	::UnityEngine::Vector3 BHOPCDGLGEE; // 0x78
	::System::Single DLHGCGFDLBN; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_057C3FE8F02A318D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_6F7A31748A3BE99F(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_057C3FE8F02A318D_METHOD_2_6F7A31748A3BE99F_OFFSET))(this, a1);
	}

	::System::Void Method_2_DFEC27F1F6CA5A80()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_057C3FE8F02A318D_METHOD_2_DFEC27F1F6CA5A80_OFFSET))(this);
	}

	::System::Void Method_2_D545E2F706415F81()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_057C3FE8F02A318D_METHOD_2_D545E2F706415F81_OFFSET))(this);
	}

	::System::Void Method_2_00DC6C482249EA10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_057C3FE8F02A318D_METHOD_2_00DC6C482249EA10_OFFSET))(this);
	}

	::RPG::Client::MonoRotatingBlockControl* Method_2_450252B9487A83AF()
	{
		return ((::RPG::Client::MonoRotatingBlockControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_057C3FE8F02A318D_METHOD_2_450252B9487A83AF_OFFSET))(this);
	}
};
