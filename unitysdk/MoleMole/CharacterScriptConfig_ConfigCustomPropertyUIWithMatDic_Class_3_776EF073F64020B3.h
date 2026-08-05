#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class CharacterScriptConfig_ConfigCustomPropertyUIWithMatDic; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CHARACTERSCRIPTCONFIG_CONFIGCUSTOMPROPERTYUIWITHMATDIC_CLASS_3_776EF073F64020B3_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x116D8920)
#define MOLEMOLE_CHARACTERSCRIPTCONFIG_CONFIGCUSTOMPROPERTYUIWITHMATDIC_CLASS_3_776EF073F64020B3_READMEMBER_OFFSET UNITYSDK_OFFSET(0x116D8930)
#define MOLEMOLE_CHARACTERSCRIPTCONFIG_CONFIGCUSTOMPROPERTYUIWITHMATDIC_CLASS_3_776EF073F64020B3_WRITE_OFFSET UNITYSDK_OFFSET(0x116D90B0)
#define MOLEMOLE_CHARACTERSCRIPTCONFIG_CONFIGCUSTOMPROPERTYUIWITHMATDIC_CLASS_3_776EF073F64020B3__CCTOR_OFFSET UNITYSDK_OFFSET(0x116D9530)
#define MOLEMOLE_CHARACTERSCRIPTCONFIG_CONFIGCUSTOMPROPERTYUIWITHMATDIC_CLASS_3_776EF073F64020B3__CTOR_OFFSET UNITYSDK_OFFSET(0x116D94F0)

namespace MoleMole
{
	inline static constexpr unsigned int CharacterScriptConfig_ConfigCustomPropertyUIWithMatDic_Class_3_776EF073F64020B3_TypeDefinitionIndex = 48411;

	class CharacterScriptConfig_ConfigCustomPropertyUIWithMatDic_Class_3_776EF073F64020B3 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::CharacterScriptConfig_ConfigCustomPropertyUIWithMatDic*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_ConfigCustomPropertyUIWithMatDic_Class_3_776EF073F64020B3_TypeDefinitionIndex)->GetStaticField(0x4F720);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_ConfigCustomPropertyUIWithMatDic_Class_3_776EF073F64020B3_TypeDefinitionIndex)->GetStaticField(0x4F728);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_ConfigCustomPropertyUIWithMatDic_Class_3_776EF073F64020B3_TypeDefinitionIndex)->GetStaticField(0x4F730);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERSCRIPTCONFIG_CONFIGCUSTOMPROPERTYUIWITHMATDIC_CLASS_3_776EF073F64020B3__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERSCRIPTCONFIG_CONFIGCUSTOMPROPERTYUIWITHMATDIC_CLASS_3_776EF073F64020B3__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERSCRIPTCONFIG_CONFIGCUSTOMPROPERTYUIWITHMATDIC_CLASS_3_776EF073F64020B3_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::CharacterScriptConfig_ConfigCustomPropertyUIWithMatDic*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::CharacterScriptConfig_ConfigCustomPropertyUIWithMatDic*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERSCRIPTCONFIG_CONFIGCUSTOMPROPERTYUIWITHMATDIC_CLASS_3_776EF073F64020B3_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::CharacterScriptConfig_ConfigCustomPropertyUIWithMatDic*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::CharacterScriptConfig_ConfigCustomPropertyUIWithMatDic*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERSCRIPTCONFIG_CONFIGCUSTOMPROPERTYUIWITHMATDIC_CLASS_3_776EF073F64020B3_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
