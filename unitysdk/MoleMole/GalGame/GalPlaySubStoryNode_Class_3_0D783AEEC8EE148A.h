#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalNPCLocation.h"
#include "unitysdk/MoleMole/GalGame/GalPlayableNodeType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class AudioEventItem; }
namespace MoleMole::GalGame { class GalPlaySubStoryNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_GALPLAYSUBSTORYNODE_CLASS_3_0D783AEEC8EE148A_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x107DDA10)
#define MOLEMOLE_GALGAME_GALPLAYSUBSTORYNODE_CLASS_3_0D783AEEC8EE148A_READMEMBER_OFFSET UNITYSDK_OFFSET(0x107DDA20)
#define MOLEMOLE_GALGAME_GALPLAYSUBSTORYNODE_CLASS_3_0D783AEEC8EE148A_WRITE_OFFSET UNITYSDK_OFFSET(0x107DE2E0)
#define MOLEMOLE_GALGAME_GALPLAYSUBSTORYNODE_CLASS_3_0D783AEEC8EE148A__CCTOR_OFFSET UNITYSDK_OFFSET(0x107DE820)
#define MOLEMOLE_GALGAME_GALPLAYSUBSTORYNODE_CLASS_3_0D783AEEC8EE148A__CTOR_OFFSET UNITYSDK_OFFSET(0x107DE7E0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalPlaySubStoryNode_Class_3_0D783AEEC8EE148A_TypeDefinitionIndex = 89495;

	class GalPlaySubStoryNode_Class_3_0D783AEEC8EE148A : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::GalPlaySubStoryNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(GalPlaySubStoryNode_Class_3_0D783AEEC8EE148A_TypeDefinitionIndex)->GetStaticField(0x4E8F0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>*>**)Il2CppClass::FromTypeDefinitionIndex(GalPlaySubStoryNode_Class_3_0D783AEEC8EE148A_TypeDefinitionIndex)->GetStaticField(0x4E8F8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GalPlaySubStoryNode_Class_3_0D783AEEC8EE148A_TypeDefinitionIndex)->GetStaticField(0x4E900);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GalPlaySubStoryNode_Class_3_0D783AEEC8EE148A_TypeDefinitionIndex)->GetStaticField(0x4E908);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalPlayableNodeType>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(GalPlaySubStoryNode_Class_3_0D783AEEC8EE148A_TypeDefinitionIndex)->GetStaticField(0x4E910);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalNPCLocation>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalNPCLocation>**)Il2CppClass::FromTypeDefinitionIndex(GalPlaySubStoryNode_Class_3_0D783AEEC8EE148A_TypeDefinitionIndex)->GetStaticField(0x4E918);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(GalPlaySubStoryNode_Class_3_0D783AEEC8EE148A_TypeDefinitionIndex)->GetStaticField(0x4E920);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYSUBSTORYNODE_CLASS_3_0D783AEEC8EE148A__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYSUBSTORYNODE_CLASS_3_0D783AEEC8EE148A__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYSUBSTORYNODE_CLASS_3_0D783AEEC8EE148A_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::GalPlaySubStoryNode*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalPlaySubStoryNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYSUBSTORYNODE_CLASS_3_0D783AEEC8EE148A_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::GalPlaySubStoryNode*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalPlaySubStoryNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYSUBSTORYNODE_CLASS_3_0D783AEEC8EE148A_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
