#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace RootMotion::FinalIK { class IKSolver_UpdateDelegate; }

#define CLASS_3_8DEED67EBA66D5AC_CLASS_1_C2ACAEAAA5A2B325_METHOD_1_0287A932E5CC7E66_OFFSET UNITYSDK_OFFSET(0x14A9E4E0)
#define CLASS_3_8DEED67EBA66D5AC_CLASS_1_C2ACAEAAA5A2B325__CTOR_OFFSET UNITYSDK_OFFSET(0x14A9E4D0)

inline static constexpr unsigned int Class_3_8DEED67EBA66D5AC_Class_1_C2ACAEAAA5A2B325_TypeDefinitionIndex = 81728;

class Class_3_8DEED67EBA66D5AC_Class_1_C2ACAEAAA5A2B325 : public ::System::Object
{
public:
	::RootMotion::FinalIK::IKSolver_UpdateDelegate* Field_1_1; // 0x10
	::MoleMole::Battle::Entity* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8DEED67EBA66D5AC_CLASS_1_C2ACAEAAA5A2B325__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0287A932E5CC7E66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8DEED67EBA66D5AC_CLASS_1_C2ACAEAAA5A2B325_METHOD_1_0287A932E5CC7E66_OFFSET))(this);
	}
};
