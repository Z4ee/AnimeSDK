#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BE136E515AF9A61.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_684F0B2C967A7B27;
namespace System { class Random; }

#define CLASS_2_B2DEC4DC46157CA5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A4867B0)
#define CLASS_2_B2DEC4DC46157CA5_METHOD_2_06618C2A694360FD_OFFSET UNITYSDK_OFFSET(0x1A4884A0)
#define CLASS_2_B2DEC4DC46157CA5_METHOD_2_704FAC4600717444_OFFSET UNITYSDK_OFFSET(0x1A4868C0)
#define CLASS_2_B2DEC4DC46157CA5_METHOD_2_7854AA0B7A17DA18_OFFSET UNITYSDK_OFFSET(0x1A487C30)
#define CLASS_2_B2DEC4DC46157CA5__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4867A0)

inline static constexpr unsigned int Class_2_B2DEC4DC46157CA5_TypeDefinitionIndex = 40041;

class Class_2_B2DEC4DC46157CA5 : public ::Class_1_5BE136E515AF9A61
{
public:
	::System::Random* Field_2_0; // 0x18
	::Il2CppArray<::Class_1_684F0B2C967A7B27*>* Field_2_1; // 0x20
	::System::Single Field_2_2; // 0x28

	::System::Void _ctor(::Il2CppArray<::Class_1_684F0B2C967A7B27*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_1_684F0B2C967A7B27*>*))((::PBYTE)hIl2Cpp + CLASS_2_B2DEC4DC46157CA5__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B2DEC4DC46157CA5_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_704FAC4600717444()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B2DEC4DC46157CA5_METHOD_2_704FAC4600717444_OFFSET))(this);
	}

	::System::Void Method_2_7854AA0B7A17DA18(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B2DEC4DC46157CA5_METHOD_2_7854AA0B7A17DA18_OFFSET))(this, a1);
	}

	static ::UnityEngine::Vector3 Method_2_06618C2A694360FD(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B2DEC4DC46157CA5_METHOD_2_06618C2A694360FD_OFFSET))(a1, a2, a3, a4);
	}
};
