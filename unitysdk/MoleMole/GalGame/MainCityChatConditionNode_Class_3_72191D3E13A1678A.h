#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class BranchItem; }
namespace MoleMole::GalGame { class MainCityChatConditionNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_MAINCITYCHATCONDITIONNODE_CLASS_3_72191D3E13A1678A_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19DBDCB0)
#define MOLEMOLE_GALGAME_MAINCITYCHATCONDITIONNODE_CLASS_3_72191D3E13A1678A_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19DBDCC0)
#define MOLEMOLE_GALGAME_MAINCITYCHATCONDITIONNODE_CLASS_3_72191D3E13A1678A_WRITE_OFFSET UNITYSDK_OFFSET(0x19DBE070)
#define MOLEMOLE_GALGAME_MAINCITYCHATCONDITIONNODE_CLASS_3_72191D3E13A1678A__CCTOR_OFFSET UNITYSDK_OFFSET(0x19DBE2E0)
#define MOLEMOLE_GALGAME_MAINCITYCHATCONDITIONNODE_CLASS_3_72191D3E13A1678A__CTOR_OFFSET UNITYSDK_OFFSET(0x19DBE2A0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatConditionNode_Class_3_72191D3E13A1678A_TypeDefinitionIndex = 72790;

	class MainCityChatConditionNode_Class_3_72191D3E13A1678A : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatConditionNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatConditionNode_Class_3_72191D3E13A1678A_TypeDefinitionIndex)->GetStaticField(0x4C2A0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatConditionNode_Class_3_72191D3E13A1678A_TypeDefinitionIndex)->GetStaticField(0x4C2A8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::BranchItem*>*>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::BranchItem*>*>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatConditionNode_Class_3_72191D3E13A1678A_TypeDefinitionIndex)->GetStaticField(0x4C2B0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatConditionNode_Class_3_72191D3E13A1678A_TypeDefinitionIndex)->GetStaticField(0x4C2B8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatConditionNode_Class_3_72191D3E13A1678A_TypeDefinitionIndex)->GetStaticField(0x4C2C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCONDITIONNODE_CLASS_3_72191D3E13A1678A__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCONDITIONNODE_CLASS_3_72191D3E13A1678A__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCONDITIONNODE_CLASS_3_72191D3E13A1678A_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatConditionNode*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatConditionNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCONDITIONNODE_CLASS_3_72191D3E13A1678A_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatConditionNode*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatConditionNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCONDITIONNODE_CLASS_3_72191D3E13A1678A_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
