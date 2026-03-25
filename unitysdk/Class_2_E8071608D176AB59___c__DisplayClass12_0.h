#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_E8071608D176AB59___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x89DAB10)
#define CLASS_2_E8071608D176AB59___C__DISPLAYCLASS12_0___GETGLOBALNEXTLEVELVALUE_B__0_OFFSET UNITYSDK_OFFSET(0x89DAB20)

inline static constexpr unsigned int Class_2_E8071608D176AB59___c__DisplayClass12_0_TypeDefinitionIndex = 53030;

class Class_2_E8071608D176AB59___c__DisplayClass12_0 : public ::System::Object
{
public:
	::System::Func_2<::System::UInt32, ::System::Boolean>* __9__0; // 0x10
	::RPG::GameCore::FixPoint value; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8071608D176AB59___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __GetGlobalNextLevelValue_b__0(::System::UInt32 x)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_E8071608D176AB59___C__DISPLAYCLASS12_0___GETGLOBALNEXTLEVELVALUE_B__0_OFFSET))(this, x);
	}
};
