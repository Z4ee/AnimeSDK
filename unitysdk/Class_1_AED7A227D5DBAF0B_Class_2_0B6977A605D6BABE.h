#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_AED7A227D5DBAF0B_Class_1_170683700F7C4D7C.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_0_16E4307DCC419505_831;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_AED7A227D5DBAF0B_CLASS_2_0B6977A605D6BABE_ONDRAG_OFFSET UNITYSDK_OFFSET(0xD208CE0)
#define CLASS_1_AED7A227D5DBAF0B_CLASS_2_0B6977A605D6BABE_ONEXTENDEND_OFFSET UNITYSDK_OFFSET(0xD208DE0)
#define CLASS_1_AED7A227D5DBAF0B_CLASS_2_0B6977A605D6BABE_ONEXTEND_OFFSET UNITYSDK_OFFSET(0xD208D80)
#define CLASS_1_AED7A227D5DBAF0B_CLASS_2_0B6977A605D6BABE_ONSHORTENEND_OFFSET UNITYSDK_OFFSET(0xD208EA0)
#define CLASS_1_AED7A227D5DBAF0B_CLASS_2_0B6977A605D6BABE_ONSHORTEN_OFFSET UNITYSDK_OFFSET(0xD208E30)
#define CLASS_1_AED7A227D5DBAF0B_CLASS_2_0B6977A605D6BABE__CTOR_OFFSET UNITYSDK_OFFSET(0xD2087A0)

inline static constexpr unsigned int Class_1_AED7A227D5DBAF0B_Class_2_0B6977A605D6BABE_TypeDefinitionIndex = 62364;

class Class_1_AED7A227D5DBAF0B_Class_2_0B6977A605D6BABE : public ::Class_1_AED7A227D5DBAF0B_Class_1_170683700F7C4D7C
{
public:
	::System::Void _ctor(::Class_0_16E4307DCC419505_831* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_831*))((::PBYTE)hIl2Cpp + CLASS_1_AED7A227D5DBAF0B_CLASS_2_0B6977A605D6BABE__CTOR_OFFSET))(this, a1);
	}

	::System::Void OnDrag(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AED7A227D5DBAF0B_CLASS_2_0B6977A605D6BABE_ONDRAG_OFFSET))(this, a1, a2);
	}

	::System::Void OnExtend(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_AED7A227D5DBAF0B_CLASS_2_0B6977A605D6BABE_ONEXTEND_OFFSET))(this, a1);
	}

	::System::Void OnExtendEnd()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AED7A227D5DBAF0B_CLASS_2_0B6977A605D6BABE_ONEXTENDEND_OFFSET))(this);
	}

	::System::Void OnShorten(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_AED7A227D5DBAF0B_CLASS_2_0B6977A605D6BABE_ONSHORTEN_OFFSET))(this, a1);
	}

	::System::Void OnShortenEnd()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AED7A227D5DBAF0B_CLASS_2_0B6977A605D6BABE_ONSHORTENEND_OFFSET))(this);
	}
};
