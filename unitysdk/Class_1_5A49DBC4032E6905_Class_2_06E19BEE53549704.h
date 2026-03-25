#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5A49DBC4032E6905_Class_1_170683700F7C4D7C.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_0_16E4307DCC419505_546;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5A49DBC4032E6905_CLASS_2_06E19BEE53549704_ONDRAG_OFFSET UNITYSDK_OFFSET(0x104E6500)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_06E19BEE53549704_ONEXTENDEND_OFFSET UNITYSDK_OFFSET(0x104E65E0)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_06E19BEE53549704_ONEXTEND_OFFSET UNITYSDK_OFFSET(0x104E6580)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_06E19BEE53549704_ONSHORTENEND_OFFSET UNITYSDK_OFFSET(0x104E66A0)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_06E19BEE53549704_ONSHORTEN_OFFSET UNITYSDK_OFFSET(0x104E6630)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_06E19BEE53549704__CTOR_OFFSET UNITYSDK_OFFSET(0x104E64F0)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_06E19BEE53549704___IFIXBASEPROXY_ONDRAG_OFFSET UNITYSDK_OFFSET(0x104E66F0)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_06E19BEE53549704___IFIXBASEPROXY_ONEXTENDEND_OFFSET UNITYSDK_OFFSET(0x104E67D0)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_06E19BEE53549704___IFIXBASEPROXY_ONEXTEND_OFFSET UNITYSDK_OFFSET(0x104E6760)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_06E19BEE53549704___IFIXBASEPROXY_ONSHORTENEND_OFFSET UNITYSDK_OFFSET(0x104E68A0)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_06E19BEE53549704___IFIXBASEPROXY_ONSHORTEN_OFFSET UNITYSDK_OFFSET(0x104E6830)

inline static constexpr unsigned int Class_1_5A49DBC4032E6905_Class_2_06E19BEE53549704_TypeDefinitionIndex = 50671;

class Class_1_5A49DBC4032E6905_Class_2_06E19BEE53549704 : public ::Class_1_5A49DBC4032E6905_Class_1_170683700F7C4D7C
{
public:
	::System::Void _ctor(::Class_0_16E4307DCC419505_546* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_546*))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_06E19BEE53549704__CTOR_OFFSET))(this, a1);
	}

	::System::Void OnDrag(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_06E19BEE53549704_ONDRAG_OFFSET))(this, a1, a2);
	}

	::System::Void OnExtend(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_06E19BEE53549704_ONEXTEND_OFFSET))(this, a1);
	}

	::System::Void OnExtendEnd()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_06E19BEE53549704_ONEXTENDEND_OFFSET))(this);
	}

	::System::Void OnShorten(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_06E19BEE53549704_ONSHORTEN_OFFSET))(this, a1);
	}

	::System::Void OnShortenEnd()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_06E19BEE53549704_ONSHORTENEND_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnDrag(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* P0, ::System::Single P1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_06E19BEE53549704___IFIXBASEPROXY_ONDRAG_OFFSET))(this, P0, P1);
	}

	::System::Void __iFixBaseProxy_OnExtend(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_06E19BEE53549704___IFIXBASEPROXY_ONEXTEND_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_OnExtendEnd()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_06E19BEE53549704___IFIXBASEPROXY_ONEXTENDEND_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnShorten(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_06E19BEE53549704___IFIXBASEPROXY_ONSHORTEN_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_OnShortenEnd()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_06E19BEE53549704___IFIXBASEPROXY_ONSHORTENEND_OFFSET))(this);
	}
};
