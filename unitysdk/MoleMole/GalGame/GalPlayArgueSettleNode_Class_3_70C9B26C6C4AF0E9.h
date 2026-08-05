#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalPlayableNodeType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class BranchItem; }
namespace MoleMole::GalGame { class GalPlayArgueSettleNode; }
namespace MoleMole::GalGame { class GalSwitchPoseData; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_GALPLAYARGUESETTLENODE_CLASS_3_70C9B26C6C4AF0E9_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19BEC010)
#define MOLEMOLE_GALGAME_GALPLAYARGUESETTLENODE_CLASS_3_70C9B26C6C4AF0E9_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19BEC020)
#define MOLEMOLE_GALGAME_GALPLAYARGUESETTLENODE_CLASS_3_70C9B26C6C4AF0E9_WRITE_OFFSET UNITYSDK_OFFSET(0x19BEC5B0)
#define MOLEMOLE_GALGAME_GALPLAYARGUESETTLENODE_CLASS_3_70C9B26C6C4AF0E9__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BEC930)
#define MOLEMOLE_GALGAME_GALPLAYARGUESETTLENODE_CLASS_3_70C9B26C6C4AF0E9__CTOR_OFFSET UNITYSDK_OFFSET(0x19BEC8F0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalPlayArgueSettleNode_Class_3_70C9B26C6C4AF0E9_TypeDefinitionIndex = 66568;

	class GalPlayArgueSettleNode_Class_3_70C9B26C6C4AF0E9 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::GalPlayArgueSettleNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalPlayableNodeType>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(GalPlayArgueSettleNode_Class_3_70C9B26C6C4AF0E9_TypeDefinitionIndex)->GetStaticField(0x48C50);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::BranchItem*>*>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::BranchItem*>*>**)Il2CppClass::FromTypeDefinitionIndex(GalPlayArgueSettleNode_Class_3_70C9B26C6C4AF0E9_TypeDefinitionIndex)->GetStaticField(0x48C58);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(GalPlayArgueSettleNode_Class_3_70C9B26C6C4AF0E9_TypeDefinitionIndex)->GetStaticField(0x48C60);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GalPlayArgueSettleNode_Class_3_70C9B26C6C4AF0E9_TypeDefinitionIndex)->GetStaticField(0x48C68);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::GalSwitchPoseData*>*>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::GalSwitchPoseData*>*>**)Il2CppClass::FromTypeDefinitionIndex(GalPlayArgueSettleNode_Class_3_70C9B26C6C4AF0E9_TypeDefinitionIndex)->GetStaticField(0x48C70);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYARGUESETTLENODE_CLASS_3_70C9B26C6C4AF0E9__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYARGUESETTLENODE_CLASS_3_70C9B26C6C4AF0E9__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYARGUESETTLENODE_CLASS_3_70C9B26C6C4AF0E9_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::GalPlayArgueSettleNode*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalPlayArgueSettleNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYARGUESETTLENODE_CLASS_3_70C9B26C6C4AF0E9_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::GalPlayArgueSettleNode*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalPlayArgueSettleNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYARGUESETTLENODE_CLASS_3_70C9B26C6C4AF0E9_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
