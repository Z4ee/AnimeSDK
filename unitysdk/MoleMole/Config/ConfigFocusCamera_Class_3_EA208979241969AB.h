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

#define MOLEMOLE_CONFIG_CONFIGFOCUSCAMERA_CLASS_3_EA208979241969AB_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x177DD7B0)
#define MOLEMOLE_CONFIG_CONFIGFOCUSCAMERA_CLASS_3_EA208979241969AB_READMEMBER_OFFSET UNITYSDK_OFFSET(0x177DD7C0)
#define MOLEMOLE_CONFIG_CONFIGFOCUSCAMERA_CLASS_3_EA208979241969AB_WRITE_OFFSET UNITYSDK_OFFSET(0x177DD950)
#define MOLEMOLE_CONFIG_CONFIGFOCUSCAMERA_CLASS_3_EA208979241969AB__CCTOR_OFFSET UNITYSDK_OFFSET(0x177DDAB0)
#define MOLEMOLE_CONFIG_CONFIGFOCUSCAMERA_CLASS_3_EA208979241969AB__CTOR_OFFSET UNITYSDK_OFFSET(0x177DDA70)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigFocusCamera_Class_3_EA208979241969AB_TypeDefinitionIndex = 83008;

	class ConfigFocusCamera_Class_3_EA208979241969AB : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigFocusCamera*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigFocusCameraEntry*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigFocusCameraEntry*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigFocusCamera_Class_3_EA208979241969AB_TypeDefinitionIndex)->GetStaticField(0x44B90);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Battle::FocusCameraTargetActivePolicy, ::MoleMole::Config::ConfigFocusCameraEntry*>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Battle::FocusCameraTargetActivePolicy, ::MoleMole::Config::ConfigFocusCameraEntry*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigFocusCamera_Class_3_EA208979241969AB_TypeDefinitionIndex)->GetStaticField(0x44B98);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFOCUSCAMERA_CLASS_3_EA208979241969AB__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFOCUSCAMERA_CLASS_3_EA208979241969AB__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFOCUSCAMERA_CLASS_3_EA208979241969AB_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigFocusCamera*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigFocusCamera*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFOCUSCAMERA_CLASS_3_EA208979241969AB_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigFocusCamera*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigFocusCamera*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFOCUSCAMERA_CLASS_3_EA208979241969AB_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
