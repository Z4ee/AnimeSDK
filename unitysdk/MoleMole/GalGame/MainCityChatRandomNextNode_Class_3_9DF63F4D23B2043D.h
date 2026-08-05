#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatBranchItem; }
namespace MoleMole::GalGame { class MainCityChatRandomNextNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_MAINCITYCHATRANDOMNEXTNODE_CLASS_3_9DF63F4D23B2043D_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1924DF40)
#define MOLEMOLE_GALGAME_MAINCITYCHATRANDOMNEXTNODE_CLASS_3_9DF63F4D23B2043D_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1924DF50)
#define MOLEMOLE_GALGAME_MAINCITYCHATRANDOMNEXTNODE_CLASS_3_9DF63F4D23B2043D_WRITE_OFFSET UNITYSDK_OFFSET(0x1924E1A0)
#define MOLEMOLE_GALGAME_MAINCITYCHATRANDOMNEXTNODE_CLASS_3_9DF63F4D23B2043D__CCTOR_OFFSET UNITYSDK_OFFSET(0x1924E360)
#define MOLEMOLE_GALGAME_MAINCITYCHATRANDOMNEXTNODE_CLASS_3_9DF63F4D23B2043D__CTOR_OFFSET UNITYSDK_OFFSET(0x1924E320)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatRandomNextNode_Class_3_9DF63F4D23B2043D_TypeDefinitionIndex = 53797;

	class MainCityChatRandomNextNode_Class_3_9DF63F4D23B2043D : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatRandomNextNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatRandomNextNode_Class_3_9DF63F4D23B2043D_TypeDefinitionIndex)->GetStaticField(0x4FD40);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::MainCityChatBranchItem*>*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::MainCityChatBranchItem*>*>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatRandomNextNode_Class_3_9DF63F4D23B2043D_TypeDefinitionIndex)->GetStaticField(0x4FD48);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatRandomNextNode_Class_3_9DF63F4D23B2043D_TypeDefinitionIndex)->GetStaticField(0x4FD50);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATRANDOMNEXTNODE_CLASS_3_9DF63F4D23B2043D__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATRANDOMNEXTNODE_CLASS_3_9DF63F4D23B2043D__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATRANDOMNEXTNODE_CLASS_3_9DF63F4D23B2043D_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatRandomNextNode*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatRandomNextNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATRANDOMNEXTNODE_CLASS_3_9DF63F4D23B2043D_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatRandomNextNode*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatRandomNextNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATRANDOMNEXTNODE_CLASS_3_9DF63F4D23B2043D_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
