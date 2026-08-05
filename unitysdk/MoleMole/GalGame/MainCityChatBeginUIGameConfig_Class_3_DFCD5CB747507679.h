#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatBeginUIGameConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_GALGAME_MAINCITYCHATBEGINUIGAMECONFIG_CLASS_3_DFCD5CB747507679_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x136A52D0)
#define MOLEMOLE_GALGAME_MAINCITYCHATBEGINUIGAMECONFIG_CLASS_3_DFCD5CB747507679_READMEMBER_OFFSET UNITYSDK_OFFSET(0x136A52E0)
#define MOLEMOLE_GALGAME_MAINCITYCHATBEGINUIGAMECONFIG_CLASS_3_DFCD5CB747507679_WRITE_OFFSET UNITYSDK_OFFSET(0x136A5690)
#define MOLEMOLE_GALGAME_MAINCITYCHATBEGINUIGAMECONFIG_CLASS_3_DFCD5CB747507679__CCTOR_OFFSET UNITYSDK_OFFSET(0x136A5900)
#define MOLEMOLE_GALGAME_MAINCITYCHATBEGINUIGAMECONFIG_CLASS_3_DFCD5CB747507679__CTOR_OFFSET UNITYSDK_OFFSET(0x136A58C0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatBeginUIGameConfig_Class_3_DFCD5CB747507679_TypeDefinitionIndex = 89553;

	class MainCityChatBeginUIGameConfig_Class_3_DFCD5CB747507679 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatBeginUIGameConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatBeginUIGameConfig_Class_3_DFCD5CB747507679_TypeDefinitionIndex)->GetStaticField(0x4D600);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatBeginUIGameConfig_Class_3_DFCD5CB747507679_TypeDefinitionIndex)->GetStaticField(0x4D608);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATBEGINUIGAMECONFIG_CLASS_3_DFCD5CB747507679__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATBEGINUIGAMECONFIG_CLASS_3_DFCD5CB747507679__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATBEGINUIGAMECONFIG_CLASS_3_DFCD5CB747507679_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatBeginUIGameConfig*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatBeginUIGameConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATBEGINUIGAMECONFIG_CLASS_3_DFCD5CB747507679_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatBeginUIGameConfig*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatBeginUIGameConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATBEGINUIGAMECONFIG_CLASS_3_DFCD5CB747507679_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
