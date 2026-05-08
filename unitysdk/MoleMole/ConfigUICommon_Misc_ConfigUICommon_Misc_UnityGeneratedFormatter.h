#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/EHollowQuestType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole { class AreaPositionConfig; }
namespace MoleMole { class BattleEvaluteConfigs; }
namespace MoleMole { class CardOptionConfigs; }
namespace MoleMole { class CardOptionRarityConfigs; }
namespace MoleMole { class ConfigUICommon_Misc; }
namespace MoleMole { class DepositoryPageTabConfigs; }
namespace MoleMole { class ItemIconTweenConfig; }
namespace MoleMole { class ItemRarityConfigs; }
namespace MoleMole { class RoleRarityIconConfigs; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIGUICOMMON_MISC_CONFIGUICOMMON_MISC_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1103F030)
#define MOLEMOLE_CONFIGUICOMMON_MISC_CONFIGUICOMMON_MISC_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1103F040)
#define MOLEMOLE_CONFIGUICOMMON_MISC_CONFIGUICOMMON_MISC_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x1103F790)
#define MOLEMOLE_CONFIGUICOMMON_MISC_CONFIGUICOMMON_MISC_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1103FC00)
#define MOLEMOLE_CONFIGUICOMMON_MISC_CONFIGUICOMMON_MISC_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1103FBC0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICommon_Misc_ConfigUICommon_Misc_UnityGeneratedFormatter_TypeDefinitionIndex = 52814;

	class ConfigUICommon_Misc_ConfigUICommon_Misc_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigUICommon_Misc*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::DepositoryPageTabConfigs*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::DepositoryPageTabConfigs*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Misc_ConfigUICommon_Misc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x2E710);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::RoleRarityIconConfigs*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::RoleRarityIconConfigs*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Misc_ConfigUICommon_Misc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x2E718);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::Share::EHollowQuestType, ::UnityEngine::Color>*>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::Share::EHollowQuestType, ::UnityEngine::Color>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Misc_ConfigUICommon_Misc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x2E720);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::AreaPositionConfig*>*>** StaticGet_CachedSerializer9()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::AreaPositionConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Misc_ConfigUICommon_Misc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x2E728);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Color>*>** StaticGet_CachedSerializer8()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Color>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Misc_ConfigUICommon_Misc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x2E730);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::CardOptionConfigs*>** StaticGet_CachedSerializer6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::CardOptionConfigs*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Misc_ConfigUICommon_Misc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x2E738);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::CardOptionRarityConfigs*>** StaticGet_CachedSerializer7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::CardOptionRarityConfigs*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Misc_ConfigUICommon_Misc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x2E740);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::BattleEvaluteConfigs*>** StaticGet_CachedSerializer5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::BattleEvaluteConfigs*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Misc_ConfigUICommon_Misc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x2E748);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::ItemRarityConfigs*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::ItemRarityConfigs*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Misc_ConfigUICommon_Misc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x2E750);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::ItemIconTweenConfig*>** StaticGet_CachedSerializer4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::ItemIconTweenConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Misc_ConfigUICommon_Misc_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x2E758);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_MISC_CONFIGUICOMMON_MISC_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_MISC_CONFIGUICOMMON_MISC_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_MISC_CONFIGUICOMMON_MISC_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigUICommon_Misc*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigUICommon_Misc*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_MISC_CONFIGUICOMMON_MISC_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::ConfigUICommon_Misc*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUICommon_Misc*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_MISC_CONFIGUICOMMON_MISC_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
