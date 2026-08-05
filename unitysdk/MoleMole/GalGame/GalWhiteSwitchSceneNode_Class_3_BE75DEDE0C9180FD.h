#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalPlayableNodeType.h"
#include "unitysdk/MoleMole/GalGame/GalSwitchSceneNode_AnimLength.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class AudioEventItem; }
namespace MoleMole::GalGame { class GalWhiteSwitchSceneNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_GALWHITESWITCHSCENENODE_CLASS_3_BE75DEDE0C9180FD_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A061520)
#define MOLEMOLE_GALGAME_GALWHITESWITCHSCENENODE_CLASS_3_BE75DEDE0C9180FD_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A061530)
#define MOLEMOLE_GALGAME_GALWHITESWITCHSCENENODE_CLASS_3_BE75DEDE0C9180FD_WRITE_OFFSET UNITYSDK_OFFSET(0x17377ED0)
#define MOLEMOLE_GALGAME_GALWHITESWITCHSCENENODE_CLASS_3_BE75DEDE0C9180FD__CCTOR_OFFSET UNITYSDK_OFFSET(0x173782A0)
#define MOLEMOLE_GALGAME_GALWHITESWITCHSCENENODE_CLASS_3_BE75DEDE0C9180FD__CTOR_OFFSET UNITYSDK_OFFSET(0x17378260)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalWhiteSwitchSceneNode_Class_3_BE75DEDE0C9180FD_TypeDefinitionIndex = 78320;

	class GalWhiteSwitchSceneNode_Class_3_BE75DEDE0C9180FD : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::GalWhiteSwitchSceneNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalPlayableNodeType>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(GalWhiteSwitchSceneNode_Class_3_BE75DEDE0C9180FD_TypeDefinitionIndex)->GetStaticField(0x44D00);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalSwitchSceneNode_AnimLength>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::GalSwitchSceneNode_AnimLength>**)Il2CppClass::FromTypeDefinitionIndex(GalWhiteSwitchSceneNode_Class_3_BE75DEDE0C9180FD_TypeDefinitionIndex)->GetStaticField(0x44D08);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GalWhiteSwitchSceneNode_Class_3_BE75DEDE0C9180FD_TypeDefinitionIndex)->GetStaticField(0x44D10);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(GalWhiteSwitchSceneNode_Class_3_BE75DEDE0C9180FD_TypeDefinitionIndex)->GetStaticField(0x44D18);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>*>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>*>**)Il2CppClass::FromTypeDefinitionIndex(GalWhiteSwitchSceneNode_Class_3_BE75DEDE0C9180FD_TypeDefinitionIndex)->GetStaticField(0x44D20);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(GalWhiteSwitchSceneNode_Class_3_BE75DEDE0C9180FD_TypeDefinitionIndex)->GetStaticField(0x44D28);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALWHITESWITCHSCENENODE_CLASS_3_BE75DEDE0C9180FD__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALWHITESWITCHSCENENODE_CLASS_3_BE75DEDE0C9180FD__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALWHITESWITCHSCENENODE_CLASS_3_BE75DEDE0C9180FD_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::GalWhiteSwitchSceneNode*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalWhiteSwitchSceneNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALWHITESWITCHSCENENODE_CLASS_3_BE75DEDE0C9180FD_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::GalWhiteSwitchSceneNode*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalWhiteSwitchSceneNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALWHITESWITCHSCENENODE_CLASS_3_BE75DEDE0C9180FD_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
