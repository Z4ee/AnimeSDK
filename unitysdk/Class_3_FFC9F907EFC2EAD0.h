#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::Client { class LimaoNewsDutyCheckGreetingBranch; }

#define CLASS_3_FFC9F907EFC2EAD0_METHOD_3_237DE7154300C94D_OFFSET UNITYSDK_OFFSET(0x1D0F4550)
#define CLASS_3_FFC9F907EFC2EAD0_METHOD_3_4EB4DD7CBD5AE076_OFFSET UNITYSDK_OFFSET(0x1D0F4590)
#define CLASS_3_FFC9F907EFC2EAD0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0F4580)

inline static constexpr unsigned int Class_3_FFC9F907EFC2EAD0_TypeDefinitionIndex = 10232;

class Class_3_FFC9F907EFC2EAD0 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::Client::LimaoNewsDutyCheckGreetingBranch*>* LNABHDFODJD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FFC9F907EFC2EAD0__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_237DE7154300C94D(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_FFC9F907EFC2EAD0*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_FFC9F907EFC2EAD0*&))((::PBYTE)hIl2Cpp + CLASS_3_FFC9F907EFC2EAD0_METHOD_3_237DE7154300C94D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_4EB4DD7CBD5AE076(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_FFC9F907EFC2EAD0* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_FFC9F907EFC2EAD0*))((::PBYTE)hIl2Cpp + CLASS_3_FFC9F907EFC2EAD0_METHOD_3_4EB4DD7CBD5AE076_OFFSET))(a1, a2);
	}
};
