#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_1342B57709FD7AC5;
namespace UnityEngine { class Animator; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_ACTIVEPRESIGHT_OFFSET UNITYSDK_OFFSET(0xDD075A0)
#define RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_DEACTIVEPRESIGHT_OFFSET UNITYSDK_OFFSET(0xDD07640)
#define RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xDD07D10)
#define RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_METHOD_5_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xDD08360)
#define RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_METHOD_5_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0xDD08010)
#define RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xDD084C0)
#define RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_ROTATETO_OFFSET UNITYSDK_OFFSET(0xDD076E0)
#define RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_SETEMISSION_OFFSET UNITYSDK_OFFSET(0xDD07C10)
#define RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_SETPRESIGHTSCALE_OFFSET UNITYSDK_OFFSET(0xDD07F30)
#define RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_UPDATE_OFFSET UNITYSDK_OFFSET(0xDD07FC0)
#define RPG_CLIENT_PROP_ROGUEDLCRAYMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0xDD08560)
#define RPG_CLIENT_PROP_ROGUEDLCRAYMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xDD08550)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RogueDLCRayModule_TypeDefinitionIndex = 78485;

	class RogueDLCRayModule : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_EIGIEMEFAJP()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RogueDLCRayModule_TypeDefinitionIndex)->GetStaticField(0x14E80);
		}
		static ::System::Int32* StaticGet_BEEABBJDEHJ()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RogueDLCRayModule_TypeDefinitionIndex)->GetStaticField(0x14E84);
		}
		::System::Single RotateSpeed; // 0x18
		::System::Single ChangeEmissionSpeed; // 0x1C
		::UnityEngine::Animator* APPGGMLEPLN; // 0x20
		::System::Boolean DKFLBNMGDJH; // 0x28
		::System::Single NBHIDJBMLIB; // 0x2C
		::System::Single FBPEBHBEDII; // 0x30
		::UnityEngine::Vector3 BGJECKILABB; // 0x34
		::System::Int32 BGNACBGBMHG; // 0x40
		::UnityEngine::Transform* PGENPJLGMIC; // 0x48
		::UnityEngine::Vector3 GFNEIGDFCII; // 0x50
		::UnityEngine::MeshRenderer* GFEHCONCNCA; // 0x60
		::Class_1_1342B57709FD7AC5* JAMDAALMOAL; // 0x68
		::System::Single ALCICOLEFDM; // 0x70
		::System::Single OGBAPPDJHJD; // 0x74
		::System::Boolean EMHJDFOBENG; // 0x78
		::System::Single GDFKMHHCGMJ; // 0x7C
		::System::Single POJFJHOJEKI; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLCRAYMODULE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLCRAYMODULE__CCTOR_OFFSET))();
		}

		::System::Void ActivePresight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_ACTIVEPRESIGHT_OFFSET))(this);
		}

		::System::Void DeactivePresight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_DEACTIVEPRESIGHT_OFFSET))(this);
		}

		::System::Void RotateTo(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_ROTATETO_OFFSET))(this, a1);
		}

		::System::Void SetEmission(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_SETEMISSION_OFFSET))(this, a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_INIT_OFFSET))(this);
		}

		::System::Void SetPresightScale(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_SETPRESIGHTSCALE_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_5_F0BD65B017F2AC0B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_METHOD_5_F0BD65B017F2AC0B_OFFSET))(this);
		}

		::System::Void Method_5_25DEA5C65A602671()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_METHOD_5_25DEA5C65A602671_OFFSET))(this);
		}
	};
}
