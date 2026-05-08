#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LITJSON_TEMPCHESSBOARDINDEXHELPER_GETXPOSFROMCOMBINEINDEX_OFFSET UNITYSDK_OFFSET(0x1B0657A0)
#define LITJSON_TEMPCHESSBOARDINDEXHELPER_GETYPOSFROMCOMBINEINDEX_OFFSET UNITYSDK_OFFSET(0x1B0657B0)

namespace LitJson
{
	inline static constexpr unsigned int TempChessboardIndexHelper_TypeDefinitionIndex = 8197;

	class TempChessboardIndexHelper : public ::System::Object
	{
	public:
		static ::System::Int16 GetXPosFromCombineIndex(::System::Int32 index)
		{
			return ((::System::Int16(*)(::System::Int32))((::PBYTE)hIl2Cpp + LITJSON_TEMPCHESSBOARDINDEXHELPER_GETXPOSFROMCOMBINEINDEX_OFFSET))(index);
		}

		static ::System::Int16 GetYPosFromCombineIndex(::System::Int32 index)
		{
			return ((::System::Int16(*)(::System::Int32))((::PBYTE)hIl2Cpp + LITJSON_TEMPCHESSBOARDINDEXHELPER_GETYPOSFROMCOMBINEINDEX_OFFSET))(index);
		}
	};
}
