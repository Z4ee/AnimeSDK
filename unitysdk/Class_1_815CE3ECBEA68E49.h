#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActionBarItemAction.h"
#include "unitysdk/System/Object.h"

class Class_1_2A97E60807F449E7;
class Class_1_DDDB57AA67C3A9EA;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_815CE3ECBEA68E49_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x19B3F120)
#define CLASS_1_815CE3ECBEA68E49_METHOD_1_DD4B3CFCCAEF5DED_OFFSET UNITYSDK_OFFSET(0x19B3EF90)
#define CLASS_1_815CE3ECBEA68E49_METHOD_1_EDBE0DAF47EEEEED_OFFSET UNITYSDK_OFFSET(0x19B3F0B0)
#define CLASS_1_815CE3ECBEA68E49__CTOR_OFFSET UNITYSDK_OFFSET(0x19B3EF50)

inline static constexpr unsigned int Class_1_815CE3ECBEA68E49_TypeDefinitionIndex = 71161;

class Class_1_815CE3ECBEA68E49 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_2A97E60807F449E7*>* IIBHBGNDFLC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_815CE3ECBEA68E49__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DD4B3CFCCAEF5DED(::RPG::Client::ActionBarItemAction a1, ::Class_1_DDDB57AA67C3A9EA* a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionBarItemAction, ::Class_1_DDDB57AA67C3A9EA*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_815CE3ECBEA68E49_METHOD_1_DD4B3CFCCAEF5DED_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_EDBE0DAF47EEEEED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_815CE3ECBEA68E49_METHOD_1_EDBE0DAF47EEEEED_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_815CE3ECBEA68E49_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}
};
