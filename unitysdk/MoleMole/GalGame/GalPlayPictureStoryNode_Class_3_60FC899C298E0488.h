#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalPlayableNodeType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class AudioEventItem; }
namespace MoleMole::GalGame { class GalPlayPictureStoryNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_GALPLAYPICTURESTORYNODE_CLASS_3_60FC899C298E0488_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x136A40F0)
#define MOLEMOLE_GALGAME_GALPLAYPICTURESTORYNODE_CLASS_3_60FC899C298E0488_READMEMBER_OFFSET UNITYSDK_OFFSET(0x136A4100)
#define MOLEMOLE_GALGAME_GALPLAYPICTURESTORYNODE_CLASS_3_60FC899C298E0488_WRITE_OFFSET UNITYSDK_OFFSET(0x136A4690)
#define MOLEMOLE_GALGAME_GALPLAYPICTURESTORYNODE_CLASS_3_60FC899C298E0488__CCTOR_OFFSET UNITYSDK_OFFSET(0x136A4A10)
#define MOLEMOLE_GALGAME_GALPLAYPICTURESTORYNODE_CLASS_3_60FC899C298E0488__CTOR_OFFSET UNITYSDK_OFFSET(0x136A49D0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalPlayPictureStoryNode_Class_3_60FC899C298E0488_TypeDefinitionIndex = 64580;

	class GalPlayPictureStoryNode_Class_3_60FC899C298E0488 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::GalPlayPictureStoryNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GalPlayPictureStoryNode_Class_3_60FC899C298E0488_TypeDefinitionIndex)->GetStaticField(0x4D5C0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalPlayableNodeType>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(GalPlayPictureStoryNode_Class_3_60FC899C298E0488_TypeDefinitionIndex)->GetStaticField(0x4D5C8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(GalPlayPictureStoryNode_Class_3_60FC899C298E0488_TypeDefinitionIndex)->GetStaticField(0x4D5D0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>*>**)Il2CppClass::FromTypeDefinitionIndex(GalPlayPictureStoryNode_Class_3_60FC899C298E0488_TypeDefinitionIndex)->GetStaticField(0x4D5D8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYPICTURESTORYNODE_CLASS_3_60FC899C298E0488__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYPICTURESTORYNODE_CLASS_3_60FC899C298E0488__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYPICTURESTORYNODE_CLASS_3_60FC899C298E0488_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::GalPlayPictureStoryNode*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalPlayPictureStoryNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYPICTURESTORYNODE_CLASS_3_60FC899C298E0488_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::GalPlayPictureStoryNode*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalPlayPictureStoryNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYPICTURESTORYNODE_CLASS_3_60FC899C298E0488_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
