#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigCharacterAnimatorStateLength; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGCHARACTERANIMATORSTATELENGTH_CLASS_3_E6A0E601C6CA32DA_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xF138B40)
#define MOLEMOLE_CONFIG_CONFIGCHARACTERANIMATORSTATELENGTH_CLASS_3_E6A0E601C6CA32DA_READMEMBER_OFFSET UNITYSDK_OFFSET(0xF138B50)
#define MOLEMOLE_CONFIG_CONFIGCHARACTERANIMATORSTATELENGTH_CLASS_3_E6A0E601C6CA32DA_WRITE_OFFSET UNITYSDK_OFFSET(0xF138CE0)
#define MOLEMOLE_CONFIG_CONFIGCHARACTERANIMATORSTATELENGTH_CLASS_3_E6A0E601C6CA32DA__CCTOR_OFFSET UNITYSDK_OFFSET(0xF138E40)
#define MOLEMOLE_CONFIG_CONFIGCHARACTERANIMATORSTATELENGTH_CLASS_3_E6A0E601C6CA32DA__CTOR_OFFSET UNITYSDK_OFFSET(0xF138E00)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCharacterAnimatorStateLength_Class_3_E6A0E601C6CA32DA_TypeDefinitionIndex = 87876;

	class ConfigCharacterAnimatorStateLength_Class_3_E6A0E601C6CA32DA : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigCharacterAnimatorStateLength*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCharacterAnimatorStateLength_Class_3_E6A0E601C6CA32DA_TypeDefinitionIndex)->GetStaticField(0x517A0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigCharacterAnimatorStateLength_Class_3_E6A0E601C6CA32DA_TypeDefinitionIndex)->GetStaticField(0x517A8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHARACTERANIMATORSTATELENGTH_CLASS_3_E6A0E601C6CA32DA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHARACTERANIMATORSTATELENGTH_CLASS_3_E6A0E601C6CA32DA__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHARACTERANIMATORSTATELENGTH_CLASS_3_E6A0E601C6CA32DA_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigCharacterAnimatorStateLength*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigCharacterAnimatorStateLength*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHARACTERANIMATORSTATELENGTH_CLASS_3_E6A0E601C6CA32DA_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigCharacterAnimatorStateLength*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCharacterAnimatorStateLength*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCHARACTERANIMATORSTATELENGTH_CLASS_3_E6A0E601C6CA32DA_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
