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

#define MOLEMOLE_CONFIGTEXTURESHEET_CONFIGTEXTURESHEET_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x153DFCC0)
#define MOLEMOLE_CONFIGTEXTURESHEET_CONFIGTEXTURESHEET_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x153DFCD0)
#define MOLEMOLE_CONFIGTEXTURESHEET_CONFIGTEXTURESHEET_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x153E0030)
#define MOLEMOLE_CONFIGTEXTURESHEET_CONFIGTEXTURESHEET_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x153E0280)
#define MOLEMOLE_CONFIGTEXTURESHEET_CONFIGTEXTURESHEET_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x153E0240)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigTextureSheet_ConfigTextureSheet_UnityGeneratedFormatter_TypeDefinitionIndex = 43691;

	class ConfigTextureSheet_ConfigTextureSheet_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::MoleMole::ConfigTextureSheet*>
	{
	public:
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::TextureSheetData*>*>** StaticGet_CachedSerializer0()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::TextureSheetData*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigTextureSheet_ConfigTextureSheet_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x34A30);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::BlendTextureSheetData*>*>** StaticGet_CachedSerializer2()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::BlendTextureSheetData*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigTextureSheet_ConfigTextureSheet_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x34A38);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::TextureSheetType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::TextureSheetData*>*>*>** StaticGet_CachedSerializer1()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::TextureSheetType, ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::TextureSheetData*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigTextureSheet_ConfigTextureSheet_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x34A40);
		}
		static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::RandomTextureSheetData*>*>** StaticGet_CachedSerializer3()
		{
			return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::RandomTextureSheetData*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigTextureSheet_ConfigTextureSheet_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x34A48);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTEXTURESHEET_CONFIGTEXTURESHEET_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTEXTURESHEET_CONFIGTEXTURESHEET_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTEXTURESHEET_CONFIGTEXTURESHEET_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigTextureSheet*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigTextureSheet*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTEXTURESHEET_CONFIGTEXTURESHEET_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
		}

		::System::Void Write(::MoleMole::ConfigTextureSheet*& value, ::Sirenix::Serialization::IDataWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigTextureSheet*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTEXTURESHEET_CONFIGTEXTURESHEET_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
		}
	};
}
