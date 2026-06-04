#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5A49DBC4032E6905_Class_1_170683700F7C4D7C.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_662;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5A49DBC4032E6905_CLASS_2_A0893666B45C7CAC_METHOD_2_1A0AF1F951F72EA4_OFFSET UNITYSDK_OFFSET(0xBC42370)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_A0893666B45C7CAC_METHOD_2_2A7065F96AB1874F_OFFSET UNITYSDK_OFFSET(0xBC42FD0)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_A0893666B45C7CAC_METHOD_2_9FCEEE4E5083D9B3_OFFSET UNITYSDK_OFFSET(0xBC42A60)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_A0893666B45C7CAC_ONDRAG_OFFSET UNITYSDK_OFFSET(0xBC41FE0)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_A0893666B45C7CAC_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0xBC438C0)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_A0893666B45C7CAC_ONEXTENDEND_OFFSET UNITYSDK_OFFSET(0xBC42DA0)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_A0893666B45C7CAC_ONEXTEND_OFFSET UNITYSDK_OFFSET(0xBC42B60)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_A0893666B45C7CAC_ONSHORTENEND_OFFSET UNITYSDK_OFFSET(0xBC43880)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_A0893666B45C7CAC_ONSHORTEN_OFFSET UNITYSDK_OFFSET(0xBC436C0)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_A0893666B45C7CAC__CTOR_OFFSET UNITYSDK_OFFSET(0xBC416C0)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_A0893666B45C7CAC___IFIXBASEPROXY_ONDRAG_OFFSET UNITYSDK_OFFSET(0xBC43BE0)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_A0893666B45C7CAC___IFIXBASEPROXY_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0xBC43D60)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_A0893666B45C7CAC___IFIXBASEPROXY_ONEXTENDEND_OFFSET UNITYSDK_OFFSET(0xBC43C90)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_A0893666B45C7CAC___IFIXBASEPROXY_ONEXTEND_OFFSET UNITYSDK_OFFSET(0xBC43C40)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_A0893666B45C7CAC___IFIXBASEPROXY_ONSHORTENEND_OFFSET UNITYSDK_OFFSET(0xBC43D20)
#define CLASS_1_5A49DBC4032E6905_CLASS_2_A0893666B45C7CAC___IFIXBASEPROXY_ONSHORTEN_OFFSET UNITYSDK_OFFSET(0xBC43CD0)

inline static constexpr unsigned int Class_1_5A49DBC4032E6905_Class_2_A0893666B45C7CAC_TypeDefinitionIndex = 58345;

class Class_1_5A49DBC4032E6905_Class_2_A0893666B45C7CAC : public ::Class_1_5A49DBC4032E6905_Class_1_170683700F7C4D7C
{
public:
	::UnityEngine::Vector2Int Field_2_0; // 0x20

	::System::Void _ctor(::Class_0_16E4307DCC419505_662* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_662*))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_A0893666B45C7CAC__CTOR_OFFSET))(this, a1);
	}

	::System::Void OnDrag(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_A0893666B45C7CAC_ONDRAG_OFFSET))(this, a1, a2);
	}

	::System::Void OnExtend(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_A0893666B45C7CAC_ONEXTEND_OFFSET))(this, a1);
	}

	::System::Void OnExtendEnd()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_A0893666B45C7CAC_ONEXTENDEND_OFFSET))(this);
	}

	::System::Void OnShorten(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_A0893666B45C7CAC_ONSHORTEN_OFFSET))(this, a1);
	}

	::System::Void OnShortenEnd()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_A0893666B45C7CAC_ONSHORTENEND_OFFSET))(this);
	}

	::System::Void OnEndDrag()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_A0893666B45C7CAC_ONENDDRAG_OFFSET))(this);
	}

	::System::Void Method_2_9FCEEE4E5083D9B3(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_A0893666B45C7CAC_METHOD_2_9FCEEE4E5083D9B3_OFFSET))(this, a1);
	}

	::System::Single Method_2_2A7065F96AB1874F(::System::Boolean a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_A0893666B45C7CAC_METHOD_2_2A7065F96AB1874F_OFFSET))(this, a1);
	}

	::System::Single Method_2_1A0AF1F951F72EA4(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_A0893666B45C7CAC_METHOD_2_1A0AF1F951F72EA4_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnDrag(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_A0893666B45C7CAC___IFIXBASEPROXY_ONDRAG_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_OnExtend(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_A0893666B45C7CAC___IFIXBASEPROXY_ONEXTEND_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnExtendEnd()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_A0893666B45C7CAC___IFIXBASEPROXY_ONEXTENDEND_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnShorten(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_A0893666B45C7CAC___IFIXBASEPROXY_ONSHORTEN_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnShortenEnd()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_A0893666B45C7CAC___IFIXBASEPROXY_ONSHORTENEND_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnEndDrag()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_2_A0893666B45C7CAC___IFIXBASEPROXY_ONENDDRAG_OFFSET))(this);
	}
};
