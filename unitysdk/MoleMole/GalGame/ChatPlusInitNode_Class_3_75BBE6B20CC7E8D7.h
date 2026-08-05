#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class ChatPlusInitCfg; }
namespace MoleMole::GalGame { class ChatPlusInitNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_GALGAME_CHATPLUSINITNODE_CLASS_3_75BBE6B20CC7E8D7_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x136A2A30)
#define MOLEMOLE_GALGAME_CHATPLUSINITNODE_CLASS_3_75BBE6B20CC7E8D7_READMEMBER_OFFSET UNITYSDK_OFFSET(0x136A2A40)
#define MOLEMOLE_GALGAME_CHATPLUSINITNODE_CLASS_3_75BBE6B20CC7E8D7_WRITE_OFFSET UNITYSDK_OFFSET(0x136A2C90)
#define MOLEMOLE_GALGAME_CHATPLUSINITNODE_CLASS_3_75BBE6B20CC7E8D7__CCTOR_OFFSET UNITYSDK_OFFSET(0x136A2E50)
#define MOLEMOLE_GALGAME_CHATPLUSINITNODE_CLASS_3_75BBE6B20CC7E8D7__CTOR_OFFSET UNITYSDK_OFFSET(0x136A2E10)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int ChatPlusInitNode_Class_3_75BBE6B20CC7E8D7_TypeDefinitionIndex = 51360;

	class ChatPlusInitNode_Class_3_75BBE6B20CC7E8D7 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::ChatPlusInitNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::ChatPlusInitCfg*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::ChatPlusInitCfg*>**)Il2CppClass::FromTypeDefinitionIndex(ChatPlusInitNode_Class_3_75BBE6B20CC7E8D7_TypeDefinitionIndex)->GetStaticField(0x4D550);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(ChatPlusInitNode_Class_3_75BBE6B20CC7E8D7_TypeDefinitionIndex)->GetStaticField(0x4D558);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChatPlusInitNode_Class_3_75BBE6B20CC7E8D7_TypeDefinitionIndex)->GetStaticField(0x4D560);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_CHATPLUSINITNODE_CLASS_3_75BBE6B20CC7E8D7__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_CHATPLUSINITNODE_CLASS_3_75BBE6B20CC7E8D7__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_CHATPLUSINITNODE_CLASS_3_75BBE6B20CC7E8D7_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::ChatPlusInitNode*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::ChatPlusInitNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_CHATPLUSINITNODE_CLASS_3_75BBE6B20CC7E8D7_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::ChatPlusInitNode*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::ChatPlusInitNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_CHATPLUSINITNODE_CLASS_3_75BBE6B20CC7E8D7_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
