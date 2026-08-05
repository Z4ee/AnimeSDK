#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatBranchItem; }
namespace MoleMole::GalGame { class MainCityChatShowUIConfig; }
namespace MoleMole::GalGame { class MainCityChatShowUINode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWUINODE_CLASS_3_A27823AD54C76132_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19085F50)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWUINODE_CLASS_3_A27823AD54C76132_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19085F60)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWUINODE_CLASS_3_A27823AD54C76132_WRITE_OFFSET UNITYSDK_OFFSET(0x19086270)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWUINODE_CLASS_3_A27823AD54C76132__CCTOR_OFFSET UNITYSDK_OFFSET(0x19086490)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWUINODE_CLASS_3_A27823AD54C76132__CTOR_OFFSET UNITYSDK_OFFSET(0x19086450)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatShowUINode_Class_3_A27823AD54C76132_TypeDefinitionIndex = 88754;

	class MainCityChatShowUINode_Class_3_A27823AD54C76132 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatShowUINode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatShowUINode_Class_3_A27823AD54C76132_TypeDefinitionIndex)->GetStaticField(0x4A910);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::MainCityChatBranchItem*>*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::MainCityChatBranchItem*>*>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatShowUINode_Class_3_A27823AD54C76132_TypeDefinitionIndex)->GetStaticField(0x4A918);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatShowUIConfig*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatShowUIConfig*>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatShowUINode_Class_3_A27823AD54C76132_TypeDefinitionIndex)->GetStaticField(0x4A920);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatShowUINode_Class_3_A27823AD54C76132_TypeDefinitionIndex)->GetStaticField(0x4A928);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWUINODE_CLASS_3_A27823AD54C76132__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWUINODE_CLASS_3_A27823AD54C76132__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWUINODE_CLASS_3_A27823AD54C76132_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatShowUINode*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatShowUINode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWUINODE_CLASS_3_A27823AD54C76132_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatShowUINode*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatShowUINode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWUINODE_CLASS_3_A27823AD54C76132_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
