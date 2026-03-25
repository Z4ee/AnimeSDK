#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5A49DBC4032E6905_Class_1_170683700F7C4D7C.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_546;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5A49DBC4032E6905_CLASS_2_2258ED99108FCE55_METHOD_2_1A0AF1F951F72EA4_OFFSET UNITYSDK_OFFSET(0x104E4AE0)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_2258ED99108FCE55_METHOD_2_2A7065F96AB1874F_OFFSET UNITYSDK_OFFSET(0x104E5690)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_2258ED99108FCE55_METHOD_2_9FCEEE4E5083D9B3_OFFSET UNITYSDK_OFFSET(0x104E51D0)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_2258ED99108FCE55_ONDRAG_OFFSET UNITYSDK_OFFSET(0x104E47D0)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_2258ED99108FCE55_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x104E5F70)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_2258ED99108FCE55_ONEXTENDEND_OFFSET UNITYSDK_OFFSET(0x104E54B0)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_2258ED99108FCE55_ONEXTEND_OFFSET UNITYSDK_OFFSET(0x104E52D0)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_2258ED99108FCE55_ONSHORTENEND_OFFSET UNITYSDK_OFFSET(0x104E5F30)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_2258ED99108FCE55_ONSHORTEN_OFFSET UNITYSDK_OFFSET(0x104E5D70)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_2258ED99108FCE55__CTOR_OFFSET UNITYSDK_OFFSET(0x104E47C0)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_2258ED99108FCE55___IFIXBASEPROXY_ONDRAG_OFFSET UNITYSDK_OFFSET(0x104E6280)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_2258ED99108FCE55___IFIXBASEPROXY_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x104E6490)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_2258ED99108FCE55___IFIXBASEPROXY_ONEXTENDEND_OFFSET UNITYSDK_OFFSET(0x104E6360)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_2258ED99108FCE55___IFIXBASEPROXY_ONEXTEND_OFFSET UNITYSDK_OFFSET(0x104E62F0)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_2258ED99108FCE55___IFIXBASEPROXY_ONSHORTENEND_OFFSET UNITYSDK_OFFSET(0x104E6430)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_2258ED99108FCE55___IFIXBASEPROXY_ONSHORTEN_OFFSET UNITYSDK_OFFSET(0x104E63C0)

inline static constexpr unsigned int Class_1_5A49DBC4032E6905_Class_2_2258ED99108FCE55_TypeDefinitionIndex = 50670;

class Class_1_5A49DBC4032E6905_Class_2_2258ED99108FCE55 : public ::Class_1_5A49DBC4032E6905_Class_1_170683700F7C4D7C
{
public:
	::UnityEngine::Vector2Int Field_2_0; // 0x20

	::System::Void _ctor(::Class_0_16E4307DCC419505_546* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_546*))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_2258ED99108FCE55__CTOR_OFFSET))(this, a1);
	}

	::System::Void OnDrag(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_2258ED99108FCE55_ONDRAG_OFFSET))(this, a1, a2);
	}

	::System::Void OnExtend(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_2258ED99108FCE55_ONEXTEND_OFFSET))(this, a1);
	}

	::System::Void OnExtendEnd()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_2258ED99108FCE55_ONEXTENDEND_OFFSET))(this);
	}

	::System::Void OnShorten(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_2258ED99108FCE55_ONSHORTEN_OFFSET))(this, a1);
	}

	::System::Void OnShortenEnd()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_2258ED99108FCE55_ONSHORTENEND_OFFSET))(this);
	}

	::System::Void OnEndDrag()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_2258ED99108FCE55_ONENDDRAG_OFFSET))(this);
	}

	::System::Void Method_2_9FCEEE4E5083D9B3(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_2258ED99108FCE55_METHOD_2_9FCEEE4E5083D9B3_OFFSET))(this, a1);
	}

	::System::Single Method_2_2A7065F96AB1874F(::System::Boolean a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_2258ED99108FCE55_METHOD_2_2A7065F96AB1874F_OFFSET))(this, a1);
	}

	::System::Single Method_2_1A0AF1F951F72EA4(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_2258ED99108FCE55_METHOD_2_1A0AF1F951F72EA4_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnDrag(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* P0, ::System::Single P1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_2258ED99108FCE55___IFIXBASEPROXY_ONDRAG_OFFSET))(this, P0, P1);
	}

	::System::Void __iFixBaseProxy_OnExtend(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_2258ED99108FCE55___IFIXBASEPROXY_ONEXTEND_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_OnExtendEnd()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_2258ED99108FCE55___IFIXBASEPROXY_ONEXTENDEND_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnShorten(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_2258ED99108FCE55___IFIXBASEPROXY_ONSHORTEN_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_OnShortenEnd()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_2258ED99108FCE55___IFIXBASEPROXY_ONSHORTENEND_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnEndDrag()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_2258ED99108FCE55___IFIXBASEPROXY_ONENDDRAG_OFFSET))(this);
	}
};
