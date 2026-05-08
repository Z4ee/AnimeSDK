#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_7E6E8DD3EAC12A67_14;
namespace System { class String; }

#define CLASS_1_E613133539CF824F_METHOD_1_AFF6E129CD89A2AA_OFFSET UNITYSDK_OFFSET(0x10369D80)
#define CLASS_1_E613133539CF824F_METHOD_1_F334517C457F1E0D_OFFSET UNITYSDK_OFFSET(0x1036A0A0)
#define CLASS_1_E613133539CF824F__CTOR_OFFSET UNITYSDK_OFFSET(0x10369D70)

inline static constexpr unsigned int Class_1_E613133539CF824F_TypeDefinitionIndex = 43581;

class Class_1_E613133539CF824F : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::Class_3_7E6E8DD3EAC12A67_14* Field_1_5; // 0x18
	::System::Int32 Field_1_2; // 0x20
	::System::Int32 Field_1_3; // 0x24
	::System::Boolean Field_1_4; // 0x28
	::System::Int32 Field_1_0; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E613133539CF824F__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_AFF6E129CD89A2AA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E613133539CF824F_METHOD_1_AFF6E129CD89A2AA_OFFSET))(this);
	}

	::System::Int32 Method_1_F334517C457F1E0D()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E613133539CF824F_METHOD_1_F334517C457F1E0D_OFFSET))(this);
	}
};
