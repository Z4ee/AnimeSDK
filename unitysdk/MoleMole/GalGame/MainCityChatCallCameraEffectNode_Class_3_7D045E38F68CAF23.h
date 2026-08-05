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

#define MOLEMOLE_GALGAME_MAINCITYCHATCALLCAMERAEFFECTNODE_CLASS_3_7D045E38F68CAF23_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x144D8810)
#define MOLEMOLE_GALGAME_MAINCITYCHATCALLCAMERAEFFECTNODE_CLASS_3_7D045E38F68CAF23_READMEMBER_OFFSET UNITYSDK_OFFSET(0x144D8820)
#define MOLEMOLE_GALGAME_MAINCITYCHATCALLCAMERAEFFECTNODE_CLASS_3_7D045E38F68CAF23_WRITE_OFFSET UNITYSDK_OFFSET(0x144D8EF0)
#define MOLEMOLE_GALGAME_MAINCITYCHATCALLCAMERAEFFECTNODE_CLASS_3_7D045E38F68CAF23__CCTOR_OFFSET UNITYSDK_OFFSET(0x144D9320)
#define MOLEMOLE_GALGAME_MAINCITYCHATCALLCAMERAEFFECTNODE_CLASS_3_7D045E38F68CAF23__CTOR_OFFSET UNITYSDK_OFFSET(0x144D92E0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatCallCameraEffectNode_Class_3_7D045E38F68CAF23_TypeDefinitionIndex = 51364;

	class MainCityChatCallCameraEffectNode_Class_3_7D045E38F68CAF23 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::MainCityChatCallCameraEffectNode*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::FlowCanvas::Nodes::LD_CallCameraEffect_CallType>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::FlowCanvas::Nodes::LD_CallCameraEffect_CallType>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatCallCameraEffectNode_Class_3_7D045E38F68CAF23_TypeDefinitionIndex)->GetStaticField(0x39F50);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatPlayableNodeType>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatCallCameraEffectNode_Class_3_7D045E38F68CAF23_TypeDefinitionIndex)->GetStaticField(0x39F58);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Timeline::CallCameraEffectActionType>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Timeline::CallCameraEffectActionType>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatCallCameraEffectNode_Class_3_7D045E38F68CAF23_TypeDefinitionIndex)->GetStaticField(0x39F60);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatCallCameraEffectNode_Class_3_7D045E38F68CAF23_TypeDefinitionIndex)->GetStaticField(0x39F68);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ScreenEffectType>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ScreenEffectType>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatCallCameraEffectNode_Class_3_7D045E38F68CAF23_TypeDefinitionIndex)->GetStaticField(0x39F70);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ShaderCustomType>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ShaderCustomType>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatCallCameraEffectNode_Class_3_7D045E38F68CAF23_TypeDefinitionIndex)->GetStaticField(0x39F78);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MainCityChatCallCameraEffectNode_Class_3_7D045E38F68CAF23_TypeDefinitionIndex)->GetStaticField(0x39F80);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCALLCAMERAEFFECTNODE_CLASS_3_7D045E38F68CAF23__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCALLCAMERAEFFECTNODE_CLASS_3_7D045E38F68CAF23__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCALLCAMERAEFFECTNODE_CLASS_3_7D045E38F68CAF23_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatCallCameraEffectNode*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatCallCameraEffectNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCALLCAMERAEFFECTNODE_CLASS_3_7D045E38F68CAF23_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatCallCameraEffectNode*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatCallCameraEffectNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCALLCAMERAEFFECTNODE_CLASS_3_7D045E38F68CAF23_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
