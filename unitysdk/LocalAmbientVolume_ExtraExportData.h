#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define LOCALAMBIENTVOLUME_EXTRAEXPORTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A47E8D0)

inline static constexpr unsigned int LocalAmbientVolume_ExtraExportData_TypeDefinitionIndex = 47926;

class LocalAmbientVolume_ExtraExportData : public ::System::Object
{
public:
	::System::String* meshPath; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOCALAMBIENTVOLUME_EXTRAEXPORTDATA__CTOR_OFFSET))(this);
	}
};
