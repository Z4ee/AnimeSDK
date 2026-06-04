#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_46D3441D3469DF34_CLASS_1_1AD5F38DB649B0A5_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x144EA830)
#define CLASS_1_46D3441D3469DF34_CLASS_1_1AD5F38DB649B0A5_GET_TEXTPATH_OFFSET UNITYSDK_OFFSET(0x144EA870)
#define CLASS_1_46D3441D3469DF34_CLASS_1_1AD5F38DB649B0A5__CTOR_OFFSET UNITYSDK_OFFSET(0x144EA590)

inline static constexpr unsigned int Class_1_46D3441D3469DF34_Class_1_1AD5F38DB649B0A5_TypeDefinitionIndex = 66999;

class Class_1_46D3441D3469DF34_Class_1_1AD5F38DB649B0A5 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46D3441D3469DF34_CLASS_1_1AD5F38DB649B0A5__CTOR_OFFSET))(this);
	}

	::System::String* get_PrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46D3441D3469DF34_CLASS_1_1AD5F38DB649B0A5_GET_PREFABPATH_OFFSET))(this);
	}

	::System::String* get_TextPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46D3441D3469DF34_CLASS_1_1AD5F38DB649B0A5_GET_TEXTPATH_OFFSET))(this);
	}
};
