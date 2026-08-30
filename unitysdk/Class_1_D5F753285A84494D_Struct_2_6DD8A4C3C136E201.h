#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ScenenLightManager/LightTypeID.h"
#include "unitysdk/System/ValueType.h"

#define CLASS_1_D5F753285A84494D_STRUCT_2_6DD8A4C3C136E201__CTOR_OFFSET UNITYSDK_OFFSET(0x2DE9F20)

inline static constexpr unsigned int Class_1_D5F753285A84494D_Struct_2_6DD8A4C3C136E201_TypeDefinitionIndex = 49567;

struct alignas(4) Class_1_D5F753285A84494D_Struct_2_6DD8A4C3C136E201
{
	::System::Int32 FAPENEGBFGK; // 0x10
	::System::Int32 OEOOKEJAGDD; // 0x14
	::ScenenLightManager::LightTypeID GMIEDOBIPGF; // 0x18
	::System::Int32 PMJPKNKCKLF; // 0x1C
	::System::Int32 DEBIMPEAMIN; // 0x20
	::System::Int32 BEPBIGNPOGI; // 0x24

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::ScenenLightManager::LightTypeID a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::ScenenLightManager::LightTypeID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D5F753285A84494D_STRUCT_2_6DD8A4C3C136E201__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}
};
