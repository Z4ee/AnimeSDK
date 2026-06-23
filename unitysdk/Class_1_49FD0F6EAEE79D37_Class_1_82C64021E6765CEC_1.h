#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/EAvatarSkillType.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_532;

#define CLASS_1_49FD0F6EAEE79D37_CLASS_1_82C64021E6765CEC_1_METHOD_1_92152814B14964F3_OFFSET UNITYSDK_OFFSET(0x19E54C70)
#define CLASS_1_49FD0F6EAEE79D37_CLASS_1_82C64021E6765CEC_1__CTOR_OFFSET UNITYSDK_OFFSET(0x19E54C60)

inline static constexpr unsigned int Class_1_49FD0F6EAEE79D37_Class_1_82C64021E6765CEC_1_TypeDefinitionIndex = 14025;

class Class_1_49FD0F6EAEE79D37_Class_1_82C64021E6765CEC_1 : public ::System::Object
{
public:
	::Share::EAvatarSkillType Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49FD0F6EAEE79D37_CLASS_1_82C64021E6765CEC_1__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_92152814B14964F3(::Class_2_208CC9941471731A_532* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_532*))((::PBYTE)hIl2Cpp + CLASS_1_49FD0F6EAEE79D37_CLASS_1_82C64021E6765CEC_1_METHOD_1_92152814B14964F3_OFFSET))(this, a1);
	}
};
