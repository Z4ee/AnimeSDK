#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_29;
class Class_3_48A3D3A34C52331D_48;
namespace System { template <typename T> class Action_1; }

#define CLASS_2_4F8E0ECC5AEFD613_CLASS_1_0907EB5D7D136200_METHOD_1_D3F8AF9FFCB0FED9_OFFSET UNITYSDK_OFFSET(0x1289CF70)
#define CLASS_2_4F8E0ECC5AEFD613_CLASS_1_0907EB5D7D136200__CTOR_OFFSET UNITYSDK_OFFSET(0x1289CF60)

inline static constexpr unsigned int Class_2_4F8E0ECC5AEFD613_Class_1_0907EB5D7D136200_TypeDefinitionIndex = 60444;

class Class_2_4F8E0ECC5AEFD613_Class_1_0907EB5D7D136200 : public ::System::Object
{
public:
	::System::Action_1<::Class_3_48A3D3A34C52331D_48*>* Field_1_2; // 0x10
	::System::Int32 Field_1_1; // 0x18
	::System::Int32 Field_1_0; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F8E0ECC5AEFD613_CLASS_1_0907EB5D7D136200__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D3F8AF9FFCB0FED9(::Class_0_16E4307DCC419505_29* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_29*))((::PBYTE)hIl2Cpp + CLASS_2_4F8E0ECC5AEFD613_CLASS_1_0907EB5D7D136200_METHOD_1_D3F8AF9FFCB0FED9_OFFSET))(this, a1);
	}
};
