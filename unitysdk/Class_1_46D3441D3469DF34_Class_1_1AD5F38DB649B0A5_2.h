#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_46D3441D3469DF34_CLASS_1_1AD5F38DB649B0A5_2_GET_PREFABPATH_OFFSET UNITYSDK_OFFSET(0x144EA6B0)
#define CLASS_1_46D3441D3469DF34_CLASS_1_1AD5F38DB649B0A5_2_GET_TEXTPATH_OFFSET UNITYSDK_OFFSET(0x144EA6F0)
#define CLASS_1_46D3441D3469DF34_CLASS_1_1AD5F38DB649B0A5_2__CTOR_OFFSET UNITYSDK_OFFSET(0x144EA5B0)

inline static constexpr unsigned int Class_1_46D3441D3469DF34_Class_1_1AD5F38DB649B0A5_2_TypeDefinitionIndex = 67001;

class Class_1_46D3441D3469DF34_Class_1_1AD5F38DB649B0A5_2 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46D3441D3469DF34_CLASS_1_1AD5F38DB649B0A5_2__CTOR_OFFSET))(this);
	}

	::System::String* get_PrefabPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46D3441D3469DF34_CLASS_1_1AD5F38DB649B0A5_2_GET_PREFABPATH_OFFSET))(this);
	}

	::System::String* get_TextPath()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46D3441D3469DF34_CLASS_1_1AD5F38DB649B0A5_2_GET_TEXTPATH_OFFSET))(this);
	}
};
