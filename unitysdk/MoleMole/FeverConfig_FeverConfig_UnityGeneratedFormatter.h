#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/InspireZoneOperationType.h"
#include "unitysdk/MoleMole/Config/FeverSoundType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class FeverConfig; }
namespace MoleMole::Config { class ConfigInspireZoneOperation; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_FEVERCONFIG_FEVERCONFIG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x15108940)
#define MOLEMOLE_FEVERCONFIG_FEVERCONFIG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x15108950)
#define MOLEMOLE_FEVERCONFIG_FEVERCONFIG_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x15108B30)
#define MOLEMOLE_FEVERCONFIG_FEVERCONFIG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15108CD0)
#define MOLEMOLE_FEVERCONFIG_FEVERCONFIG_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x15108C90)

namespace MoleMole
{
	inline static constexpr unsigned int FeverConfig_FeverConfig_UnityGeneratedFormatter_TypeDefinitionIndex = 64310;

	class FeverConfig_FeverConfig_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::FeverConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Battle::InspireZoneOperationType, ::MoleMole::Config::ConfigInspireZoneOperation*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Battle::InspireZoneOperationType, ::MoleMole::Config::ConfigInspireZoneOperation*>*>**)Il2CppClass::FromTypeDefinitionIndex(FeverConfig_FeverConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40EF0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::FeverSoundType, ::System::Int32>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::Config::FeverSoundType, ::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(FeverConfig_FeverConfig_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40EF8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FEVERCONFIG_FEVERCONFIG_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FEVERCONFIG_FEVERCONFIG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FEVERCONFIG_FEVERCONFIG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::FeverConfig*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::FeverConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FEVERCONFIG_FEVERCONFIG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::FeverConfig*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::FeverConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_FEVERCONFIG_FEVERCONFIG_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
