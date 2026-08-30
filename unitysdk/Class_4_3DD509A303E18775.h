#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }

#define CLASS_4_3DD509A303E18775_METHOD_4_B92733AFFA6C06B2_OFFSET UNITYSDK_OFFSET(0x1D6F5E70)
#define CLASS_4_3DD509A303E18775_METHOD_4_D73461FD6B79DF73_OFFSET UNITYSDK_OFFSET(0x1D6F5E20)
#define CLASS_4_3DD509A303E18775__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F5E60)

inline static constexpr unsigned int Class_4_3DD509A303E18775_TypeDefinitionIndex = 21727;

class Class_4_3DD509A303E18775 : public ::RPG::GameCore::AdvWaitingEventBase
{
public:
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* CMIFLIMCPBO; // 0x20
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_3DD509A303E18775__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_4_D73461FD6B79DF73(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_3DD509A303E18775*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_3DD509A303E18775*&))((::PBYTE)hIl2Cpp + CLASS_4_3DD509A303E18775_METHOD_4_D73461FD6B79DF73_OFFSET))(a1, a2);
	}

	static ::System::Void Method_4_B92733AFFA6C06B2(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_4_3DD509A303E18775* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_4_3DD509A303E18775*))((::PBYTE)hIl2Cpp + CLASS_4_3DD509A303E18775_METHOD_4_B92733AFFA6C06B2_OFFSET))(a1, a2);
	}
};
