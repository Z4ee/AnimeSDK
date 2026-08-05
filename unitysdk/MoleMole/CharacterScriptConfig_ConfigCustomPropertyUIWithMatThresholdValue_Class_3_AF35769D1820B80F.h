#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class CharacterScriptConfig_ConfigCustomPropertyUIWithMatThresholdValue; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CHARACTERSCRIPTCONFIG_CONFIGCUSTOMPROPERTYUIWITHMATTHRESHOLDVALUE_CLASS_3_AF35769D1820B80F_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x148451A0)
#define MOLEMOLE_CHARACTERSCRIPTCONFIG_CONFIGCUSTOMPROPERTYUIWITHMATTHRESHOLDVALUE_CLASS_3_AF35769D1820B80F_READMEMBER_OFFSET UNITYSDK_OFFSET(0x148451B0)
#define MOLEMOLE_CHARACTERSCRIPTCONFIG_CONFIGCUSTOMPROPERTYUIWITHMATTHRESHOLDVALUE_CLASS_3_AF35769D1820B80F_WRITE_OFFSET UNITYSDK_OFFSET(0x148459D0)
#define MOLEMOLE_CHARACTERSCRIPTCONFIG_CONFIGCUSTOMPROPERTYUIWITHMATTHRESHOLDVALUE_CLASS_3_AF35769D1820B80F__CCTOR_OFFSET UNITYSDK_OFFSET(0x14845EB0)
#define MOLEMOLE_CHARACTERSCRIPTCONFIG_CONFIGCUSTOMPROPERTYUIWITHMATTHRESHOLDVALUE_CLASS_3_AF35769D1820B80F__CTOR_OFFSET UNITYSDK_OFFSET(0x14845E70)

namespace MoleMole
{
	inline static constexpr unsigned int CharacterScriptConfig_ConfigCustomPropertyUIWithMatThresholdValue_Class_3_AF35769D1820B80F_TypeDefinitionIndex = 48419;

	class CharacterScriptConfig_ConfigCustomPropertyUIWithMatThresholdValue_Class_3_AF35769D1820B80F : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::CharacterScriptConfig_ConfigCustomPropertyUIWithMatThresholdValue*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_ConfigCustomPropertyUIWithMatThresholdValue_Class_3_AF35769D1820B80F_TypeDefinitionIndex)->GetStaticField(0x421B0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_ConfigCustomPropertyUIWithMatThresholdValue_Class_3_AF35769D1820B80F_TypeDefinitionIndex)->GetStaticField(0x421B8);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_ConfigCustomPropertyUIWithMatThresholdValue_Class_3_AF35769D1820B80F_TypeDefinitionIndex)->GetStaticField(0x421C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERSCRIPTCONFIG_CONFIGCUSTOMPROPERTYUIWITHMATTHRESHOLDVALUE_CLASS_3_AF35769D1820B80F__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERSCRIPTCONFIG_CONFIGCUSTOMPROPERTYUIWITHMATTHRESHOLDVALUE_CLASS_3_AF35769D1820B80F__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERSCRIPTCONFIG_CONFIGCUSTOMPROPERTYUIWITHMATTHRESHOLDVALUE_CLASS_3_AF35769D1820B80F_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::CharacterScriptConfig_ConfigCustomPropertyUIWithMatThresholdValue*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::CharacterScriptConfig_ConfigCustomPropertyUIWithMatThresholdValue*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERSCRIPTCONFIG_CONFIGCUSTOMPROPERTYUIWITHMATTHRESHOLDVALUE_CLASS_3_AF35769D1820B80F_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::CharacterScriptConfig_ConfigCustomPropertyUIWithMatThresholdValue*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::CharacterScriptConfig_ConfigCustomPropertyUIWithMatThresholdValue*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERSCRIPTCONFIG_CONFIGCUSTOMPROPERTYUIWITHMATTHRESHOLDVALUE_CLASS_3_AF35769D1820B80F_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
