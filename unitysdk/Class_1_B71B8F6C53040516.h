#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define CLASS_1_B71B8F6C53040516_METHOD_1_25DD23FADD0F9ACC_OFFSET UNITYSDK_OFFSET(0x1284FB80)
#define CLASS_1_B71B8F6C53040516_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1284FA50)
#define CLASS_1_B71B8F6C53040516_RESET_OFFSET UNITYSDK_OFFSET(0x1284FB30)
#define CLASS_1_B71B8F6C53040516__CTOR_OFFSET UNITYSDK_OFFSET(0x1284FBD0)

inline static constexpr unsigned int Class_1_B71B8F6C53040516_TypeDefinitionIndex = 68990;

class Class_1_B71B8F6C53040516 : public ::System::Object
{
public:
	::System::Func_1<::System::Single>* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B71B8F6C53040516__CTOR_OFFSET))(this);
	}

	::System::Boolean MoveNext()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B71B8F6C53040516_MOVENEXT_OFFSET))(this);
	}

	::System::Void Reset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B71B8F6C53040516_RESET_OFFSET))(this);
	}

	::System::Void Method_1_25DD23FADD0F9ACC(::System::Func_1<::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_B71B8F6C53040516_METHOD_1_25DD23FADD0F9ACC_OFFSET))(this, a1);
	}
};
