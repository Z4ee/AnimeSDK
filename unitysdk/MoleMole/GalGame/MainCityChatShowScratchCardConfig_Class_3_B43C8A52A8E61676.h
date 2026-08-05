#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatShowScratchCardConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWSCRATCHCARDCONFIG_CLASS_3_B43C8A52A8E61676_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x13840960)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWSCRATCHCARDCONFIG_CLASS_3_B43C8A52A8E61676_READMEMBER_OFFSET UNITYSDK_OFFSET(0x13840970)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWSCRATCHCARDCONFIG_CLASS_3_B43C8A52A8E61676_WRITE_OFFSET UNITYSDK_OFFSET(0x13840A40)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWSCRATCHCARDCONFIG_CLASS_3_B43C8A52A8E61676__CCTOR_OFFSET UNITYSDK_OFFSET(0x13840B30)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWSCRATCHCARDCONFIG_CLASS_3_B43C8A52A8E61676__CTOR_OFFSET UNITYSDK_OFFSET(0x13840AF0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatShowScratchCardConfig_Class_3_B43C8A52A8E61676_TypeDefinitionIndex = 47693;

	class MainCityChatShowScratchCardConfig_Class_3_B43C8A52A8E61676 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatShowScratchCardConfig*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatShowScratchCardConfig_Class_3_B43C8A52A8E61676_TypeDefinitionIndex)->GetStaticField(0x3F900);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWSCRATCHCARDCONFIG_CLASS_3_B43C8A52A8E61676__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWSCRATCHCARDCONFIG_CLASS_3_B43C8A52A8E61676__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWSCRATCHCARDCONFIG_CLASS_3_B43C8A52A8E61676_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatShowScratchCardConfig*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatShowScratchCardConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWSCRATCHCARDCONFIG_CLASS_3_B43C8A52A8E61676_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatShowScratchCardConfig*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatShowScratchCardConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWSCRATCHCARDCONFIG_CLASS_3_B43C8A52A8E61676_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
