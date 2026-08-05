#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeType.h"
#include "unitysdk/MoleMole/GalGame/ModelConfigTemplateType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatShow3DModelNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSHOW3DMODELNODE_CLASS_3_B375FA498DE42337_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x107E06D0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOW3DMODELNODE_CLASS_3_B375FA498DE42337_READMEMBER_OFFSET UNITYSDK_OFFSET(0x107E06E0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOW3DMODELNODE_CLASS_3_B375FA498DE42337_WRITE_OFFSET UNITYSDK_OFFSET(0x107E09F0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOW3DMODELNODE_CLASS_3_B375FA498DE42337__CCTOR_OFFSET UNITYSDK_OFFSET(0x107E0C10)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOW3DMODELNODE_CLASS_3_B375FA498DE42337__CTOR_OFFSET UNITYSDK_OFFSET(0x107E0BD0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatShow3DModelNode_Class_3_B375FA498DE42337_TypeDefinitionIndex = 85260;

	class MainCityChatShow3DModelNode_Class_3_B375FA498DE42337 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatShow3DModelNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatShow3DModelNode_Class_3_B375FA498DE42337_TypeDefinitionIndex)->GetStaticField(0x4E960);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatShow3DModelNode_Class_3_B375FA498DE42337_TypeDefinitionIndex)->GetStaticField(0x4E968);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::ModelConfigTemplateType>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::ModelConfigTemplateType>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatShow3DModelNode_Class_3_B375FA498DE42337_TypeDefinitionIndex)->GetStaticField(0x4E970);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatShow3DModelNode_Class_3_B375FA498DE42337_TypeDefinitionIndex)->GetStaticField(0x4E978);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOW3DMODELNODE_CLASS_3_B375FA498DE42337__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOW3DMODELNODE_CLASS_3_B375FA498DE42337__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOW3DMODELNODE_CLASS_3_B375FA498DE42337_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatShow3DModelNode*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatShow3DModelNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOW3DMODELNODE_CLASS_3_B375FA498DE42337_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatShow3DModelNode*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatShow3DModelNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOW3DMODELNODE_CLASS_3_B375FA498DE42337_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
