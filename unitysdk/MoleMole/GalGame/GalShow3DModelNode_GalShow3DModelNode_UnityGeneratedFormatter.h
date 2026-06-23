#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalPlayableNodeType.h"
#include "unitysdk/MoleMole/GalGame/ModelConfigTemplateType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class GalShow3DModelNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_GALGAME_GALSHOW3DMODELNODE_GALSHOW3DMODELNODE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x15129B90)
#define MOLEMOLE_GALGAME_GALSHOW3DMODELNODE_GALSHOW3DMODELNODE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x15129BA0)
#define MOLEMOLE_GALGAME_GALSHOW3DMODELNODE_GALSHOW3DMODELNODE_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x15129FA0)
#define MOLEMOLE_GALGAME_GALSHOW3DMODELNODE_GALSHOW3DMODELNODE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1512A240)
#define MOLEMOLE_GALGAME_GALSHOW3DMODELNODE_GALSHOW3DMODELNODE_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1512A200)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalShow3DModelNode_GalShow3DModelNode_UnityGeneratedFormatter_TypeDefinitionIndex = 79537;

	class GalShow3DModelNode_GalShow3DModelNode_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::GalShow3DModelNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalPlayableNodeType>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(GalShow3DModelNode_GalShow3DModelNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40FB0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GalShow3DModelNode_GalShow3DModelNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40FB8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::ModelConfigTemplateType>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::ModelConfigTemplateType>**)Il2CppClass::FromTypeDefinitionIndex(GalShow3DModelNode_GalShow3DModelNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40FC0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSHOW3DMODELNODE_GALSHOW3DMODELNODE_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSHOW3DMODELNODE_GALSHOW3DMODELNODE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSHOW3DMODELNODE_GALSHOW3DMODELNODE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::GalShow3DModelNode*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalShow3DModelNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSHOW3DMODELNODE_GALSHOW3DMODELNODE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::GalGame::GalShow3DModelNode*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalShow3DModelNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSHOW3DMODELNODE_GALSHOW3DMODELNODE_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
