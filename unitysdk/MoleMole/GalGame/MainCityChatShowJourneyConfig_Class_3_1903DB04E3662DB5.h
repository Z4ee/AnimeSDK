#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatShowJourneyConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWJOURNEYCONFIG_CLASS_3_1903DB04E3662DB5_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x13A91130)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWJOURNEYCONFIG_CLASS_3_1903DB04E3662DB5_READMEMBER_OFFSET UNITYSDK_OFFSET(0x13A91140)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWJOURNEYCONFIG_CLASS_3_1903DB04E3662DB5_WRITE_OFFSET UNITYSDK_OFFSET(0x13A912D0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWJOURNEYCONFIG_CLASS_3_1903DB04E3662DB5__CCTOR_OFFSET UNITYSDK_OFFSET(0x13A91430)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWJOURNEYCONFIG_CLASS_3_1903DB04E3662DB5__CTOR_OFFSET UNITYSDK_OFFSET(0x13A913F0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatShowJourneyConfig_Class_3_1903DB04E3662DB5_TypeDefinitionIndex = 83993;

	class MainCityChatShowJourneyConfig_Class_3_1903DB04E3662DB5 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatShowJourneyConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatShowJourneyConfig_Class_3_1903DB04E3662DB5_TypeDefinitionIndex)->GetStaticField(0x46D70);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWJOURNEYCONFIG_CLASS_3_1903DB04E3662DB5__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWJOURNEYCONFIG_CLASS_3_1903DB04E3662DB5__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWJOURNEYCONFIG_CLASS_3_1903DB04E3662DB5_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatShowJourneyConfig*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatShowJourneyConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWJOURNEYCONFIG_CLASS_3_1903DB04E3662DB5_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatShowJourneyConfig*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatShowJourneyConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWJOURNEYCONFIG_CLASS_3_1903DB04E3662DB5_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
