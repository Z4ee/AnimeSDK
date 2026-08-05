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

#define MOLEMOLE_CONFIGUICOMMON_HOLLOWCARD_CLASS_3_2B433FA47D5ED056_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19228C60)
#define MOLEMOLE_CONFIGUICOMMON_HOLLOWCARD_CLASS_3_2B433FA47D5ED056_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19228C70)
#define MOLEMOLE_CONFIGUICOMMON_HOLLOWCARD_CLASS_3_2B433FA47D5ED056_WRITE_OFFSET UNITYSDK_OFFSET(0x19228ED0)
#define MOLEMOLE_CONFIGUICOMMON_HOLLOWCARD_CLASS_3_2B433FA47D5ED056__CCTOR_OFFSET UNITYSDK_OFFSET(0x19229090)
#define MOLEMOLE_CONFIGUICOMMON_HOLLOWCARD_CLASS_3_2B433FA47D5ED056__CTOR_OFFSET UNITYSDK_OFFSET(0x19229050)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICommon_HollowCard_Class_3_2B433FA47D5ED056_TypeDefinitionIndex = 57612;

	class ConfigUICommon_HollowCard_Class_3_2B433FA47D5ED056 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigUICommon_HollowCard*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_HollowCard_Class_3_2B433FA47D5ED056_TypeDefinitionIndex)->GetStaticField(0x4FBE0);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::HollowCardCombineAnimationConfigs*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::HollowCardCombineAnimationConfigs*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_HollowCard_Class_3_2B433FA47D5ED056_TypeDefinitionIndex)->GetStaticField(0x4FBE8);
		}
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::HollowCardCombineConfig*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::HollowCardCombineConfig*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_HollowCard_Class_3_2B433FA47D5ED056_TypeDefinitionIndex)->GetStaticField(0x4FBF0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_HOLLOWCARD_CLASS_3_2B433FA47D5ED056__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_HOLLOWCARD_CLASS_3_2B433FA47D5ED056__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_HOLLOWCARD_CLASS_3_2B433FA47D5ED056_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigUICommon_HollowCard*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigUICommon_HollowCard*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_HOLLOWCARD_CLASS_3_2B433FA47D5ED056_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::ConfigUICommon_HollowCard*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUICommon_HollowCard*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_HOLLOWCARD_CLASS_3_2B433FA47D5ED056_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
