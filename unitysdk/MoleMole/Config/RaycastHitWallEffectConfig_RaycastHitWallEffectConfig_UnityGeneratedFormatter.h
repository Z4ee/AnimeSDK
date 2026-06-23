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

#define MOLEMOLE_CONFIG_RAYCASTHITWALLEFFECTCONFIG_RAYCASTHITWALLEFFECTCONFIG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A075200)
#define MOLEMOLE_CONFIG_RAYCASTHITWALLEFFECTCONFIG_RAYCASTHITWALLEFFECTCONFIG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A075210)
#define MOLEMOLE_CONFIG_RAYCASTHITWALLEFFECTCONFIG_RAYCASTHITWALLEFFECTCONFIG_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1A075AF0)
#define MOLEMOLE_CONFIG_RAYCASTHITWALLEFFECTCONFIG_RAYCASTHITWALLEFFECTCONFIG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A076070)
#define MOLEMOLE_CONFIG_RAYCASTHITWALLEFFECTCONFIG_RAYCASTHITWALLEFFECTCONFIG_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A076030)

namespace MoleMole::Config
{
	inline static constexpr unsigned int RaycastHitWallEffectConfig_RaycastHitWallEffectConfig_UnityGeneratedFormatter_TypeDefinitionIndex = 57766;

	class RaycastHitWallEffectConfig_RaycastHitWallEffectConfig_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::RaycastHitWallEffectConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RaycastHitWallEffectConfig_RaycastHitWallEffectConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x49BF0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(RaycastHitWallEffectConfig_RaycastHitWallEffectConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x49BF8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::RayByAxis>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::RayByAxis>**)Il2CppClass::FromTypeDefinitionIndex(RaycastHitWallEffectConfig_RaycastHitWallEffectConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x49C00);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::HitWallEffectNormalEnum>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::HitWallEffectNormalEnum>**)Il2CppClass::FromTypeDefinitionIndex(RaycastHitWallEffectConfig_RaycastHitWallEffectConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x49C08);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector3>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(RaycastHitWallEffectConfig_RaycastHitWallEffectConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x49C10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RAYCASTHITWALLEFFECTCONFIG_RAYCASTHITWALLEFFECTCONFIG_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RAYCASTHITWALLEFFECTCONFIG_RAYCASTHITWALLEFFECTCONFIG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RAYCASTHITWALLEFFECTCONFIG_RAYCASTHITWALLEFFECTCONFIG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::RaycastHitWallEffectConfig*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::RaycastHitWallEffectConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RAYCASTHITWALLEFFECTCONFIG_RAYCASTHITWALLEFFECTCONFIG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::RaycastHitWallEffectConfig*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::RaycastHitWallEffectConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RAYCASTHITWALLEFFECTCONFIG_RAYCASTHITWALLEFFECTCONFIG_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
