#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_63ED808CFC44D692_CLASS_1_9A90CD018E72DF20_17_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0xB377700)
#define CLASS_1_63ED808CFC44D692_CLASS_1_9A90CD018E72DF20_17_GET_TEXTPATH_OFFSET UNITYSDK_OFFSET(0xB377770)
#define CLASS_1_63ED808CFC44D692_CLASS_1_9A90CD018E72DF20_17__CTOR_OFFSET UNITYSDK_OFFSET(0xB3773D0)

inline static constexpr unsigned int Class_1_63ED808CFC44D692_Class_1_9A90CD018E72DF20_17_TypeDefinitionIndex = 71690;

class Class_1_63ED808CFC44D692_Class_1_9A90CD018E72DF20_17 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_63ED808CFC44D692_CLASS_1_9A90CD018E72DF20_17__CTOR_OFFSET))(this);
	}

	::System::String* get_PrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_63ED808CFC44D692_CLASS_1_9A90CD018E72DF20_17_GET_PREFABPATH_OFFSET))(this);
	}

	::System::String* get_TextPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_63ED808CFC44D692_CLASS_1_9A90CD018E72DF20_17_GET_TEXTPATH_OFFSET))(this);
	}
};
