#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatActionBase; }
namespace MoleMole::GalGame { class MainCityChatActionPlayNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_MAINCITYCHATACTIONPLAYNODE_MAINCITYCHATACTIONPLAYNODE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x16CAC760)
#define MOLEMOLE_GALGAME_MAINCITYCHATACTIONPLAYNODE_MAINCITYCHATACTIONPLAYNODE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x16CAC770)
#define MOLEMOLE_GALGAME_MAINCITYCHATACTIONPLAYNODE_MAINCITYCHATACTIONPLAYNODE_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x16CACA10)
#define MOLEMOLE_GALGAME_MAINCITYCHATACTIONPLAYNODE_MAINCITYCHATACTIONPLAYNODE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16CACC00)
#define MOLEMOLE_GALGAME_MAINCITYCHATACTIONPLAYNODE_MAINCITYCHATACTIONPLAYNODE_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x16CACBC0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatActionPlayNode_MainCityChatActionPlayNode_UnityGeneratedFormatter_TypeDefinitionIndex = 57947;

	class MainCityChatActionPlayNode_MainCityChatActionPlayNode_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatActionPlayNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatActionPlayNode_MainCityChatActionPlayNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x42E30);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::MainCityChatActionBase*>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::MainCityChatActionBase*>*>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatActionPlayNode_MainCityChatActionPlayNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x42E38);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatActionPlayNode_MainCityChatActionPlayNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x42E40);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATACTIONPLAYNODE_MAINCITYCHATACTIONPLAYNODE_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATACTIONPLAYNODE_MAINCITYCHATACTIONPLAYNODE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATACTIONPLAYNODE_MAINCITYCHATACTIONPLAYNODE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatActionPlayNode*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatActionPlayNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATACTIONPLAYNODE_MAINCITYCHATACTIONPLAYNODE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatActionPlayNode*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatActionPlayNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATACTIONPLAYNODE_MAINCITYCHATACTIONPLAYNODE_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
