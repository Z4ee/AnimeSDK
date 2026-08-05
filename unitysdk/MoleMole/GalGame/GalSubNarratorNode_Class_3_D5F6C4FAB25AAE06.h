#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalPlayableNodeType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class AudioEventItem; }
namespace MoleMole::GalGame { class GalSubNarratorNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_GALSUBNARRATORNODE_CLASS_3_D5F6C4FAB25AAE06_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x190840F0)
#define MOLEMOLE_GALGAME_GALSUBNARRATORNODE_CLASS_3_D5F6C4FAB25AAE06_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19084100)
#define MOLEMOLE_GALGAME_GALSUBNARRATORNODE_CLASS_3_D5F6C4FAB25AAE06_WRITE_OFFSET UNITYSDK_OFFSET(0x19084690)
#define MOLEMOLE_GALGAME_GALSUBNARRATORNODE_CLASS_3_D5F6C4FAB25AAE06__CCTOR_OFFSET UNITYSDK_OFFSET(0x19084A10)
#define MOLEMOLE_GALGAME_GALSUBNARRATORNODE_CLASS_3_D5F6C4FAB25AAE06__CTOR_OFFSET UNITYSDK_OFFSET(0x190849D0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalSubNarratorNode_Class_3_D5F6C4FAB25AAE06_TypeDefinitionIndex = 65071;

	class GalSubNarratorNode_Class_3_D5F6C4FAB25AAE06 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::GalSubNarratorNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GalSubNarratorNode_Class_3_D5F6C4FAB25AAE06_TypeDefinitionIndex)->GetStaticField(0x4A870);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>*>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>*>**)Il2CppClass::FromTypeDefinitionIndex(GalSubNarratorNode_Class_3_D5F6C4FAB25AAE06_TypeDefinitionIndex)->GetStaticField(0x4A878);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalPlayableNodeType>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(GalSubNarratorNode_Class_3_D5F6C4FAB25AAE06_TypeDefinitionIndex)->GetStaticField(0x4A880);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GalSubNarratorNode_Class_3_D5F6C4FAB25AAE06_TypeDefinitionIndex)->GetStaticField(0x4A888);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(GalSubNarratorNode_Class_3_D5F6C4FAB25AAE06_TypeDefinitionIndex)->GetStaticField(0x4A890);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSUBNARRATORNODE_CLASS_3_D5F6C4FAB25AAE06__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSUBNARRATORNODE_CLASS_3_D5F6C4FAB25AAE06__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSUBNARRATORNODE_CLASS_3_D5F6C4FAB25AAE06_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::GalSubNarratorNode*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalSubNarratorNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSUBNARRATORNODE_CLASS_3_D5F6C4FAB25AAE06_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::GalSubNarratorNode*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalSubNarratorNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSUBNARRATORNODE_CLASS_3_D5F6C4FAB25AAE06_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
