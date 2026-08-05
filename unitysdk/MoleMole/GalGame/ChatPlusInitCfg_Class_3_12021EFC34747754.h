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

#define MOLEMOLE_GALGAME_CHATPLUSINITCFG_CLASS_3_12021EFC34747754_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x16853410)
#define MOLEMOLE_GALGAME_CHATPLUSINITCFG_CLASS_3_12021EFC34747754_READMEMBER_OFFSET UNITYSDK_OFFSET(0x16853420)
#define MOLEMOLE_GALGAME_CHATPLUSINITCFG_CLASS_3_12021EFC34747754_WRITE_OFFSET UNITYSDK_OFFSET(0x168543D0)
#define MOLEMOLE_GALGAME_CHATPLUSINITCFG_CLASS_3_12021EFC34747754__CCTOR_OFFSET UNITYSDK_OFFSET(0x16854CF0)
#define MOLEMOLE_GALGAME_CHATPLUSINITCFG_CLASS_3_12021EFC34747754__CTOR_OFFSET UNITYSDK_OFFSET(0x16854CB0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int ChatPlusInitCfg_Class_3_12021EFC34747754_TypeDefinitionIndex = 57879;

	class ChatPlusInitCfg_Class_3_12021EFC34747754 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::GalGame::ChatPlusInitCfg*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::LookIKCfg*>*>** StaticGet_Field_3_11()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::LookIKCfg*>*>**)Il2CppClass::FromTypeDefinitionIndex(ChatPlusInitCfg_Class_3_12021EFC34747754_TypeDefinitionIndex)->GetStaticField(0x366A0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ChatPlusInitCfg_Class_3_12021EFC34747754_TypeDefinitionIndex)->GetStaticField(0x366A8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::TagGroupBoolPair*>*>** StaticGet_Field_3_10()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::TagGroupBoolPair*>*>**)Il2CppClass::FromTypeDefinitionIndex(ChatPlusInitCfg_Class_3_12021EFC34747754_TypeDefinitionIndex)->GetStaticField(0x366B0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::TagAniPair*>*>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::TagAniPair*>*>**)Il2CppClass::FromTypeDefinitionIndex(ChatPlusInitCfg_Class_3_12021EFC34747754_TypeDefinitionIndex)->GetStaticField(0x366B8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::TagBoolPair*>*>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::TagBoolPair*>*>**)Il2CppClass::FromTypeDefinitionIndex(ChatPlusInitCfg_Class_3_12021EFC34747754_TypeDefinitionIndex)->GetStaticField(0x366C0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::DynamicObjectModifyActiveCfg*>*>** StaticGet_Field_3_8()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::DynamicObjectModifyActiveCfg*>*>**)Il2CppClass::FromTypeDefinitionIndex(ChatPlusInitCfg_Class_3_12021EFC34747754_TypeDefinitionIndex)->GetStaticField(0x366C8);
		}
		static ::Sirenix::Serialization::Serializer_1<::ProtoScript::ModTimeType>** StaticGet_Field_3_14()
		{
			return (::Sirenix::Serialization::Serializer_1<::ProtoScript::ModTimeType>**)Il2CppClass::FromTypeDefinitionIndex(ChatPlusInitCfg_Class_3_12021EFC34747754_TypeDefinitionIndex)->GetStaticField(0x366D0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChatPlusInitCfg_Class_3_12021EFC34747754_TypeDefinitionIndex)->GetStaticField(0x366D8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ChatPlusInitCfg_Class_3_12021EFC34747754_TypeDefinitionIndex)->GetStaticField(0x366E0);
		}
		static ::Sirenix::Serialization::Serializer_1<::ProtoScript::TimePeriodType>** StaticGet_Field_3_13()
		{
			return (::Sirenix::Serialization::Serializer_1<::ProtoScript::TimePeriodType>**)Il2CppClass::FromTypeDefinitionIndex(ChatPlusInitCfg_Class_3_12021EFC34747754_TypeDefinitionIndex)->GetStaticField(0x366E8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::TagGroupAniPair*>*>** StaticGet_Field_3_9()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::TagGroupAniPair*>*>**)Il2CppClass::FromTypeDefinitionIndex(ChatPlusInitCfg_Class_3_12021EFC34747754_TypeDefinitionIndex)->GetStaticField(0x366F0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::TimelinePair*>*>** StaticGet_Field_3_15()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::GalGame::TimelinePair*>*>**)Il2CppClass::FromTypeDefinitionIndex(ChatPlusInitCfg_Class_3_12021EFC34747754_TypeDefinitionIndex)->GetStaticField(0x366F8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_CHATPLUSINITCFG_CLASS_3_12021EFC34747754__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_CHATPLUSINITCFG_CLASS_3_12021EFC34747754__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_CHATPLUSINITCFG_CLASS_3_12021EFC34747754_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::ChatPlusInitCfg*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::ChatPlusInitCfg*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_CHATPLUSINITCFG_CLASS_3_12021EFC34747754_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::GalGame::ChatPlusInitCfg*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::ChatPlusInitCfg*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_CHATPLUSINITCFG_CLASS_3_12021EFC34747754_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
