#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/ChatSetAvatarVisible.h"
#include "unitysdk/ProtoScript/ModTimeType.h"
#include "unitysdk/ProtoScript/TimePeriodType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::GalGame { class DynamicObjectModifyActiveCfg; }
namespace MoleMole::GalGame { class MainCityChatCameraParam; }
namespace MoleMole::GalGame { class SetGroupMemberTransformCfg; }
namespace MoleMole::GalGame { class TagBoolPair; }
namespace MoleMole::GalGame { class TagGroupBoolPair; }
namespace MoleMole::GalGame { class TagStringPair; }
namespace MoleMole::GalGame { class TransitionWithActionsCfg; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_TRANSITIONWITHACTIONSCFG_CLASS_3_AC35C35F0313A95D_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x179023F0)
#define MOLEMOLE_GALGAME_TRANSITIONWITHACTIONSCFG_CLASS_3_AC35C35F0313A95D_READMEMBER_OFFSET UNITYSDK_OFFSET(0x17902400)
#define MOLEMOLE_GALGAME_TRANSITIONWITHACTIONSCFG_CLASS_3_AC35C35F0313A95D_WRITE_OFFSET UNITYSDK_OFFSET(0x17904010)
#define MOLEMOLE_GALGAME_TRANSITIONWITHACTIONSCFG_CLASS_3_AC35C35F0313A95D__CCTOR_OFFSET UNITYSDK_OFFSET(0x17905040)
#define MOLEMOLE_GALGAME_TRANSITIONWITHACTIONSCFG_CLASS_3_AC35C35F0313A95D__CTOR_OFFSET UNITYSDK_OFFSET(0x17905000)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int TransitionWithActionsCfg_Class_3_AC35C35F0313A95D_TypeDefinitionIndex = 49813;

	class TransitionWithActionsCfg_Class_3_AC35C35F0313A95D : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::TransitionWithActionsCfg*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector3>** StaticGet_Field_3_10()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(TransitionWithActionsCfg_Class_3_AC35C35F0313A95D_TypeDefinitionIndex)->GetStaticField(0x42730);
		}
		static ::Sirenix::Serialization::Serializer_1<::ProtoScript::TimePeriodType>** StaticGet_Field_3_13()
		{
			return (::Sirenix::Serialization::Serializer_1<::ProtoScript::TimePeriodType>**)Il2CppClass::FromTypeDefinitionIndex(TransitionWithActionsCfg_Class_3_AC35C35F0313A95D_TypeDefinitionIndex)->GetStaticField(0x42738);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::TagBoolPair*>*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::TagBoolPair*>*>**)Il2CppClass::FromTypeDefinitionIndex(TransitionWithActionsCfg_Class_3_AC35C35F0313A95D_TypeDefinitionIndex)->GetStaticField(0x42740);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::UInt32>** StaticGet_Field_3_11()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(TransitionWithActionsCfg_Class_3_AC35C35F0313A95D_TypeDefinitionIndex)->GetStaticField(0x42748);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(TransitionWithActionsCfg_Class_3_AC35C35F0313A95D_TypeDefinitionIndex)->GetStaticField(0x42750);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TransitionWithActionsCfg_Class_3_AC35C35F0313A95D_TypeDefinitionIndex)->GetStaticField(0x42758);
		}
		static ::Sirenix::Serialization::Serializer_1<::ProtoScript::ModTimeType>** StaticGet_Field_3_14()
		{
			return (::Sirenix::Serialization::Serializer_1<::ProtoScript::ModTimeType>**)Il2CppClass::FromTypeDefinitionIndex(TransitionWithActionsCfg_Class_3_AC35C35F0313A95D_TypeDefinitionIndex)->GetStaticField(0x42760);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::SetGroupMemberTransformCfg*>*>** StaticGet_Field_3_8()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::SetGroupMemberTransformCfg*>*>**)Il2CppClass::FromTypeDefinitionIndex(TransitionWithActionsCfg_Class_3_AC35C35F0313A95D_TypeDefinitionIndex)->GetStaticField(0x42768);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(TransitionWithActionsCfg_Class_3_AC35C35F0313A95D_TypeDefinitionIndex)->GetStaticField(0x42770);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::TagStringPair*>*>** StaticGet_Field_3_9()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::TagStringPair*>*>**)Il2CppClass::FromTypeDefinitionIndex(TransitionWithActionsCfg_Class_3_AC35C35F0313A95D_TypeDefinitionIndex)->GetStaticField(0x42778);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::ChatSetAvatarVisible>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::ChatSetAvatarVisible>**)Il2CppClass::FromTypeDefinitionIndex(TransitionWithActionsCfg_Class_3_AC35C35F0313A95D_TypeDefinitionIndex)->GetStaticField(0x42780);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::TagGroupBoolPair*>*>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::TagGroupBoolPair*>*>**)Il2CppClass::FromTypeDefinitionIndex(TransitionWithActionsCfg_Class_3_AC35C35F0313A95D_TypeDefinitionIndex)->GetStaticField(0x42788);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatCameraParam*>** StaticGet_Field_3_15()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatCameraParam*>**)Il2CppClass::FromTypeDefinitionIndex(TransitionWithActionsCfg_Class_3_AC35C35F0313A95D_TypeDefinitionIndex)->GetStaticField(0x42790);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::DynamicObjectModifyActiveCfg*>*>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::DynamicObjectModifyActiveCfg*>*>**)Il2CppClass::FromTypeDefinitionIndex(TransitionWithActionsCfg_Class_3_AC35C35F0313A95D_TypeDefinitionIndex)->GetStaticField(0x42798);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TRANSITIONWITHACTIONSCFG_CLASS_3_AC35C35F0313A95D__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TRANSITIONWITHACTIONSCFG_CLASS_3_AC35C35F0313A95D__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TRANSITIONWITHACTIONSCFG_CLASS_3_AC35C35F0313A95D_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::TransitionWithActionsCfg*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::TransitionWithActionsCfg*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TRANSITIONWITHACTIONSCFG_CLASS_3_AC35C35F0313A95D_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::TransitionWithActionsCfg*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::TransitionWithActionsCfg*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TRANSITIONWITHACTIONSCFG_CLASS_3_AC35C35F0313A95D_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
