#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_81F8168A6B8D9842_Struct_2_E658502528B7C034.h"
#include "unitysdk/Struct_2_EAC1BB0F093534A5.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class LittleGameCircleCurveInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_81F8168A6B8D9842_CLEAR_OFFSET UNITYSDK_OFFSET(0x17ED81F0)
#define CLASS_1_81F8168A6B8D9842_EVALUATE_OFFSET UNITYSDK_OFFSET(0x17ED86D0)
#define CLASS_1_81F8168A6B8D9842_GETDISTANCERATIO_OFFSET UNITYSDK_OFFSET(0x17ED8DD0)
#define CLASS_1_81F8168A6B8D9842_GETLENGTH_OFFSET UNITYSDK_OFFSET(0x17ED8D80)
#define CLASS_1_81F8168A6B8D9842_METHOD_1_0AD2EB95442024C8_OFFSET UNITYSDK_OFFSET(0x17ED8390)
#define CLASS_1_81F8168A6B8D9842_METHOD_1_EB55A2A7BA8BF600_OFFSET UNITYSDK_OFFSET(0x17ED8770)
#define CLASS_1_81F8168A6B8D9842_METHOD_1_F9BB28182C0BA6DA_OFFSET UNITYSDK_OFFSET(0x17ED8F70)
#define CLASS_1_81F8168A6B8D9842_ONALLOC_OFFSET UNITYSDK_OFFSET(0x17ED82A0)
#define CLASS_1_81F8168A6B8D9842_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x17ED8350)
#define CLASS_1_81F8168A6B8D9842_RECALCULATE_OFFSET UNITYSDK_OFFSET(0x17ED8EA0)
#define CLASS_1_81F8168A6B8D9842__CTOR_OFFSET UNITYSDK_OFFSET(0x17ED8FB0)

inline static constexpr unsigned int Class_1_81F8168A6B8D9842_TypeDefinitionIndex = 39477;

class Class_1_81F8168A6B8D9842 : public ::System::Object
{
public:
	::RPG::PoolList_1<::Class_1_81F8168A6B8D9842_Struct_2_E658502528B7C034>* Field_1_3; // 0x10
	::RPG::GameCore::LittleGameCircleCurveInfo* Field_1_1; // 0x18
	::System::Single Field_1_2; // 0x20
	::Struct_2_EAC1BB0F093534A5 Field_1_0; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81F8168A6B8D9842__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81F8168A6B8D9842_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81F8168A6B8D9842_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81F8168A6B8D9842_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Method_1_0AD2EB95442024C8(::RPG::GameCore::LittleGameCircleCurveInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameCircleCurveInfo*))((::PBYTE)hIl2Cpp + CLASS_1_81F8168A6B8D9842_METHOD_1_0AD2EB95442024C8_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::System::Single a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_81F8168A6B8D9842_EVALUATE_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_EB55A2A7BA8BF600(::System::Single a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_81F8168A6B8D9842_METHOD_1_EB55A2A7BA8BF600_OFFSET))(this, a1, a2, a3);
	}

	::System::Single GetLength()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81F8168A6B8D9842_GETLENGTH_OFFSET))(this);
	}

	::System::Single GetDistanceRatio(::System::UInt32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_81F8168A6B8D9842_GETDISTANCERATIO_OFFSET))(this, a1);
	}

	::System::Void Recalculate(::Struct_2_EAC1BB0F093534A5 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_EAC1BB0F093534A5, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_81F8168A6B8D9842_RECALCULATE_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_1_81F8168A6B8D9842_Struct_2_E658502528B7C034>* Method_1_F9BB28182C0BA6DA()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_81F8168A6B8D9842_Struct_2_E658502528B7C034>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_81F8168A6B8D9842_METHOD_1_F9BB28182C0BA6DA_OFFSET))(this);
	}
};
