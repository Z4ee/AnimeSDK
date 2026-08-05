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

#define MOLEMOLE_CONFIG_CONFIGHOLLOWPLAYER_CLASS_3_38ECB2C21D7DD6E2_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A4B3A10)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWPLAYER_CLASS_3_38ECB2C21D7DD6E2_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A4B3A20)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWPLAYER_CLASS_3_38ECB2C21D7DD6E2_WRITE_OFFSET UNITYSDK_OFFSET(0x1A4B3CA0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWPLAYER_CLASS_3_38ECB2C21D7DD6E2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A4B3E90)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWPLAYER_CLASS_3_38ECB2C21D7DD6E2__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4B3E50)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowPlayer_Class_3_38ECB2C21D7DD6E2_TypeDefinitionIndex = 71113;

	class ConfigHollowPlayer_Class_3_38ECB2C21D7DD6E2 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::ConfigHollowPlayer*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigAutoMoveMode>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigAutoMoveMode>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowPlayer_Class_3_38ECB2C21D7DD6E2_TypeDefinitionIndex)->GetStaticField(0x3C8C0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigMedalGuide>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigMedalGuide>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowPlayer_Class_3_38ECB2C21D7DD6E2_TypeDefinitionIndex)->GetStaticField(0x3C8C8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowPlayerMove*>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigHollowPlayerMove*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigHollowPlayer_Class_3_38ECB2C21D7DD6E2_TypeDefinitionIndex)->GetStaticField(0x3C8D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWPLAYER_CLASS_3_38ECB2C21D7DD6E2__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWPLAYER_CLASS_3_38ECB2C21D7DD6E2__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWPLAYER_CLASS_3_38ECB2C21D7DD6E2_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigHollowPlayer*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigHollowPlayer*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWPLAYER_CLASS_3_38ECB2C21D7DD6E2_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::ConfigHollowPlayer*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowPlayer*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWPLAYER_CLASS_3_38ECB2C21D7DD6E2_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
