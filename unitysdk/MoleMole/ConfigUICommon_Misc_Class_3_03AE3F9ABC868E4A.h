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

#define MOLEMOLE_CONFIGUICOMMON_MISC_CLASS_3_03AE3F9ABC868E4A_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x14881940)
#define MOLEMOLE_CONFIGUICOMMON_MISC_CLASS_3_03AE3F9ABC868E4A_READMEMBER_OFFSET UNITYSDK_OFFSET(0x14881950)
#define MOLEMOLE_CONFIGUICOMMON_MISC_CLASS_3_03AE3F9ABC868E4A_WRITE_OFFSET UNITYSDK_OFFSET(0x14882040)
#define MOLEMOLE_CONFIGUICOMMON_MISC_CLASS_3_03AE3F9ABC868E4A__CCTOR_OFFSET UNITYSDK_OFFSET(0x14882480)
#define MOLEMOLE_CONFIGUICOMMON_MISC_CLASS_3_03AE3F9ABC868E4A__CTOR_OFFSET UNITYSDK_OFFSET(0x14882440)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICommon_Misc_Class_3_03AE3F9ABC868E4A_TypeDefinitionIndex = 87326;

	class ConfigUICommon_Misc_Class_3_03AE3F9ABC868E4A : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigUICommon_Misc*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::CardOptionRarityConfigs*>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::CardOptionRarityConfigs*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Misc_Class_3_03AE3F9ABC868E4A_TypeDefinitionIndex)->GetStaticField(0x424D0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::AreaPositionConfig*>*>** StaticGet_Field_3_10()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::AreaPositionConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Misc_Class_3_03AE3F9ABC868E4A_TypeDefinitionIndex)->GetStaticField(0x424D8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::Share::EHollowQuestType, ::UnityEngine::Color>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::Share::EHollowQuestType, ::UnityEngine::Color>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Misc_Class_3_03AE3F9ABC868E4A_TypeDefinitionIndex)->GetStaticField(0x424E0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Color>*>** StaticGet_Field_3_11()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Color>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Misc_Class_3_03AE3F9ABC868E4A_TypeDefinitionIndex)->GetStaticField(0x424E8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::BattleEvaluteConfigs*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::BattleEvaluteConfigs*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Misc_Class_3_03AE3F9ABC868E4A_TypeDefinitionIndex)->GetStaticField(0x424F0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::RoleRarityIconConfigs*>** StaticGet_Field_3_3()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::RoleRarityIconConfigs*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Misc_Class_3_03AE3F9ABC868E4A_TypeDefinitionIndex)->GetStaticField(0x424F8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::ItemRarityConfigs*>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::ItemRarityConfigs*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Misc_Class_3_03AE3F9ABC868E4A_TypeDefinitionIndex)->GetStaticField(0x42500);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::CardOptionConfigs*>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::CardOptionConfigs*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Misc_Class_3_03AE3F9ABC868E4A_TypeDefinitionIndex)->GetStaticField(0x42508);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::DepositoryPageTabConfigs*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::DepositoryPageTabConfigs*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Misc_Class_3_03AE3F9ABC868E4A_TypeDefinitionIndex)->GetStaticField(0x42510);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::ItemIconTweenConfig*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::ItemIconTweenConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Misc_Class_3_03AE3F9ABC868E4A_TypeDefinitionIndex)->GetStaticField(0x42518);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_MISC_CLASS_3_03AE3F9ABC868E4A__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_MISC_CLASS_3_03AE3F9ABC868E4A__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_MISC_CLASS_3_03AE3F9ABC868E4A_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigUICommon_Misc*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigUICommon_Misc*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_MISC_CLASS_3_03AE3F9ABC868E4A_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::ConfigUICommon_Misc*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUICommon_Misc*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_MISC_CLASS_3_03AE3F9ABC868E4A_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
