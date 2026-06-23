#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CutSceneEndMode.h"
#include "unitysdk/MoleMole/Config/SceneChessboardCutSceneConfig_BodySize.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class SceneChessboardCutSceneConfig; }
namespace MoleMole::Config { class ScenePeformAnimatorParam; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_CONFIG_SCENECHESSBOARDCUTSCENECONFIG_SCENECHESSBOARDCUTSCENECONFIG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x127276D0)
#define MOLEMOLE_CONFIG_SCENECHESSBOARDCUTSCENECONFIG_SCENECHESSBOARDCUTSCENECONFIG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x127276E0)
#define MOLEMOLE_CONFIG_SCENECHESSBOARDCUTSCENECONFIG_SCENECHESSBOARDCUTSCENECONFIG_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x12727D80)
#define MOLEMOLE_CONFIG_SCENECHESSBOARDCUTSCENECONFIG_SCENECHESSBOARDCUTSCENECONFIG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x12728190)
#define MOLEMOLE_CONFIG_SCENECHESSBOARDCUTSCENECONFIG_SCENECHESSBOARDCUTSCENECONFIG_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x12728150)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SceneChessboardCutSceneConfig_SceneChessboardCutSceneConfig_UnityGeneratedFormatter_TypeDefinitionIndex = 45758;

	class SceneChessboardCutSceneConfig_SceneChessboardCutSceneConfig_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::SceneChessboardCutSceneConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::CutSceneEndMode>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::CutSceneEndMode>**)Il2CppClass::FromTypeDefinitionIndex(SceneChessboardCutSceneConfig_SceneChessboardCutSceneConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4CB80);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(SceneChessboardCutSceneConfig_SceneChessboardCutSceneConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4CB88);
		}
		static ::Sirenix::Serialization::Serializer_1<::Il2CppArray<::MoleMole::Config::ScenePeformAnimatorParam*>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::Il2CppArray<::MoleMole::Config::ScenePeformAnimatorParam*>*>**)Il2CppClass::FromTypeDefinitionIndex(SceneChessboardCutSceneConfig_SceneChessboardCutSceneConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4CB90);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::SceneChessboardCutSceneConfig_BodySize>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::SceneChessboardCutSceneConfig_BodySize>**)Il2CppClass::FromTypeDefinitionIndex(SceneChessboardCutSceneConfig_SceneChessboardCutSceneConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4CB98);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECHESSBOARDCUTSCENECONFIG_SCENECHESSBOARDCUTSCENECONFIG_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECHESSBOARDCUTSCENECONFIG_SCENECHESSBOARDCUTSCENECONFIG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECHESSBOARDCUTSCENECONFIG_SCENECHESSBOARDCUTSCENECONFIG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::SceneChessboardCutSceneConfig*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::SceneChessboardCutSceneConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECHESSBOARDCUTSCENECONFIG_SCENECHESSBOARDCUTSCENECONFIG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::SceneChessboardCutSceneConfig*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::SceneChessboardCutSceneConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECHESSBOARDCUTSCENECONFIG_SCENECHESSBOARDCUTSCENECONFIG_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
