#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_430A26F60E7987BB___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD9C0C60)
#define CLASS_2_430A26F60E7987BB___C__DISPLAYCLASS4_0___GETGLOBALVALUEINDEX_B__0_OFFSET UNITYSDK_OFFSET(0xD9C0C80)

inline static constexpr unsigned int Class_2_430A26F60E7987BB___c__DisplayClass4_0_TypeDefinitionIndex = 60115;

class Class_2_430A26F60E7987BB___c__DisplayClass4_0 : public ::System::Object
{
public:
	::System::Func_2<::System::UInt32, ::System::Boolean>* __9__0; // 0x10
	::RPG::GameCore::FixPoint value; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_430A26F60E7987BB___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __GetGlobalValueIndex_b__0(::System::UInt32 x)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_430A26F60E7987BB___C__DISPLAYCLASS4_0___GETGLOBALVALUEINDEX_B__0_OFFSET))(this, x);
	}
};
