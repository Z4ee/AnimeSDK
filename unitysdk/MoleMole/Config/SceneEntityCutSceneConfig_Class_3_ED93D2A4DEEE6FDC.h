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

#define MOLEMOLE_CONFIG_SCENEENTITYCUTSCENECONFIG_CLASS_3_ED93D2A4DEEE6FDC_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A945C30)
#define MOLEMOLE_CONFIG_SCENEENTITYCUTSCENECONFIG_CLASS_3_ED93D2A4DEEE6FDC_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A945C40)
#define MOLEMOLE_CONFIG_SCENEENTITYCUTSCENECONFIG_CLASS_3_ED93D2A4DEEE6FDC_WRITE_OFFSET UNITYSDK_OFFSET(0x1A9461D0)
#define MOLEMOLE_CONFIG_SCENEENTITYCUTSCENECONFIG_CLASS_3_ED93D2A4DEEE6FDC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A946550)
#define MOLEMOLE_CONFIG_SCENEENTITYCUTSCENECONFIG_CLASS_3_ED93D2A4DEEE6FDC__CTOR_OFFSET UNITYSDK_OFFSET(0x1A946510)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SceneEntityCutSceneConfig_Class_3_ED93D2A4DEEE6FDC_TypeDefinitionIndex = 87151;

	class SceneEntityCutSceneConfig_Class_3_ED93D2A4DEEE6FDC : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::SceneEntityCutSceneConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::Il2CppArray<::MoleMole::Config::ScenePeformAnimatorParam*>*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::Il2CppArray<::MoleMole::Config::ScenePeformAnimatorParam*>*>**)Il2CppClass::FromTypeDefinitionIndex(SceneEntityCutSceneConfig_Class_3_ED93D2A4DEEE6FDC_TypeDefinitionIndex)->GetStaticField(0x365D0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(SceneEntityCutSceneConfig_Class_3_ED93D2A4DEEE6FDC_TypeDefinitionIndex)->GetStaticField(0x365D8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(SceneEntityCutSceneConfig_Class_3_ED93D2A4DEEE6FDC_TypeDefinitionIndex)->GetStaticField(0x365E0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::CutSceneEndMode>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::CutSceneEndMode>**)Il2CppClass::FromTypeDefinitionIndex(SceneEntityCutSceneConfig_Class_3_ED93D2A4DEEE6FDC_TypeDefinitionIndex)->GetStaticField(0x365E8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SceneEntityCutSceneConfig_Class_3_ED93D2A4DEEE6FDC_TypeDefinitionIndex)->GetStaticField(0x365F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEENTITYCUTSCENECONFIG_CLASS_3_ED93D2A4DEEE6FDC__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEENTITYCUTSCENECONFIG_CLASS_3_ED93D2A4DEEE6FDC__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEENTITYCUTSCENECONFIG_CLASS_3_ED93D2A4DEEE6FDC_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::SceneEntityCutSceneConfig*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::SceneEntityCutSceneConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEENTITYCUTSCENECONFIG_CLASS_3_ED93D2A4DEEE6FDC_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::SceneEntityCutSceneConfig*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::SceneEntityCutSceneConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEENTITYCUTSCENECONFIG_CLASS_3_ED93D2A4DEEE6FDC_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
