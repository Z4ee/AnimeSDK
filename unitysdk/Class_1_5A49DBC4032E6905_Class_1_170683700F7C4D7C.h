#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_0_16E4307DCC419505_638;
class Class_1_5A49DBC4032E6905;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5A49DBC4032E6905_CLASS_1_170683700F7C4D7C_ENTER_OFFSET UNITYSDK_OFFSET(0x11E75890)
#define CLASS_1_5A49DBC4032E6905_CLASS_1_170683700F7C4D7C_EXIT_OFFSET UNITYSDK_OFFSET(0x11E75930)
#define CLASS_1_5A49DBC4032E6905_CLASS_1_170683700F7C4D7C_ONDRAG_OFFSET UNITYSDK_OFFSET(0x11E755F0)
#define CLASS_1_5A49DBC4032E6905_CLASS_1_170683700F7C4D7C_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x11E75970)
#define CLASS_1_5A49DBC4032E6905_CLASS_1_170683700F7C4D7C_ONEXTENDEND_OFFSET UNITYSDK_OFFSET(0x11E75730)
#define CLASS_1_5A49DBC4032E6905_CLASS_1_170683700F7C4D7C_ONEXTEND_OFFSET UNITYSDK_OFFSET(0x11E756A0)
#define CLASS_1_5A49DBC4032E6905_CLASS_1_170683700F7C4D7C_ONSHORTENEND_OFFSET UNITYSDK_OFFSET(0x11E75850)
#define CLASS_1_5A49DBC4032E6905_CLASS_1_170683700F7C4D7C_ONSHORTEN_OFFSET UNITYSDK_OFFSET(0x11E757C0)
#define CLASS_1_5A49DBC4032E6905_CLASS_1_170683700F7C4D7C_TICK_OFFSET UNITYSDK_OFFSET(0x11E758E0)
#define CLASS_1_5A49DBC4032E6905_CLASS_1_170683700F7C4D7C__CTOR_OFFSET UNITYSDK_OFFSET(0x11E75390)

inline static constexpr unsigned int Class_1_5A49DBC4032E6905_Class_1_170683700F7C4D7C_TypeDefinitionIndex = 57535;

class Class_1_5A49DBC4032E6905_Class_1_170683700F7C4D7C : public ::System::Object
{
public:
	::Class_1_5A49DBC4032E6905* Field_1_1; // 0x10
	::Class_0_16E4307DCC419505_638* Field_1_0; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_638* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_638*))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_1_170683700F7C4D7C__CTOR_OFFSET))(this, a1);
	}

	::System::Void Enter(::Class_1_5A49DBC4032E6905* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5A49DBC4032E6905*))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_1_170683700F7C4D7C_ENTER_OFFSET))(this, a1);
	}

	::System::Void Tick(::Class_1_5A49DBC4032E6905* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5A49DBC4032E6905*))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_1_170683700F7C4D7C_TICK_OFFSET))(this, a1);
	}

	::System::Void Exit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_1_170683700F7C4D7C_EXIT_OFFSET))(this);
	}

	::System::Void OnExtend(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_1_170683700F7C4D7C_ONEXTEND_OFFSET))(this, a1);
	}

	::System::Void OnExtendEnd()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_1_170683700F7C4D7C_ONEXTENDEND_OFFSET))(this);
	}

	::System::Void OnShorten(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_1_170683700F7C4D7C_ONSHORTEN_OFFSET))(this, a1);
	}

	::System::Void OnShortenEnd()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_1_170683700F7C4D7C_ONSHORTENEND_OFFSET))(this);
	}

	::System::Void OnDrag(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_1_170683700F7C4D7C_ONDRAG_OFFSET))(this, a1, a2);
	}

	::System::Void OnEndDrag()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5A49DBC4032E6905_CLASS_1_170683700F7C4D7C_ONENDDRAG_OFFSET))(this);
	}
};
