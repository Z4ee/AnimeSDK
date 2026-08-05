#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalPlayableNodeType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class GalPlayBGMNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_GALPLAYBGMNODE_CLASS_3_ABB18EDD01559C27_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x129A3850)
#define MOLEMOLE_GALGAME_GALPLAYBGMNODE_CLASS_3_ABB18EDD01559C27_READMEMBER_OFFSET UNITYSDK_OFFSET(0x129A3860)
#define MOLEMOLE_GALGAME_GALPLAYBGMNODE_CLASS_3_ABB18EDD01559C27_WRITE_OFFSET UNITYSDK_OFFSET(0x129A3C10)
#define MOLEMOLE_GALGAME_GALPLAYBGMNODE_CLASS_3_ABB18EDD01559C27__CCTOR_OFFSET UNITYSDK_OFFSET(0x129A3E80)
#define MOLEMOLE_GALGAME_GALPLAYBGMNODE_CLASS_3_ABB18EDD01559C27__CTOR_OFFSET UNITYSDK_OFFSET(0x129A3E40)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalPlayBGMNode_Class_3_ABB18EDD01559C27_TypeDefinitionIndex = 64887;

	class GalPlayBGMNode_Class_3_ABB18EDD01559C27 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::GalPlayBGMNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GalPlayBGMNode_Class_3_ABB18EDD01559C27_TypeDefinitionIndex)->GetStaticField(0x50E50);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalPlayableNodeType>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(GalPlayBGMNode_Class_3_ABB18EDD01559C27_TypeDefinitionIndex)->GetStaticField(0x50E58);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(GalPlayBGMNode_Class_3_ABB18EDD01559C27_TypeDefinitionIndex)->GetStaticField(0x50E60);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYBGMNODE_CLASS_3_ABB18EDD01559C27__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYBGMNODE_CLASS_3_ABB18EDD01559C27__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYBGMNODE_CLASS_3_ABB18EDD01559C27_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::GalPlayBGMNode*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalPlayBGMNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYBGMNODE_CLASS_3_ABB18EDD01559C27_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::GalPlayBGMNode*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalPlayBGMNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYBGMNODE_CLASS_3_ABB18EDD01559C27_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
