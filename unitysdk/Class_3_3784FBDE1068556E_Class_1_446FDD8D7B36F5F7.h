#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_3_3784FBDE1068556E_CLASS_1_446FDD8D7B36F5F7_METHOD_1_7581FBB1461F187B_OFFSET UNITYSDK_OFFSET(0x117B33B0)
#define CLASS_3_3784FBDE1068556E_CLASS_1_446FDD8D7B36F5F7_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x117B33F0)
#define CLASS_3_3784FBDE1068556E_CLASS_1_446FDD8D7B36F5F7__CTOR_OFFSET UNITYSDK_OFFSET(0x117B33A0)

inline static constexpr unsigned int Class_3_3784FBDE1068556E_Class_1_446FDD8D7B36F5F7_TypeDefinitionIndex = 69311;

class Class_3_3784FBDE1068556E_Class_1_446FDD8D7B36F5F7 : public ::System::Object
{
public:
	::MoleMole::EntityHandle Field_1_0; // 0x10
	::System::Action* Field_1_3; // 0x20
	::System::Int32 Field_1_1; // 0x28
	::System::Int32 Field_1_2; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_CLASS_1_446FDD8D7B36F5F7__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7581FBB1461F187B(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_CLASS_1_446FDD8D7B36F5F7_METHOD_1_7581FBB1461F187B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_CLASS_1_446FDD8D7B36F5F7_METHOD_1_E7EF6BC52B28648C_OFFSET))(this);
	}
};
