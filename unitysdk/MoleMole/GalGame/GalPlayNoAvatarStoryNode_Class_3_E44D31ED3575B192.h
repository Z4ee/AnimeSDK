#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalPlayableNodeType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class AudioEventItem; }
namespace MoleMole::GalGame { class GalPlayNoAvatarStoryNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_GALPLAYNOAVATARSTORYNODE_CLASS_3_E44D31ED3575B192_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19DBD1B0)
#define MOLEMOLE_GALGAME_GALPLAYNOAVATARSTORYNODE_CLASS_3_E44D31ED3575B192_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19DBD1C0)
#define MOLEMOLE_GALGAME_GALPLAYNOAVATARSTORYNODE_CLASS_3_E44D31ED3575B192_WRITE_OFFSET UNITYSDK_OFFSET(0x19DBD750)
#define MOLEMOLE_GALGAME_GALPLAYNOAVATARSTORYNODE_CLASS_3_E44D31ED3575B192__CCTOR_OFFSET UNITYSDK_OFFSET(0x19DBDAD0)
#define MOLEMOLE_GALGAME_GALPLAYNOAVATARSTORYNODE_CLASS_3_E44D31ED3575B192__CTOR_OFFSET UNITYSDK_OFFSET(0x19DBDA90)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalPlayNoAvatarStoryNode_Class_3_E44D31ED3575B192_TypeDefinitionIndex = 59444;

	class GalPlayNoAvatarStoryNode_Class_3_E44D31ED3575B192 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::GalPlayNoAvatarStoryNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalPlayableNodeType>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(GalPlayNoAvatarStoryNode_Class_3_E44D31ED3575B192_TypeDefinitionIndex)->GetStaticField(0x4C280);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GalPlayNoAvatarStoryNode_Class_3_E44D31ED3575B192_TypeDefinitionIndex)->GetStaticField(0x4C288);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>*>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>*>**)Il2CppClass::FromTypeDefinitionIndex(GalPlayNoAvatarStoryNode_Class_3_E44D31ED3575B192_TypeDefinitionIndex)->GetStaticField(0x4C290);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(GalPlayNoAvatarStoryNode_Class_3_E44D31ED3575B192_TypeDefinitionIndex)->GetStaticField(0x4C298);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYNOAVATARSTORYNODE_CLASS_3_E44D31ED3575B192__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYNOAVATARSTORYNODE_CLASS_3_E44D31ED3575B192__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYNOAVATARSTORYNODE_CLASS_3_E44D31ED3575B192_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::GalPlayNoAvatarStoryNode*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalPlayNoAvatarStoryNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYNOAVATARSTORYNODE_CLASS_3_E44D31ED3575B192_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::GalPlayNoAvatarStoryNode*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalPlayNoAvatarStoryNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYNOAVATARSTORYNODE_CLASS_3_E44D31ED3575B192_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
