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

#define MOLEMOLE_GALGAME_MAINCITYCHATACTIONPLAYNODE_CLASS_3_B546C74F748B2BC6_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x190851F0)
#define MOLEMOLE_GALGAME_MAINCITYCHATACTIONPLAYNODE_CLASS_3_B546C74F748B2BC6_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19085200)
#define MOLEMOLE_GALGAME_MAINCITYCHATACTIONPLAYNODE_CLASS_3_B546C74F748B2BC6_WRITE_OFFSET UNITYSDK_OFFSET(0x19085450)
#define MOLEMOLE_GALGAME_MAINCITYCHATACTIONPLAYNODE_CLASS_3_B546C74F748B2BC6__CCTOR_OFFSET UNITYSDK_OFFSET(0x19085610)
#define MOLEMOLE_GALGAME_MAINCITYCHATACTIONPLAYNODE_CLASS_3_B546C74F748B2BC6__CTOR_OFFSET UNITYSDK_OFFSET(0x190855D0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatActionPlayNode_Class_3_B546C74F748B2BC6_TypeDefinitionIndex = 66562;

	class MainCityChatActionPlayNode_Class_3_B546C74F748B2BC6 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatActionPlayNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatActionPlayNode_Class_3_B546C74F748B2BC6_TypeDefinitionIndex)->GetStaticField(0x4A8C0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::MainCityChatActionBase*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::MainCityChatActionBase*>*>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatActionPlayNode_Class_3_B546C74F748B2BC6_TypeDefinitionIndex)->GetStaticField(0x4A8C8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatActionPlayNode_Class_3_B546C74F748B2BC6_TypeDefinitionIndex)->GetStaticField(0x4A8D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATACTIONPLAYNODE_CLASS_3_B546C74F748B2BC6__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATACTIONPLAYNODE_CLASS_3_B546C74F748B2BC6__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATACTIONPLAYNODE_CLASS_3_B546C74F748B2BC6_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatActionPlayNode*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatActionPlayNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATACTIONPLAYNODE_CLASS_3_B546C74F748B2BC6_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatActionPlayNode*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatActionPlayNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATACTIONPLAYNODE_CLASS_3_B546C74F748B2BC6_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
