#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DigitalOpus/MB/Core/AtlasPadding.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace System { class String; }

#define DIGITALOPUS_MB_CORE_ATLASPACKINGRESULT_CALCUSEDWIDTHANDHEIGHT_OFFSET UNITYSDK_OFFSET(0x1F8893D0)
#define DIGITALOPUS_MB_CORE_ATLASPACKINGRESULT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F889590)
#define DIGITALOPUS_MB_CORE_ATLASPACKINGRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F8893C0)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int AtlasPackingResult_TypeDefinitionIndex = 94607;

	class AtlasPackingResult : public ::System::Object
	{
	public:
		::System::Int32 atlasX; // 0x10
		::System::Int32 atlasY; // 0x14
		::System::Int32 usedW; // 0x18
		::System::Int32 usedH; // 0x1C
		::Il2CppArray<::UnityEngine::Rect>* rects; // 0x20
		::Il2CppArray<::DigitalOpus::MB::Core::AtlasPadding>* padding; // 0x28
		::Il2CppArray<::System::Int32>* srcImgIdxs; // 0x30
		::System::Object* data; // 0x38

		::System::Void _ctor(::Il2CppArray<::DigitalOpus::MB::Core::AtlasPadding>* pds)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::DigitalOpus::MB::Core::AtlasPadding>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_ATLASPACKINGRESULT__CTOR_OFFSET))(this, pds);
		}

		::System::Void CalcUsedWidthAndHeight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_ATLASPACKINGRESULT_CALCUSEDWIDTHANDHEIGHT_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_ATLASPACKINGRESULT_TOSTRING_OFFSET))(this);
		}
	};
}
