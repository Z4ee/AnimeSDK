#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatQuestRecommendNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_GALGAME_MAINCITYCHATQUESTRECOMMENDNODE_CLASS_3_2601630A8F772735_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1383F2F0)
#define MOLEMOLE_GALGAME_MAINCITYCHATQUESTRECOMMENDNODE_CLASS_3_2601630A8F772735_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1383F300)
#define MOLEMOLE_GALGAME_MAINCITYCHATQUESTRECOMMENDNODE_CLASS_3_2601630A8F772735_WRITE_OFFSET UNITYSDK_OFFSET(0x1383F490)
#define MOLEMOLE_GALGAME_MAINCITYCHATQUESTRECOMMENDNODE_CLASS_3_2601630A8F772735__CCTOR_OFFSET UNITYSDK_OFFSET(0x1383F5F0)
#define MOLEMOLE_GALGAME_MAINCITYCHATQUESTRECOMMENDNODE_CLASS_3_2601630A8F772735__CTOR_OFFSET UNITYSDK_OFFSET(0x1383F5B0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatQuestRecommendNode_Class_3_2601630A8F772735_TypeDefinitionIndex = 57044;

	class MainCityChatQuestRecommendNode_Class_3_2601630A8F772735 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatQuestRecommendNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatQuestRecommendNode_Class_3_2601630A8F772735_TypeDefinitionIndex)->GetStaticField(0x3F8D0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatQuestRecommendNode_Class_3_2601630A8F772735_TypeDefinitionIndex)->GetStaticField(0x3F8D8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATQUESTRECOMMENDNODE_CLASS_3_2601630A8F772735__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATQUESTRECOMMENDNODE_CLASS_3_2601630A8F772735__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATQUESTRECOMMENDNODE_CLASS_3_2601630A8F772735_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatQuestRecommendNode*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatQuestRecommendNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATQUESTRECOMMENDNODE_CLASS_3_2601630A8F772735_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatQuestRecommendNode*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatQuestRecommendNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATQUESTRECOMMENDNODE_CLASS_3_2601630A8F772735_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
