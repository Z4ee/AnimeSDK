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

#define CONFIGTEXTURECOLOR_CLASS_3_015746882200B38B_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1821B8C0)
#define CONFIGTEXTURECOLOR_CLASS_3_015746882200B38B_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1821B8D0)
#define CONFIGTEXTURECOLOR_CLASS_3_015746882200B38B_WRITE_OFFSET UNITYSDK_OFFSET(0x1821BBE0)
#define CONFIGTEXTURECOLOR_CLASS_3_015746882200B38B__CCTOR_OFFSET UNITYSDK_OFFSET(0x1821BDF0)
#define CONFIGTEXTURECOLOR_CLASS_3_015746882200B38B__CTOR_OFFSET UNITYSDK_OFFSET(0x1821BDB0)

inline static constexpr unsigned int ConfigTextureColor_Class_3_015746882200B38B_TypeDefinitionIndex = 48473;

class ConfigTextureColor_Class_3_015746882200B38B : public ::Sirenix::Serialization::BaseUnityGeneratedFormatter_1<::ConfigTextureColor*>
{
public:
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::VideoFrameColor*>*>** StaticGet_Field_3_0()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::VideoFrameColor*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigTextureColor_Class_3_015746882200B38B_TypeDefinitionIndex)->GetStaticField(0x2E810);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::TextureSheetType, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::VideoFrameColor*>*>*>** StaticGet_Field_3_7()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::MoleMole::TextureSheetType, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::VideoFrameColor*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigTextureColor_Class_3_015746882200B38B_TypeDefinitionIndex)->GetStaticField(0x2E818);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGTEXTURECOLOR_CLASS_3_015746882200B38B__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CONFIGTEXTURECOLOR_CLASS_3_015746882200B38B__CCTOR_OFFSET))();
	}

	::System::Int32 get_MemberCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGTEXTURECOLOR_CLASS_3_015746882200B38B_GET_MEMBERCOUNT_OFFSET))(this);
	}

	::System::Boolean ReadMember(::ConfigTextureColor*& a1, ::Sirenix::Serialization::BufferedString& a2, ::Sirenix::Serialization::IDataReader* a3, ::System::Int32 a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::ConfigTextureColor*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + CONFIGTEXTURECOLOR_CLASS_3_015746882200B38B_READMEMBER_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Write(::ConfigTextureColor*& a1, ::Sirenix::Serialization::IDataWriter* a2)
	{
		return ((::System::Void(*)(::PVOID, ::ConfigTextureColor*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + CONFIGTEXTURECOLOR_CLASS_3_015746882200B38B_WRITE_OFFSET))(this, a1, a2);
	}
};
