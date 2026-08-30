#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define LOCALFOGSPHEREINSTANCE_EXTRAEXPORTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A480CD0)

inline static constexpr unsigned int LocalFogSphereInstance_ExtraExportData_TypeDefinitionIndex = 47930;

class LocalFogSphereInstance_ExtraExportData : public ::System::Object
{
public:
	::System::String* scatterFadaRampPath; // 0x10
	::System::String* additiveMaterialPath; // 0x18
	::System::String* alphaBlendMaterialPath; // 0x20
	::System::String* additiveGradientMaterialPath; // 0x28
	::System::String* alphaBlendGradientMaterialPath; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALFOGSPHEREINSTANCE_EXTRAEXPORTDATA__CTOR_OFFSET))(this);
	}
};
