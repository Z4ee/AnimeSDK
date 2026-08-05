#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_36;
class Class_1_5FB2F93A997B7BFE;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_F0E24A766D3A8BC2_CLASS_1_D83CC39D4C37063C_METHOD_1_64121FCCC75E8545_OFFSET UNITYSDK_OFFSET(0x10B1B930)
#define CLASS_2_F0E24A766D3A8BC2_CLASS_1_D83CC39D4C37063C_METHOD_1_D2DD6AE28AAF69CC_OFFSET UNITYSDK_OFFSET(0x10B1B920)
#define CLASS_2_F0E24A766D3A8BC2_CLASS_1_D83CC39D4C37063C__CTOR_OFFSET UNITYSDK_OFFSET(0x10B1B910)

inline static constexpr unsigned int Class_2_F0E24A766D3A8BC2_Class_1_D83CC39D4C37063C_TypeDefinitionIndex = 61395;

class Class_2_F0E24A766D3A8BC2_Class_1_D83CC39D4C37063C : public ::System::Object
{
public:
	::System::Action* Field_1_5; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_5FB2F93A997B7BFE*>* Field_1_0; // 0x18
	::System::Action_1<::System::Int32>* Field_1_6; // 0x20
	::System::Int32 Field_1_7; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F0E24A766D3A8BC2_CLASS_1_D83CC39D4C37063C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D2DD6AE28AAF69CC(::Class_0_16E4307DCC419505_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + CLASS_2_F0E24A766D3A8BC2_CLASS_1_D83CC39D4C37063C_METHOD_1_D2DD6AE28AAF69CC_OFFSET))(this, a1);
	}

	::System::Void Method_1_64121FCCC75E8545(::Class_0_16E4307DCC419505_36* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + CLASS_2_F0E24A766D3A8BC2_CLASS_1_D83CC39D4C37063C_METHOD_1_64121FCCC75E8545_OFFSET))(this, a1);
	}
};
