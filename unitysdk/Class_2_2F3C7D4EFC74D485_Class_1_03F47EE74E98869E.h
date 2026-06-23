#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_2F3C7D4EFC74D485;
class Class_2_DF2C726EEEEC912D;
class Class_3_C24316E73A7EDF3D;
namespace System { class Action; }
template <typename T> class Class_1_8CC15846339E7FB0;

#define CLASS_2_2F3C7D4EFC74D485_CLASS_1_03F47EE74E98869E_METHOD_1_9774F8606A734AE7_OFFSET UNITYSDK_OFFSET(0x137D8130)
#define CLASS_2_2F3C7D4EFC74D485_CLASS_1_03F47EE74E98869E_METHOD_1_B579DB9B03931A80_OFFSET UNITYSDK_OFFSET(0x137D7830)
#define CLASS_2_2F3C7D4EFC74D485_CLASS_1_03F47EE74E98869E__CTOR_OFFSET UNITYSDK_OFFSET(0x137D7820)

inline static constexpr unsigned int Class_2_2F3C7D4EFC74D485_Class_1_03F47EE74E98869E_TypeDefinitionIndex = 63053;

class Class_2_2F3C7D4EFC74D485_Class_1_03F47EE74E98869E : public ::System::Object
{
public:
	::Class_2_DF2C726EEEEC912D* Field_1_1; // 0x10
	::System::Action* Field_1_3; // 0x18
	::Class_2_2F3C7D4EFC74D485* Field_1_0; // 0x20
	::System::Boolean Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F3C7D4EFC74D485_CLASS_1_03F47EE74E98869E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B579DB9B03931A80(::Class_1_8CC15846339E7FB0<::Class_3_C24316E73A7EDF3D*>* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8CC15846339E7FB0<::Class_3_C24316E73A7EDF3D*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_2F3C7D4EFC74D485_CLASS_1_03F47EE74E98869E_METHOD_1_B579DB9B03931A80_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_9774F8606A734AE7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F3C7D4EFC74D485_CLASS_1_03F47EE74E98869E_METHOD_1_9774F8606A734AE7_OFFSET))(this);
	}
};
