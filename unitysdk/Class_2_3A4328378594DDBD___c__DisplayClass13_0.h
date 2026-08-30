#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_3A4328378594DDBD___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF270F0)
#define CLASS_2_3A4328378594DDBD___C__DISPLAYCLASS13_0___GETGLOBALNEXTLEVELVALUE_B__0_OFFSET UNITYSDK_OFFSET(0x1AF271B0)

inline static constexpr unsigned int Class_2_3A4328378594DDBD___c__DisplayClass13_0_TypeDefinitionIndex = 65365;

class Class_2_3A4328378594DDBD___c__DisplayClass13_0 : public ::System::Object
{
public:
	::System::Func_2<::System::UInt32, ::System::Boolean>* __9__0; // 0x10
	::RPG::GameCore::FixPoint value; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A4328378594DDBD___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __GetGlobalNextLevelValue_b__0(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_3A4328378594DDBD___C__DISPLAYCLASS13_0___GETGLOBALNEXTLEVELVALUE_B__0_OFFSET))(this, a1);
	}
};
