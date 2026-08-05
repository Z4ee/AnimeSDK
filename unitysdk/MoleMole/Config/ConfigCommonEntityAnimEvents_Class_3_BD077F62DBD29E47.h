#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigCommonEntityAnimEvents; }
namespace MoleMole::Config { class ConfigEntityAnimEvent; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGCOMMONENTITYANIMEVENTS_CLASS_3_BD077F62DBD29E47_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x12EFCF30)
#define MOLEMOLE_CONFIG_CONFIGCOMMONENTITYANIMEVENTS_CLASS_3_BD077F62DBD29E47_READMEMBER_OFFSET UNITYSDK_OFFSET(0x12EFCF40)
#define MOLEMOLE_CONFIG_CONFIGCOMMONENTITYANIMEVENTS_CLASS_3_BD077F62DBD29E47_WRITE_OFFSET UNITYSDK_OFFSET(0x12EFD010)
#define MOLEMOLE_CONFIG_CONFIGCOMMONENTITYANIMEVENTS_CLASS_3_BD077F62DBD29E47__CCTOR_OFFSET UNITYSDK_OFFSET(0x12EFD100)
#define MOLEMOLE_CONFIG_CONFIGCOMMONENTITYANIMEVENTS_CLASS_3_BD077F62DBD29E47__CTOR_OFFSET UNITYSDK_OFFSET(0x12EFD0C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCommonEntityAnimEvents_Class_3_BD077F62DBD29E47_TypeDefinitionIndex = 49023;

	class ConfigCommonEntityAnimEvents_Class_3_BD077F62DBD29E47 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigCommonEntityAnimEvents*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAnimEvent*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigEntityAnimEvent*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCommonEntityAnimEvents_Class_3_BD077F62DBD29E47_TypeDefinitionIndex)->GetStaticField(0x4E660);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOMMONENTITYANIMEVENTS_CLASS_3_BD077F62DBD29E47__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOMMONENTITYANIMEVENTS_CLASS_3_BD077F62DBD29E47__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOMMONENTITYANIMEVENTS_CLASS_3_BD077F62DBD29E47_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigCommonEntityAnimEvents*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigCommonEntityAnimEvents*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOMMONENTITYANIMEVENTS_CLASS_3_BD077F62DBD29E47_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigCommonEntityAnimEvents*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCommonEntityAnimEvents*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOMMONENTITYANIMEVENTS_CLASS_3_BD077F62DBD29E47_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
