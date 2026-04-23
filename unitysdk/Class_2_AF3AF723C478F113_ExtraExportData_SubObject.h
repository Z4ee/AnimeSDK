#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ScenenLightManager { class TransformExportData; }
namespace System { class String; }

#define CLASS_2_AF3AF723C478F113_EXTRAEXPORTDATA_SUBOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x12AA6300)

inline static constexpr unsigned int Class_2_AF3AF723C478F113_ExtraExportData_SubObject_TypeDefinitionIndex = 45639;

class Class_2_AF3AF723C478F113_ExtraExportData_SubObject : public ::System::Object
{
public:
	::System::String* meshPath; // 0x10
	::ScenenLightManager::TransformExportData* transformData; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AF3AF723C478F113_EXTRAEXPORTDATA_SUBOBJECT__CTOR_OFFSET))(this);
	}
};
