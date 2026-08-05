#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCurveInterpolation.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSoundAction_SetGlobalRTPC; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETGLOBALRTPC_CLASS_3_7D4AB2E3F1E92874_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B559150)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETGLOBALRTPC_CLASS_3_7D4AB2E3F1E92874_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B559160)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETGLOBALRTPC_CLASS_3_7D4AB2E3F1E92874_WRITE_OFFSET UNITYSDK_OFFSET(0x1B5595B0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETGLOBALRTPC_CLASS_3_7D4AB2E3F1E92874__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B559880)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETGLOBALRTPC_CLASS_3_7D4AB2E3F1E92874__CTOR_OFFSET UNITYSDK_OFFSET(0x1B559840)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_SetGlobalRTPC_Class_3_7D4AB2E3F1E92874_TypeDefinitionIndex = 67688;

	class ConfigSoundAction_SetGlobalRTPC_Class_3_7D4AB2E3F1E92874 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigSoundAction_SetGlobalRTPC*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::AkCurveInterpolation>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::AkCurveInterpolation>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_SetGlobalRTPC_Class_3_7D4AB2E3F1E92874_TypeDefinitionIndex)->GetStaticField(0x4D430);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_SetGlobalRTPC_Class_3_7D4AB2E3F1E92874_TypeDefinitionIndex)->GetStaticField(0x4D438);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_SetGlobalRTPC_Class_3_7D4AB2E3F1E92874_TypeDefinitionIndex)->GetStaticField(0x4D440);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_SetGlobalRTPC_Class_3_7D4AB2E3F1E92874_TypeDefinitionIndex)->GetStaticField(0x4D448);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_SetGlobalRTPC_Class_3_7D4AB2E3F1E92874_TypeDefinitionIndex)->GetStaticField(0x4D450);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETGLOBALRTPC_CLASS_3_7D4AB2E3F1E92874__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETGLOBALRTPC_CLASS_3_7D4AB2E3F1E92874__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETGLOBALRTPC_CLASS_3_7D4AB2E3F1E92874_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSoundAction_SetGlobalRTPC*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_SetGlobalRTPC*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETGLOBALRTPC_CLASS_3_7D4AB2E3F1E92874_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigSoundAction_SetGlobalRTPC*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_SetGlobalRTPC*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETGLOBALRTPC_CLASS_3_7D4AB2E3F1E92874_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
