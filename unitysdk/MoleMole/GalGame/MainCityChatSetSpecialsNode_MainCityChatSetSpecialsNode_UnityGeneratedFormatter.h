#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class SpecialKeyValue; }
namespace MoleMole::GalGame { class MainCityChatSetSpecialsNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSETSPECIALSNODE_MAINCITYCHATSETSPECIALSNODE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1161A0D0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSETSPECIALSNODE_MAINCITYCHATSETSPECIALSNODE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1161A0E0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSETSPECIALSNODE_MAINCITYCHATSETSPECIALSNODE_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1161A380)
#define MOLEMOLE_GALGAME_MAINCITYCHATSETSPECIALSNODE_MAINCITYCHATSETSPECIALSNODE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1161A570)
#define MOLEMOLE_GALGAME_MAINCITYCHATSETSPECIALSNODE_MAINCITYCHATSETSPECIALSNODE_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1161A530)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatSetSpecialsNode_MainCityChatSetSpecialsNode_UnityGeneratedFormatter_TypeDefinitionIndex = 53473;

	class MainCityChatSetSpecialsNode_MainCityChatSetSpecialsNode_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatSetSpecialsNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::SpecialKeyValue*>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::SpecialKeyValue*>*>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatSetSpecialsNode_MainCityChatSetSpecialsNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x468A0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatSetSpecialsNode_MainCityChatSetSpecialsNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x468A8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatSetSpecialsNode_MainCityChatSetSpecialsNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x468B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSETSPECIALSNODE_MAINCITYCHATSETSPECIALSNODE_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSETSPECIALSNODE_MAINCITYCHATSETSPECIALSNODE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSETSPECIALSNODE_MAINCITYCHATSETSPECIALSNODE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatSetSpecialsNode*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatSetSpecialsNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSETSPECIALSNODE_MAINCITYCHATSETSPECIALSNODE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatSetSpecialsNode*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatSetSpecialsNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSETSPECIALSNODE_MAINCITYCHATSETSPECIALSNODE_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
