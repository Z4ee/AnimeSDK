#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ETrainingRoomItemType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class AvatarInitData; }
namespace MoleMole::Config { class ConfigSpecialTraining; }
namespace MoleMole::Config { class ConfigTrainingRoom; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGTRAININGROOM_CONFIGTRAININGROOM_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x183CECC0)
#define MOLEMOLE_CONFIG_CONFIGTRAININGROOM_CONFIGTRAININGROOM_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x183CECD0)
#define MOLEMOLE_CONFIG_CONFIGTRAININGROOM_CONFIGTRAININGROOM_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x183CEF70)
#define MOLEMOLE_CONFIG_CONFIGTRAININGROOM_CONFIGTRAININGROOM_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x183CF170)
#define MOLEMOLE_CONFIG_CONFIGTRAININGROOM_CONFIGTRAININGROOM_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x183CF130)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigTrainingRoom_ConfigTrainingRoom_UnityGeneratedFormatter_TypeDefinitionIndex = 76671;

	class ConfigTrainingRoom_ConfigTrainingRoom_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigTrainingRoom*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::AvatarInitData*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigTrainingRoom_ConfigTrainingRoom_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x434A0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ETrainingRoomItemType, ::System::String*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::ETrainingRoomItemType, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigTrainingRoom_ConfigTrainingRoom_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x434A8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigSpecialTraining*>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Config::ConfigSpecialTraining*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigTrainingRoom_ConfigTrainingRoom_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x434B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRAININGROOM_CONFIGTRAININGROOM_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRAININGROOM_CONFIGTRAININGROOM_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRAININGROOM_CONFIGTRAININGROOM_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigTrainingRoom*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigTrainingRoom*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRAININGROOM_CONFIGTRAININGROOM_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigTrainingRoom*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTrainingRoom*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTRAININGROOM_CONFIGTRAININGROOM_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
