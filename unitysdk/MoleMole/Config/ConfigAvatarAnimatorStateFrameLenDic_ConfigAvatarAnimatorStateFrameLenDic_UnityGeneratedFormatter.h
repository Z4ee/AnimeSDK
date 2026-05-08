#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigAvatarAnimatorStateFrameLenDic; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGAVATARANIMATORSTATEFRAMELENDIC_CONFIGAVATARANIMATORSTATEFRAMELENDIC_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x12415DE0)
#define MOLEMOLE_CONFIG_CONFIGAVATARANIMATORSTATEFRAMELENDIC_CONFIGAVATARANIMATORSTATEFRAMELENDIC_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x12415DF0)
#define MOLEMOLE_CONFIG_CONFIGAVATARANIMATORSTATEFRAMELENDIC_CONFIGAVATARANIMATORSTATEFRAMELENDIC_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x12415FD0)
#define MOLEMOLE_CONFIG_CONFIGAVATARANIMATORSTATEFRAMELENDIC_CONFIGAVATARANIMATORSTATEFRAMELENDIC_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x12416170)
#define MOLEMOLE_CONFIG_CONFIGAVATARANIMATORSTATEFRAMELENDIC_CONFIGAVATARANIMATORSTATEFRAMELENDIC_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x12416130)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAvatarAnimatorStateFrameLenDic_ConfigAvatarAnimatorStateFrameLenDic_UnityGeneratedFormatter_TypeDefinitionIndex = 77361;

	class ConfigAvatarAnimatorStateFrameLenDic_ConfigAvatarAnimatorStateFrameLenDic_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigAvatarAnimatorStateFrameLenDic*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*>*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigAvatarAnimatorStateFrameLenDic_ConfigAvatarAnimatorStateFrameLenDic_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x401F0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*>*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigAvatarAnimatorStateFrameLenDic_ConfigAvatarAnimatorStateFrameLenDic_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x401F8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGAVATARANIMATORSTATEFRAMELENDIC_CONFIGAVATARANIMATORSTATEFRAMELENDIC_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGAVATARANIMATORSTATEFRAMELENDIC_CONFIGAVATARANIMATORSTATEFRAMELENDIC_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGAVATARANIMATORSTATEFRAMELENDIC_CONFIGAVATARANIMATORSTATEFRAMELENDIC_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigAvatarAnimatorStateFrameLenDic*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigAvatarAnimatorStateFrameLenDic*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGAVATARANIMATORSTATEFRAMELENDIC_CONFIGAVATARANIMATORSTATEFRAMELENDIC_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigAvatarAnimatorStateFrameLenDic*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAvatarAnimatorStateFrameLenDic*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGAVATARANIMATORSTATEFRAMELENDIC_CONFIGAVATARANIMATORSTATEFRAMELENDIC_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
