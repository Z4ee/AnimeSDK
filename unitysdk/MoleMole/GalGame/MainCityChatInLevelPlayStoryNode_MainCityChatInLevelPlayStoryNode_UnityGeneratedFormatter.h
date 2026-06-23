#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/InLevelChatEntitySlot.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Battle { class AnimatorParamControl; }
namespace MoleMole::GalGame { class MainCityChatInLevelPlayStoryNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_MAINCITYCHATINLEVELPLAYSTORYNODE_MAINCITYCHATINLEVELPLAYSTORYNODE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x10D4AEE0)
#define MOLEMOLE_GALGAME_MAINCITYCHATINLEVELPLAYSTORYNODE_MAINCITYCHATINLEVELPLAYSTORYNODE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x10D4AEF0)
#define MOLEMOLE_GALGAME_MAINCITYCHATINLEVELPLAYSTORYNODE_MAINCITYCHATINLEVELPLAYSTORYNODE_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x10D4B630)
#define MOLEMOLE_GALGAME_MAINCITYCHATINLEVELPLAYSTORYNODE_MAINCITYCHATINLEVELPLAYSTORYNODE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x10D4BA90)
#define MOLEMOLE_GALGAME_MAINCITYCHATINLEVELPLAYSTORYNODE_MAINCITYCHATINLEVELPLAYSTORYNODE_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x10D4BA50)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatInLevelPlayStoryNode_MainCityChatInLevelPlayStoryNode_UnityGeneratedFormatter_TypeDefinitionIndex = 72728;

	class MainCityChatInLevelPlayStoryNode_MainCityChatInLevelPlayStoryNode_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatInLevelPlayStoryNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatInLevelPlayStoryNode_MainCityChatInLevelPlayStoryNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x34220);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::AnimatorParamControl*>** StaticGet_CachedSerializer6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Battle::AnimatorParamControl*>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatInLevelPlayStoryNode_MainCityChatInLevelPlayStoryNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x34228);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatInLevelPlayStoryNode_MainCityChatInLevelPlayStoryNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x34230);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatInLevelPlayStoryNode_MainCityChatInLevelPlayStoryNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x34238);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::InLevelChatEntitySlot>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::InLevelChatEntitySlot>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatInLevelPlayStoryNode_MainCityChatInLevelPlayStoryNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x34240);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatInLevelPlayStoryNode_MainCityChatInLevelPlayStoryNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x34248);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatInLevelPlayStoryNode_MainCityChatInLevelPlayStoryNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x34250);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATINLEVELPLAYSTORYNODE_MAINCITYCHATINLEVELPLAYSTORYNODE_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATINLEVELPLAYSTORYNODE_MAINCITYCHATINLEVELPLAYSTORYNODE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATINLEVELPLAYSTORYNODE_MAINCITYCHATINLEVELPLAYSTORYNODE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatInLevelPlayStoryNode*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatInLevelPlayStoryNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATINLEVELPLAYSTORYNODE_MAINCITYCHATINLEVELPLAYSTORYNODE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatInLevelPlayStoryNode*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatInLevelPlayStoryNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATINLEVELPLAYSTORYNODE_MAINCITYCHATINLEVELPLAYSTORYNODE_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
