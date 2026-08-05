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

#define MOLEMOLE_CONFIG_SCENEAVATARCUTSCENECONFIG_CLASS_3_AAB731A999B2E773_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A4BE430)
#define MOLEMOLE_CONFIG_SCENEAVATARCUTSCENECONFIG_CLASS_3_AAB731A999B2E773_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A4BE440)
#define MOLEMOLE_CONFIG_SCENEAVATARCUTSCENECONFIG_CLASS_3_AAB731A999B2E773_WRITE_OFFSET UNITYSDK_OFFSET(0x1A4BE690)
#define MOLEMOLE_CONFIG_SCENEAVATARCUTSCENECONFIG_CLASS_3_AAB731A999B2E773__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A4BE850)
#define MOLEMOLE_CONFIG_SCENEAVATARCUTSCENECONFIG_CLASS_3_AAB731A999B2E773__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4BE810)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SceneAvatarCutSceneConfig_Class_3_AAB731A999B2E773_TypeDefinitionIndex = 62496;

	class SceneAvatarCutSceneConfig_Class_3_AAB731A999B2E773 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::SceneAvatarCutSceneConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::SceneEntityCutSceneConfig*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::SceneEntityCutSceneConfig*>**)Il2CppClass::FromTypeDefinitionIndex(SceneAvatarCutSceneConfig_Class_3_AAB731A999B2E773_TypeDefinitionIndex)->GetStaticField(0x3C9A0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::SceneChessboardCutSceneConfig*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::SceneChessboardCutSceneConfig*>**)Il2CppClass::FromTypeDefinitionIndex(SceneAvatarCutSceneConfig_Class_3_AAB731A999B2E773_TypeDefinitionIndex)->GetStaticField(0x3C9A8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEAVATARCUTSCENECONFIG_CLASS_3_AAB731A999B2E773__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEAVATARCUTSCENECONFIG_CLASS_3_AAB731A999B2E773__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEAVATARCUTSCENECONFIG_CLASS_3_AAB731A999B2E773_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::SceneAvatarCutSceneConfig*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::SceneAvatarCutSceneConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEAVATARCUTSCENECONFIG_CLASS_3_AAB731A999B2E773_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::SceneAvatarCutSceneConfig*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::SceneAvatarCutSceneConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEAVATARCUTSCENECONFIG_CLASS_3_AAB731A999B2E773_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
