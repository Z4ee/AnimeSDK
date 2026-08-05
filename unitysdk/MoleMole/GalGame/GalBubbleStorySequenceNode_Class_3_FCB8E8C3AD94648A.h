#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalPlayableNodeType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class GalBubbleStorySequenceNode; }
namespace MoleMole::GalGame { class GalBubbleStorySequenceNode_StoryNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_CLASS_3_FCB8E8C3AD94648A_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1383E2F0)
#define MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_CLASS_3_FCB8E8C3AD94648A_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1383E300)
#define MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_CLASS_3_FCB8E8C3AD94648A_WRITE_OFFSET UNITYSDK_OFFSET(0x1383E7F0)
#define MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_CLASS_3_FCB8E8C3AD94648A__CCTOR_OFFSET UNITYSDK_OFFSET(0x1383EB10)
#define MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_CLASS_3_FCB8E8C3AD94648A__CTOR_OFFSET UNITYSDK_OFFSET(0x1383EAD0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalBubbleStorySequenceNode_Class_3_FCB8E8C3AD94648A_TypeDefinitionIndex = 59083;

	class GalBubbleStorySequenceNode_Class_3_FCB8E8C3AD94648A : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::GalBubbleStorySequenceNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalPlayableNodeType>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(GalBubbleStorySequenceNode_Class_3_FCB8E8C3AD94648A_TypeDefinitionIndex)->GetStaticField(0x3F8A0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::GalBubbleStorySequenceNode_StoryNode*>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::GalBubbleStorySequenceNode_StoryNode*>*>**)Il2CppClass::FromTypeDefinitionIndex(GalBubbleStorySequenceNode_Class_3_FCB8E8C3AD94648A_TypeDefinitionIndex)->GetStaticField(0x3F8A8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GalBubbleStorySequenceNode_Class_3_FCB8E8C3AD94648A_TypeDefinitionIndex)->GetStaticField(0x3F8B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_CLASS_3_FCB8E8C3AD94648A__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_CLASS_3_FCB8E8C3AD94648A__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_CLASS_3_FCB8E8C3AD94648A_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::GalBubbleStorySequenceNode*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalBubbleStorySequenceNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_CLASS_3_FCB8E8C3AD94648A_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::GalBubbleStorySequenceNode*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalBubbleStorySequenceNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_CLASS_3_FCB8E8C3AD94648A_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
