#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class PlayChatPlusStoryNode; }
namespace MoleMole::GalGame { class TagAniPair; }
namespace MoleMole::GalGame { class TagGroupAniPair; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_PLAYCHATPLUSSTORYNODE_PLAYCHATPLUSSTORYNODE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x16CAD0F0)
#define MOLEMOLE_GALGAME_PLAYCHATPLUSSTORYNODE_PLAYCHATPLUSSTORYNODE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x16CAD100)
#define MOLEMOLE_GALGAME_PLAYCHATPLUSSTORYNODE_PLAYCHATPLUSSTORYNODE_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x16CADCC0)
#define MOLEMOLE_GALGAME_PLAYCHATPLUSSTORYNODE_PLAYCHATPLUSSTORYNODE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16CAE390)
#define MOLEMOLE_GALGAME_PLAYCHATPLUSSTORYNODE_PLAYCHATPLUSSTORYNODE_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x16CAE350)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int PlayChatPlusStoryNode_PlayChatPlusStoryNode_UnityGeneratedFormatter_TypeDefinitionIndex = 78790;

	class PlayChatPlusStoryNode_PlayChatPlusStoryNode_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::PlayChatPlusStoryNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(PlayChatPlusStoryNode_PlayChatPlusStoryNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x42E60);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(PlayChatPlusStoryNode_PlayChatPlusStoryNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x42E68);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PlayChatPlusStoryNode_PlayChatPlusStoryNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x42E70);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PlayChatPlusStoryNode_PlayChatPlusStoryNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x42E78);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(PlayChatPlusStoryNode_PlayChatPlusStoryNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x42E80);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::TagAniPair*>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::TagAniPair*>*>**)Il2CppClass::FromTypeDefinitionIndex(PlayChatPlusStoryNode_PlayChatPlusStoryNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x42E88);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::TagGroupAniPair*>*>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::TagGroupAniPair*>*>**)Il2CppClass::FromTypeDefinitionIndex(PlayChatPlusStoryNode_PlayChatPlusStoryNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x42E90);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_PLAYCHATPLUSSTORYNODE_PLAYCHATPLUSSTORYNODE_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_PLAYCHATPLUSSTORYNODE_PLAYCHATPLUSSTORYNODE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_PLAYCHATPLUSSTORYNODE_PLAYCHATPLUSSTORYNODE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::PlayChatPlusStoryNode*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::PlayChatPlusStoryNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_PLAYCHATPLUSSTORYNODE_PLAYCHATPLUSSTORYNODE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::GalGame::PlayChatPlusStoryNode*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::PlayChatPlusStoryNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_PLAYCHATPLUSSTORYNODE_PLAYCHATPLUSSTORYNODE_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
