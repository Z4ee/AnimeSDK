#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/MB_TextureCompressionQuality.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/TextureFormat.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define DIGITALOPUS_MB_CORE_MB_TEXTUREARRAYS_TEXTUREPROPERTYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE89CB0)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB_TextureArrays_TexturePropertyData_TypeDefinitionIndex = 90752;

	class MB_TextureArrays_TexturePropertyData : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Vector2>* sizes; // 0x10
		::Il2CppArray<::System::Boolean>* doMips; // 0x18
		::Il2CppArray<::UnityEngine::TextureFormat>* formats; // 0x20
		::Il2CppArray<::DigitalOpus::MB::Core::MB_TextureCompressionQuality>* compressionQualities; // 0x28
		::Il2CppArray<::System::Int32>* numMipMaps; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB_TEXTUREARRAYS_TEXTUREPROPERTYDATA__CTOR_OFFSET))(this);
		}
	};
}
