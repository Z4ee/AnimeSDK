#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatRandomChoiceDisplayItem; }
namespace MoleMole::GalGame { class MainCityChatRandomChoiceNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_MAINCITYCHATRANDOMCHOICENODE_CLASS_3_BB25D7116B721BED_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x168561D0)
#define MOLEMOLE_GALGAME_MAINCITYCHATRANDOMCHOICENODE_CLASS_3_BB25D7116B721BED_READMEMBER_OFFSET UNITYSDK_OFFSET(0x168561E0)
#define MOLEMOLE_GALGAME_MAINCITYCHATRANDOMCHOICENODE_CLASS_3_BB25D7116B721BED_WRITE_OFFSET UNITYSDK_OFFSET(0x16856430)
#define MOLEMOLE_GALGAME_MAINCITYCHATRANDOMCHOICENODE_CLASS_3_BB25D7116B721BED__CCTOR_OFFSET UNITYSDK_OFFSET(0x168565F0)
#define MOLEMOLE_GALGAME_MAINCITYCHATRANDOMCHOICENODE_CLASS_3_BB25D7116B721BED__CTOR_OFFSET UNITYSDK_OFFSET(0x168565B0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatRandomChoiceNode_Class_3_BB25D7116B721BED_TypeDefinitionIndex = 47221;

	class MainCityChatRandomChoiceNode_Class_3_BB25D7116B721BED : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatRandomChoiceNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatRandomChoiceNode_Class_3_BB25D7116B721BED_TypeDefinitionIndex)->GetStaticField(0x36750);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::MainCityChatRandomChoiceDisplayItem*>*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::MainCityChatRandomChoiceDisplayItem*>*>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatRandomChoiceNode_Class_3_BB25D7116B721BED_TypeDefinitionIndex)->GetStaticField(0x36758);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatRandomChoiceNode_Class_3_BB25D7116B721BED_TypeDefinitionIndex)->GetStaticField(0x36760);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATRANDOMCHOICENODE_CLASS_3_BB25D7116B721BED__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATRANDOMCHOICENODE_CLASS_3_BB25D7116B721BED__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATRANDOMCHOICENODE_CLASS_3_BB25D7116B721BED_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatRandomChoiceNode*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatRandomChoiceNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATRANDOMCHOICENODE_CLASS_3_BB25D7116B721BED_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatRandomChoiceNode*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatRandomChoiceNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATRANDOMCHOICENODE_CLASS_3_BB25D7116B721BED_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
