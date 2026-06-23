#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatSetExitChatTransitionNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSETEXITCHATTRANSITIONNODE_MAINCITYCHATSETEXITCHATTRANSITIONNODE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1512C170)
#define MOLEMOLE_GALGAME_MAINCITYCHATSETEXITCHATTRANSITIONNODE_MAINCITYCHATSETEXITCHATTRANSITIONNODE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1512C180)
#define MOLEMOLE_GALGAME_MAINCITYCHATSETEXITCHATTRANSITIONNODE_MAINCITYCHATSETEXITCHATTRANSITIONNODE_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1512C420)
#define MOLEMOLE_GALGAME_MAINCITYCHATSETEXITCHATTRANSITIONNODE_MAINCITYCHATSETEXITCHATTRANSITIONNODE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1512C610)
#define MOLEMOLE_GALGAME_MAINCITYCHATSETEXITCHATTRANSITIONNODE_MAINCITYCHATSETEXITCHATTRANSITIONNODE_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1512C5D0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatSetExitChatTransitionNode_MainCityChatSetExitChatTransitionNode_UnityGeneratedFormatter_TypeDefinitionIndex = 43152;

	class MainCityChatSetExitChatTransitionNode_MainCityChatSetExitChatTransitionNode_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatSetExitChatTransitionNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatSetExitChatTransitionNode_MainCityChatSetExitChatTransitionNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41060);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatSetExitChatTransitionNode_MainCityChatSetExitChatTransitionNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41068);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatSetExitChatTransitionNode_MainCityChatSetExitChatTransitionNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41070);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSETEXITCHATTRANSITIONNODE_MAINCITYCHATSETEXITCHATTRANSITIONNODE_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSETEXITCHATTRANSITIONNODE_MAINCITYCHATSETEXITCHATTRANSITIONNODE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSETEXITCHATTRANSITIONNODE_MAINCITYCHATSETEXITCHATTRANSITIONNODE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatSetExitChatTransitionNode*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatSetExitChatTransitionNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSETEXITCHATTRANSITIONNODE_MAINCITYCHATSETEXITCHATTRANSITIONNODE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatSetExitChatTransitionNode*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatSetExitChatTransitionNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSETEXITCHATTRANSITIONNODE_MAINCITYCHATSETEXITCHATTRANSITIONNODE_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
