#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatCustomTransitionNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_GALGAME_MAINCITYCHATCUSTOMTRANSITIONNODE_MAINCITYCHATCUSTOMTRANSITIONNODE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x130209B0)
#define MOLEMOLE_GALGAME_MAINCITYCHATCUSTOMTRANSITIONNODE_MAINCITYCHATCUSTOMTRANSITIONNODE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x130209C0)
#define MOLEMOLE_GALGAME_MAINCITYCHATCUSTOMTRANSITIONNODE_MAINCITYCHATCUSTOMTRANSITIONNODE_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x13020C60)
#define MOLEMOLE_GALGAME_MAINCITYCHATCUSTOMTRANSITIONNODE_MAINCITYCHATCUSTOMTRANSITIONNODE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x13020E50)
#define MOLEMOLE_GALGAME_MAINCITYCHATCUSTOMTRANSITIONNODE_MAINCITYCHATCUSTOMTRANSITIONNODE_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x13020E10)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatCustomTransitionNode_MainCityChatCustomTransitionNode_UnityGeneratedFormatter_TypeDefinitionIndex = 77239;

	class MainCityChatCustomTransitionNode_MainCityChatCustomTransitionNode_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatCustomTransitionNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatCustomTransitionNode_MainCityChatCustomTransitionNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x49D80);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatCustomTransitionNode_MainCityChatCustomTransitionNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x49D88);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCUSTOMTRANSITIONNODE_MAINCITYCHATCUSTOMTRANSITIONNODE_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCUSTOMTRANSITIONNODE_MAINCITYCHATCUSTOMTRANSITIONNODE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCUSTOMTRANSITIONNODE_MAINCITYCHATCUSTOMTRANSITIONNODE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatCustomTransitionNode*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatCustomTransitionNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCUSTOMTRANSITIONNODE_MAINCITYCHATCUSTOMTRANSITIONNODE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatCustomTransitionNode*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatCustomTransitionNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCUSTOMTRANSITIONNODE_MAINCITYCHATCUSTOMTRANSITIONNODE_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
