#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorStateTimeSegment; }
namespace MoleMole::Config { class ConfigEntityRunState; }
namespace MoleMole::Config { class SetMonsterRunStateZone; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_SETMONSTERRUNSTATEZONE_CLASS_3_700515C58B9E3ADC_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x172BE210)
#define MOLEMOLE_CONFIG_SETMONSTERRUNSTATEZONE_CLASS_3_700515C58B9E3ADC_READMEMBER_OFFSET UNITYSDK_OFFSET(0x172BE220)
#define MOLEMOLE_CONFIG_SETMONSTERRUNSTATEZONE_CLASS_3_700515C58B9E3ADC_WRITE_OFFSET UNITYSDK_OFFSET(0x172BE670)
#define MOLEMOLE_CONFIG_SETMONSTERRUNSTATEZONE_CLASS_3_700515C58B9E3ADC__CCTOR_OFFSET UNITYSDK_OFFSET(0x172BE940)
#define MOLEMOLE_CONFIG_SETMONSTERRUNSTATEZONE_CLASS_3_700515C58B9E3ADC__CTOR_OFFSET UNITYSDK_OFFSET(0x172BE900)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SetMonsterRunStateZone_Class_3_700515C58B9E3ADC_TypeDefinitionIndex = 65284;

	class SetMonsterRunStateZone_Class_3_700515C58B9E3ADC : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::SetMonsterRunStateZone*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityRunState*>** StaticGet_Field_3_4()
		{
			return (::Sirenix::Serialization::Serializer_1<::MoleMole::Config::ConfigEntityRunState*>**)Il2CppClass::FromTypeDefinitionIndex(SetMonsterRunStateZone_Class_3_700515C58B9E3ADC_TypeDefinitionIndex)->GetStaticField(0x3F720);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*>*>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Config::AnimatorStateTimeSegment*>*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(SetMonsterRunStateZone_Class_3_700515C58B9E3ADC_TypeDefinitionIndex)->GetStaticField(0x3F728);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::HashSet_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(SetMonsterRunStateZone_Class_3_700515C58B9E3ADC_TypeDefinitionIndex)->GetStaticField(0x3F730);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Type*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(SetMonsterRunStateZone_Class_3_700515C58B9E3ADC_TypeDefinitionIndex)->GetStaticField(0x3F738);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(SetMonsterRunStateZone_Class_3_700515C58B9E3ADC_TypeDefinitionIndex)->GetStaticField(0x3F740);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SETMONSTERRUNSTATEZONE_CLASS_3_700515C58B9E3ADC__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SETMONSTERRUNSTATEZONE_CLASS_3_700515C58B9E3ADC__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SETMONSTERRUNSTATEZONE_CLASS_3_700515C58B9E3ADC_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::SetMonsterRunStateZone*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::SetMonsterRunStateZone*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SETMONSTERRUNSTATEZONE_CLASS_3_700515C58B9E3ADC_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::SetMonsterRunStateZone*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::SetMonsterRunStateZone*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SETMONSTERRUNSTATEZONE_CLASS_3_700515C58B9E3ADC_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
