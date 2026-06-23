#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CutSceneEndMode.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class SceneEntityCutSceneConfig; }
namespace MoleMole::Config { class ScenePeformAnimatorParam; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_SCENEENTITYCUTSCENECONFIG_SCENEENTITYCUTSCENECONFIG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x18F41B60)
#define MOLEMOLE_CONFIG_SCENEENTITYCUTSCENECONFIG_SCENEENTITYCUTSCENECONFIG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x18F41B70)
#define MOLEMOLE_CONFIG_SCENEENTITYCUTSCENECONFIG_SCENEENTITYCUTSCENECONFIG_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x18F42160)
#define MOLEMOLE_CONFIG_SCENEENTITYCUTSCENECONFIG_SCENEENTITYCUTSCENECONFIG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18F42510)
#define MOLEMOLE_CONFIG_SCENEENTITYCUTSCENECONFIG_SCENEENTITYCUTSCENECONFIG_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x18F424D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SceneEntityCutSceneConfig_SceneEntityCutSceneConfig_UnityGeneratedFormatter_TypeDefinitionIndex = 47900;

	class SceneEntityCutSceneConfig_SceneEntityCutSceneConfig_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::SceneEntityCutSceneConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::Il2CppArray<::MoleMole::Config::ScenePeformAnimatorParam*>*>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::Il2CppArray<::MoleMole::Config::ScenePeformAnimatorParam*>*>**)Il2CppClass::FromTypeDefinitionIndex(SceneEntityCutSceneConfig_SceneEntityCutSceneConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x30440);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::CutSceneEndMode>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::CutSceneEndMode>**)Il2CppClass::FromTypeDefinitionIndex(SceneEntityCutSceneConfig_SceneEntityCutSceneConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x30448);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(SceneEntityCutSceneConfig_SceneEntityCutSceneConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x30450);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SceneEntityCutSceneConfig_SceneEntityCutSceneConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x30458);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(SceneEntityCutSceneConfig_SceneEntityCutSceneConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x30460);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEENTITYCUTSCENECONFIG_SCENEENTITYCUTSCENECONFIG_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEENTITYCUTSCENECONFIG_SCENEENTITYCUTSCENECONFIG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEENTITYCUTSCENECONFIG_SCENEENTITYCUTSCENECONFIG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::SceneEntityCutSceneConfig*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::SceneEntityCutSceneConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEENTITYCUTSCENECONFIG_SCENEENTITYCUTSCENECONFIG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::SceneEntityCutSceneConfig*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::SceneEntityCutSceneConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEENTITYCUTSCENECONFIG_SCENEENTITYCUTSCENECONFIG_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
