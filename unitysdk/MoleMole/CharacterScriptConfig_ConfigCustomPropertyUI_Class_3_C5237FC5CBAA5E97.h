#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class CharacterScriptConfig_ConfigCustomPropertyUI; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CHARACTERSCRIPTCONFIG_CONFIGCUSTOMPROPERTYUI_CLASS_3_C5237FC5CBAA5E97_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x177BB7A0)
#define MOLEMOLE_CHARACTERSCRIPTCONFIG_CONFIGCUSTOMPROPERTYUI_CLASS_3_C5237FC5CBAA5E97_READMEMBER_OFFSET UNITYSDK_OFFSET(0x177BB7B0)
#define MOLEMOLE_CHARACTERSCRIPTCONFIG_CONFIGCUSTOMPROPERTYUI_CLASS_3_C5237FC5CBAA5E97_WRITE_OFFSET UNITYSDK_OFFSET(0x177BBE90)
#define MOLEMOLE_CHARACTERSCRIPTCONFIG_CONFIGCUSTOMPROPERTYUI_CLASS_3_C5237FC5CBAA5E97__CCTOR_OFFSET UNITYSDK_OFFSET(0x177BC2C0)
#define MOLEMOLE_CHARACTERSCRIPTCONFIG_CONFIGCUSTOMPROPERTYUI_CLASS_3_C5237FC5CBAA5E97__CTOR_OFFSET UNITYSDK_OFFSET(0x177BC280)

namespace MoleMole
{
	inline static constexpr unsigned int CharacterScriptConfig_ConfigCustomPropertyUI_Class_3_C5237FC5CBAA5E97_TypeDefinitionIndex = 48409;

	class CharacterScriptConfig_ConfigCustomPropertyUI_Class_3_C5237FC5CBAA5E97 : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::CharacterScriptConfig_ConfigCustomPropertyUI*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_Field_3_1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_ConfigCustomPropertyUI_Class_3_C5237FC5CBAA5E97_TypeDefinitionIndex)->GetStaticField(0x448B0);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(CharacterScriptConfig_ConfigCustomPropertyUI_Class_3_C5237FC5CBAA5E97_TypeDefinitionIndex)->GetStaticField(0x448B8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERSCRIPTCONFIG_CONFIGCUSTOMPROPERTYUI_CLASS_3_C5237FC5CBAA5E97__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERSCRIPTCONFIG_CONFIGCUSTOMPROPERTYUI_CLASS_3_C5237FC5CBAA5E97__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERSCRIPTCONFIG_CONFIGCUSTOMPROPERTYUI_CLASS_3_C5237FC5CBAA5E97_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::CharacterScriptConfig_ConfigCustomPropertyUI*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::CharacterScriptConfig_ConfigCustomPropertyUI*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERSCRIPTCONFIG_CONFIGCUSTOMPROPERTYUI_CLASS_3_C5237FC5CBAA5E97_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::CharacterScriptConfig_ConfigCustomPropertyUI*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::CharacterScriptConfig_ConfigCustomPropertyUI*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHARACTERSCRIPTCONFIG_CONFIGCUSTOMPROPERTYUI_CLASS_3_C5237FC5CBAA5E97_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
