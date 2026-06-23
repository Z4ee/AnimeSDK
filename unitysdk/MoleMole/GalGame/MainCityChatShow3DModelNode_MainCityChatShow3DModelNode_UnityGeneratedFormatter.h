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

#define MOLEMOLE_GALGAME_MAINCITYCHATSHOW3DMODELNODE_MAINCITYCHATSHOW3DMODELNODE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1912A810)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOW3DMODELNODE_MAINCITYCHATSHOW3DMODELNODE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1912A820)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOW3DMODELNODE_MAINCITYCHATSHOW3DMODELNODE_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1912AB70)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOW3DMODELNODE_MAINCITYCHATSHOW3DMODELNODE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1912ADC0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOW3DMODELNODE_MAINCITYCHATSHOW3DMODELNODE_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1912AD80)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatShow3DModelNode_MainCityChatShow3DModelNode_UnityGeneratedFormatter_TypeDefinitionIndex = 66787;

	class MainCityChatShow3DModelNode_MainCityChatShow3DModelNode_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatShow3DModelNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatShow3DModelNode_MainCityChatShow3DModelNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4CCD0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatShow3DModelNode_MainCityChatShow3DModelNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4CCD8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatShow3DModelNode_MainCityChatShow3DModelNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4CCE0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::ModelConfigTemplateType>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::ModelConfigTemplateType>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatShow3DModelNode_MainCityChatShow3DModelNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x4CCE8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOW3DMODELNODE_MAINCITYCHATSHOW3DMODELNODE_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOW3DMODELNODE_MAINCITYCHATSHOW3DMODELNODE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOW3DMODELNODE_MAINCITYCHATSHOW3DMODELNODE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatShow3DModelNode*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatShow3DModelNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOW3DMODELNODE_MAINCITYCHATSHOW3DMODELNODE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatShow3DModelNode*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatShow3DModelNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOW3DMODELNODE_MAINCITYCHATSHOW3DMODELNODE_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
