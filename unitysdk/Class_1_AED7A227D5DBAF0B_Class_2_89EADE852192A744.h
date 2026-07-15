#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_AED7A227D5DBAF0B_Class_1_170683700F7C4D7C.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_697;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_AED7A227D5DBAF0B_CLASS_2_89EADE852192A744_METHOD_2_1A0AF1F951F72EA4_OFFSET UNITYSDK_OFFSET(0xBFCA7D0)
#define CLASS_1_AED7A227D5DBAF0B_CLASS_2_89EADE852192A744_METHOD_2_2A7065F96AB1874F_OFFSET UNITYSDK_OFFSET(0xBFCB890)
#define CLASS_1_AED7A227D5DBAF0B_CLASS_2_89EADE852192A744_METHOD_2_9FCEEE4E5083D9B3_OFFSET UNITYSDK_OFFSET(0xBFCB260)
#define CLASS_1_AED7A227D5DBAF0B_CLASS_2_89EADE852192A744_ONDRAG_OFFSET UNITYSDK_OFFSET(0xBFCA3E0)
#define CLASS_1_AED7A227D5DBAF0B_CLASS_2_89EADE852192A744_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0xBFCC580)
#define CLASS_1_AED7A227D5DBAF0B_CLASS_2_89EADE852192A744_ONEXTENDEND_OFFSET UNITYSDK_OFFSET(0xBFCB600)
#define CLASS_1_AED7A227D5DBAF0B_CLASS_2_89EADE852192A744_ONEXTEND_OFFSET UNITYSDK_OFFSET(0xBFCB360)
#define CLASS_1_AED7A227D5DBAF0B_CLASS_2_89EADE852192A744_ONSHORTENEND_OFFSET UNITYSDK_OFFSET(0xBFCC540)
#define CLASS_1_AED7A227D5DBAF0B_CLASS_2_89EADE852192A744_ONSHORTEN_OFFSET UNITYSDK_OFFSET(0xBFCC320)
#define CLASS_1_AED7A227D5DBAF0B_CLASS_2_89EADE852192A744__CTOR_OFFSET UNITYSDK_OFFSET(0xBFC9CA0)

inline static constexpr unsigned int Class_1_AED7A227D5DBAF0B_Class_2_89EADE852192A744_TypeDefinitionIndex = 59607;

class Class_1_AED7A227D5DBAF0B_Class_2_89EADE852192A744 : public ::Class_1_AED7A227D5DBAF0B_Class_1_170683700F7C4D7C
{
public:
	::UnityEngine::Vector2Int Field_2_0; // 0x20

	::System::Void _ctor(::Class_0_16E4307DCC419505_697* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_697*))((::PBYTE)hIl2Cpp + CLASS_1_AED7A227D5DBAF0B_CLASS_2_89EADE852192A744__CTOR_OFFSET))(this, a1);
	}

	::System::Void OnDrag(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AED7A227D5DBAF0B_CLASS_2_89EADE852192A744_ONDRAG_OFFSET))(this, a1, a2);
	}

	::System::Void OnExtend(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_AED7A227D5DBAF0B_CLASS_2_89EADE852192A744_ONEXTEND_OFFSET))(this, a1);
	}

	::System::Void OnExtendEnd()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AED7A227D5DBAF0B_CLASS_2_89EADE852192A744_ONEXTENDEND_OFFSET))(this);
	}

	::System::Void OnShorten(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_AED7A227D5DBAF0B_CLASS_2_89EADE852192A744_ONSHORTEN_OFFSET))(this, a1);
	}

	::System::Void OnShortenEnd()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AED7A227D5DBAF0B_CLASS_2_89EADE852192A744_ONSHORTENEND_OFFSET))(this);
	}

	::System::Void OnEndDrag()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AED7A227D5DBAF0B_CLASS_2_89EADE852192A744_ONENDDRAG_OFFSET))(this);
	}

	::System::Void Method_2_9FCEEE4E5083D9B3(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_AED7A227D5DBAF0B_CLASS_2_89EADE852192A744_METHOD_2_9FCEEE4E5083D9B3_OFFSET))(this, a1);
	}

	::System::Single Method_2_2A7065F96AB1874F(::System::Boolean a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AED7A227D5DBAF0B_CLASS_2_89EADE852192A744_METHOD_2_2A7065F96AB1874F_OFFSET))(this, a1);
	}

	::System::Single Method_2_1A0AF1F951F72EA4(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AED7A227D5DBAF0B_CLASS_2_89EADE852192A744_METHOD_2_1A0AF1F951F72EA4_OFFSET))(this, a1);
	}
};
