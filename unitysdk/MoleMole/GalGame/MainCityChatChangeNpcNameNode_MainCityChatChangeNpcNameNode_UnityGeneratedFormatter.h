#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatChangeNpcNameNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_MAINCITYCHATCHANGENPCNAMENODE_MAINCITYCHATCHANGENPCNAMENODE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x11619940)
#define MOLEMOLE_GALGAME_MAINCITYCHATCHANGENPCNAMENODE_MAINCITYCHATCHANGENPCNAMENODE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x11619950)
#define MOLEMOLE_GALGAME_MAINCITYCHATCHANGENPCNAMENODE_MAINCITYCHATCHANGENPCNAMENODE_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x11619CA0)
#define MOLEMOLE_GALGAME_MAINCITYCHATCHANGENPCNAMENODE_MAINCITYCHATCHANGENPCNAMENODE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x11619EF0)
#define MOLEMOLE_GALGAME_MAINCITYCHATCHANGENPCNAMENODE_MAINCITYCHATCHANGENPCNAMENODE_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x11619EB0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatChangeNpcNameNode_MainCityChatChangeNpcNameNode_UnityGeneratedFormatter_TypeDefinitionIndex = 86966;

	class MainCityChatChangeNpcNameNode_MainCityChatChangeNpcNameNode_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatChangeNpcNameNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatChangeNpcNameNode_MainCityChatChangeNpcNameNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x46880);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatChangeNpcNameNode_MainCityChatChangeNpcNameNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x46888);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatChangeNpcNameNode_MainCityChatChangeNpcNameNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x46890);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatChangeNpcNameNode_MainCityChatChangeNpcNameNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x46898);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCHANGENPCNAMENODE_MAINCITYCHATCHANGENPCNAMENODE_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCHANGENPCNAMENODE_MAINCITYCHATCHANGENPCNAMENODE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCHANGENPCNAMENODE_MAINCITYCHATCHANGENPCNAMENODE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatChangeNpcNameNode*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatChangeNpcNameNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCHANGENPCNAMENODE_MAINCITYCHATCHANGENPCNAMENODE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatChangeNpcNameNode*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatChangeNpcNameNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCHANGENPCNAMENODE_MAINCITYCHATCHANGENPCNAMENODE_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
