#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ProtoScript/ModTimeType.h"
#include "unitysdk/ProtoScript/TimePeriodType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class ChatPlusInitCfg; }
namespace MoleMole::GalGame { class DynamicObjectModifyActiveCfg; }
namespace MoleMole::GalGame { class LookIKCfg; }
namespace MoleMole::GalGame { class TagAniPair; }
namespace MoleMole::GalGame { class TagBoolPair; }
namespace MoleMole::GalGame { class TagGroupAniPair; }
namespace MoleMole::GalGame { class TagGroupBoolPair; }
namespace MoleMole::GalGame { class TimelinePair; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_CHATPLUSINITCFG_CHATPLUSINITCFG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x15424B10)
#define MOLEMOLE_GALGAME_CHATPLUSINITCFG_CHATPLUSINITCFG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x15424B20)
#define MOLEMOLE_GALGAME_CHATPLUSINITCFG_CHATPLUSINITCFG_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x15425B70)
#define MOLEMOLE_GALGAME_CHATPLUSINITCFG_CHATPLUSINITCFG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x154264B0)
#define MOLEMOLE_GALGAME_CHATPLUSINITCFG_CHATPLUSINITCFG_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x15426470)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int ChatPlusInitCfg_ChatPlusInitCfg_UnityGeneratedFormatter_TypeDefinitionIndex = 45417;

	class ChatPlusInitCfg_ChatPlusInitCfg_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::ChatPlusInitCfg*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::TagGroupBoolPair*>*>** StaticGet_CachedSerializer6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::TagGroupBoolPair*>*>**)Il2CppClass::FromTypeDefinitionIndex(ChatPlusInitCfg_ChatPlusInitCfg_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x34B10);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::TagBoolPair*>*>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::TagBoolPair*>*>**)Il2CppClass::FromTypeDefinitionIndex(ChatPlusInitCfg_ChatPlusInitCfg_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x34B18);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ChatPlusInitCfg_ChatPlusInitCfg_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x34B20);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::TagGroupAniPair*>*>** StaticGet_CachedSerializer7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::TagGroupAniPair*>*>**)Il2CppClass::FromTypeDefinitionIndex(ChatPlusInitCfg_ChatPlusInitCfg_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x34B28);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::DynamicObjectModifyActiveCfg*>*>** StaticGet_CachedSerializer8()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::DynamicObjectModifyActiveCfg*>*>**)Il2CppClass::FromTypeDefinitionIndex(ChatPlusInitCfg_ChatPlusInitCfg_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x34B30);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChatPlusInitCfg_ChatPlusInitCfg_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x34B38);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::TimelinePair*>*>** StaticGet_CachedSerializer9()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::TimelinePair*>*>**)Il2CppClass::FromTypeDefinitionIndex(ChatPlusInitCfg_ChatPlusInitCfg_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x34B40);
		}
		static ::Sirenix::Serialization::Serializer_1<::ProtoScript::TimePeriodType>** StaticGet_CachedSerializer11()
		{
			return (::Sirenix::Serialization::Serializer_1<::ProtoScript::TimePeriodType>**)Il2CppClass::FromTypeDefinitionIndex(ChatPlusInitCfg_ChatPlusInitCfg_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x34B48);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::TagAniPair*>*>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::TagAniPair*>*>**)Il2CppClass::FromTypeDefinitionIndex(ChatPlusInitCfg_ChatPlusInitCfg_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x34B50);
		}
		static ::Sirenix::Serialization::Serializer_1<::ProtoScript::ModTimeType>** StaticGet_CachedSerializer10()
		{
			return (::Sirenix::Serialization::Serializer_1<::ProtoScript::ModTimeType>**)Il2CppClass::FromTypeDefinitionIndex(ChatPlusInitCfg_ChatPlusInitCfg_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x34B58);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::LookIKCfg*>*>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::LookIKCfg*>*>**)Il2CppClass::FromTypeDefinitionIndex(ChatPlusInitCfg_ChatPlusInitCfg_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x34B60);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ChatPlusInitCfg_ChatPlusInitCfg_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x34B68);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_CHATPLUSINITCFG_CHATPLUSINITCFG_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_CHATPLUSINITCFG_CHATPLUSINITCFG_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_CHATPLUSINITCFG_CHATPLUSINITCFG_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::ChatPlusInitCfg*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::ChatPlusInitCfg*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_CHATPLUSINITCFG_CHATPLUSINITCFG_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::GalGame::ChatPlusInitCfg*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::ChatPlusInitCfg*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_CHATPLUSINITCFG_CHATPLUSINITCFG_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
