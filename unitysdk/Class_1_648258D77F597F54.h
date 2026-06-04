#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_648258D77F597F54_GET_ENABLERUNTIMETICK_OFFSET UNITYSDK_OFFSET(0x13FEEE30)
#define CLASS_1_648258D77F597F54_METHOD_1_00DEF5A164D9A9D5_OFFSET UNITYSDK_OFFSET(0x13FEE9A0)
#define CLASS_1_648258D77F597F54_METHOD_1_3C25F5662E6A2EAC_OFFSET UNITYSDK_OFFSET(0x13FEEB50)
#define CLASS_1_648258D77F597F54_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x13FEEC90)
#define CLASS_1_648258D77F597F54_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x13FEECF0)
#define CLASS_1_648258D77F597F54_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x13FEEDF0)
#define CLASS_1_648258D77F597F54_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13FEEDB0)
#define CLASS_1_648258D77F597F54_SET_ENABLERUNTIMETICK_OFFSET UNITYSDK_OFFSET(0x13FEEE40)
#define CLASS_1_648258D77F597F54__CTOR_OFFSET UNITYSDK_OFFSET(0x13FEEE50)

inline static constexpr unsigned int Class_1_648258D77F597F54_TypeDefinitionIndex = 66046;

class Class_1_648258D77F597F54 : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_0; // 0x10
	::UnityEngine::ComputeBuffer* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* Field_1_2; // 0x20
	::System::Boolean _EnableRuntimeTick_k__BackingField; // 0x28
	::System::Int32 Field_1_4; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_648258D77F597F54__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_00DEF5A164D9A9D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_648258D77F597F54_METHOD_1_00DEF5A164D9A9D5_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_648258D77F597F54_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_648258D77F597F54_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_648258D77F597F54_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_648258D77F597F54_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* Method_1_3C25F5662E6A2EAC()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_648258D77F597F54_METHOD_1_3C25F5662E6A2EAC_OFFSET))(this);
	}

	::System::Boolean get_EnableRuntimeTick()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_648258D77F597F54_GET_ENABLERUNTIMETICK_OFFSET))(this);
	}

	::System::Void set_EnableRuntimeTick(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_648258D77F597F54_SET_ENABLERUNTIMETICK_OFFSET))(this, a1);
	}
};
