#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalPlayableNodeType.h"
#include "unitysdk/MoleMole/GalGame/GalSwitchSceneGroupNode_AnimLength.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class GalSwitchSceneGroupNode; }
namespace MoleMole::GalGame { class SwitchSceneConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_GALSWITCHSCENEGROUPNODE_CLASS_3_9310B56B6C329849_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19084B00)
#define MOLEMOLE_GALGAME_GALSWITCHSCENEGROUPNODE_CLASS_3_9310B56B6C329849_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19084B10)
#define MOLEMOLE_GALGAME_GALSWITCHSCENEGROUPNODE_CLASS_3_9310B56B6C329849_WRITE_OFFSET UNITYSDK_OFFSET(0x19084EC0)
#define MOLEMOLE_GALGAME_GALSWITCHSCENEGROUPNODE_CLASS_3_9310B56B6C329849__CCTOR_OFFSET UNITYSDK_OFFSET(0x19085130)
#define MOLEMOLE_GALGAME_GALSWITCHSCENEGROUPNODE_CLASS_3_9310B56B6C329849__CTOR_OFFSET UNITYSDK_OFFSET(0x190850F0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalSwitchSceneGroupNode_Class_3_9310B56B6C329849_TypeDefinitionIndex = 71230;

	class GalSwitchSceneGroupNode_Class_3_9310B56B6C329849 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::GalSwitchSceneGroupNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GalSwitchSceneGroupNode_Class_3_9310B56B6C329849_TypeDefinitionIndex)->GetStaticField(0x4A8A0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalPlayableNodeType>** StaticGet_Field_3_3()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(GalSwitchSceneGroupNode_Class_3_9310B56B6C329849_TypeDefinitionIndex)->GetStaticField(0x4A8A8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::SwitchSceneConfig*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::SwitchSceneConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(GalSwitchSceneGroupNode_Class_3_9310B56B6C329849_TypeDefinitionIndex)->GetStaticField(0x4A8B0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalSwitchSceneGroupNode_AnimLength>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalSwitchSceneGroupNode_AnimLength>**)Il2CppClass::FromTypeDefinitionIndex(GalSwitchSceneGroupNode_Class_3_9310B56B6C329849_TypeDefinitionIndex)->GetStaticField(0x4A8B8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSWITCHSCENEGROUPNODE_CLASS_3_9310B56B6C329849__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSWITCHSCENEGROUPNODE_CLASS_3_9310B56B6C329849__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSWITCHSCENEGROUPNODE_CLASS_3_9310B56B6C329849_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::GalSwitchSceneGroupNode*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalSwitchSceneGroupNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSWITCHSCENEGROUPNODE_CLASS_3_9310B56B6C329849_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::GalSwitchSceneGroupNode*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalSwitchSceneGroupNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSWITCHSCENEGROUPNODE_CLASS_3_9310B56B6C329849_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
