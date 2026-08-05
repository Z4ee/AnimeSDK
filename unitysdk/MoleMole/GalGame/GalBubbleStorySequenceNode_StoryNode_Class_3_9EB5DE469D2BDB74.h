#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class GalBubbleStorySequenceNode_StoryNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_STORYNODE_CLASS_3_9EB5DE469D2BDB74_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19BEB280)
#define MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_STORYNODE_CLASS_3_9EB5DE469D2BDB74_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19BEB290)
#define MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_STORYNODE_CLASS_3_9EB5DE469D2BDB74_WRITE_OFFSET UNITYSDK_OFFSET(0x19BEB640)
#define MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_STORYNODE_CLASS_3_9EB5DE469D2BDB74__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BEB8B0)
#define MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_STORYNODE_CLASS_3_9EB5DE469D2BDB74__CTOR_OFFSET UNITYSDK_OFFSET(0x19BEB870)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalBubbleStorySequenceNode_StoryNode_Class_3_9EB5DE469D2BDB74_TypeDefinitionIndex = 59081;

	class GalBubbleStorySequenceNode_StoryNode_Class_3_9EB5DE469D2BDB74 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::GalBubbleStorySequenceNode_StoryNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(GalBubbleStorySequenceNode_StoryNode_Class_3_9EB5DE469D2BDB74_TypeDefinitionIndex)->GetStaticField(0x48C20);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GalBubbleStorySequenceNode_StoryNode_Class_3_9EB5DE469D2BDB74_TypeDefinitionIndex)->GetStaticField(0x48C28);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_STORYNODE_CLASS_3_9EB5DE469D2BDB74__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_STORYNODE_CLASS_3_9EB5DE469D2BDB74__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_STORYNODE_CLASS_3_9EB5DE469D2BDB74_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::GalBubbleStorySequenceNode_StoryNode*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalBubbleStorySequenceNode_StoryNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_STORYNODE_CLASS_3_9EB5DE469D2BDB74_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::GalBubbleStorySequenceNode_StoryNode*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalBubbleStorySequenceNode_StoryNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_STORYNODE_CLASS_3_9EB5DE469D2BDB74_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
