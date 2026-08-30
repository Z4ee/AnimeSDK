#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_68C34B5C1C40C2FF.h"
#include "unitysdk/RPG/GameCore/TurnInsertActionConditionType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_3_15D80F21AA742946_METHOD_3_481800E2ED22AD35_OFFSET UNITYSDK_OFFSET(0x1C960E40)
#define CLASS_3_15D80F21AA742946_METHOD_3_6F57C0C4237B910A_OFFSET UNITYSDK_OFFSET(0x1C960E80)
#define CLASS_3_15D80F21AA742946__CTOR_OFFSET UNITYSDK_OFFSET(0x1C960E70)

inline static constexpr unsigned int Class_3_15D80F21AA742946_TypeDefinitionIndex = 18040;

class Class_3_15D80F21AA742946 : public ::Class_2_68C34B5C1C40C2FF
{
public:
	::RPG::GameCore::DynamicFloat* HOCMHABKLGJ; // 0x10
	::RPG::GameCore::TurnInsertActionConditionType GMPGDEINODK; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_15D80F21AA742946__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_481800E2ED22AD35(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_15D80F21AA742946*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_15D80F21AA742946*&))((::PBYTE)hIl2Cpp + CLASS_3_15D80F21AA742946_METHOD_3_481800E2ED22AD35_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_6F57C0C4237B910A(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_15D80F21AA742946* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_15D80F21AA742946*))((::PBYTE)hIl2Cpp + CLASS_3_15D80F21AA742946_METHOD_3_6F57C0C4237B910A_OFFSET))(a1, a2);
	}
};
