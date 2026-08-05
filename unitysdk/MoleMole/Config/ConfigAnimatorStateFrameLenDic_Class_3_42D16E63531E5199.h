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

#define MOLEMOLE_CONFIG_CONFIGANIMATORSTATEFRAMELENDIC_CLASS_3_42D16E63531E5199_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x12A4DEE0)
#define MOLEMOLE_CONFIG_CONFIGANIMATORSTATEFRAMELENDIC_CLASS_3_42D16E63531E5199_READMEMBER_OFFSET UNITYSDK_OFFSET(0x12A4DEF0)
#define MOLEMOLE_CONFIG_CONFIGANIMATORSTATEFRAMELENDIC_CLASS_3_42D16E63531E5199_WRITE_OFFSET UNITYSDK_OFFSET(0x12A4E200)
#define MOLEMOLE_CONFIG_CONFIGANIMATORSTATEFRAMELENDIC_CLASS_3_42D16E63531E5199__CCTOR_OFFSET UNITYSDK_OFFSET(0x12A4E410)
#define MOLEMOLE_CONFIG_CONFIGANIMATORSTATEFRAMELENDIC_CLASS_3_42D16E63531E5199__CTOR_OFFSET UNITYSDK_OFFSET(0x12A4E3D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAnimatorStateFrameLenDic_Class_3_42D16E63531E5199_TypeDefinitionIndex = 40450;

	class ConfigAnimatorStateFrameLenDic_Class_3_42D16E63531E5199 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigAnimatorStateFrameLenDic*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*>*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigAnimatorStateFrameLenDic_Class_3_42D16E63531E5199_TypeDefinitionIndex)->GetStaticField(0x4A420);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*>*>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigAnimatorStateFrameLenDic_Class_3_42D16E63531E5199_TypeDefinitionIndex)->GetStaticField(0x4A428);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::MoleMole::Config::EntityType>*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::MoleMole::Config::EntityType>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigAnimatorStateFrameLenDic_Class_3_42D16E63531E5199_TypeDefinitionIndex)->GetStaticField(0x4A430);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::System::Int32>*>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::System::Int32>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigAnimatorStateFrameLenDic_Class_3_42D16E63531E5199_TypeDefinitionIndex)->GetStaticField(0x4A438);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORSTATEFRAMELENDIC_CLASS_3_42D16E63531E5199__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORSTATEFRAMELENDIC_CLASS_3_42D16E63531E5199__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORSTATEFRAMELENDIC_CLASS_3_42D16E63531E5199_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigAnimatorStateFrameLenDic*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigAnimatorStateFrameLenDic*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORSTATEFRAMELENDIC_CLASS_3_42D16E63531E5199_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigAnimatorStateFrameLenDic*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAnimatorStateFrameLenDic*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGANIMATORSTATEFRAMELENDIC_CLASS_3_42D16E63531E5199_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
