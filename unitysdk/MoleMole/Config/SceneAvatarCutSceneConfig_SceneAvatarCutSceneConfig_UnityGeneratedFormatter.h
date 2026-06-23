#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class SceneAvatarCutSceneConfig; }
namespace MoleMole::Config { class SceneChessboardCutSceneConfig; }
namespace MoleMole::Config { class SceneEntityCutSceneConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_CONFIG_SCENEAVATARCUTSCENECONFIG_SCENEAVATARCUTSCENECONFIG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19FFC3D0)
#define MOLEMOLE_CONFIG_SCENEAVATARCUTSCENECONFIG_SCENEAVATARCUTSCENECONFIG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19FFC3E0)
#define MOLEMOLE_CONFIG_SCENEAVATARCUTSCENECONFIG_SCENEAVATARCUTSCENECONFIG_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x19FFC680)
#define MOLEMOLE_CONFIG_SCENEAVATARCUTSCENECONFIG_SCENEAVATARCUTSCENECONFIG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19FFC870)
#define MOLEMOLE_CONFIG_SCENEAVATARCUTSCENECONFIG_SCENEAVATARCUTSCENECONFIG_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x19FFC830)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SceneAvatarCutSceneConfig_SceneAvatarCutSceneConfig_UnityGeneratedFormatter_TypeDefinitionIndex = 83007;

	class SceneAvatarCutSceneConfig_SceneAvatarCutSceneConfig_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::SceneAvatarCutSceneConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::SceneChessboardCutSceneConfig*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::SceneChessboardCutSceneConfig*>**)Il2CppClass::FromTypeDefinitionIndex(SceneAvatarCutSceneConfig_SceneAvatarCutSceneConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4BD30);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::SceneEntityCutSceneConfig*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::SceneEntityCutSceneConfig*>**)Il2CppClass::FromTypeDefinitionIndex(SceneAvatarCutSceneConfig_SceneAvatarCutSceneConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4BD38);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEAVATARCUTSCENECONFIG_SCENEAVATARCUTSCENECONFIG_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEAVATARCUTSCENECONFIG_SCENEAVATARCUTSCENECONFIG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEAVATARCUTSCENECONFIG_SCENEAVATARCUTSCENECONFIG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::SceneAvatarCutSceneConfig*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::SceneAvatarCutSceneConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEAVATARCUTSCENECONFIG_SCENEAVATARCUTSCENECONFIG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::SceneAvatarCutSceneConfig*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::SceneAvatarCutSceneConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEAVATARCUTSCENECONFIG_SCENEAVATARCUTSCENECONFIG_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
