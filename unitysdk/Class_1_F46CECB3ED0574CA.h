#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_20;
namespace System { class String; }

#define CLASS_1_F46CECB3ED0574CA_METHOD_1_1DCE247AC73BC93D_OFFSET UNITYSDK_OFFSET(0x1AC07530)
#define CLASS_1_F46CECB3ED0574CA_SET_OFFSET UNITYSDK_OFFSET(0x1AC105F0)
#define CLASS_1_F46CECB3ED0574CA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC07C80)

inline static constexpr unsigned int Class_1_F46CECB3ED0574CA_TypeDefinitionIndex = 33412;

class Class_1_F46CECB3ED0574CA : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F46CECB3ED0574CA__CTOR_OFFSET))(this);
	}

	::System::Void Set(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F46CECB3ED0574CA_SET_OFFSET))(this, a1);
	}

	static ::System::String* Method_1_1DCE247AC73BC93D(::Class_0_16E4307DCC419505_20* a1)
	{
		return ((::System::String*(*)(::Class_0_16E4307DCC419505_20*))((::PBYTE)hIl2Cpp + CLASS_1_F46CECB3ED0574CA_METHOD_1_1DCE247AC73BC93D_OFFSET))(a1);
	}
};
