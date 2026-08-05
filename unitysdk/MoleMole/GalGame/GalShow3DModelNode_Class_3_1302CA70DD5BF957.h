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

#define MOLEMOLE_GALGAME_GALSHOW3DMODELNODE_CLASS_3_1302CA70DD5BF957_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19BEED30)
#define MOLEMOLE_GALGAME_GALSHOW3DMODELNODE_CLASS_3_1302CA70DD5BF957_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19BEED40)
#define MOLEMOLE_GALGAME_GALSHOW3DMODELNODE_CLASS_3_1302CA70DD5BF957_WRITE_OFFSET UNITYSDK_OFFSET(0x19BEF0F0)
#define MOLEMOLE_GALGAME_GALSHOW3DMODELNODE_CLASS_3_1302CA70DD5BF957__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BEF360)
#define MOLEMOLE_GALGAME_GALSHOW3DMODELNODE_CLASS_3_1302CA70DD5BF957__CTOR_OFFSET UNITYSDK_OFFSET(0x19BEF320)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalShow3DModelNode_Class_3_1302CA70DD5BF957_TypeDefinitionIndex = 60066;

	class GalShow3DModelNode_Class_3_1302CA70DD5BF957 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::GalShow3DModelNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GalShow3DModelNode_Class_3_1302CA70DD5BF957_TypeDefinitionIndex)->GetStaticField(0x48CF0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::ModelConfigTemplateType>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::ModelConfigTemplateType>**)Il2CppClass::FromTypeDefinitionIndex(GalShow3DModelNode_Class_3_1302CA70DD5BF957_TypeDefinitionIndex)->GetStaticField(0x48CF8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalPlayableNodeType>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(GalShow3DModelNode_Class_3_1302CA70DD5BF957_TypeDefinitionIndex)->GetStaticField(0x48D00);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSHOW3DMODELNODE_CLASS_3_1302CA70DD5BF957__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSHOW3DMODELNODE_CLASS_3_1302CA70DD5BF957__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSHOW3DMODELNODE_CLASS_3_1302CA70DD5BF957_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::GalShow3DModelNode*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalShow3DModelNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSHOW3DMODELNODE_CLASS_3_1302CA70DD5BF957_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::GalShow3DModelNode*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalShow3DModelNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSHOW3DMODELNODE_CLASS_3_1302CA70DD5BF957_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
