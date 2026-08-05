#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigRealtimeQTE; }
namespace MoleMole::Config { class RealtimeQTEStyleEntryBase; }
namespace MoleMole::Config { class RealtimeQTETaskEntryBase; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGREALTIMEQTE_CLASS_3_C256AC5B51040A2C_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x16C508E0)
#define MOLEMOLE_CONFIG_CONFIGREALTIMEQTE_CLASS_3_C256AC5B51040A2C_READMEMBER_OFFSET UNITYSDK_OFFSET(0x16C508F0)
#define MOLEMOLE_CONFIG_CONFIGREALTIMEQTE_CLASS_3_C256AC5B51040A2C_WRITE_OFFSET UNITYSDK_OFFSET(0x16C50A80)
#define MOLEMOLE_CONFIG_CONFIGREALTIMEQTE_CLASS_3_C256AC5B51040A2C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C50BE0)
#define MOLEMOLE_CONFIG_CONFIGREALTIMEQTE_CLASS_3_C256AC5B51040A2C__CTOR_OFFSET UNITYSDK_OFFSET(0x16C50BA0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigRealtimeQTE_Class_3_C256AC5B51040A2C_TypeDefinitionIndex = 60213;

	class ConfigRealtimeQTE_Class_3_C256AC5B51040A2C : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigRealtimeQTE*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::RealtimeQTEStyleEntryBase*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::RealtimeQTEStyleEntryBase*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigRealtimeQTE_Class_3_C256AC5B51040A2C_TypeDefinitionIndex)->GetStaticField(0x488F0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::RealtimeQTETaskEntryBase*>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::RealtimeQTETaskEntryBase*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigRealtimeQTE_Class_3_C256AC5B51040A2C_TypeDefinitionIndex)->GetStaticField(0x488F8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGREALTIMEQTE_CLASS_3_C256AC5B51040A2C__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGREALTIMEQTE_CLASS_3_C256AC5B51040A2C__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGREALTIMEQTE_CLASS_3_C256AC5B51040A2C_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigRealtimeQTE*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigRealtimeQTE*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGREALTIMEQTE_CLASS_3_C256AC5B51040A2C_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigRealtimeQTE*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigRealtimeQTE*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGREALTIMEQTE_CLASS_3_C256AC5B51040A2C_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
