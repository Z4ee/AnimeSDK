#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_22;
namespace System { class String; }

#define CLASS_1_F46CECB3ED0574CA_METHOD_1_1DCE247AC73BC93D_OFFSET UNITYSDK_OFFSET(0x1AC966B0)
#define CLASS_1_F46CECB3ED0574CA_SET_OFFSET UNITYSDK_OFFSET(0x1ACA0310)
#define CLASS_1_F46CECB3ED0574CA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC96E00)

inline static constexpr unsigned int Class_1_F46CECB3ED0574CA_TypeDefinitionIndex = 33782;

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

	static ::System::String* Method_1_1DCE247AC73BC93D(::Class_0_16E4307DCC419505_22* a1)
	{
		return ((::System::String*(*)(::Class_0_16E4307DCC419505_22*))((::PBYTE)hIl2Cpp + CLASS_1_F46CECB3ED0574CA_METHOD_1_1DCE247AC73BC93D_OFFSET))(a1);
	}
};
