#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigUIMainCity; }
namespace MoleMole { class ConfigUIMainCity_ChallengeTipsConfig; }
namespace MoleMole { class ConfigUIMainCity_InteractConfig; }
namespace MoleMole { class ConfigUIMainCity_MissionTipsConfig; }
namespace MoleMole { class ConfigUIMainCity_OngoingConfig; }
namespace MoleMole { class ConfigUIMainCity_ViceCharacterConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_CONFIGUIMAINCITY_CONFIGUIMAINCITY_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x189E4FD0)
#define MOLEMOLE_CONFIGUIMAINCITY_CONFIGUIMAINCITY_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x189E4FE0)
#define MOLEMOLE_CONFIGUIMAINCITY_CONFIGUIMAINCITY_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x189E53E0)
#define MOLEMOLE_CONFIGUIMAINCITY_CONFIGUIMAINCITY_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x189E5680)
#define MOLEMOLE_CONFIGUIMAINCITY_CONFIGUIMAINCITY_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x189E5640)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUIMainCity_ConfigUIMainCity_UnityGeneratedFormatter_TypeDefinitionIndex = 46893;

	class ConfigUIMainCity_ConfigUIMainCity_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigUIMainCity*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::ConfigUIMainCity_MissionTipsConfig*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::ConfigUIMainCity_MissionTipsConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUIMainCity_ConfigUIMainCity_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x403B0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::ConfigUIMainCity_InteractConfig*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::ConfigUIMainCity_InteractConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUIMainCity_ConfigUIMainCity_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x403B8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::ConfigUIMainCity_ChallengeTipsConfig*>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::ConfigUIMainCity_ChallengeTipsConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUIMainCity_ConfigUIMainCity_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x403C0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::ConfigUIMainCity_ViceCharacterConfig*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::ConfigUIMainCity_ViceCharacterConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUIMainCity_ConfigUIMainCity_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x403C8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::ConfigUIMainCity_OngoingConfig*>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::ConfigUIMainCity_OngoingConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUIMainCity_ConfigUIMainCity_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x403D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIMAINCITY_CONFIGUIMAINCITY_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIMAINCITY_CONFIGUIMAINCITY_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIMAINCITY_CONFIGUIMAINCITY_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigUIMainCity*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigUIMainCity*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIMAINCITY_CONFIGUIMAINCITY_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::ConfigUIMainCity*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUIMainCity*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUIMAINCITY_CONFIGUIMAINCITY_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
