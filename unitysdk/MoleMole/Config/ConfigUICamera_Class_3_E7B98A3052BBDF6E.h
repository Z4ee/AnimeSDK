#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigPageCameraBase; }
namespace MoleMole::Config { class ConfigUICamera; }
namespace MoleMole::Config { class ConfigUICameraStretch; }
namespace MoleMole::Config { class UICameraSettingData; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGUICAMERA_CLASS_3_E7B98A3052BBDF6E_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19ACA050)
#define MOLEMOLE_CONFIG_CONFIGUICAMERA_CLASS_3_E7B98A3052BBDF6E_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19ACA060)
#define MOLEMOLE_CONFIG_CONFIGUICAMERA_CLASS_3_E7B98A3052BBDF6E_WRITE_OFFSET UNITYSDK_OFFSET(0x19ACA2B0)
#define MOLEMOLE_CONFIG_CONFIGUICAMERA_CLASS_3_E7B98A3052BBDF6E__CCTOR_OFFSET UNITYSDK_OFFSET(0x19ACA470)
#define MOLEMOLE_CONFIG_CONFIGUICAMERA_CLASS_3_E7B98A3052BBDF6E__CTOR_OFFSET UNITYSDK_OFFSET(0x19ACA430)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUICamera_Class_3_E7B98A3052BBDF6E_TypeDefinitionIndex = 65979;

	class ConfigUICamera_Class_3_E7B98A3052BBDF6E : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigUICamera*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigPageCameraBase*>*>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigPageCameraBase*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICamera_Class_3_E7B98A3052BBDF6E_TypeDefinitionIndex)->GetStaticField(0x51840);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::UICameraSettingData*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::UICameraSettingData*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICamera_Class_3_E7B98A3052BBDF6E_TypeDefinitionIndex)->GetStaticField(0x51848);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigUICameraStretch*>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigUICameraStretch*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICamera_Class_3_E7B98A3052BBDF6E_TypeDefinitionIndex)->GetStaticField(0x51850);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUICAMERA_CLASS_3_E7B98A3052BBDF6E__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUICAMERA_CLASS_3_E7B98A3052BBDF6E__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUICAMERA_CLASS_3_E7B98A3052BBDF6E_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigUICamera*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigUICamera*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUICAMERA_CLASS_3_E7B98A3052BBDF6E_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigUICamera*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUICamera*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUICAMERA_CLASS_3_E7B98A3052BBDF6E_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
