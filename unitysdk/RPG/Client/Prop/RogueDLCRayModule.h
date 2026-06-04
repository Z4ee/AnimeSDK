#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_1342B57709FD7AC5;
namespace UnityEngine { class Animator; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_ACTIVEPRESIGHT_OFFSET UNITYSDK_OFFSET(0xC5FDCE0)
#define RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_DEACTIVEPRESIGHT_OFFSET UNITYSDK_OFFSET(0xC5FDD80)
#define RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xC5FE450)
#define RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_METHOD_5_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xC5FEAA0)
#define RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_METHOD_5_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0xC5FE750)
#define RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC5FEC00)
#define RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_ROTATETO_OFFSET UNITYSDK_OFFSET(0xC5FDE20)
#define RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_SETEMISSION_OFFSET UNITYSDK_OFFSET(0xC5FE350)
#define RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_SETPRESIGHTSCALE_OFFSET UNITYSDK_OFFSET(0xC5FE670)
#define RPG_CLIENT_PROP_ROGUEDLCRAYMODULE_UPDATE_OFFSET UNITYSDK_OFFSET(0xC5FE700)
#define RPG_CLIENT_PROP_ROGUEDLCRAYMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0xC5FECA0)
#define RPG_CLIENT_PROP_ROGUEDLCRAYMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xC5FEC90)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RogueDLCRayModule_TypeDefinitionIndex = 73474;

	class RogueDLCRayModule : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_Field_5_0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RogueDLCRayModule_TypeDefinitionIndex)->GetStaticField(0x8A60);
		}
		static ::System::Int32* StaticGet_Field_5_1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RogueDLCRayModule_TypeDefinitionIndex)->GetStaticField(0x8A64);
		}
		::System::Single RotateSpeed; // 0x18
		::System::Single ChangeEmissionSpeed; // 0x1C
		::UnityEngine::Animator* Field_5_4; // 0x20
		::System::Boolean Field_5_5; // 0x28
		::System::Single Field_5_6; // 0x2C
		::System::Single Field_5_7; // 0x30
		::UnityEngine::Vector3 Field_5_8; // 0x34
		::System::Int32 Field_5_9; // 0x40
		::UnityEngine::Transform* Field_5_10; // 0x48
		::UnityEngine::Vector3 Field_5_11; // 0x50
		::UnityEngine::MeshRenderer* Field_5_12; // 0x60
		::Class_1_1342B57709FD7AC5* Field_5_13; // 0x68
		::System::Single Field_5_14; // 0x70
		::System::Single Field_5_15; // 0x74
		::System::Boolean Field_5_16; // 0x78
		::System::Single Field_5_17; // 0x7C
		::System::Single Field_5_18; // 0x80

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
