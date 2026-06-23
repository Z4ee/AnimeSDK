#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class BlackMaskFadeConfig; }
namespace MoleMole::Config { class ChessBoardCutSceneKeyConfig; }
namespace MoleMole::Config { class CutScenePerformConfig; }
namespace MoleMole::Config { class SceneEntityCutSceneConfig; }
namespace MoleMole::Config { class ScenePerformConfig; }
namespace MoleMole::Config { class ScenePerformConfig_ScenePerformItem; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_SCENEPERFORMCONFIG_SCENEPERFORMCONFIG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x161A00D0)
#define MOLEMOLE_CONFIG_SCENEPERFORMCONFIG_SCENEPERFORMCONFIG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x161A00E0)
#define MOLEMOLE_CONFIG_SCENEPERFORMCONFIG_SCENEPERFORMCONFIG_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x161A0590)
#define MOLEMOLE_CONFIG_SCENEPERFORMCONFIG_SCENEPERFORMCONFIG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x161A0890)
#define MOLEMOLE_CONFIG_SCENEPERFORMCONFIG_SCENEPERFORMCONFIG_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x161A0850)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ScenePerformConfig_ScenePerformConfig_UnityGeneratedFormatter_TypeDefinitionIndex = 68475;

	class ScenePerformConfig_ScenePerformConfig_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ScenePerformConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ScenePerformConfig_ScenePerformItem*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ScenePerformConfig_ScenePerformItem*>*>**)Il2CppClass::FromTypeDefinitionIndex(ScenePerformConfig_ScenePerformConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x37390);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::BlackMaskFadeConfig*>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::BlackMaskFadeConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ScenePerformConfig_ScenePerformConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x37398);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ChessBoardCutSceneKeyConfig*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ChessBoardCutSceneKeyConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ScenePerformConfig_ScenePerformConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x373A0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::CutScenePerformConfig*>*>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::CutScenePerformConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ScenePerformConfig_ScenePerformConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x373A8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::SceneEntityCutSceneConfig*>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::SceneEntityCutSceneConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ScenePerformConfig_ScenePerformConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x373B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEPERFORMCONFIG_SCENEPERFORMCONFIG_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEPERFORMCONFIG_SCENEPERFORMCONFIG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEPERFORMCONFIG_SCENEPERFORMCONFIG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ScenePerformConfig*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ScenePerformConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEPERFORMCONFIG_SCENEPERFORMCONFIG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ScenePerformConfig*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ScenePerformConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEPERFORMCONFIG_SCENEPERFORMCONFIG_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
