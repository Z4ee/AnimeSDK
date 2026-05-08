#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/FocusCameraTargetActivePolicy.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigFocusCamera; }
namespace MoleMole::Config { class ConfigFocusCameraEntry; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGFOCUSCAMERA_CONFIGFOCUSCAMERA_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1241C440)
#define MOLEMOLE_CONFIG_CONFIGFOCUSCAMERA_CONFIGFOCUSCAMERA_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1241C450)
#define MOLEMOLE_CONFIG_CONFIGFOCUSCAMERA_CONFIGFOCUSCAMERA_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1241C630)
#define MOLEMOLE_CONFIG_CONFIGFOCUSCAMERA_CONFIGFOCUSCAMERA_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1241C7D0)
#define MOLEMOLE_CONFIG_CONFIGFOCUSCAMERA_CONFIGFOCUSCAMERA_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1241C790)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigFocusCamera_ConfigFocusCamera_UnityGeneratedFormatter_TypeDefinitionIndex = 49504;

	class ConfigFocusCamera_ConfigFocusCamera_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigFocusCamera*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigFocusCameraEntry*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigFocusCameraEntry*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigFocusCamera_ConfigFocusCamera_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40220);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Battle::FocusCameraTargetActivePolicy, ::MoleMole::Config::ConfigFocusCameraEntry*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Battle::FocusCameraTargetActivePolicy, ::MoleMole::Config::ConfigFocusCameraEntry*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigFocusCamera_ConfigFocusCamera_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40228);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFOCUSCAMERA_CONFIGFOCUSCAMERA_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFOCUSCAMERA_CONFIGFOCUSCAMERA_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFOCUSCAMERA_CONFIGFOCUSCAMERA_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigFocusCamera*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigFocusCamera*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFOCUSCAMERA_CONFIGFOCUSCAMERA_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigFocusCamera*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigFocusCamera*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFOCUSCAMERA_CONFIGFOCUSCAMERA_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
