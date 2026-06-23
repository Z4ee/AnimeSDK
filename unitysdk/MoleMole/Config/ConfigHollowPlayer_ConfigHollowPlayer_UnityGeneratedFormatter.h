#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigAutoMoveMode.h"
#include "unitysdk/MoleMole/Config/ConfigMedalGuide.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigHollowPlayer; }
namespace MoleMole::Config { class ConfigHollowPlayerMove; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWPLAYER_CONFIGHOLLOWPLAYER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x10D0A050)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWPLAYER_CONFIGHOLLOWPLAYER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x10D0A060)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWPLAYER_CONFIGHOLLOWPLAYER_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x10D0A330)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWPLAYER_CONFIGHOLLOWPLAYER_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x10D0A560)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWPLAYER_CONFIGHOLLOWPLAYER_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x10D0A520)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowPlayer_ConfigHollowPlayer_UnityGeneratedFormatter_TypeDefinitionIndex = 49961;

	class ConfigHollowPlayer_ConfigHollowPlayer_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigHollowPlayer*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowPlayerMove*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowPlayerMove*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowPlayer_ConfigHollowPlayer_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x46530);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigAutoMoveMode>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigAutoMoveMode>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowPlayer_ConfigHollowPlayer_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x46538);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigMedalGuide>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigMedalGuide>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowPlayer_ConfigHollowPlayer_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x46540);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWPLAYER_CONFIGHOLLOWPLAYER_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWPLAYER_CONFIGHOLLOWPLAYER_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWPLAYER_CONFIGHOLLOWPLAYER_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigHollowPlayer*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigHollowPlayer*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWPLAYER_CONFIGHOLLOWPLAYER_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::Config::ConfigHollowPlayer*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowPlayer*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWPLAYER_CONFIGHOLLOWPLAYER_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
