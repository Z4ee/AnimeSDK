#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/List_1.h"

namespace UnityEngine { class Material; }

#define CLASS_2_AB1B44FFC925BDF9_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x141D1340)
#define CLASS_2_AB1B44FFC925BDF9_1_METHOD_2_D001E91AEC8A16BE_OFFSET UNITYSDK_OFFSET(0x141D12E0)
#define CLASS_2_AB1B44FFC925BDF9_1__CTOR_OFFSET UNITYSDK_OFFSET(0x141D13B0)

inline static constexpr unsigned int Class_2_AB1B44FFC925BDF9_1_TypeDefinitionIndex = 68974;

class Class_2_AB1B44FFC925BDF9_1 : public ::System::Collections::Generic::List_1<::UnityEngine::Material*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AB1B44FFC925BDF9_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_D001E91AEC8A16BE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AB1B44FFC925BDF9_1_METHOD_2_D001E91AEC8A16BE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AB1B44FFC925BDF9_1_DISPOSE_OFFSET))(this);
	}
};
