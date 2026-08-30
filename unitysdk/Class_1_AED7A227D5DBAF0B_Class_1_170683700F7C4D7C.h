#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class Class_0_16E4307DCC419505_735;
class Class_1_AED7A227D5DBAF0B;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_AED7A227D5DBAF0B_CLASS_1_170683700F7C4D7C_ENTER_OFFSET UNITYSDK_OFFSET(0x16E400C0)
#define CLASS_1_AED7A227D5DBAF0B_CLASS_1_170683700F7C4D7C_EXIT_OFFSET UNITYSDK_OFFSET(0x16E40160)
#define CLASS_1_AED7A227D5DBAF0B_CLASS_1_170683700F7C4D7C_ONDRAG_OFFSET UNITYSDK_OFFSET(0x16E402C0)
#define CLASS_1_AED7A227D5DBAF0B_CLASS_1_170683700F7C4D7C_ONENDDRAG_OFFSET UNITYSDK_OFFSET(0x16E40320)
#define CLASS_1_AED7A227D5DBAF0B_CLASS_1_170683700F7C4D7C_ONEXTENDEND_OFFSET UNITYSDK_OFFSET(0x16E401F0)
#define CLASS_1_AED7A227D5DBAF0B_CLASS_1_170683700F7C4D7C_ONEXTEND_OFFSET UNITYSDK_OFFSET(0x16E401A0)
#define CLASS_1_AED7A227D5DBAF0B_CLASS_1_170683700F7C4D7C_ONSHORTENEND_OFFSET UNITYSDK_OFFSET(0x16E40280)
#define CLASS_1_AED7A227D5DBAF0B_CLASS_1_170683700F7C4D7C_ONSHORTEN_OFFSET UNITYSDK_OFFSET(0x16E40230)
#define CLASS_1_AED7A227D5DBAF0B_CLASS_1_170683700F7C4D7C_TICK_OFFSET UNITYSDK_OFFSET(0x16E40110)
#define CLASS_1_AED7A227D5DBAF0B_CLASS_1_170683700F7C4D7C__CTOR_OFFSET UNITYSDK_OFFSET(0x16E3D950)

inline static constexpr unsigned int Class_1_AED7A227D5DBAF0B_Class_1_170683700F7C4D7C_TypeDefinitionIndex = 62448;

class Class_1_AED7A227D5DBAF0B_Class_1_170683700F7C4D7C : public ::System::Object
{
public:
	::Class_1_AED7A227D5DBAF0B* CFKHNPGEAJA; // 0x10
	::Class_0_16E4307DCC419505_735* PLBDJHIFGOI; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_735* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_735*))((::PBYTE)hIl2Cpp + CLASS_1_AED7A227D5DBAF0B_CLASS_1_170683700F7C4D7C__CTOR_OFFSET))(this, a1);
	}

	::System::Void Enter(::Class_1_AED7A227D5DBAF0B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AED7A227D5DBAF0B*))((::PBYTE)hIl2Cpp + CLASS_1_AED7A227D5DBAF0B_CLASS_1_170683700F7C4D7C_ENTER_OFFSET))(this, a1);
	}

	::System::Void Tick(::Class_1_AED7A227D5DBAF0B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AED7A227D5DBAF0B*))((::PBYTE)hIl2Cpp + CLASS_1_AED7A227D5DBAF0B_CLASS_1_170683700F7C4D7C_TICK_OFFSET))(this, a1);
	}

	::System::Void Exit()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AED7A227D5DBAF0B_CLASS_1_170683700F7C4D7C_EXIT_OFFSET))(this);
	}

	::System::Void OnExtend(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_AED7A227D5DBAF0B_CLASS_1_170683700F7C4D7C_ONEXTEND_OFFSET))(this, a1);
	}

	::System::Void OnExtendEnd()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AED7A227D5DBAF0B_CLASS_1_170683700F7C4D7C_ONEXTENDEND_OFFSET))(this);
	}

	::System::Void OnShorten(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*))((::PBYTE)hIl2Cpp + CLASS_1_AED7A227D5DBAF0B_CLASS_1_170683700F7C4D7C_ONSHORTEN_OFFSET))(this, a1);
	}

	::System::Void OnShortenEnd()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AED7A227D5DBAF0B_CLASS_1_170683700F7C4D7C_ONSHORTENEND_OFFSET))(this);
	}

	::System::Void OnDrag(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_AED7A227D5DBAF0B_CLASS_1_170683700F7C4D7C_ONDRAG_OFFSET))(this, a1, a2);
	}

	::System::Void OnEndDrag()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AED7A227D5DBAF0B_CLASS_1_170683700F7C4D7C_ONENDDRAG_OFFSET))(this);
	}
};
