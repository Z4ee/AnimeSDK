#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace RootMotion::FinalIK { class IKSolver_UpdateDelegate; }

#define CLASS_3_8DEED67EBA66D5AC_CLASS_1_DED049E3FA678CF1_METHOD_1_4403F1E9DB2EB489_OFFSET UNITYSDK_OFFSET(0x18E9AB20)
#define CLASS_3_8DEED67EBA66D5AC_CLASS_1_DED049E3FA678CF1__CTOR_OFFSET UNITYSDK_OFFSET(0x18E9AB10)

inline static constexpr unsigned int Class_3_8DEED67EBA66D5AC_Class_1_DED049E3FA678CF1_TypeDefinitionIndex = 60313;

class Class_3_8DEED67EBA66D5AC_Class_1_DED049E3FA678CF1 : public ::System::Object
{
public:
	::RootMotion::FinalIK::IKSolver_UpdateDelegate* Field_1_7; // 0x10
	::MoleMole::Battle::Entity* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8DEED67EBA66D5AC_CLASS_1_DED049E3FA678CF1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4403F1E9DB2EB489()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8DEED67EBA66D5AC_CLASS_1_DED049E3FA678CF1_METHOD_1_4403F1E9DB2EB489_OFFSET))(this);
	}
};
