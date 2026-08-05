#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/TextureSheetType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class BlendTextureSheetData; }
namespace MoleMole { class ConfigTextureSheet; }
namespace MoleMole { class RandomTextureSheetData; }
namespace MoleMole { class TextureSheetData; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIGTEXTURESHEET_CLASS_3_908E7B1B06701C1F_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A94D310)
#define MOLEMOLE_CONFIGTEXTURESHEET_CLASS_3_908E7B1B06701C1F_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A94D320)
#define MOLEMOLE_CONFIGTEXTURESHEET_CLASS_3_908E7B1B06701C1F_WRITE_OFFSET UNITYSDK_OFFSET(0x1A94D630)
#define MOLEMOLE_CONFIGTEXTURESHEET_CLASS_3_908E7B1B06701C1F__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A94D840)
#define MOLEMOLE_CONFIGTEXTURESHEET_CLASS_3_908E7B1B06701C1F__CTOR_OFFSET UNITYSDK_OFFSET(0x1A94D800)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigTextureSheet_Class_3_908E7B1B06701C1F_TypeDefinitionIndex = 46575;

	class ConfigTextureSheet_Class_3_908E7B1B06701C1F : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigTextureSheet*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::BlendTextureSheetData*>*>** StaticGet_Field_3_6()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::BlendTextureSheetData*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigTextureSheet_Class_3_908E7B1B06701C1F_TypeDefinitionIndex)->GetStaticField(0x36610);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::TextureSheetData*>*>** StaticGet_Field_3_0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::TextureSheetData*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigTextureSheet_Class_3_908E7B1B06701C1F_TypeDefinitionIndex)->GetStaticField(0x36618);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::TextureSheetType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::TextureSheetData*>*>*>** StaticGet_Field_3_7()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::TextureSheetType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::TextureSheetData*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigTextureSheet_Class_3_908E7B1B06701C1F_TypeDefinitionIndex)->GetStaticField(0x36620);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::RandomTextureSheetData*>*>** StaticGet_Field_3_5()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::RandomTextureSheetData*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigTextureSheet_Class_3_908E7B1B06701C1F_TypeDefinitionIndex)->GetStaticField(0x36628);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTEXTURESHEET_CLASS_3_908E7B1B06701C1F__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTEXTURESHEET_CLASS_3_908E7B1B06701C1F__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTEXTURESHEET_CLASS_3_908E7B1B06701C1F_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigTextureSheet*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigTextureSheet*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTEXTURESHEET_CLASS_3_908E7B1B06701C1F_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Write(::MoleMole::ConfigTextureSheet*& a1, ::Sirenix::Serialization::IDataWriter* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigTextureSheet*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTEXTURESHEET_CLASS_3_908E7B1B06701C1F_WRITE_OFFSET))(this, a1, a2);
		}
	};
}
