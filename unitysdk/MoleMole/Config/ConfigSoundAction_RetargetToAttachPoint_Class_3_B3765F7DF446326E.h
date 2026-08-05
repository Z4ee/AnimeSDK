#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSoundActionGeneral; }
namespace MoleMole::Config { class ConfigSoundAction_RetargetToAttachPoint; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RETARGETTOATTACHPOINT_CLASS_3_B3765F7DF446326E_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A4B6FC0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RETARGETTOATTACHPOINT_CLASS_3_B3765F7DF446326E_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A4B6FD0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RETARGETTOATTACHPOINT_CLASS_3_B3765F7DF446326E_WRITE_OFFSET UNITYSDK_OFFSET(0x1A4B7420)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RETARGETTOATTACHPOINT_CLASS_3_B3765F7DF446326E__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A4B76F0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RETARGETTOATTACHPOINT_CLASS_3_B3765F7DF446326E__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4B76B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_RetargetToAttachPoint_Class_3_B3765F7DF446326E_TypeDefinitionIndex = 58009;

	class ConfigSoundAction_RetargetToAttachPoint_Class_3_B3765F7DF446326E : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigSoundAction_RetargetToAttachPoint*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_RetargetToAttachPoint_Class_3_B3765F7DF446326E_TypeDefinitionIndex)->GetStaticField(0x3C910);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_RetargetToAttachPoint_Class_3_B3765F7DF446326E_TypeDefinitionIndex)->GetStaticField(0x3C918);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionGeneral*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionGeneral*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_RetargetToAttachPoint_Class_3_B3765F7DF446326E_TypeDefinitionIndex)->GetStaticField(0x3C920);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RETARGETTOATTACHPOINT_CLASS_3_B3765F7DF446326E__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RETARGETTOATTACHPOINT_CLASS_3_B3765F7DF446326E__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RETARGETTOATTACHPOINT_CLASS_3_B3765F7DF446326E_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSoundAction_RetargetToAttachPoint*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_RetargetToAttachPoint*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RETARGETTOATTACHPOINT_CLASS_3_B3765F7DF446326E_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigSoundAction_RetargetToAttachPoint*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_RetargetToAttachPoint*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RETARGETTOATTACHPOINT_CLASS_3_B3765F7DF446326E_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
