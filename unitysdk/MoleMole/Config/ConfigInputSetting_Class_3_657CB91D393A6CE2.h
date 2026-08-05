#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ESettingPlatform.h"
#include "unitysdk/MoleMole/InputActionEventType.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"
#include "unitysdk/MoleMole/SpecialGamepadInputHintType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/InputSystem/Key.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/GamepadButton.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/MouseButton.h"

namespace MoleMole { class BaseInputActionEventConfig; }
namespace MoleMole { class SystemSettingEntryBase; }
namespace MoleMole::Config { class ConfigInputSetting; }
namespace MoleMole::Config { class InputActionTextIconConfig; }
namespace MoleMole::Config { class InputCodeSetting; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGINPUTSETTING_CLASS_3_657CB91D393A6CE2_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x16C43FC0)
#define MOLEMOLE_CONFIG_CONFIGINPUTSETTING_CLASS_3_657CB91D393A6CE2_READMEMBER_OFFSET UNITYSDK_OFFSET(0x16C43FD0)
#define MOLEMOLE_CONFIG_CONFIGINPUTSETTING_CLASS_3_657CB91D393A6CE2_WRITE_OFFSET UNITYSDK_OFFSET(0x16C45110)
#define MOLEMOLE_CONFIG_CONFIGINPUTSETTING_CLASS_3_657CB91D393A6CE2__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C45B10)
#define MOLEMOLE_CONFIG_CONFIGINPUTSETTING_CLASS_3_657CB91D393A6CE2__CTOR_OFFSET UNITYSDK_OFFSET(0x16C45AD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigInputSetting_Class_3_657CB91D393A6CE2_TypeDefinitionIndex = 83517;

	class ConfigInputSetting_Class_3_657CB91D393A6CE2 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigInputSetting*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::LowLevel::GamepadButton, ::System::String*>*>** StaticGet_Field_3_8()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::LowLevel::GamepadButton, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigInputSetting_Class_3_657CB91D393A6CE2_TypeDefinitionIndex)->GetStaticField(0x48890);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Key, ::System::String*>*>** StaticGet_Field_3_11()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::Key, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigInputSetting_Class_3_657CB91D393A6CE2_TypeDefinitionIndex)->GetStaticField(0x48898);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::LogicButtonInputType, ::MoleMole::Config::InputCodeSetting*>*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::LogicButtonInputType, ::MoleMole::Config::InputCodeSetting*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigInputSetting_Class_3_657CB91D393A6CE2_TypeDefinitionIndex)->GetStaticField(0x488A0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigInputSetting_Class_3_657CB91D393A6CE2_TypeDefinitionIndex)->GetStaticField(0x488A8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::LowLevel::MouseButton, ::System::String*>*>** StaticGet_Field_3_10()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::UnityEngine::InputSystem::LowLevel::MouseButton, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigInputSetting_Class_3_657CB91D393A6CE2_TypeDefinitionIndex)->GetStaticField(0x488B0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::SpecialGamepadInputHintType, ::System::String*>*>** StaticGet_Field_3_9()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::SpecialGamepadInputHintType, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigInputSetting_Class_3_657CB91D393A6CE2_TypeDefinitionIndex)->GetStaticField(0x488B8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::MoleMole::LogicButtonInputType>*>*>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::MoleMole::LogicButtonInputType>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigInputSetting_Class_3_657CB91D393A6CE2_TypeDefinitionIndex)->GetStaticField(0x488C0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::InputActionTextIconConfig*>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::InputActionTextIconConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigInputSetting_Class_3_657CB91D393A6CE2_TypeDefinitionIndex)->GetStaticField(0x488C8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::InputActionEventType, ::MoleMole::BaseInputActionEventConfig*>*>** StaticGet_Field_3_15()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::InputActionEventType, ::MoleMole::BaseInputActionEventConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigInputSetting_Class_3_657CB91D393A6CE2_TypeDefinitionIndex)->GetStaticField(0x488D0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::ESettingPlatform, ::System::Collections::Generic::List_1<::MoleMole::SystemSettingEntryBase*>*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::ESettingPlatform, ::System::Collections::Generic::List_1<::MoleMole::SystemSettingEntryBase*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigInputSetting_Class_3_657CB91D393A6CE2_TypeDefinitionIndex)->GetStaticField(0x488D8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINPUTSETTING_CLASS_3_657CB91D393A6CE2__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINPUTSETTING_CLASS_3_657CB91D393A6CE2__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINPUTSETTING_CLASS_3_657CB91D393A6CE2_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigInputSetting*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigInputSetting*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINPUTSETTING_CLASS_3_657CB91D393A6CE2_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigInputSetting*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigInputSetting*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINPUTSETTING_CLASS_3_657CB91D393A6CE2_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
