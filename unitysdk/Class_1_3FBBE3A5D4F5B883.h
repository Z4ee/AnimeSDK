#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_3FBBE3A5D4F5B883_GET_ENABLERUNTIMETICK_OFFSET UNITYSDK_OFFSET(0x12409DD0)
#define CLASS_1_3FBBE3A5D4F5B883_METHOD_1_00DEF5A164D9A9D5_OFFSET UNITYSDK_OFFSET(0x124099C0)
#define CLASS_1_3FBBE3A5D4F5B883_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x12409C50)
#define CLASS_1_3FBBE3A5D4F5B883_METHOD_1_7039A94DE2FD3433_OFFSET UNITYSDK_OFFSET(0x12409B50)
#define CLASS_1_3FBBE3A5D4F5B883_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x12409CB0)
#define CLASS_1_3FBBE3A5D4F5B883_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x12409D90)
#define CLASS_1_3FBBE3A5D4F5B883_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12409D50)
#define CLASS_1_3FBBE3A5D4F5B883_SET_ENABLERUNTIMETICK_OFFSET UNITYSDK_OFFSET(0x12409DE0)
#define CLASS_1_3FBBE3A5D4F5B883__CTOR_OFFSET UNITYSDK_OFFSET(0x12409DF0)

inline static constexpr unsigned int Class_1_3FBBE3A5D4F5B883_TypeDefinitionIndex = 65119;

class Class_1_3FBBE3A5D4F5B883 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* Field_1_0; // 0x10
	::UnityEngine::ComputeBuffer* Field_1_3; // 0x18
	::UnityEngine::GameObject* Field_1_4; // 0x20
	::System::Int32 Field_1_1; // 0x28
	::System::Boolean _EnableRuntimeTick_k__BackingField; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3FBBE3A5D4F5B883__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_00DEF5A164D9A9D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3FBBE3A5D4F5B883_METHOD_1_00DEF5A164D9A9D5_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3FBBE3A5D4F5B883_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3FBBE3A5D4F5B883_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3FBBE3A5D4F5B883_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3FBBE3A5D4F5B883_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* Method_1_7039A94DE2FD3433()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3FBBE3A5D4F5B883_METHOD_1_7039A94DE2FD3433_OFFSET))(this);
	}

	::System::Boolean get_EnableRuntimeTick()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3FBBE3A5D4F5B883_GET_ENABLERUNTIMETICK_OFFSET))(this);
	}

	::System::Void set_EnableRuntimeTick(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_3FBBE3A5D4F5B883_SET_ENABLERUNTIMETICK_OFFSET))(this, value);
	}
};
