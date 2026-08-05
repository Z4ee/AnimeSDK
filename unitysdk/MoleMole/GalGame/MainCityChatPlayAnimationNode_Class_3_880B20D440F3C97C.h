#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatPlayAnimationNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_GALGAME_MAINCITYCHATPLAYANIMATIONNODE_CLASS_3_880B20D440F3C97C_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x129A5280)
#define MOLEMOLE_GALGAME_MAINCITYCHATPLAYANIMATIONNODE_CLASS_3_880B20D440F3C97C_READMEMBER_OFFSET UNITYSDK_OFFSET(0x129A5290)
#define MOLEMOLE_GALGAME_MAINCITYCHATPLAYANIMATIONNODE_CLASS_3_880B20D440F3C97C_WRITE_OFFSET UNITYSDK_OFFSET(0x129A55A0)
#define MOLEMOLE_GALGAME_MAINCITYCHATPLAYANIMATIONNODE_CLASS_3_880B20D440F3C97C__CCTOR_OFFSET UNITYSDK_OFFSET(0x129A57C0)
#define MOLEMOLE_GALGAME_MAINCITYCHATPLAYANIMATIONNODE_CLASS_3_880B20D440F3C97C__CTOR_OFFSET UNITYSDK_OFFSET(0x129A5780)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatPlayAnimationNode_Class_3_880B20D440F3C97C_TypeDefinitionIndex = 80608;

	class MainCityChatPlayAnimationNode_Class_3_880B20D440F3C97C : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatPlayAnimationNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatPlayAnimationNode_Class_3_880B20D440F3C97C_TypeDefinitionIndex)->GetStaticField(0x50EC0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatPlayAnimationNode_Class_3_880B20D440F3C97C_TypeDefinitionIndex)->GetStaticField(0x50EC8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatPlayAnimationNode_Class_3_880B20D440F3C97C_TypeDefinitionIndex)->GetStaticField(0x50ED0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATPLAYANIMATIONNODE_CLASS_3_880B20D440F3C97C__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATPLAYANIMATIONNODE_CLASS_3_880B20D440F3C97C__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATPLAYANIMATIONNODE_CLASS_3_880B20D440F3C97C_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatPlayAnimationNode*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayAnimationNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATPLAYANIMATIONNODE_CLASS_3_880B20D440F3C97C_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatPlayAnimationNode*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatPlayAnimationNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATPLAYANIMATIONNODE_CLASS_3_880B20D440F3C97C_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
