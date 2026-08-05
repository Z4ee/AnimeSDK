#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatShowRankListConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWRANKLISTCONFIG_CLASS_3_FFE3E5A3660ACE60_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19B18F00)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWRANKLISTCONFIG_CLASS_3_FFE3E5A3660ACE60_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19B18F10)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWRANKLISTCONFIG_CLASS_3_FFE3E5A3660ACE60_WRITE_OFFSET UNITYSDK_OFFSET(0x19B18FE0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWRANKLISTCONFIG_CLASS_3_FFE3E5A3660ACE60__CCTOR_OFFSET UNITYSDK_OFFSET(0x19B190D0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWRANKLISTCONFIG_CLASS_3_FFE3E5A3660ACE60__CTOR_OFFSET UNITYSDK_OFFSET(0x19B19090)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatShowRankListConfig_Class_3_FFE3E5A3660ACE60_TypeDefinitionIndex = 80973;

	class MainCityChatShowRankListConfig_Class_3_FFE3E5A3660ACE60 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatShowRankListConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatShowRankListConfig_Class_3_FFE3E5A3660ACE60_TypeDefinitionIndex)->GetStaticField(0x51960);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWRANKLISTCONFIG_CLASS_3_FFE3E5A3660ACE60__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWRANKLISTCONFIG_CLASS_3_FFE3E5A3660ACE60__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWRANKLISTCONFIG_CLASS_3_FFE3E5A3660ACE60_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatShowRankListConfig*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatShowRankListConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWRANKLISTCONFIG_CLASS_3_FFE3E5A3660ACE60_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatShowRankListConfig*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatShowRankListConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWRANKLISTCONFIG_CLASS_3_FFE3E5A3660ACE60_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
