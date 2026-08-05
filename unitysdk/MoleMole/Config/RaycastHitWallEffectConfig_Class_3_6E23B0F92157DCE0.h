#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/HitWallEffectNormalEnum.h"
#include "unitysdk/MoleMole/Config/RayByAxis.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class RaycastHitWallEffectConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_RAYCASTHITWALLEFFECTCONFIG_CLASS_3_6E23B0F92157DCE0_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1626AF30)
#define MOLEMOLE_CONFIG_RAYCASTHITWALLEFFECTCONFIG_CLASS_3_6E23B0F92157DCE0_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1626AF40)
#define MOLEMOLE_CONFIG_RAYCASTHITWALLEFFECTCONFIG_CLASS_3_6E23B0F92157DCE0_WRITE_OFFSET UNITYSDK_OFFSET(0x1626B7B0)
#define MOLEMOLE_CONFIG_RAYCASTHITWALLEFFECTCONFIG_CLASS_3_6E23B0F92157DCE0__CCTOR_OFFSET UNITYSDK_OFFSET(0x1626BD00)
#define MOLEMOLE_CONFIG_RAYCASTHITWALLEFFECTCONFIG_CLASS_3_6E23B0F92157DCE0__CTOR_OFFSET UNITYSDK_OFFSET(0x1626BCC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int RaycastHitWallEffectConfig_Class_3_6E23B0F92157DCE0_TypeDefinitionIndex = 46783;

	class RaycastHitWallEffectConfig_Class_3_6E23B0F92157DCE0 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::RaycastHitWallEffectConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::HitWallEffectNormalEnum>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::HitWallEffectNormalEnum>**)Il2CppClass::FromTypeDefinitionIndex(RaycastHitWallEffectConfig_Class_3_6E23B0F92157DCE0_TypeDefinitionIndex)->GetStaticField(0x32480);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector3>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(RaycastHitWallEffectConfig_Class_3_6E23B0F92157DCE0_TypeDefinitionIndex)->GetStaticField(0x32488);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RaycastHitWallEffectConfig_Class_3_6E23B0F92157DCE0_TypeDefinitionIndex)->GetStaticField(0x32490);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::RayByAxis>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::RayByAxis>**)Il2CppClass::FromTypeDefinitionIndex(RaycastHitWallEffectConfig_Class_3_6E23B0F92157DCE0_TypeDefinitionIndex)->GetStaticField(0x32498);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(RaycastHitWallEffectConfig_Class_3_6E23B0F92157DCE0_TypeDefinitionIndex)->GetStaticField(0x324A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RAYCASTHITWALLEFFECTCONFIG_CLASS_3_6E23B0F92157DCE0__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RAYCASTHITWALLEFFECTCONFIG_CLASS_3_6E23B0F92157DCE0__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RAYCASTHITWALLEFFECTCONFIG_CLASS_3_6E23B0F92157DCE0_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::RaycastHitWallEffectConfig*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::RaycastHitWallEffectConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RAYCASTHITWALLEFFECTCONFIG_CLASS_3_6E23B0F92157DCE0_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::RaycastHitWallEffectConfig*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::RaycastHitWallEffectConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RAYCASTHITWALLEFFECTCONFIG_CLASS_3_6E23B0F92157DCE0_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
