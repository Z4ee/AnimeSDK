#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ScenenLightManager { class Tup; }

#define CLASS_1_3C6C434BD07FF323_COMPARE_OFFSET UNITYSDK_OFFSET(0x9788F30)
#define CLASS_1_3C6C434BD07FF323__CTOR_OFFSET UNITYSDK_OFFSET(0x9788FC0)

inline static constexpr unsigned int Class_1_3C6C434BD07FF323_TypeDefinitionIndex = 45763;

class Class_1_3C6C434BD07FF323 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C6C434BD07FF323__CTOR_OFFSET))(this);
	}

	::System::Int32 Compare(::ScenenLightManager::Tup* a1, ::ScenenLightManager::Tup* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::ScenenLightManager::Tup*, ::ScenenLightManager::Tup*))((::PBYTE)hIl2Cpp + CLASS_1_3C6C434BD07FF323_COMPARE_OFFSET))(this, a1, a2);
	}
};
