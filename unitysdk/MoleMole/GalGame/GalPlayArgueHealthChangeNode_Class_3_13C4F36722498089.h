#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalArgueStageLocation.h"
#include "unitysdk/MoleMole/GalGame/GalPlayableNodeType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class BranchItem; }
namespace MoleMole::GalGame { class GalPlayArgueHealthChangeNode; }
namespace MoleMole::GalGame { class GalSwitchPoseData; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_GALPLAYARGUEHEALTHCHANGENODE_CLASS_3_13C4F36722498089_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x16854FB0)
#define MOLEMOLE_GALGAME_GALPLAYARGUEHEALTHCHANGENODE_CLASS_3_13C4F36722498089_READMEMBER_OFFSET UNITYSDK_OFFSET(0x16854FC0)
#define MOLEMOLE_GALGAME_GALPLAYARGUEHEALTHCHANGENODE_CLASS_3_13C4F36722498089_WRITE_OFFSET UNITYSDK_OFFSET(0x16855550)
#define MOLEMOLE_GALGAME_GALPLAYARGUEHEALTHCHANGENODE_CLASS_3_13C4F36722498089__CCTOR_OFFSET UNITYSDK_OFFSET(0x168558D0)
#define MOLEMOLE_GALGAME_GALPLAYARGUEHEALTHCHANGENODE_CLASS_3_13C4F36722498089__CTOR_OFFSET UNITYSDK_OFFSET(0x16855890)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalPlayArgueHealthChangeNode_Class_3_13C4F36722498089_TypeDefinitionIndex = 59132;

	class GalPlayArgueHealthChangeNode_Class_3_13C4F36722498089 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::GalPlayArgueHealthChangeNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalArgueStageLocation>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalArgueStageLocation>**)Il2CppClass::FromTypeDefinitionIndex(GalPlayArgueHealthChangeNode_Class_3_13C4F36722498089_TypeDefinitionIndex)->GetStaticField(0x36700);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::BranchItem*>*>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::BranchItem*>*>**)Il2CppClass::FromTypeDefinitionIndex(GalPlayArgueHealthChangeNode_Class_3_13C4F36722498089_TypeDefinitionIndex)->GetStaticField(0x36708);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::GalSwitchPoseData*>*>** StaticGet_Field_3_11()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::GalSwitchPoseData*>*>**)Il2CppClass::FromTypeDefinitionIndex(GalPlayArgueHealthChangeNode_Class_3_13C4F36722498089_TypeDefinitionIndex)->GetStaticField(0x36710);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(GalPlayArgueHealthChangeNode_Class_3_13C4F36722498089_TypeDefinitionIndex)->GetStaticField(0x36718);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalPlayableNodeType>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(GalPlayArgueHealthChangeNode_Class_3_13C4F36722498089_TypeDefinitionIndex)->GetStaticField(0x36720);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GalPlayArgueHealthChangeNode_Class_3_13C4F36722498089_TypeDefinitionIndex)->GetStaticField(0x36728);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYARGUEHEALTHCHANGENODE_CLASS_3_13C4F36722498089__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYARGUEHEALTHCHANGENODE_CLASS_3_13C4F36722498089__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYARGUEHEALTHCHANGENODE_CLASS_3_13C4F36722498089_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::GalPlayArgueHealthChangeNode*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalPlayArgueHealthChangeNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYARGUEHEALTHCHANGENODE_CLASS_3_13C4F36722498089_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::GalPlayArgueHealthChangeNode*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalPlayArgueHealthChangeNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYARGUEHEALTHCHANGENODE_CLASS_3_13C4F36722498089_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
