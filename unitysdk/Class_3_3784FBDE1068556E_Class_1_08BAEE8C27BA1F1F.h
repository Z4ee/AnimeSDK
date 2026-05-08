#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

class Class_3_6D73516CC6FEADD7;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_3784FBDE1068556E_CLASS_1_08BAEE8C27BA1F1F_METHOD_1_6DB06F202525B6A3_OFFSET UNITYSDK_OFFSET(0x13392960)
#define CLASS_3_3784FBDE1068556E_CLASS_1_08BAEE8C27BA1F1F__CTOR_OFFSET UNITYSDK_OFFSET(0x13392950)

inline static constexpr unsigned int Class_3_3784FBDE1068556E_Class_1_08BAEE8C27BA1F1F_TypeDefinitionIndex = 69312;

class Class_3_3784FBDE1068556E_Class_1_08BAEE8C27BA1F1F : public ::System::Object
{
public:
	::MoleMole::EntityHandle Field_1_1; // 0x10
	::Class_3_6D73516CC6FEADD7* Field_1_0; // 0x20
	::System::Action_2<::System::UInt32, ::System::Boolean>* Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_CLASS_1_08BAEE8C27BA1F1F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6DB06F202525B6A3(::System::UInt32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_3784FBDE1068556E_CLASS_1_08BAEE8C27BA1F1F_METHOD_1_6DB06F202525B6A3_OFFSET))(this, a1, a2);
	}
};
