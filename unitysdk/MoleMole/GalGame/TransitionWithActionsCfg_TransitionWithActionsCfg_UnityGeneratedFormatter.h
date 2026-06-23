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

#define MOLEMOLE_GALGAME_TRANSITIONWITHACTIONSCFG_TRANSITIONWITHACTIONSCFG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1512D3F0)
#define MOLEMOLE_GALGAME_TRANSITIONWITHACTIONSCFG_TRANSITIONWITHACTIONSCFG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1512D400)
#define MOLEMOLE_GALGAME_TRANSITIONWITHACTIONSCFG_TRANSITIONWITHACTIONSCFG_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1512F0F0)
#define MOLEMOLE_GALGAME_TRANSITIONWITHACTIONSCFG_TRANSITIONWITHACTIONSCFG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15130130)
#define MOLEMOLE_GALGAME_TRANSITIONWITHACTIONSCFG_TRANSITIONWITHACTIONSCFG_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x151300F0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int TransitionWithActionsCfg_TransitionWithActionsCfg_UnityGeneratedFormatter_TypeDefinitionIndex = 86102;

	class TransitionWithActionsCfg_TransitionWithActionsCfg_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::TransitionWithActionsCfg*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TransitionWithActionsCfg_TransitionWithActionsCfg_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x410B0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::TagGroupBoolPair*>*>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::TagGroupBoolPair*>*>**)Il2CppClass::FromTypeDefinitionIndex(TransitionWithActionsCfg_TransitionWithActionsCfg_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x410B8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::TagStringPair*>*>** StaticGet_CachedSerializer9()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::TagStringPair*>*>**)Il2CppClass::FromTypeDefinitionIndex(TransitionWithActionsCfg_TransitionWithActionsCfg_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x410C0);
		}
		static ::Sirenix::Serialization::Serializer_1<::ProtoScript::ModTimeType>** StaticGet_CachedSerializer12()
		{
			return (::Sirenix::Serialization::Serializer_1<::ProtoScript::ModTimeType>**)Il2CppClass::FromTypeDefinitionIndex(TransitionWithActionsCfg_TransitionWithActionsCfg_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x410C8);
		}
		static ::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector3>** StaticGet_CachedSerializer8()
		{
			return (::Sirenix::Serialization::Serializer_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(TransitionWithActionsCfg_TransitionWithActionsCfg_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x410D0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatCameraParam*>** StaticGet_CachedSerializer11()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::MainCityChatCameraParam*>**)Il2CppClass::FromTypeDefinitionIndex(TransitionWithActionsCfg_TransitionWithActionsCfg_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x410D8);
		}
		static ::Sirenix::Serialization::Serializer_1<::ProtoScript::TimePeriodType>** StaticGet_CachedSerializer13()
		{
			return (::Sirenix::Serialization::Serializer_1<::ProtoScript::TimePeriodType>**)Il2CppClass::FromTypeDefinitionIndex(TransitionWithActionsCfg_TransitionWithActionsCfg_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x410E0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(TransitionWithActionsCfg_TransitionWithActionsCfg_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x410E8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::TagBoolPair*>*>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::TagBoolPair*>*>**)Il2CppClass::FromTypeDefinitionIndex(TransitionWithActionsCfg_TransitionWithActionsCfg_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x410F0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::DynamicObjectModifyActiveCfg*>*>** StaticGet_CachedSerializer6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::DynamicObjectModifyActiveCfg*>*>**)Il2CppClass::FromTypeDefinitionIndex(TransitionWithActionsCfg_TransitionWithActionsCfg_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x410F8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::UInt32>** StaticGet_CachedSerializer7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(TransitionWithActionsCfg_TransitionWithActionsCfg_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41100);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::SetGroupMemberTransformCfg*>*>** StaticGet_CachedSerializer10()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::SetGroupMemberTransformCfg*>*>**)Il2CppClass::FromTypeDefinitionIndex(TransitionWithActionsCfg_TransitionWithActionsCfg_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41108);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(TransitionWithActionsCfg_TransitionWithActionsCfg_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41110);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::ChatSetAvatarVisible>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::GalGame::ChatSetAvatarVisible>**)Il2CppClass::FromTypeDefinitionIndex(TransitionWithActionsCfg_TransitionWithActionsCfg_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x41118);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TRANSITIONWITHACTIONSCFG_TRANSITIONWITHACTIONSCFG_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TRANSITIONWITHACTIONSCFG_TRANSITIONWITHACTIONSCFG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TRANSITIONWITHACTIONSCFG_TRANSITIONWITHACTIONSCFG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::TransitionWithActionsCfg*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::TransitionWithActionsCfg*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TRANSITIONWITHACTIONSCFG_TRANSITIONWITHACTIONSCFG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::GalGame::TransitionWithActionsCfg*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::TransitionWithActionsCfg*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TRANSITIONWITHACTIONSCFG_TRANSITIONWITHACTIONSCFG_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
