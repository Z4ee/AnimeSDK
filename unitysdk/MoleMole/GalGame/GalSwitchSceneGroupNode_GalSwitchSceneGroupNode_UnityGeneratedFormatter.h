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

#define MOLEMOLE_GALGAME_GALSWITCHSCENEGROUPNODE_GALSWITCHSCENEGROUPNODE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x14287980)
#define MOLEMOLE_GALGAME_GALSWITCHSCENEGROUPNODE_GALSWITCHSCENEGROUPNODE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x14287990)
#define MOLEMOLE_GALGAME_GALSWITCHSCENEGROUPNODE_GALSWITCHSCENEGROUPNODE_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x14287D90)
#define MOLEMOLE_GALGAME_GALSWITCHSCENEGROUPNODE_GALSWITCHSCENEGROUPNODE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x14288030)
#define MOLEMOLE_GALGAME_GALSWITCHSCENEGROUPNODE_GALSWITCHSCENEGROUPNODE_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x14287FF0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalSwitchSceneGroupNode_GalSwitchSceneGroupNode_UnityGeneratedFormatter_TypeDefinitionIndex = 69685;

	class GalSwitchSceneGroupNode_GalSwitchSceneGroupNode_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::GalSwitchSceneGroupNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalPlayableNodeType>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(GalSwitchSceneGroupNode_GalSwitchSceneGroupNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x45A60);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GalSwitchSceneGroupNode_GalSwitchSceneGroupNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x45A68);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalSwitchSceneGroupNode_AnimLength>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalSwitchSceneGroupNode_AnimLength>**)Il2CppClass::FromTypeDefinitionIndex(GalSwitchSceneGroupNode_GalSwitchSceneGroupNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x45A70);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::SwitchSceneConfig*>*>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::SwitchSceneConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(GalSwitchSceneGroupNode_GalSwitchSceneGroupNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x45A78);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSWITCHSCENEGROUPNODE_GALSWITCHSCENEGROUPNODE_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSWITCHSCENEGROUPNODE_GALSWITCHSCENEGROUPNODE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSWITCHSCENEGROUPNODE_GALSWITCHSCENEGROUPNODE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::GalSwitchSceneGroupNode*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalSwitchSceneGroupNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSWITCHSCENEGROUPNODE_GALSWITCHSCENEGROUPNODE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::GalGame::GalSwitchSceneGroupNode*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalSwitchSceneGroupNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSWITCHSCENEGROUPNODE_GALSWITCHSCENEGROUPNODE_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
