#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_C56A98B39593B09F_CLASS_1_9A90CD018E72DF20_20_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x1783D120)
#define CLASS_1_C56A98B39593B09F_CLASS_1_9A90CD018E72DF20_20_GET_TEXTPATH_OFFSET UNITYSDK_OFFSET(0x1783D190)
#define CLASS_1_C56A98B39593B09F_CLASS_1_9A90CD018E72DF20_20__CTOR_OFFSET UNITYSDK_OFFSET(0x1783D0C0)

inline static constexpr unsigned int Class_1_C56A98B39593B09F_Class_1_9A90CD018E72DF20_20_TypeDefinitionIndex = 71640;

class Class_1_C56A98B39593B09F_Class_1_9A90CD018E72DF20_20 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C56A98B39593B09F_CLASS_1_9A90CD018E72DF20_20__CTOR_OFFSET))(this);
	}

	::System::String* get_PrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C56A98B39593B09F_CLASS_1_9A90CD018E72DF20_20_GET_PREFABPATH_OFFSET))(this);
	}

	::System::String* get_TextPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C56A98B39593B09F_CLASS_1_9A90CD018E72DF20_20_GET_TEXTPATH_OFFSET))(this);
	}
};
