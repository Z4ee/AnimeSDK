#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatQuestTrackItem; }
namespace MoleMole::GalGame { class MainCityChatQuestTrackNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_MAINCITYCHATQUESTTRACKNODE_CLASS_3_B9FF98E07A330EFB_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x13A90C70)
#define MOLEMOLE_GALGAME_MAINCITYCHATQUESTTRACKNODE_CLASS_3_B9FF98E07A330EFB_READMEMBER_OFFSET UNITYSDK_OFFSET(0x13A90C80)
#define MOLEMOLE_GALGAME_MAINCITYCHATQUESTTRACKNODE_CLASS_3_B9FF98E07A330EFB_WRITE_OFFSET UNITYSDK_OFFSET(0x13A90ED0)
#define MOLEMOLE_GALGAME_MAINCITYCHATQUESTTRACKNODE_CLASS_3_B9FF98E07A330EFB__CCTOR_OFFSET UNITYSDK_OFFSET(0x13A91090)
#define MOLEMOLE_GALGAME_MAINCITYCHATQUESTTRACKNODE_CLASS_3_B9FF98E07A330EFB__CTOR_OFFSET UNITYSDK_OFFSET(0x13A91050)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatQuestTrackNode_Class_3_B9FF98E07A330EFB_TypeDefinitionIndex = 42982;

	class MainCityChatQuestTrackNode_Class_3_B9FF98E07A330EFB : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatQuestTrackNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatQuestTrackNode_Class_3_B9FF98E07A330EFB_TypeDefinitionIndex)->GetStaticField(0x46D50);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::MainCityChatQuestTrackItem*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::MainCityChatQuestTrackItem*>*>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatQuestTrackNode_Class_3_B9FF98E07A330EFB_TypeDefinitionIndex)->GetStaticField(0x46D58);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatQuestTrackNode_Class_3_B9FF98E07A330EFB_TypeDefinitionIndex)->GetStaticField(0x46D60);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATQUESTTRACKNODE_CLASS_3_B9FF98E07A330EFB__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATQUESTTRACKNODE_CLASS_3_B9FF98E07A330EFB__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATQUESTTRACKNODE_CLASS_3_B9FF98E07A330EFB_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatQuestTrackNode*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatQuestTrackNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATQUESTTRACKNODE_CLASS_3_B9FF98E07A330EFB_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatQuestTrackNode*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatQuestTrackNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATQUESTTRACKNODE_CLASS_3_B9FF98E07A330EFB_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
