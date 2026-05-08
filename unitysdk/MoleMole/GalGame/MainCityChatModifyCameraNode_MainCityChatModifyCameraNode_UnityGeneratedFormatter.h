#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace MoleMole::GalGame { class MainCityChatCameraParam; }
namespace MoleMole::GalGame { class MainCityChatModifyCameraNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }

#define MOLEMOLE_GALGAME_MAINCITYCHATMODIFYCAMERANODE_MAINCITYCHATMODIFYCAMERANODE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x16E57230)
#define MOLEMOLE_GALGAME_MAINCITYCHATMODIFYCAMERANODE_MAINCITYCHATMODIFYCAMERANODE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x16E57240)
#define MOLEMOLE_GALGAME_MAINCITYCHATMODIFYCAMERANODE_MAINCITYCHATMODIFYCAMERANODE_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x16E57590)
#define MOLEMOLE_GALGAME_MAINCITYCHATMODIFYCAMERANODE_MAINCITYCHATMODIFYCAMERANODE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16E577E0)
#define MOLEMOLE_GALGAME_MAINCITYCHATMODIFYCAMERANODE_MAINCITYCHATMODIFYCAMERANODE_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x16E577A0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatModifyCameraNode_MainCityChatModifyCameraNode_UnityGeneratedFormatter_TypeDefinitionIndex = 79150;

	class MainCityChatModifyCameraNode_MainCityChatModifyCameraNode_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatModifyCameraNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatModifyCameraNode_MainCityChatModifyCameraNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x32360);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatCameraParam*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatCameraParam*>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatModifyCameraNode_MainCityChatModifyCameraNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x32368);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Cameras::CameraTrackBlending*>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Cameras::CameraTrackBlending*>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatModifyCameraNode_MainCityChatModifyCameraNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x32370);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatModifyCameraNode_MainCityChatModifyCameraNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x32378);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATMODIFYCAMERANODE_MAINCITYCHATMODIFYCAMERANODE_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATMODIFYCAMERANODE_MAINCITYCHATMODIFYCAMERANODE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATMODIFYCAMERANODE_MAINCITYCHATMODIFYCAMERANODE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatModifyCameraNode*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatModifyCameraNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATMODIFYCAMERANODE_MAINCITYCHATMODIFYCAMERANODE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatModifyCameraNode*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatModifyCameraNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATMODIFYCAMERANODE_MAINCITYCHATMODIFYCAMERANODE_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
