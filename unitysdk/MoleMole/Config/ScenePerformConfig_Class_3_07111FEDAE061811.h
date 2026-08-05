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

#define MOLEMOLE_CONFIG_SCENEPERFORMCONFIG_CLASS_3_07111FEDAE061811_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B926E30)
#define MOLEMOLE_CONFIG_SCENEPERFORMCONFIG_CLASS_3_07111FEDAE061811_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B926E40)
#define MOLEMOLE_CONFIG_SCENEPERFORMCONFIG_CLASS_3_07111FEDAE061811_WRITE_OFFSET UNITYSDK_OFFSET(0x1B9272A0)
#define MOLEMOLE_CONFIG_SCENEPERFORMCONFIG_CLASS_3_07111FEDAE061811__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B927570)
#define MOLEMOLE_CONFIG_SCENEPERFORMCONFIG_CLASS_3_07111FEDAE061811__CTOR_OFFSET UNITYSDK_OFFSET(0x1B927530)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ScenePerformConfig_Class_3_07111FEDAE061811_TypeDefinitionIndex = 85776;

	class ScenePerformConfig_Class_3_07111FEDAE061811 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ScenePerformConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ScenePerformConfig_ScenePerformItem*>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ScenePerformConfig_ScenePerformItem*>*>**)Il2CppClass::FromTypeDefinitionIndex(ScenePerformConfig_Class_3_07111FEDAE061811_TypeDefinitionIndex)->GetStaticField(0x39D80);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::SceneEntityCutSceneConfig*>*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::SceneEntityCutSceneConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ScenePerformConfig_Class_3_07111FEDAE061811_TypeDefinitionIndex)->GetStaticField(0x39D88);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::CutScenePerformConfig*>*>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::CutScenePerformConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ScenePerformConfig_Class_3_07111FEDAE061811_TypeDefinitionIndex)->GetStaticField(0x39D90);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::BlackMaskFadeConfig*>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::BlackMaskFadeConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ScenePerformConfig_Class_3_07111FEDAE061811_TypeDefinitionIndex)->GetStaticField(0x39D98);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ChessBoardCutSceneKeyConfig*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ChessBoardCutSceneKeyConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ScenePerformConfig_Class_3_07111FEDAE061811_TypeDefinitionIndex)->GetStaticField(0x39DA0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEPERFORMCONFIG_CLASS_3_07111FEDAE061811__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEPERFORMCONFIG_CLASS_3_07111FEDAE061811__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEPERFORMCONFIG_CLASS_3_07111FEDAE061811_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ScenePerformConfig*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ScenePerformConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEPERFORMCONFIG_CLASS_3_07111FEDAE061811_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ScenePerformConfig*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ScenePerformConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENEPERFORMCONFIG_CLASS_3_07111FEDAE061811_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
