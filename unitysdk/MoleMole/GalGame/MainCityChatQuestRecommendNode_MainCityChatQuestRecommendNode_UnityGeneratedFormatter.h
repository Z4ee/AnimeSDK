#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatQuestRecommendNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_GALGAME_MAINCITYCHATQUESTRECOMMENDNODE_MAINCITYCHATQUESTRECOMMENDNODE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x16E579D0)
#define MOLEMOLE_GALGAME_MAINCITYCHATQUESTRECOMMENDNODE_MAINCITYCHATQUESTRECOMMENDNODE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x16E579E0)
#define MOLEMOLE_GALGAME_MAINCITYCHATQUESTRECOMMENDNODE_MAINCITYCHATQUESTRECOMMENDNODE_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x16E57BC0)
#define MOLEMOLE_GALGAME_MAINCITYCHATQUESTRECOMMENDNODE_MAINCITYCHATQUESTRECOMMENDNODE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16E57D60)
#define MOLEMOLE_GALGAME_MAINCITYCHATQUESTRECOMMENDNODE_MAINCITYCHATQUESTRECOMMENDNODE_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x16E57D20)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatQuestRecommendNode_MainCityChatQuestRecommendNode_UnityGeneratedFormatter_TypeDefinitionIndex = 47473;

	class MainCityChatQuestRecommendNode_MainCityChatQuestRecommendNode_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatQuestRecommendNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatQuestRecommendNode_MainCityChatQuestRecommendNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x32380);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatQuestRecommendNode_MainCityChatQuestRecommendNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x32388);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATQUESTRECOMMENDNODE_MAINCITYCHATQUESTRECOMMENDNODE_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATQUESTRECOMMENDNODE_MAINCITYCHATQUESTRECOMMENDNODE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATQUESTRECOMMENDNODE_MAINCITYCHATQUESTRECOMMENDNODE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatQuestRecommendNode*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatQuestRecommendNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATQUESTRECOMMENDNODE_MAINCITYCHATQUESTRECOMMENDNODE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatQuestRecommendNode*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatQuestRecommendNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATQUESTRECOMMENDNODE_MAINCITYCHATQUESTRECOMMENDNODE_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
