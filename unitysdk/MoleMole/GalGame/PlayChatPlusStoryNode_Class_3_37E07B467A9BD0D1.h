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

#define MOLEMOLE_GALGAME_PLAYCHATPLUSSTORYNODE_CLASS_3_37E07B467A9BD0D1_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x179010F0)
#define MOLEMOLE_GALGAME_PLAYCHATPLUSSTORYNODE_CLASS_3_37E07B467A9BD0D1_READMEMBER_OFFSET UNITYSDK_OFFSET(0x17901100)
#define MOLEMOLE_GALGAME_PLAYCHATPLUSSTORYNODE_CLASS_3_37E07B467A9BD0D1_WRITE_OFFSET UNITYSDK_OFFSET(0x17901C40)
#define MOLEMOLE_GALGAME_PLAYCHATPLUSSTORYNODE_CLASS_3_37E07B467A9BD0D1__CCTOR_OFFSET UNITYSDK_OFFSET(0x179022E0)
#define MOLEMOLE_GALGAME_PLAYCHATPLUSSTORYNODE_CLASS_3_37E07B467A9BD0D1__CTOR_OFFSET UNITYSDK_OFFSET(0x179022A0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int PlayChatPlusStoryNode_Class_3_37E07B467A9BD0D1_TypeDefinitionIndex = 61814;

	class PlayChatPlusStoryNode_Class_3_37E07B467A9BD0D1 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::PlayChatPlusStoryNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::TagGroupAniPair*>*>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::TagGroupAniPair*>*>**)Il2CppClass::FromTypeDefinitionIndex(PlayChatPlusStoryNode_Class_3_37E07B467A9BD0D1_TypeDefinitionIndex)->GetStaticField(0x426F0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_11()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PlayChatPlusStoryNode_Class_3_37E07B467A9BD0D1_TypeDefinitionIndex)->GetStaticField(0x426F8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(PlayChatPlusStoryNode_Class_3_37E07B467A9BD0D1_TypeDefinitionIndex)->GetStaticField(0x42700);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::TagAniPair*>*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::TagAniPair*>*>**)Il2CppClass::FromTypeDefinitionIndex(PlayChatPlusStoryNode_Class_3_37E07B467A9BD0D1_TypeDefinitionIndex)->GetStaticField(0x42708);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(PlayChatPlusStoryNode_Class_3_37E07B467A9BD0D1_TypeDefinitionIndex)->GetStaticField(0x42710);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(PlayChatPlusStoryNode_Class_3_37E07B467A9BD0D1_TypeDefinitionIndex)->GetStaticField(0x42718);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_10()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PlayChatPlusStoryNode_Class_3_37E07B467A9BD0D1_TypeDefinitionIndex)->GetStaticField(0x42720);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_PLAYCHATPLUSSTORYNODE_CLASS_3_37E07B467A9BD0D1__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_PLAYCHATPLUSSTORYNODE_CLASS_3_37E07B467A9BD0D1__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_PLAYCHATPLUSSTORYNODE_CLASS_3_37E07B467A9BD0D1_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::PlayChatPlusStoryNode*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::PlayChatPlusStoryNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_PLAYCHATPLUSSTORYNODE_CLASS_3_37E07B467A9BD0D1_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::PlayChatPlusStoryNode*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::PlayChatPlusStoryNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_PLAYCHATPLUSSTORYNODE_CLASS_3_37E07B467A9BD0D1_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
