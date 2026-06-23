#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigUICommon_HollowCard; }
namespace MoleMole { class HollowCardCombineAnimationConfigs; }
namespace MoleMole { class HollowCardCombineConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGUICOMMON_HOLLOWCARD_CONFIGUICOMMON_HOLLOWCARD_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x192B5D90)
#define MOLEMOLE_CONFIGUICOMMON_HOLLOWCARD_CONFIGUICOMMON_HOLLOWCARD_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x192B5DA0)
#define MOLEMOLE_CONFIGUICOMMON_HOLLOWCARD_CONFIGUICOMMON_HOLLOWCARD_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x192B6040)
#define MOLEMOLE_CONFIGUICOMMON_HOLLOWCARD_CONFIGUICOMMON_HOLLOWCARD_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x192B6240)
#define MOLEMOLE_CONFIGUICOMMON_HOLLOWCARD_CONFIGUICOMMON_HOLLOWCARD_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x192B6200)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICommon_HollowCard_ConfigUICommon_HollowCard_UnityGeneratedFormatter_TypeDefinitionIndex = 61178;

	class ConfigUICommon_HollowCard_ConfigUICommon_HollowCard_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigUICommon_HollowCard*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::HollowCardCombineAnimationConfigs*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::HollowCardCombineAnimationConfigs*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_HollowCard_ConfigUICommon_HollowCard_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40E80);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_HollowCard_ConfigUICommon_HollowCard_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40E88);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::HollowCardCombineConfig*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::HollowCardCombineConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_HollowCard_ConfigUICommon_HollowCard_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x40E90);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_HOLLOWCARD_CONFIGUICOMMON_HOLLOWCARD_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_HOLLOWCARD_CONFIGUICOMMON_HOLLOWCARD_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_HOLLOWCARD_CONFIGUICOMMON_HOLLOWCARD_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigUICommon_HollowCard*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigUICommon_HollowCard*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_HOLLOWCARD_CONFIGUICOMMON_HOLLOWCARD_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::ConfigUICommon_HollowCard*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUICommon_HollowCard*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_HOLLOWCARD_CONFIGUICOMMON_HOLLOWCARD_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
