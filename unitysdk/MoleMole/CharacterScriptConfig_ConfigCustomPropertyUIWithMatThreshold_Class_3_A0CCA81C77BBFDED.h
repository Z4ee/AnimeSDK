#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class CharacterScriptConfig_ConfigCustomPropertyUIWithMatThreshold; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CHARACTERSCRIPTCONFIG_CONFIGCUSTOMPROPERTYUIWITHMATTHRESHOLD_CLASS_3_A0CCA81C77BBFDED_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x12EE4180)
#define MOLEMOLE_CHARACTERSCRIPTCONFIG_CONFIGCUSTOMPROPERTYUIWITHMATTHRESHOLD_CLASS_3_A0CCA81C77BBFDED_READMEMBER_OFFSET UNITYSDK_OFFSET(0x12EE4190)
#define MOLEMOLE_CHARACTERSCRIPTCONFIG_CONFIGCUSTOMPROPERTYUIWITHMATTHRESHOLD_CLASS_3_A0CCA81C77BBFDED_WRITE_OFFSET UNITYSDK_OFFSET(0x12EE49B0)
#define MOLEMOLE_CHARACTERSCRIPTCONFIG_CONFIGCUSTOMPROPERTYUIWITHMATTHRESHOLD_CLASS_3_A0CCA81C77BBFDED__CCTOR_OFFSET UNITYSDK_OFFSET(0x12EE4E90)
#define MOLEMOLE_CHARACTERSCRIPTCONFIG_CONFIGCUSTOMPROPERTYUIWITHMATTHRESHOLD_CLASS_3_A0CCA81C77BBFDED__CTOR_OFFSET UNITYSDK_OFFSET(0x12EE4E50)

namespace MoleMole
{
	inline static constexpr unsigned int CharacterScriptConfig_ConfigCustomPropertyUIWithMatThreshold_Class_3_A0CCA81C77BBFDED_TypeDefinitionIndex = 48417;

	class CharacterScriptConfig_ConfigCustomPropertyUIWithMatThreshold_Class_3_A0CCA81C77BBFDED : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::CharacterScriptConfig_ConfigCustomPropertyUIWithMatThreshold*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_ConfigCustomPropertyUIWithMatThreshold_Class_3_A0CCA81C77BBFDED_TypeDefinitionIndex)->GetStaticField(0x4E510);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_ConfigCustomPropertyUIWithMatThreshold_Class_3_A0CCA81C77BBFDED_TypeDefinitionIndex)->GetStaticField(0x4E518);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_ConfigCustomPropertyUIWithMatThreshold_Class_3_A0CCA81C77BBFDED_TypeDefinitionIndex)->GetStaticField(0x4E520);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERSCRIPTCONFIG_CONFIGCUSTOMPROPERTYUIWITHMATTHRESHOLD_CLASS_3_A0CCA81C77BBFDED__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERSCRIPTCONFIG_CONFIGCUSTOMPROPERTYUIWITHMATTHRESHOLD_CLASS_3_A0CCA81C77BBFDED__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERSCRIPTCONFIG_CONFIGCUSTOMPROPERTYUIWITHMATTHRESHOLD_CLASS_3_A0CCA81C77BBFDED_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::CharacterScriptConfig_ConfigCustomPropertyUIWithMatThreshold*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::CharacterScriptConfig_ConfigCustomPropertyUIWithMatThreshold*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERSCRIPTCONFIG_CONFIGCUSTOMPROPERTYUIWITHMATTHRESHOLD_CLASS_3_A0CCA81C77BBFDED_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::CharacterScriptConfig_ConfigCustomPropertyUIWithMatThreshold*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::CharacterScriptConfig_ConfigCustomPropertyUIWithMatThreshold*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERSCRIPTCONFIG_CONFIGCUSTOMPROPERTYUIWITHMATTHRESHOLD_CLASS_3_A0CCA81C77BBFDED_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
