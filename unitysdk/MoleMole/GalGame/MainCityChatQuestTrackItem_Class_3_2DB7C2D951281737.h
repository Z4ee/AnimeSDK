#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatQuestTrackItem; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_GALGAME_MAINCITYCHATQUESTTRACKITEM_CLASS_3_2DB7C2D951281737_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x149EB9F0)
#define MOLEMOLE_GALGAME_MAINCITYCHATQUESTTRACKITEM_CLASS_3_2DB7C2D951281737_READMEMBER_OFFSET UNITYSDK_OFFSET(0x149EBA00)
#define MOLEMOLE_GALGAME_MAINCITYCHATQUESTTRACKITEM_CLASS_3_2DB7C2D951281737_WRITE_OFFSET UNITYSDK_OFFSET(0x149EBC50)
#define MOLEMOLE_GALGAME_MAINCITYCHATQUESTTRACKITEM_CLASS_3_2DB7C2D951281737__CCTOR_OFFSET UNITYSDK_OFFSET(0x149EBE10)
#define MOLEMOLE_GALGAME_MAINCITYCHATQUESTTRACKITEM_CLASS_3_2DB7C2D951281737__CTOR_OFFSET UNITYSDK_OFFSET(0x149EBDD0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatQuestTrackItem_Class_3_2DB7C2D951281737_TypeDefinitionIndex = 89172;

	class MainCityChatQuestTrackItem_Class_3_2DB7C2D951281737 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatQuestTrackItem*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatQuestTrackItem_Class_3_2DB7C2D951281737_TypeDefinitionIndex)->GetStaticField(0x326F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATQUESTTRACKITEM_CLASS_3_2DB7C2D951281737__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATQUESTTRACKITEM_CLASS_3_2DB7C2D951281737__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATQUESTTRACKITEM_CLASS_3_2DB7C2D951281737_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatQuestTrackItem*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatQuestTrackItem*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATQUESTTRACKITEM_CLASS_3_2DB7C2D951281737_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatQuestTrackItem*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatQuestTrackItem*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATQUESTTRACKITEM_CLASS_3_2DB7C2D951281737_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
