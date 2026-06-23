#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LITJSON_CMAPPOSCONFIG__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C5ED670)
#define LITJSON_CMAPPOSCONFIG__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C5ED680)
#define LITJSON_CMAPPOSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5ED660)

namespace LitJson
{
	inline static constexpr unsigned int CMapPosConfig_TypeDefinitionIndex = 7793;

	class CMapPosConfig : public ::System::Object
	{
	public:
		::System::Int16 x; // 0x10
		::System::Int16 y; // 0x12

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_CMAPPOSCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int16 xPos, ::System::Int16 yPos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16, ::System::Int16))((::PBYTE)hIl2Cpp + LITJSON_CMAPPOSCONFIG__CTOR_1_OFFSET))(this, xPos, yPos);
		}

		::System::Void _ctor_2(::System::Int32 combineIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LITJSON_CMAPPOSCONFIG__CTOR_2_OFFSET))(this, combineIndex);
		}
	};
}
