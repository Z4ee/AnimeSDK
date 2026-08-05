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

#define MOLEMOLE_CONFIG_SCENECHESSBOARDCUTSCENECONFIG_CLASS_3_992AACA9CAE81BEB_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1487B8A0)
#define MOLEMOLE_CONFIG_SCENECHESSBOARDCUTSCENECONFIG_CLASS_3_992AACA9CAE81BEB_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1487B8B0)
#define MOLEMOLE_CONFIG_SCENECHESSBOARDCUTSCENECONFIG_CLASS_3_992AACA9CAE81BEB_WRITE_OFFSET UNITYSDK_OFFSET(0x1487BEF0)
#define MOLEMOLE_CONFIG_SCENECHESSBOARDCUTSCENECONFIG_CLASS_3_992AACA9CAE81BEB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1487C2D0)
#define MOLEMOLE_CONFIG_SCENECHESSBOARDCUTSCENECONFIG_CLASS_3_992AACA9CAE81BEB__CTOR_OFFSET UNITYSDK_OFFSET(0x1487C290)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SceneChessboardCutSceneConfig_Class_3_992AACA9CAE81BEB_TypeDefinitionIndex = 51689;

	class SceneChessboardCutSceneConfig_Class_3_992AACA9CAE81BEB : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::SceneChessboardCutSceneConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::Il2CppArray<::MoleMole::Config::ScenePeformAnimatorParam*>*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::Il2CppArray<::MoleMole::Config::ScenePeformAnimatorParam*>*>**)Il2CppClass::FromTypeDefinitionIndex(SceneChessboardCutSceneConfig_Class_3_992AACA9CAE81BEB_TypeDefinitionIndex)->GetStaticField(0x424B0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(SceneChessboardCutSceneConfig_Class_3_992AACA9CAE81BEB_TypeDefinitionIndex)->GetStaticField(0x424B8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::SceneChessboardCutSceneConfig_BodySize>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::SceneChessboardCutSceneConfig_BodySize>**)Il2CppClass::FromTypeDefinitionIndex(SceneChessboardCutSceneConfig_Class_3_992AACA9CAE81BEB_TypeDefinitionIndex)->GetStaticField(0x424C0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::CutSceneEndMode>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::CutSceneEndMode>**)Il2CppClass::FromTypeDefinitionIndex(SceneChessboardCutSceneConfig_Class_3_992AACA9CAE81BEB_TypeDefinitionIndex)->GetStaticField(0x424C8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECHESSBOARDCUTSCENECONFIG_CLASS_3_992AACA9CAE81BEB__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECHESSBOARDCUTSCENECONFIG_CLASS_3_992AACA9CAE81BEB__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECHESSBOARDCUTSCENECONFIG_CLASS_3_992AACA9CAE81BEB_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::SceneChessboardCutSceneConfig*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::SceneChessboardCutSceneConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECHESSBOARDCUTSCENECONFIG_CLASS_3_992AACA9CAE81BEB_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::SceneChessboardCutSceneConfig*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::SceneChessboardCutSceneConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECHESSBOARDCUTSCENECONFIG_CLASS_3_992AACA9CAE81BEB_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
