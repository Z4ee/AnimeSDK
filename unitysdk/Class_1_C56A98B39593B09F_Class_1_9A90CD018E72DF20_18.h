#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_C56A98B39593B09F_CLASS_1_9A90CD018E72DF20_18_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x16F01150)
#define CLASS_1_C56A98B39593B09F_CLASS_1_9A90CD018E72DF20_18_GET_TEXTPATH_OFFSET UNITYSDK_OFFSET(0x16F011C0)
#define CLASS_1_C56A98B39593B09F_CLASS_1_9A90CD018E72DF20_18__CTOR_OFFSET UNITYSDK_OFFSET(0x16F00F20)

inline static constexpr unsigned int Class_1_C56A98B39593B09F_Class_1_9A90CD018E72DF20_18_TypeDefinitionIndex = 68446;

class Class_1_C56A98B39593B09F_Class_1_9A90CD018E72DF20_18 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C56A98B39593B09F_CLASS_1_9A90CD018E72DF20_18__CTOR_OFFSET))(this);
	}

	::System::String* get_PrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C56A98B39593B09F_CLASS_1_9A90CD018E72DF20_18_GET_PREFABPATH_OFFSET))(this);
	}

	::System::String* get_TextPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C56A98B39593B09F_CLASS_1_9A90CD018E72DF20_18_GET_TEXTPATH_OFFSET))(this);
	}
};
