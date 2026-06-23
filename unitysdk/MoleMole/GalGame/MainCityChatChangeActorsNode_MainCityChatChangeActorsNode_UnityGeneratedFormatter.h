#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatChangeActorsNode; }
namespace MoleMole::GalGame { class TagBoolPair; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_MAINCITYCHATCHANGEACTORSNODE_MAINCITYCHATCHANGEACTORSNODE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x17E7DE20)
#define MOLEMOLE_GALGAME_MAINCITYCHATCHANGEACTORSNODE_MAINCITYCHATCHANGEACTORSNODE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x17E7DE30)
#define MOLEMOLE_GALGAME_MAINCITYCHATCHANGEACTORSNODE_MAINCITYCHATCHANGEACTORSNODE_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x17E7E4C0)
#define MOLEMOLE_GALGAME_MAINCITYCHATCHANGEACTORSNODE_MAINCITYCHATCHANGEACTORSNODE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E7E8D0)
#define MOLEMOLE_GALGAME_MAINCITYCHATCHANGEACTORSNODE_MAINCITYCHATCHANGEACTORSNODE_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x17E7E890)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatChangeActorsNode_MainCityChatChangeActorsNode_UnityGeneratedFormatter_TypeDefinitionIndex = 73982;

	class MainCityChatChangeActorsNode_MainCityChatChangeActorsNode_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatChangeActorsNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatChangeActorsNode_MainCityChatChangeActorsNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44DC0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatChangeActorsNode_MainCityChatChangeActorsNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44DC8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::UInt32>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatChangeActorsNode_MainCityChatChangeActorsNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44DD0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::TagBoolPair*>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::TagBoolPair*>*>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatChangeActorsNode_MainCityChatChangeActorsNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44DD8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatChangeActorsNode_MainCityChatChangeActorsNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44DE0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatChangeActorsNode_MainCityChatChangeActorsNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x44DE8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCHANGEACTORSNODE_MAINCITYCHATCHANGEACTORSNODE_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCHANGEACTORSNODE_MAINCITYCHATCHANGEACTORSNODE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCHANGEACTORSNODE_MAINCITYCHATCHANGEACTORSNODE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatChangeActorsNode*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatChangeActorsNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCHANGEACTORSNODE_MAINCITYCHATCHANGEACTORSNODE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatChangeActorsNode*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatChangeActorsNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCHANGEACTORSNODE_MAINCITYCHATCHANGEACTORSNODE_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
