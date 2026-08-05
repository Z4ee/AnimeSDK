#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigUISound; }
namespace MoleMole { class ConfigUISound_StateTriggerConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGUISOUND_CLASS_3_4B16B3A54AD5B207_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x16276590)
#define MOLEMOLE_CONFIGUISOUND_CLASS_3_4B16B3A54AD5B207_READMEMBER_OFFSET UNITYSDK_OFFSET(0x162765A0)
#define MOLEMOLE_CONFIGUISOUND_CLASS_3_4B16B3A54AD5B207_WRITE_OFFSET UNITYSDK_OFFSET(0x16276800)
#define MOLEMOLE_CONFIGUISOUND_CLASS_3_4B16B3A54AD5B207__CCTOR_OFFSET UNITYSDK_OFFSET(0x162769C0)
#define MOLEMOLE_CONFIGUISOUND_CLASS_3_4B16B3A54AD5B207__CTOR_OFFSET UNITYSDK_OFFSET(0x16276980)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUISound_Class_3_4B16B3A54AD5B207_TypeDefinitionIndex = 90156;

	class ConfigUISound_Class_3_4B16B3A54AD5B207 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigUISound*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*>*>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUISound_Class_3_4B16B3A54AD5B207_TypeDefinitionIndex)->GetStaticField(0x32520);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::UInt32>*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::UInt32>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUISound_Class_3_4B16B3A54AD5B207_TypeDefinitionIndex)->GetStaticField(0x32528);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigUISound_StateTriggerConfig*>*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigUISound_StateTriggerConfig*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUISound_Class_3_4B16B3A54AD5B207_TypeDefinitionIndex)->GetStaticField(0x32530);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUISOUND_CLASS_3_4B16B3A54AD5B207__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUISOUND_CLASS_3_4B16B3A54AD5B207__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUISOUND_CLASS_3_4B16B3A54AD5B207_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigUISound*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigUISound*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUISOUND_CLASS_3_4B16B3A54AD5B207_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::ConfigUISound*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUISound*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUISOUND_CLASS_3_4B16B3A54AD5B207_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
