#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_2_FCDEBDA970A201C1_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x1589AF30)
#define CLASS_2_FCDEBDA970A201C1_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x1589AF50)
#define CLASS_2_FCDEBDA970A201C1_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x1589AF40)
#define CLASS_2_FCDEBDA970A201C1__CTOR_OFFSET UNITYSDK_OFFSET(0x1589AFB0)

inline static constexpr unsigned int Class_2_FCDEBDA970A201C1_TypeDefinitionIndex = 72378;

class Class_2_FCDEBDA970A201C1 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* DJCBDJMACFH; // 0x0
	::System::Int32 _Index_k__BackingField; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FCDEBDA970A201C1__CTOR_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FCDEBDA970A201C1_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_FCDEBDA970A201C1_SET_INDEX_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FCDEBDA970A201C1_GET_TRANS_OFFSET))(this);
	}
};
