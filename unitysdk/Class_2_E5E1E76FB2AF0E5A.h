#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/List_1.h"

namespace UnityEngine { class Material; }

#define CLASS_2_E5E1E76FB2AF0E5A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11AE76B0)
#define CLASS_2_E5E1E76FB2AF0E5A_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x11AE7650)
#define CLASS_2_E5E1E76FB2AF0E5A__CTOR_OFFSET UNITYSDK_OFFSET(0x11AE7720)

inline static constexpr unsigned int Class_2_E5E1E76FB2AF0E5A_TypeDefinitionIndex = 68016;

class Class_2_E5E1E76FB2AF0E5A : public ::System::Collections::Generic::List_1<::UnityEngine::Material*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E5E1E76FB2AF0E5A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E5E1E76FB2AF0E5A_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E5E1E76FB2AF0E5A_DISPOSE_OFFSET))(this);
	}
};
