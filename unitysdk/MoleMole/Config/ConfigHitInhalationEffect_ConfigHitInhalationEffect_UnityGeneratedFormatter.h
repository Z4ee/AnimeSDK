#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigHitInhalationEffect; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_CONFIG_CONFIGHITINHALATIONEFFECT_CONFIGHITINHALATIONEFFECT_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x11CA9570)
#define MOLEMOLE_CONFIG_CONFIGHITINHALATIONEFFECT_CONFIGHITINHALATIONEFFECT_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x11CA9580)
#define MOLEMOLE_CONFIG_CONFIGHITINHALATIONEFFECT_CONFIGHITINHALATIONEFFECT_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x11CA98E0)
#define MOLEMOLE_CONFIG_CONFIGHITINHALATIONEFFECT_CONFIGHITINHALATIONEFFECT_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x11CA9B30)
#define MOLEMOLE_CONFIG_CONFIGHITINHALATIONEFFECT_CONFIGHITINHALATIONEFFECT_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x11CA9AF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHitInhalationEffect_ConfigHitInhalationEffect_UnityGeneratedFormatter_TypeDefinitionIndex = 68369;

	class ConfigHitInhalationEffect_ConfigHitInhalationEffect_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigHitInhalationEffect*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHitInhalationEffect_ConfigHitInhalationEffect_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3E760);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHitInhalationEffect_ConfigHitInhalationEffect_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3E768);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHITINHALATIONEFFECT_CONFIGHITINHALATIONEFFECT_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHITINHALATIONEFFECT_CONFIGHITINHALATIONEFFECT_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHITINHALATIONEFFECT_CONFIGHITINHALATIONEFFECT_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigHitInhalationEffect*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigHitInhalationEffect*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHITINHALATIONEFFECT_CONFIGHITINHALATIONEFFECT_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigHitInhalationEffect*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHitInhalationEffect*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHITINHALATIONEFFECT_CONFIGHITINHALATIONEFFECT_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
