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

#define MOLEMOLE_CONFIG_CONFIGAVATARANIMATORSTATEFRAMELENDIC_CLASS_3_093119FEC65A4810_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x162590A0)
#define MOLEMOLE_CONFIG_CONFIGAVATARANIMATORSTATEFRAMELENDIC_CLASS_3_093119FEC65A4810_READMEMBER_OFFSET UNITYSDK_OFFSET(0x162590B0)
#define MOLEMOLE_CONFIG_CONFIGAVATARANIMATORSTATEFRAMELENDIC_CLASS_3_093119FEC65A4810_WRITE_OFFSET UNITYSDK_OFFSET(0x16259240)
#define MOLEMOLE_CONFIG_CONFIGAVATARANIMATORSTATEFRAMELENDIC_CLASS_3_093119FEC65A4810__CCTOR_OFFSET UNITYSDK_OFFSET(0x162593A0)
#define MOLEMOLE_CONFIG_CONFIGAVATARANIMATORSTATEFRAMELENDIC_CLASS_3_093119FEC65A4810__CTOR_OFFSET UNITYSDK_OFFSET(0x16259360)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAvatarAnimatorStateFrameLenDic_Class_3_093119FEC65A4810_TypeDefinitionIndex = 56452;

	class ConfigAvatarAnimatorStateFrameLenDic_Class_3_093119FEC65A4810 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigAvatarAnimatorStateFrameLenDic*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*>*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigAvatarAnimatorStateFrameLenDic_Class_3_093119FEC65A4810_TypeDefinitionIndex)->GetStaticField(0x323C0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*>*>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigAvatarAnimatorStateFrameLenDic_Class_3_093119FEC65A4810_TypeDefinitionIndex)->GetStaticField(0x323C8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGAVATARANIMATORSTATEFRAMELENDIC_CLASS_3_093119FEC65A4810__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGAVATARANIMATORSTATEFRAMELENDIC_CLASS_3_093119FEC65A4810__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGAVATARANIMATORSTATEFRAMELENDIC_CLASS_3_093119FEC65A4810_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigAvatarAnimatorStateFrameLenDic*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigAvatarAnimatorStateFrameLenDic*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGAVATARANIMATORSTATEFRAMELENDIC_CLASS_3_093119FEC65A4810_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigAvatarAnimatorStateFrameLenDic*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAvatarAnimatorStateFrameLenDic*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGAVATARANIMATORSTATEFRAMELENDIC_CLASS_3_093119FEC65A4810_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
