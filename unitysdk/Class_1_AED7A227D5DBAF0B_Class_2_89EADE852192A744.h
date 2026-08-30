#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_AED7A227D5DBAF0B_Class_1_170683700F7C4D7C.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_733;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_AED7A227D5DBAF0B_CLASS_2_89EADE852192A744_METHOD_2_1A0AF1F951F72EA4_OFFSET UNITYSDK_OFFSET(0xD288DA0)
#define CLASS_1_AED7A227D5DBAF0B_CLASS_2_89EADE852192A744_METHOD_2_2A7065F96AB1874F_OFFSET UNITYSDK_OFFSET(0xD289E60)
#define CLASS_1_AED7A227D5DBAF0B_CLASS_2_89EADE852192A744_METHOD_2_9FCEEE4E5083D9B3_OFFSET UNITYSDK_OFFSET(0xD289830)
#define CLASS_1_AED7A227D5DBAF0B_CLASS_2_89EADE852192A744_ONDRAG_OFFSET UNITYSDK_OFFSET(0xD2889B0)
#define CLASS_1_AED7A227D5DBAF0B_CLASS_2_89EADE852192A744_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0xD28AB50)
#define CLASS_1_AED7A227D5DBAF0B_CLASS_2_89EADE852192A744_ONEXTENDEND_OFFSET UNITYSDK_OFFSET(0xD289BD0)
#define CLASS_1_AED7A227D5DBAF0B_CLASS_2_89EADE852192A744_ONEXTEND_OFFSET UNITYSDK_OFFSET(0xD289930)
#define CLASS_1_AED7A227D5DBAF0B_CLASS_2_89EADE852192A744_ONSHORTENEND_OFFSET UNITYSDK_OFFSET(0xD28AB10)
#define CLASS_1_AED7A227D5DBAF0B_CLASS_2_89EADE852192A744_ONSHORTEN_OFFSET UNITYSDK_OFFSET(0xD28A8F0)
#define CLASS_1_AED7A227D5DBAF0B_CLASS_2_89EADE852192A744__CTOR_OFFSET UNITYSDK_OFFSET(0xD288270)

inline static constexpr unsigned int Class_1_AED7A227D5DBAF0B_Class_2_89EADE852192A744_TypeDefinitionIndex = 62446;

class Class_1_AED7A227D5DBAF0B_Class_2_89EADE852192A744 : public ::Class_1_AED7A227D5DBAF0B_Class_1_170683700F7C4D7C
{
public:
	::UnityEngine::Vector2Int JHNNDDADNKD; // 0x20

	::System::Void _ctor(::Class_0_16E4307DCC419505_733* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_733*))((::PBYTE)hIl2Cpp + CLASS_1_AED7A227D5DBAF0B_CLASS_2_89EADE852192A744__CTOR_OFFSET))(this, a1);
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
