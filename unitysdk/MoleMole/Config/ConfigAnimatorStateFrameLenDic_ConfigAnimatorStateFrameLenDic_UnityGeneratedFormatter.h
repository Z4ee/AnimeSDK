#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigAnimatorStateFrameLenDic; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MOLEMOLE_CONFIG_CONFIGANIMATORSTATEFRAMELENDIC_CONFIGANIMATORSTATEFRAMELENDIC_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1109E030)
#define MOLEMOLE_CONFIG_CONFIGANIMATORSTATEFRAMELENDIC_CONFIGANIMATORSTATEFRAMELENDIC_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1109E040)
#define MOLEMOLE_CONFIG_CONFIGANIMATORSTATEFRAMELENDIC_CONFIGANIMATORSTATEFRAMELENDIC_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1109E3A0)
#define MOLEMOLE_CONFIG_CONFIGANIMATORSTATEFRAMELENDIC_CONFIGANIMATORSTATEFRAMELENDIC_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1109E5F0)
#define MOLEMOLE_CONFIG_CONFIGANIMATORSTATEFRAMELENDIC_CONFIGANIMATORSTATEFRAMELENDIC_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1109E5B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAnimatorStateFrameLenDic_ConfigAnimatorStateFrameLenDic_UnityGeneratedFormatter_TypeDefinitionIndex = 61606;

	class ConfigAnimatorStateFrameLenDic_ConfigAnimatorStateFrameLenDic_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigAnimatorStateFrameLenDic*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::System::Int32>*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::System::Int32>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigAnimatorStateFrameLenDic_ConfigAnimatorStateFrameLenDic_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x48330);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigAnimatorStateFrameLenDic_ConfigAnimatorStateFrameLenDic_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x48338);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*>*>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigAnimatorStateFrameLenDic_ConfigAnimatorStateFrameLenDic_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x48340);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::MoleMole::Config::EntityType>*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::MoleMole::Config::EntityType>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigAnimatorStateFrameLenDic_ConfigAnimatorStateFrameLenDic_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x48348);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORSTATEFRAMELENDIC_CONFIGANIMATORSTATEFRAMELENDIC_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORSTATEFRAMELENDIC_CONFIGANIMATORSTATEFRAMELENDIC_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORSTATEFRAMELENDIC_CONFIGANIMATORSTATEFRAMELENDIC_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigAnimatorStateFrameLenDic*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigAnimatorStateFrameLenDic*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORSTATEFRAMELENDIC_CONFIGANIMATORSTATEFRAMELENDIC_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigAnimatorStateFrameLenDic*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAnimatorStateFrameLenDic*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORSTATEFRAMELENDIC_CONFIGANIMATORSTATEFRAMELENDIC_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
