#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LyraSector/LyraSectorCoord.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define LYRASECTOR_LYRAPACKEDASSETUTILS_PACKEDASSETKEY_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA39390)
#define LYRASECTOR_LYRAPACKEDASSETUTILS_PACKEDASSETKEY_EQUALS_OFFSET UNITYSDK_OFFSET(0xA392C0)
#define LYRASECTOR_LYRAPACKEDASSETUTILS_PACKEDASSETKEY_GETASSETFILEPATH_OFFSET UNITYSDK_OFFSET(0xA39440)
#define LYRASECTOR_LYRAPACKEDASSETUTILS_PACKEDASSETKEY_GETCOORDCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1E78A3C0)
#define LYRASECTOR_LYRAPACKEDASSETUTILS_PACKEDASSETKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA393A0)
#define LYRASECTOR_LYRAPACKEDASSETUTILS_PACKEDASSETKEY_GETINCLUDEDCOORDS_OFFSET UNITYSDK_OFFSET(0xA39260)
#define LYRASECTOR_LYRAPACKEDASSETUTILS_PACKEDASSETKEY_INIT_1_OFFSET UNITYSDK_OFFSET(0xA391B0)
#define LYRASECTOR_LYRAPACKEDASSETUTILS_PACKEDASSETKEY_INIT_2_OFFSET UNITYSDK_OFFSET(0xA39230)
#define LYRASECTOR_LYRAPACKEDASSETUTILS_PACKEDASSETKEY_INIT_OFFSET UNITYSDK_OFFSET(0xA39190)
#define LYRASECTOR_LYRAPACKEDASSETUTILS_PACKEDASSETKEY_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA39270)
#define LYRASECTOR_LYRAPACKEDASSETUTILS_PACKEDASSETKEY___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0xA394B0)
#define LYRASECTOR_LYRAPACKEDASSETUTILS_PACKEDASSETKEY___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA39450)
#define LYRASECTOR_LYRAPACKEDASSETUTILS_PACKEDASSETKEY___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA39520)

namespace LyraSector
{
	inline static constexpr unsigned int LyraPackedAssetUtils_PackedAssetKey_TypeDefinitionIndex = 27055;

	struct alignas(4) LyraPackedAssetUtils_PackedAssetKey
	{
		// static const ::System::Int32 kBlockRange = 0x2; // 0x0
		::LyraSector::LyraSectorCoord packedCoord; // 0x10

		static ::System::Int32 GetCoordComponent(::System::Int32 val)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRAPACKEDASSETUTILS_PACKEDASSETKEY_GETCOORDCOMPONENT_OFFSET))(val);
		}

		::System::Void Init(::LyraSector::LyraSectorCoord coord)
		{
			return ((::System::Void(*)(::PVOID, ::LyraSector::LyraSectorCoord))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRAPACKEDASSETUTILS_PACKEDASSETKEY_INIT_OFFSET))(this, coord);
		}

		::System::Void Init_1(::System::Int32 packedX, ::System::Int32 packedY, ::System::Int32 packedZ, ::System::Int32 inLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRAPACKEDASSETUTILS_PACKEDASSETKEY_INIT_1_OFFSET))(this, packedX, packedY, packedZ, inLevel);
		}

		/*
		::System::Void Init_2(::UnityEngine::Vector3 pos, ::System::Int32 level)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRAPACKEDASSETUTILS_PACKEDASSETKEY_INIT_2_OFFSET))(this, pos, level);
		}
		*/

		::Il2CppArray<::LyraSector::LyraSectorCoord>* GetIncludedCoords()
		{
			return ((::Il2CppArray<::LyraSector::LyraSectorCoord>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRAPACKEDASSETUTILS_PACKEDASSETKEY_GETINCLUDEDCOORDS_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRAPACKEDASSETUTILS_PACKEDASSETKEY_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::LyraSector::LyraPackedAssetUtils_PackedAssetKey other)
		{
			return ((::System::Boolean(*)(::PVOID, ::LyraSector::LyraPackedAssetUtils_PackedAssetKey))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRAPACKEDASSETUTILS_PACKEDASSETKEY_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRAPACKEDASSETUTILS_PACKEDASSETKEY_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRAPACKEDASSETUTILS_PACKEDASSETKEY_GETHASHCODE_OFFSET))(this);
		}

		::System::String* GetAssetFilePath(::System::String* dir)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRAPACKEDASSETUTILS_PACKEDASSETKEY_GETASSETFILEPATH_OFFSET))(this, dir);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRAPACKEDASSETUTILS_PACKEDASSETKEY___BASE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRAPACKEDASSETUTILS_PACKEDASSETKEY___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRAPACKEDASSETUTILS_PACKEDASSETKEY___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
