#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatNPCLocation.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatPlayStoryNode; }
namespace MoleMole::GalGame { class SpeakerActionCfg; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_MAINCITYCHATPLAYSTORYNODE_MAINCITYCHATPLAYSTORYNODE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A031C80)
#define MOLEMOLE_GALGAME_MAINCITYCHATPLAYSTORYNODE_MAINCITYCHATPLAYSTORYNODE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A031C90)
#define MOLEMOLE_GALGAME_MAINCITYCHATPLAYSTORYNODE_MAINCITYCHATPLAYSTORYNODE_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1A0329A0)
#define MOLEMOLE_GALGAME_MAINCITYCHATPLAYSTORYNODE_MAINCITYCHATPLAYSTORYNODE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A033120)
#define MOLEMOLE_GALGAME_MAINCITYCHATPLAYSTORYNODE_MAINCITYCHATPLAYSTORYNODE_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0330E0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatPlayStoryNode_MainCityChatPlayStoryNode_UnityGeneratedFormatter_TypeDefinitionIndex = 43081;

	class MainCityChatPlayStoryNode_MainCityChatPlayStoryNode_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatPlayStoryNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatNPCLocation>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatNPCLocation>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatPlayStoryNode_MainCityChatPlayStoryNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4BDE0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatPlayStoryNode_MainCityChatPlayStoryNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4BDE8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::SpeakerActionCfg*>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::SpeakerActionCfg*>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatPlayStoryNode_MainCityChatPlayStoryNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4BDF0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatPlayStoryNode_MainCityChatPlayStoryNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4BDF8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatPlayStoryNode_MainCityChatPlayStoryNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4BE00);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatPlayStoryNode_MainCityChatPlayStoryNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4BE08);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatPlayStoryNode_MainCityChatPlayStoryNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4BE10);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATPLAYSTORYNODE_MAINCITYCHATPLAYSTORYNODE_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATPLAYSTORYNODE_MAINCITYCHATPLAYSTORYNODE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATPLAYSTORYNODE_MAINCITYCHATPLAYSTORYNODE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatPlayStoryNode*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayStoryNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATPLAYSTORYNODE_MAINCITYCHATPLAYSTORYNODE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatPlayStoryNode*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayStoryNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATPLAYSTORYNODE_MAINCITYCHATPLAYSTORYNODE_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
