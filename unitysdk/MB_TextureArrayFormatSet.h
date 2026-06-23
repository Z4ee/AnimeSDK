#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/MB_TextureCompressionQuality.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/TextureFormat.h"

class MB_TextureArrayFormat;
namespace DigitalOpus::MB::Core { class MB2_EditorMethodsInterface; }
namespace System { class String; }

#define MB_TEXTUREARRAYFORMATSET_GETFORMATFORPROPERTY_OFFSET UNITYSDK_OFFSET(0x1DE8E5E0)
#define MB_TEXTUREARRAYFORMATSET_VALIDATETEXTUREIMPORTERFORMATSEXISTSFORTEXTUREFORMATS_OFFSET UNITYSDK_OFFSET(0x1DE8DD70)
#define MB_TEXTUREARRAYFORMATSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE8E6B0)

inline static constexpr unsigned int MB_TextureArrayFormatSet_TypeDefinitionIndex = 90527;

class MB_TextureArrayFormatSet : public ::System::Object
{
public:
	::System::String* name; // 0x10
	::UnityEngine::TextureFormat defaultFormat; // 0x18
	::DigitalOpus::MB::Core::MB_TextureCompressionQuality defaultCompressionQuality; // 0x1C
	::Il2CppArray<::MB_TextureArrayFormat*>* formatOverrides; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MB_TEXTUREARRAYFORMATSET__CTOR_OFFSET))(this);
	}

	::System::Boolean ValidateTextureImporterFormatsExistsForTextureFormats(::DigitalOpus::MB::Core::MB2_EditorMethodsInterface* editorMethods, ::System::Int32 idx)
	{
		return ((::System::Boolean(*)(::PVOID, ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*, ::System::Int32))((::PBYTE)hIl2Cpp + MB_TEXTUREARRAYFORMATSET_VALIDATETEXTUREIMPORTERFORMATSEXISTSFORTEXTUREFORMATS_OFFSET))(this, editorMethods, idx);
	}

	::UnityEngine::TextureFormat GetFormatForProperty(::System::String* propName, ::DigitalOpus::MB::Core::MB_TextureCompressionQuality& compressionQuality)
	{
		return ((::UnityEngine::TextureFormat(*)(::PVOID, ::System::String*, ::DigitalOpus::MB::Core::MB_TextureCompressionQuality&))((::PBYTE)hIl2Cpp + MB_TEXTUREARRAYFORMATSET_GETFORMATFORPROPERTY_OFFSET))(this, propName, compressionQuality);
	}
};
