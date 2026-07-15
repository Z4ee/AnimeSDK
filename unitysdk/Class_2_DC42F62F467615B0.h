#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_952A7C560FC1CD4B.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::Rendering { class CommandBuffer; }
template <typename T> class Class_3_E4A470CB2179ACFB;

#define CLASS_2_DC42F62F467615B0_METHOD_2_0960CAEE01038065_OFFSET UNITYSDK_OFFSET(0x175FB6D0)
#define CLASS_2_DC42F62F467615B0_METHOD_2_2A6491EB4870EEE8_OFFSET UNITYSDK_OFFSET(0x175FB7B0)
#define CLASS_2_DC42F62F467615B0_METHOD_2_2C5196CCED0BED7E_OFFSET UNITYSDK_OFFSET(0x175FB2C0)
#define CLASS_2_DC42F62F467615B0_METHOD_2_C37BCC1F4DD93D75_1_OFFSET UNITYSDK_OFFSET(0x175FB5E0)
#define CLASS_2_DC42F62F467615B0_METHOD_2_C37BCC1F4DD93D75_OFFSET UNITYSDK_OFFSET(0x175FB4F0)
#define CLASS_2_DC42F62F467615B0_METHOD_2_F0F8DE036FE283F6_OFFSET UNITYSDK_OFFSET(0x175FB730)
#define CLASS_2_DC42F62F467615B0__CTOR_OFFSET UNITYSDK_OFFSET(0x175FBAB0)

inline static constexpr unsigned int Class_2_DC42F62F467615B0_TypeDefinitionIndex = 47461;

class Class_2_DC42F62F467615B0 : public ::Class_1_952A7C560FC1CD4B
{
public:
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* Field_2_0; // 0x28
	::Class_3_E4A470CB2179ACFB<::UnityEngine::Vector4>* Field_2_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC42F62F467615B0__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2C5196CCED0BED7E(::System::Boolean a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_DC42F62F467615B0_METHOD_2_2C5196CCED0BED7E_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::Vector3 Method_2_C37BCC1F4DD93D75()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC42F62F467615B0_METHOD_2_C37BCC1F4DD93D75_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_C37BCC1F4DD93D75_1()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC42F62F467615B0_METHOD_2_C37BCC1F4DD93D75_1_OFFSET))(this);
	}

	::System::Void Method_2_0960CAEE01038065()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC42F62F467615B0_METHOD_2_0960CAEE01038065_OFFSET))(this);
	}

	::System::Void Method_2_F0F8DE036FE283F6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DC42F62F467615B0_METHOD_2_F0F8DE036FE283F6_OFFSET))(this);
	}

	::System::Void Method_2_2A6491EB4870EEE8(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_2_DC42F62F467615B0_METHOD_2_2A6491EB4870EEE8_OFFSET))(this, a1);
	}
};
