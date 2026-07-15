#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_C56A98B39593B09F_CLASS_1_9A90CD018E72DF20_15_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x16F01310)
#define CLASS_1_C56A98B39593B09F_CLASS_1_9A90CD018E72DF20_15_GET_TEXTPATH_OFFSET UNITYSDK_OFFSET(0x16F01380)
#define CLASS_1_C56A98B39593B09F_CLASS_1_9A90CD018E72DF20_15__CTOR_OFFSET UNITYSDK_OFFSET(0x16F00EF0)

inline static constexpr unsigned int Class_1_C56A98B39593B09F_Class_1_9A90CD018E72DF20_15_TypeDefinitionIndex = 68443;

class Class_1_C56A98B39593B09F_Class_1_9A90CD018E72DF20_15 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C56A98B39593B09F_CLASS_1_9A90CD018E72DF20_15__CTOR_OFFSET))(this);
	}

	::System::String* get_PrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C56A98B39593B09F_CLASS_1_9A90CD018E72DF20_15_GET_PREFABPATH_OFFSET))(this);
	}

	::System::String* get_TextPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C56A98B39593B09F_CLASS_1_9A90CD018E72DF20_15_GET_TEXTPATH_OFFSET))(this);
	}
};
