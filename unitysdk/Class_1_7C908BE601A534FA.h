#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7C908BE601A534FA_Struct_2_E658502528B7C034.h"
#include "unitysdk/Struct_2_EAC1BB0F093534A5.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class LittleGameCircleCurveInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7C908BE601A534FA_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C3561B0)
#define CLASS_1_7C908BE601A534FA_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1C356740)
#define CLASS_1_7C908BE601A534FA_GETDISTANCERATIO_OFFSET UNITYSDK_OFFSET(0x1C356E30)
#define CLASS_1_7C908BE601A534FA_GETLENGTH_OFFSET UNITYSDK_OFFSET(0x1C356DE0)
#define CLASS_1_7C908BE601A534FA_METHOD_1_BD29EBFCF4C67999_OFFSET UNITYSDK_OFFSET(0x1C3567E0)
#define CLASS_1_7C908BE601A534FA_METHOD_1_D974D458F5E95B4D_OFFSET UNITYSDK_OFFSET(0x1C356360)
#define CLASS_1_7C908BE601A534FA_METHOD_1_F9BB28182C0BA6DA_OFFSET UNITYSDK_OFFSET(0x1C356FE0)
#define CLASS_1_7C908BE601A534FA_ONALLOC_OFFSET UNITYSDK_OFFSET(0x1C356260)
#define CLASS_1_7C908BE601A534FA_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1C356320)
#define CLASS_1_7C908BE601A534FA_RECALCULATE_OFFSET UNITYSDK_OFFSET(0x1C356F10)
#define CLASS_1_7C908BE601A534FA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C357020)

inline static constexpr unsigned int Class_1_7C908BE601A534FA_TypeDefinitionIndex = 42025;

class Class_1_7C908BE601A534FA : public ::System::Object
{
public:
	::RPG::GameCore::LittleGameCircleCurveInfo* HLALMJDNGPN; // 0x10
	::RPG::PoolList_1<::Class_1_7C908BE601A534FA_Struct_2_E658502528B7C034>* IMLJBOJOIPP; // 0x18
	::System::Single HDHPNOOMAGE; // 0x20
	::Struct_2_EAC1BB0F093534A5 CIJHJOEEHMI; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C908BE601A534FA__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C908BE601A534FA_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C908BE601A534FA_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C908BE601A534FA_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_1_D974D458F5E95B4D(::RPG::GameCore::LittleGameCircleCurveInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameCircleCurveInfo*))((::PBYTE)hIl2Cpp + CLASS_1_7C908BE601A534FA_METHOD_1_D974D458F5E95B4D_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::System::Single a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_7C908BE601A534FA_EVALUATE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_BD29EBFCF4C67999(::System::Single a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_7C908BE601A534FA_METHOD_1_BD29EBFCF4C67999_OFFSET))(this, a1, a2, a3);
	}

	::System::Single GetLength()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C908BE601A534FA_GETLENGTH_OFFSET))(this);
	}

	::System::Single GetDistanceRatio(::System::UInt32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7C908BE601A534FA_GETDISTANCERATIO_OFFSET))(this, a1);
	}

	::System::Void Recalculate(::Struct_2_EAC1BB0F093534A5 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_EAC1BB0F093534A5, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7C908BE601A534FA_RECALCULATE_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_7C908BE601A534FA_Struct_2_E658502528B7C034>* Method_1_F9BB28182C0BA6DA()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_7C908BE601A534FA_Struct_2_E658502528B7C034>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C908BE601A534FA_METHOD_1_F9BB28182C0BA6DA_OFFSET))(this);
	}
};
