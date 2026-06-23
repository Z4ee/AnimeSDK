#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"

namespace UnityEngine { class GameObject; }

#define CLASS_3_DACD5EF2BCED95D2_METHOD_3_321ED79A39A0ED58_OFFSET UNITYSDK_OFFSET(0x15CA3480)
#define CLASS_3_DACD5EF2BCED95D2_METHOD_3_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0x15CA35D0)
#define CLASS_3_DACD5EF2BCED95D2__CTOR_OFFSET UNITYSDK_OFFSET(0x15CA33F0)

inline static constexpr unsigned int Class_3_DACD5EF2BCED95D2_TypeDefinitionIndex = 70503;

class Class_3_DACD5EF2BCED95D2 : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_3_DACD5EF2BCED95D2*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DACD5EF2BCED95D2__CTOR_OFFSET))(this);
	}

	::UnityEngine::GameObject* Method_3_321ED79A39A0ED58()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DACD5EF2BCED95D2_METHOD_3_321ED79A39A0ED58_OFFSET))(this);
	}

	::System::Void Method_3_8F7825DAFFB9B517()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DACD5EF2BCED95D2_METHOD_3_8F7825DAFFB9B517_OFFSET))(this);
	}
};
