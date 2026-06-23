#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/TextureSheetType.h"
#include "unitysdk/Sirenix/Serialization/BaseUnityGeneratedFormatter_1.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

class ConfigTextureColor;
class VideoFrameColor;
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CONFIGTEXTURECOLOR_CONFIGTEXTURECOLOR_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x14511CD0)
#define CONFIGTEXTURECOLOR_CONFIGTEXTURECOLOR_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET UNITYSDK_OFFSET(0x14511CE0)
#define CONFIGTEXTURECOLOR_CONFIGTEXTURECOLOR_UNITYGENERATEDFORMATTER_WRITE_OFFSET UNITYSDK_OFFSET(0x14512040)
#define CONFIGTEXTURECOLOR_CONFIGTEXTURECOLOR_UNITYGENERATEDFORMATTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x14512290)
#define CONFIGTEXTURECOLOR_CONFIGTEXTURECOLOR_UNITYGENERATEDFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x14512250)

inline static constexpr unsigned int ConfigTextureColor_ConfigTextureColor_UnityGeneratedFormatter_TypeDefinitionIndex = 87510;

class ConfigTextureColor_ConfigTextureColor_UnityGeneratedFormatter : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::ConfigTextureColor*>
{
public:
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::VideoFrameColor*>*>** StaticGet_CachedSerializer0()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::VideoFrameColor*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigTextureColor_ConfigTextureColor_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x2E430);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::TextureSheetType, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::VideoFrameColor*>*>*>** StaticGet_CachedSerializer1()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::TextureSheetType, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::VideoFrameColor*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigTextureColor_ConfigTextureColor_UnityGeneratedFormatter_TypeDefinitionIndex)->GetStaticField(0x2E438);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGTEXTURECOLOR_CONFIGTEXTURECOLOR_UNITYGENERATEDFORMATTER__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CONFIGTEXTURECOLOR_CONFIGTEXTURECOLOR_UNITYGENERATEDFORMATTER__CCTOR_OFFSET))();
	}

	::System::Int32 get_MemberCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGTEXTURECOLOR_CONFIGTEXTURECOLOR_UNITYGENERATEDFORMATTER_GET_MEMBERCOUNT_OFFSET))(this);
	}

	::System::Boolean ReadMember(::ConfigTextureColor*& value, ::Sirenix::Serialization::BufferedString& name, ::Sirenix::Serialization::IDataReader* reader, ::System::Int32 num)
	{
		return ((::System::Boolean(*)(::PVOID, ::ConfigTextureColor*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + CONFIGTEXTURECOLOR_CONFIGTEXTURECOLOR_UNITYGENERATEDFORMATTER_READMEMBER_OFFSET))(this, value, name, reader, num);
	}

	::System::Void Write(::ConfigTextureColor*& value, ::Sirenix::Serialization::IDataWriter* writer)
	{
		return ((::System::Void(*)(::PVOID, ::ConfigTextureColor*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + CONFIGTEXTURECOLOR_CONFIGTEXTURECOLOR_UNITYGENERATEDFORMATTER_WRITE_OFFSET))(this, value, writer);
	}
};
