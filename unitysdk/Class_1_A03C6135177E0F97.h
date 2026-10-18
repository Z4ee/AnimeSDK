#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8F494CBE88B08C04;
class Class_1_E3044AFF91E5082A;
namespace R3 { template <typename T> class Observable_1; }
namespace R3 { template <typename T> class ReadOnlyReactiveProperty_1; }

#define CLASS_1_A03C6135177E0F97_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCA02620)
#define CLASS_1_A03C6135177E0F97_GET_CONDITIONDESC_OFFSET UNITYSDK_OFFSET(0xCA01C60)
#define CLASS_1_A03C6135177E0F97_GET_TARGETVALUE_OFFSET UNITYSDK_OFFSET(0xCA01D00)
#define CLASS_1_A03C6135177E0F97_METHOD_1_8AE653474AE4DD46_OFFSET UNITYSDK_OFFSET(0xCA01CC0)
#define CLASS_1_A03C6135177E0F97_METHOD_1_FB5550CC734284FC_1_OFFSET UNITYSDK_OFFSET(0xCA01D10)
#define CLASS_1_A03C6135177E0F97_METHOD_1_FB5550CC734284FC_OFFSET UNITYSDK_OFFSET(0xCA01C80)
#define CLASS_1_A03C6135177E0F97_SET_CONDITIONDESC_OFFSET UNITYSDK_OFFSET(0xCA01C70)
#define CLASS_1_A03C6135177E0F97__CTOR_OFFSET UNITYSDK_OFFSET(0xCA01D50)

inline static constexpr unsigned int Class_1_A03C6135177E0F97_TypeDefinitionIndex = 79563;

class Class_1_A03C6135177E0F97 : public ::System::Object
{
public:
	::Class_1_8F494CBE88B08C04* _ConditionDesc_k__BackingField; // 0x10
	::R3::ReadOnlyReactiveProperty_1<::System::Boolean>* CCPOGAJHICH; // 0x18
	::R3::ReadOnlyReactiveProperty_1<::System::Int32>* EJNMGLJJEOO; // 0x20
	::R3::ReadOnlyReactiveProperty_1<::System::Boolean>* INJJGMIGFFD; // 0x28
	::System::Int32 _TargetValue_k__BackingField; // 0x30

	::System::Void _ctor(::Class_1_E3044AFF91E5082A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E3044AFF91E5082A*))((::PBYTE)hIl2Cpp + CLASS_1_A03C6135177E0F97__CTOR_OFFSET))(this, a1);
	}

	::Class_1_8F494CBE88B08C04* get_ConditionDesc()
	{
		return ((::Class_1_8F494CBE88B08C04*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A03C6135177E0F97_GET_CONDITIONDESC_OFFSET))(this);
	}

	::System::Void set_ConditionDesc(::Class_1_8F494CBE88B08C04* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8F494CBE88B08C04*))((::PBYTE)hIl2Cpp + CLASS_1_A03C6135177E0F97_SET_CONDITIONDESC_OFFSET))(this, a1);
	}

	::R3::Observable_1<::System::Boolean>* Method_1_FB5550CC734284FC()
	{
		return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A03C6135177E0F97_METHOD_1_FB5550CC734284FC_OFFSET))(this);
	}

	::R3::Observable_1<::System::Int32>* Method_1_8AE653474AE4DD46()
	{
		return ((::R3::Observable_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A03C6135177E0F97_METHOD_1_8AE653474AE4DD46_OFFSET))(this);
	}

	::System::Int32 get_TargetValue()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A03C6135177E0F97_GET_TARGETVALUE_OFFSET))(this);
	}

	::R3::Observable_1<::System::Boolean>* Method_1_FB5550CC734284FC_1()
	{
		return ((::R3::Observable_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A03C6135177E0F97_METHOD_1_FB5550CC734284FC_1_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A03C6135177E0F97_DISPOSE_OFFSET))(this);
	}
};
