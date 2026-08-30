#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5BE136E515AF9A61.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_684F0B2C967A7B27;
namespace System { class Random; }

#define CLASS_2_B2DEC4DC46157CA5_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C145FF0)
#define CLASS_2_B2DEC4DC46157CA5_METHOD_2_06618C2A694360FD_OFFSET UNITYSDK_OFFSET(0x1C147CE0)
#define CLASS_2_B2DEC4DC46157CA5_METHOD_2_704FAC4600717444_OFFSET UNITYSDK_OFFSET(0x1C146100)
#define CLASS_2_B2DEC4DC46157CA5_METHOD_2_7854AA0B7A17DA18_OFFSET UNITYSDK_OFFSET(0x1C147470)
#define CLASS_2_B2DEC4DC46157CA5__CTOR_OFFSET UNITYSDK_OFFSET(0x1C145FE0)

inline static constexpr unsigned int Class_2_B2DEC4DC46157CA5_TypeDefinitionIndex = 40920;

class Class_2_B2DEC4DC46157CA5 : public ::Class_1_5BE136E515AF9A61
{
public:
	::Il2CppArray<::Class_1_684F0B2C967A7B27*>* LALOEKFAGKC; // 0x18
	::System::Random* OLEEIPHBJKB; // 0x20
	::System::Single PGMIOKKLHIE; // 0x28

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
