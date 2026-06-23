#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define LYRASECTOR_LYRASECTORCOORD_CALCULATECENTER_OFFSET UNITYSDK_OFFSET(0x952D50)
#define LYRASECTOR_LYRASECTORCOORD_CALCULATESECTORBOUNDS_OFFSET UNITYSDK_OFFSET(0x952D70)
#define LYRASECTOR_LYRASECTORCOORD_CALCULATESECTOREXTENT_OFFSET UNITYSDK_OFFSET(0x952CB0)
#define LYRASECTOR_LYRASECTORCOORD_CALCULATESECTORWORLDSIZE_OFFSET UNITYSDK_OFFSET(0x952C50)
#define LYRASECTOR_LYRASECTORCOORD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x952BD0)
#define LYRASECTOR_LYRASECTORCOORD_EQUALS_OFFSET UNITYSDK_OFFSET(0x952B50)
#define LYRASECTOR_LYRASECTORCOORD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x952BE0)
#define LYRASECTOR_LYRASECTORCOORD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x952B40)
#define LYRASECTOR_LYRASECTORCOORD__CTOR_OFFSET UNITYSDK_OFFSET(0x588040)
#define LYRASECTOR_LYRASECTORCOORD___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x952E70)
#define LYRASECTOR_LYRASECTORCOORD___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x952D90)
#define LYRASECTOR_LYRASECTORCOORD___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x952DF0)

namespace LyraSector
{
	inline static constexpr unsigned int LyraSectorCoord_TypeDefinitionIndex = 26554;

	struct alignas(4) LyraSectorCoord
	{
		::System::Int32 x; // 0x10
		::System::Int32 y; // 0x14
		::System::Int32 z; // 0x18
		::System::Int32 level; // 0x1C

		::System::Void _ctor(::System::Int32 inX, ::System::Int32 inY, ::System::Int32 inZ, ::System::Int32 inLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASECTORCOORD__CTOR_OFFSET))(this, inX, inY, inZ, inLevel);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASECTORCOORD_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::LyraSector::LyraSectorCoord other)
		{
			return ((::System::Boolean(*)(::PVOID, ::LyraSector::LyraSectorCoord))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASECTORCOORD_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASECTORCOORD_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASECTORCOORD_GETHASHCODE_OFFSET))(this);
		}

		::System::Single CalculateSectorWorldSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASECTORCOORD_CALCULATESECTORWORLDSIZE_OFFSET))(this);
		}

		/*
		::UnityEngine::Vector3 CalculateSectorExtent()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASECTORCOORD_CALCULATESECTOREXTENT_OFFSET))(this);
		}
		*/

		/*
		::UnityEngine::Vector3 CalculateCenter()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASECTORCOORD_CALCULATECENTER_OFFSET))(this);
		}
		*/

		/*
		::UnityEngine::Bounds CalculateSectorBounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASECTORCOORD_CALCULATESECTORBOUNDS_OFFSET))(this);
		}
		*/

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASECTORCOORD___BASE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASECTORCOORD___BASE_TOSTRING_OFFSET))(this);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LYRASECTOR_LYRASECTORCOORD___BASE_EQUALS_OFFSET))(this, P0);
		}
	};
}
