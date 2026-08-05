#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AttackPropWrap; }
namespace MoleMole::Config { class AttackPropertyLibrary; }
namespace MoleMole::Config { class HitGroundWrap; }
namespace MoleMole::Config { class ShakeWrap; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_ATTACKPROPERTYLIBRARY_CLASS_3_D49BD53AA4D4C6B7_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x12EF7D20)
#define MOLEMOLE_CONFIG_ATTACKPROPERTYLIBRARY_CLASS_3_D49BD53AA4D4C6B7_READMEMBER_OFFSET UNITYSDK_OFFSET(0x12EF7D30)
#define MOLEMOLE_CONFIG_ATTACKPROPERTYLIBRARY_CLASS_3_D49BD53AA4D4C6B7_WRITE_OFFSET UNITYSDK_OFFSET(0x12EF7F80)
#define MOLEMOLE_CONFIG_ATTACKPROPERTYLIBRARY_CLASS_3_D49BD53AA4D4C6B7__CCTOR_OFFSET UNITYSDK_OFFSET(0x12EF8140)
#define MOLEMOLE_CONFIG_ATTACKPROPERTYLIBRARY_CLASS_3_D49BD53AA4D4C6B7__CTOR_OFFSET UNITYSDK_OFFSET(0x12EF8100)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AttackPropertyLibrary_Class_3_D49BD53AA4D4C6B7_TypeDefinitionIndex = 54074;

	class AttackPropertyLibrary_Class_3_D49BD53AA4D4C6B7 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::Config::AttackPropertyLibrary*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::AttackPropWrap*>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::AttackPropWrap*>*>**)Il2CppClass::FromTypeDefinitionIndex(AttackPropertyLibrary_Class_3_D49BD53AA4D4C6B7_TypeDefinitionIndex)->GetStaticField(0x4E620);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::HitGroundWrap*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::HitGroundWrap*>*>**)Il2CppClass::FromTypeDefinitionIndex(AttackPropertyLibrary_Class_3_D49BD53AA4D4C6B7_TypeDefinitionIndex)->GetStaticField(0x4E628);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ShakeWrap*>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ShakeWrap*>*>**)Il2CppClass::FromTypeDefinitionIndex(AttackPropertyLibrary_Class_3_D49BD53AA4D4C6B7_TypeDefinitionIndex)->GetStaticField(0x4E630);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTACKPROPERTYLIBRARY_CLASS_3_D49BD53AA4D4C6B7__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTACKPROPERTYLIBRARY_CLASS_3_D49BD53AA4D4C6B7__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTACKPROPERTYLIBRARY_CLASS_3_D49BD53AA4D4C6B7_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AttackPropertyLibrary*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AttackPropertyLibrary*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTACKPROPERTYLIBRARY_CLASS_3_D49BD53AA4D4C6B7_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::Config::AttackPropertyLibrary*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AttackPropertyLibrary*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATTACKPROPERTYLIBRARY_CLASS_3_D49BD53AA4D4C6B7_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
