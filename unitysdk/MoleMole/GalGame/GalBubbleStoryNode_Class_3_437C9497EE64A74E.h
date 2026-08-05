#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalPlayableNodeType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class GalBubbleStoryNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_GALBUBBLESTORYNODE_CLASS_3_437C9497EE64A74E_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B1B4C70)
#define MOLEMOLE_GALGAME_GALBUBBLESTORYNODE_CLASS_3_437C9497EE64A74E_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B1B4C80)
#define MOLEMOLE_GALGAME_GALBUBBLESTORYNODE_CLASS_3_437C9497EE64A74E_WRITE_OFFSET UNITYSDK_OFFSET(0x1B1B5210)
#define MOLEMOLE_GALGAME_GALBUBBLESTORYNODE_CLASS_3_437C9497EE64A74E__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B1B5590)
#define MOLEMOLE_GALGAME_GALBUBBLESTORYNODE_CLASS_3_437C9497EE64A74E__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1B5550)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalBubbleStoryNode_Class_3_437C9497EE64A74E_TypeDefinitionIndex = 51086;

	class GalBubbleStoryNode_Class_3_437C9497EE64A74E : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::GalBubbleStoryNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(GalBubbleStoryNode_Class_3_437C9497EE64A74E_TypeDefinitionIndex)->GetStaticField(0x425D0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalPlayableNodeType>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(GalBubbleStoryNode_Class_3_437C9497EE64A74E_TypeDefinitionIndex)->GetStaticField(0x425D8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GalBubbleStoryNode_Class_3_437C9497EE64A74E_TypeDefinitionIndex)->GetStaticField(0x425E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYNODE_CLASS_3_437C9497EE64A74E__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYNODE_CLASS_3_437C9497EE64A74E__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYNODE_CLASS_3_437C9497EE64A74E_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::GalBubbleStoryNode*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalBubbleStoryNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYNODE_CLASS_3_437C9497EE64A74E_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::GalBubbleStoryNode*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalBubbleStoryNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYNODE_CLASS_3_437C9497EE64A74E_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
