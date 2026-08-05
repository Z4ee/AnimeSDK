#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatBranchItem; }
namespace MoleMole::GalGame { class MainCityChatBranchNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_MAINCITYCHATBRANCHNODE_CLASS_3_7331AAB788B7D9C5_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x173783A0)
#define MOLEMOLE_GALGAME_MAINCITYCHATBRANCHNODE_CLASS_3_7331AAB788B7D9C5_READMEMBER_OFFSET UNITYSDK_OFFSET(0x173783B0)
#define MOLEMOLE_GALGAME_MAINCITYCHATBRANCHNODE_CLASS_3_7331AAB788B7D9C5_WRITE_OFFSET UNITYSDK_OFFSET(0x17378760)
#define MOLEMOLE_GALGAME_MAINCITYCHATBRANCHNODE_CLASS_3_7331AAB788B7D9C5__CCTOR_OFFSET UNITYSDK_OFFSET(0x173789D0)
#define MOLEMOLE_GALGAME_MAINCITYCHATBRANCHNODE_CLASS_3_7331AAB788B7D9C5__CTOR_OFFSET UNITYSDK_OFFSET(0x17378990)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatBranchNode_Class_3_7331AAB788B7D9C5_TypeDefinitionIndex = 68996;

	class MainCityChatBranchNode_Class_3_7331AAB788B7D9C5 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatBranchNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Int32>*>*>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatBranchNode_Class_3_7331AAB788B7D9C5_TypeDefinitionIndex)->GetStaticField(0x44D30);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatBranchNode_Class_3_7331AAB788B7D9C5_TypeDefinitionIndex)->GetStaticField(0x44D38);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatBranchNode_Class_3_7331AAB788B7D9C5_TypeDefinitionIndex)->GetStaticField(0x44D40);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatBranchItem*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatBranchItem*>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatBranchNode_Class_3_7331AAB788B7D9C5_TypeDefinitionIndex)->GetStaticField(0x44D48);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATBRANCHNODE_CLASS_3_7331AAB788B7D9C5__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATBRANCHNODE_CLASS_3_7331AAB788B7D9C5__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATBRANCHNODE_CLASS_3_7331AAB788B7D9C5_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatBranchNode*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatBranchNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATBRANCHNODE_CLASS_3_7331AAB788B7D9C5_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatBranchNode*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatBranchNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATBRANCHNODE_CLASS_3_7331AAB788B7D9C5_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
