#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatSyncServerDataConfig; }
namespace MoleMole::GalGame { class MainCityChatSyncServerDataNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSYNCSERVERDATANODE_MAINCITYCHATSYNCSERVERDATANODE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1428A600)
#define MOLEMOLE_GALGAME_MAINCITYCHATSYNCSERVERDATANODE_MAINCITYCHATSYNCSERVERDATANODE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1428A610)
#define MOLEMOLE_GALGAME_MAINCITYCHATSYNCSERVERDATANODE_MAINCITYCHATSYNCSERVERDATANODE_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1428A8B0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSYNCSERVERDATANODE_MAINCITYCHATSYNCSERVERDATANODE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1428AAA0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSYNCSERVERDATANODE_MAINCITYCHATSYNCSERVERDATANODE_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1428AA60)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatSyncServerDataNode_MainCityChatSyncServerDataNode_UnityGeneratedFormatter_TypeDefinitionIndex = 65639;

	class MainCityChatSyncServerDataNode_MainCityChatSyncServerDataNode_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatSyncServerDataNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatSyncServerDataNode_MainCityChatSyncServerDataNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x45B20);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatSyncServerDataConfig*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatSyncServerDataConfig*>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatSyncServerDataNode_MainCityChatSyncServerDataNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x45B28);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatSyncServerDataNode_MainCityChatSyncServerDataNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x45B30);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSYNCSERVERDATANODE_MAINCITYCHATSYNCSERVERDATANODE_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSYNCSERVERDATANODE_MAINCITYCHATSYNCSERVERDATANODE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSYNCSERVERDATANODE_MAINCITYCHATSYNCSERVERDATANODE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatSyncServerDataNode*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatSyncServerDataNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSYNCSERVERDATANODE_MAINCITYCHATSYNCSERVERDATANODE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatSyncServerDataNode*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatSyncServerDataNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSYNCSERVERDATANODE_MAINCITYCHATSYNCSERVERDATANODE_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
