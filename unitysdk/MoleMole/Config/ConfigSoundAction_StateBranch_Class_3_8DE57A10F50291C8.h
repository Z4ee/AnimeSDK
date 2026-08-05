#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSoundActionGeneral; }
namespace MoleMole::Config { class ConfigSoundAction_StateBranch; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STATEBRANCH_CLASS_3_8DE57A10F50291C8_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1C464090)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STATEBRANCH_CLASS_3_8DE57A10F50291C8_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1C4640A0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STATEBRANCH_CLASS_3_8DE57A10F50291C8_WRITE_OFFSET UNITYSDK_OFFSET(0x1C4643B0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STATEBRANCH_CLASS_3_8DE57A10F50291C8__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4645C0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STATEBRANCH_CLASS_3_8DE57A10F50291C8__CTOR_OFFSET UNITYSDK_OFFSET(0x1C464580)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_StateBranch_Class_3_8DE57A10F50291C8_TypeDefinitionIndex = 91439;

	class ConfigSoundAction_StateBranch_Class_3_8DE57A10F50291C8 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigSoundAction_StateBranch*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionGeneral*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigSoundActionGeneral*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_StateBranch_Class_3_8DE57A10F50291C8_TypeDefinitionIndex)->GetStaticField(0x46C30);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigSoundActionGeneral*>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigSoundActionGeneral*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_StateBranch_Class_3_8DE57A10F50291C8_TypeDefinitionIndex)->GetStaticField(0x46C38);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigSoundAction_StateBranch_Class_3_8DE57A10F50291C8_TypeDefinitionIndex)->GetStaticField(0x46C40);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STATEBRANCH_CLASS_3_8DE57A10F50291C8__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STATEBRANCH_CLASS_3_8DE57A10F50291C8__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STATEBRANCH_CLASS_3_8DE57A10F50291C8_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSoundAction_StateBranch*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_StateBranch*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STATEBRANCH_CLASS_3_8DE57A10F50291C8_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigSoundAction_StateBranch*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_StateBranch*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STATEBRANCH_CLASS_3_8DE57A10F50291C8_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
