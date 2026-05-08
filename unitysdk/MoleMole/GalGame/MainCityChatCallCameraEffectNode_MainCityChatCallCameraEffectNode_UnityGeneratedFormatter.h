#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/Config/ShaderCustomType.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/LD_CallCameraEffect_CallType.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeType.h"
#include "unitysdk/MoleMole/Timeline/CallCameraEffectActionType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatCallCameraEffectNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_MAINCITYCHATCALLCAMERAEFFECTNODE_MAINCITYCHATCALLCAMERAEFFECTNODE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x10BBC860)
#define MOLEMOLE_GALGAME_MAINCITYCHATCALLCAMERAEFFECTNODE_MAINCITYCHATCALLCAMERAEFFECTNODE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x10BBC870)
#define MOLEMOLE_GALGAME_MAINCITYCHATCALLCAMERAEFFECTNODE_MAINCITYCHATCALLCAMERAEFFECTNODE_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x10BBCFA0)
#define MOLEMOLE_GALGAME_MAINCITYCHATCALLCAMERAEFFECTNODE_MAINCITYCHATCALLCAMERAEFFECTNODE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x10BBD400)
#define MOLEMOLE_GALGAME_MAINCITYCHATCALLCAMERAEFFECTNODE_MAINCITYCHATCALLCAMERAEFFECTNODE_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x10BBD3C0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatCallCameraEffectNode_MainCityChatCallCameraEffectNode_UnityGeneratedFormatter_TypeDefinitionIndex = 54608;

	class MainCityChatCallCameraEffectNode_MainCityChatCallCameraEffectNode_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatCallCameraEffectNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Timeline::CallCameraEffectActionType>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Timeline::CallCameraEffectActionType>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatCallCameraEffectNode_MainCityChatCallCameraEffectNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EA40);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ShaderCustomType>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ShaderCustomType>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatCallCameraEffectNode_MainCityChatCallCameraEffectNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EA48);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ScreenEffectType>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ScreenEffectType>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatCallCameraEffectNode_MainCityChatCallCameraEffectNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EA50);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::FlowCanvas::Nodes::LD_CallCameraEffect_CallType>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::FlowCanvas::Nodes::LD_CallCameraEffect_CallType>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatCallCameraEffectNode_MainCityChatCallCameraEffectNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EA58);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatCallCameraEffectNode_MainCityChatCallCameraEffectNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EA60);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatCallCameraEffectNode_MainCityChatCallCameraEffectNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EA68);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatCallCameraEffectNode_MainCityChatCallCameraEffectNode_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x3EA70);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCALLCAMERAEFFECTNODE_MAINCITYCHATCALLCAMERAEFFECTNODE_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCALLCAMERAEFFECTNODE_MAINCITYCHATCALLCAMERAEFFECTNODE_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCALLCAMERAEFFECTNODE_MAINCITYCHATCALLCAMERAEFFECTNODE_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatCallCameraEffectNode*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatCallCameraEffectNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCALLCAMERAEFFECTNODE_MAINCITYCHATCALLCAMERAEFFECTNODE_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatCallCameraEffectNode*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatCallCameraEffectNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCALLCAMERAEFFECTNODE_MAINCITYCHATCALLCAMERAEFFECTNODE_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
