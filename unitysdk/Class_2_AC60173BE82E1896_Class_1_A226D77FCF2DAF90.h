#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
class Class_3_025FF4981524A424_179;
class Class_3_D42977F88D59ACE7_16;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_2_AC60173BE82E1896_CLASS_1_A226D77FCF2DAF90_METHOD_1_7E35F3A1E0331FD8_OFFSET UNITYSDK_OFFSET(0x1CDE7870)
#define CLASS_2_AC60173BE82E1896_CLASS_1_A226D77FCF2DAF90__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDE7860)

inline static constexpr unsigned int Class_2_AC60173BE82E1896_Class_1_A226D77FCF2DAF90_TypeDefinitionIndex = 80478;

class Class_2_AC60173BE82E1896_Class_1_A226D77FCF2DAF90 : public ::System::Object
{
public:
	::System::Action_2<::Class_3_025FF4981524A424_179*, ::Class_3_D42977F88D59ACE7_16*>* Field_1_1; // 0x10
	::Class_3_D42977F88D59ACE7_16* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC60173BE82E1896_CLASS_1_A226D77FCF2DAF90__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7E35F3A1E0331FD8(::Class_0_16E4307DCC419505_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + CLASS_2_AC60173BE82E1896_CLASS_1_A226D77FCF2DAF90_METHOD_1_7E35F3A1E0331FD8_OFFSET))(this, a1);
	}
};
