#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_472679C84451629A_4;
namespace System { class String; }

#define CLASS_1_E613133539CF824F_1_METHOD_1_AFF6E129CD89A2AA_OFFSET UNITYSDK_OFFSET(0x137D55C0)
#define CLASS_1_E613133539CF824F_1_METHOD_1_F334517C457F1E0D_OFFSET UNITYSDK_OFFSET(0x137D5020)
#define CLASS_1_E613133539CF824F_1__CTOR_OFFSET UNITYSDK_OFFSET(0x137D5010)

inline static constexpr unsigned int Class_1_E613133539CF824F_1_TypeDefinitionIndex = 81267;

class Class_1_E613133539CF824F_1 : public ::System::Object
{
public:
	::Class_3_472679C84451629A_4* Field_1_5; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::Int32 Field_1_3; // 0x20
	::System::Boolean Field_1_4; // 0x24
	::System::Int32 Field_1_2; // 0x28
	::System::Int32 Field_1_0; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E613133539CF824F_1__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_F334517C457F1E0D()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E613133539CF824F_1_METHOD_1_F334517C457F1E0D_OFFSET))(this);
	}

	::System::Int32 Method_1_AFF6E129CD89A2AA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E613133539CF824F_1_METHOD_1_AFF6E129CD89A2AA_OFFSET))(this);
	}
};
