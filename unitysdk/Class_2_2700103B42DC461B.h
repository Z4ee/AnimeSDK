#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/BaseViewObjectComponent_1.h"

class Class_1_B7E341C5F1A6F199;

#define CLASS_2_2700103B42DC461B_METHOD_2_850A1E8990DC3F3C_OFFSET UNITYSDK_OFFSET(0x1206CB00)
#define CLASS_2_2700103B42DC461B_METHOD_2_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x1206CE30)
#define CLASS_2_2700103B42DC461B_ONEVENT_OFFSET UNITYSDK_OFFSET(0x1206CA40)
#define CLASS_2_2700103B42DC461B__CCTOR_OFFSET UNITYSDK_OFFSET(0x1206C940)
#define CLASS_2_2700103B42DC461B__CTOR_OFFSET UNITYSDK_OFFSET(0x1206CE20)

inline static constexpr unsigned int Class_2_2700103B42DC461B_TypeDefinitionIndex = 73018;

class Class_2_2700103B42DC461B : public ::Foundation::ViewObject::BaseViewObjectComponent_1<::Class_2_2700103B42DC461B*>
{
public:
	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_2700103B42DC461B__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2700103B42DC461B__CTOR_OFFSET))(this);
	}

	::System::Void OnEvent(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_2700103B42DC461B_ONEVENT_OFFSET))(this, a1);
	}

	::System::Void Method_2_8C8625211DA811AE(::Class_1_B7E341C5F1A6F199* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B7E341C5F1A6F199*))((::PBYTE)hIl2Cpp + CLASS_2_2700103B42DC461B_METHOD_2_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Void Method_2_850A1E8990DC3F3C(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_2700103B42DC461B_METHOD_2_850A1E8990DC3F3C_OFFSET))(this, a1);
	}
};
