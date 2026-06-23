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

#define MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_GALBUBBLESTORYSEQUENCENODE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x17E7B030)
#define MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_GALBUBBLESTORYSEQUENCENODE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x17E7B040)
#define MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_GALBUBBLESTORYSEQUENCENODE_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x17E7B580)
#define MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_GALBUBBLESTORYSEQUENCENODE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E7B8D0)
#define MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_GALBUBBLESTORYSEQUENCENODE_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x17E7B890)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalBubbleStorySequenceNode_GalBubbleStorySequenceNode_UnityGeneratedFormatter_TypeDefinitionIndex = 52415;

	class GalBubbleStorySequenceNode_GalBubbleStorySequenceNode_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::GalBubbleStorySequenceNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalPlayableNodeType>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(GalBubbleStorySequenceNode_GalBubbleStorySequenceNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44D20);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GalBubbleStorySequenceNode_GalBubbleStorySequenceNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44D28);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::GalBubbleStorySequenceNode_StoryNode*>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::GalBubbleStorySequenceNode_StoryNode*>*>**)Il2CppClass::FromTypeDefinitionIndex(GalBubbleStorySequenceNode_GalBubbleStorySequenceNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44D30);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_GALBUBBLESTORYSEQUENCENODE_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_GALBUBBLESTORYSEQUENCENODE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_GALBUBBLESTORYSEQUENCENODE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::GalBubbleStorySequenceNode*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalBubbleStorySequenceNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_GALBUBBLESTORYSEQUENCENODE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::GalGame::GalBubbleStorySequenceNode*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalBubbleStorySequenceNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_GALBUBBLESTORYSEQUENCENODE_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
