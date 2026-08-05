#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatJumpChapterNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_GALGAME_MAINCITYCHATJUMPCHAPTERNODE_CLASS_3_4BCD10AF2117C101_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x129A4CB0)
#define MOLEMOLE_GALGAME_MAINCITYCHATJUMPCHAPTERNODE_CLASS_3_4BCD10AF2117C101_READMEMBER_OFFSET UNITYSDK_OFFSET(0x129A4CC0)
#define MOLEMOLE_GALGAME_MAINCITYCHATJUMPCHAPTERNODE_CLASS_3_4BCD10AF2117C101_WRITE_OFFSET UNITYSDK_OFFSET(0x129A4FD0)
#define MOLEMOLE_GALGAME_MAINCITYCHATJUMPCHAPTERNODE_CLASS_3_4BCD10AF2117C101__CCTOR_OFFSET UNITYSDK_OFFSET(0x129A51F0)
#define MOLEMOLE_GALGAME_MAINCITYCHATJUMPCHAPTERNODE_CLASS_3_4BCD10AF2117C101__CTOR_OFFSET UNITYSDK_OFFSET(0x129A51B0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatJumpChapterNode_Class_3_4BCD10AF2117C101_TypeDefinitionIndex = 62690;

	class MainCityChatJumpChapterNode_Class_3_4BCD10AF2117C101 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatJumpChapterNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatJumpChapterNode_Class_3_4BCD10AF2117C101_TypeDefinitionIndex)->GetStaticField(0x50EA0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatJumpChapterNode_Class_3_4BCD10AF2117C101_TypeDefinitionIndex)->GetStaticField(0x50EA8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatJumpChapterNode_Class_3_4BCD10AF2117C101_TypeDefinitionIndex)->GetStaticField(0x50EB0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATJUMPCHAPTERNODE_CLASS_3_4BCD10AF2117C101__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATJUMPCHAPTERNODE_CLASS_3_4BCD10AF2117C101__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATJUMPCHAPTERNODE_CLASS_3_4BCD10AF2117C101_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatJumpChapterNode*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatJumpChapterNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATJUMPCHAPTERNODE_CLASS_3_4BCD10AF2117C101_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatJumpChapterNode*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatJumpChapterNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATJUMPCHAPTERNODE_CLASS_3_4BCD10AF2117C101_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
