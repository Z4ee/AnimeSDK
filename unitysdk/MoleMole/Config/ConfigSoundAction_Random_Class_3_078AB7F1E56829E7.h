#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSoundAction_Random_RandomType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSoundAction_Random; }
namespace MoleMole::Config { class SoundActionWithWeight; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM_CLASS_3_078AB7F1E56829E7_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x13505B20)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM_CLASS_3_078AB7F1E56829E7_READMEMBER_OFFSET UNITYSDK_OFFSET(0x13505B30)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM_CLASS_3_078AB7F1E56829E7_WRITE_OFFSET UNITYSDK_OFFSET(0x13505EE0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM_CLASS_3_078AB7F1E56829E7__CCTOR_OFFSET UNITYSDK_OFFSET(0x13506150)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM_CLASS_3_078AB7F1E56829E7__CTOR_OFFSET UNITYSDK_OFFSET(0x13506110)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_Random_Class_3_078AB7F1E56829E7_TypeDefinitionIndex = 66547;

	class ConfigSoundAction_Random_Class_3_078AB7F1E56829E7 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigSoundAction_Random*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_Random_Class_3_078AB7F1E56829E7_TypeDefinitionIndex)->GetStaticField(0x4BFC0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::SoundActionWithWeight*>*>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::SoundActionWithWeight*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_Random_Class_3_078AB7F1E56829E7_TypeDefinitionIndex)->GetStaticField(0x4BFC8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_Random_Class_3_078AB7F1E56829E7_TypeDefinitionIndex)->GetStaticField(0x4BFD0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_Random_Class_3_078AB7F1E56829E7_TypeDefinitionIndex)->GetStaticField(0x4BFD8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundAction_Random_RandomType>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundAction_Random_RandomType>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_Random_Class_3_078AB7F1E56829E7_TypeDefinitionIndex)->GetStaticField(0x4BFE0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM_CLASS_3_078AB7F1E56829E7__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM_CLASS_3_078AB7F1E56829E7__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM_CLASS_3_078AB7F1E56829E7_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSoundAction_Random*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_Random*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM_CLASS_3_078AB7F1E56829E7_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigSoundAction_Random*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_Random*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RANDOM_CLASS_3_078AB7F1E56829E7_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
