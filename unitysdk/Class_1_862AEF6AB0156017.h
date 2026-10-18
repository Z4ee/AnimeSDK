#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1596;
class Class_1_E292ED717571B1DC_3;
class Class_1_F963C9FA5FC80637;
class Class_2_9AC7EED9B2600116;
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }

#define CLASS_1_862AEF6AB0156017_METHOD_1_1E5D5BAEC1D9E6FE_OFFSET UNITYSDK_OFFSET(0xCC8C240)
#define CLASS_1_862AEF6AB0156017_METHOD_1_218F2836DA51D562_OFFSET UNITYSDK_OFFSET(0xCC8C200)
#define CLASS_1_862AEF6AB0156017_METHOD_1_9E5BC508182C1E1C_OFFSET UNITYSDK_OFFSET(0xCC8BE80)
#define CLASS_1_862AEF6AB0156017_METHOD_1_D87E6A0817339627_OFFSET UNITYSDK_OFFSET(0xCC8C040)
#define CLASS_1_862AEF6AB0156017__CTOR_OFFSET UNITYSDK_OFFSET(0xCC8BE70)

inline static constexpr unsigned int Class_1_862AEF6AB0156017_TypeDefinitionIndex = 81494;

class Class_1_862AEF6AB0156017 : public ::System::Object
{
public:
	::Class_2_9AC7EED9B2600116* MJHHLOPFDNK; // 0x10
	::System::UInt32 DHFNIFJGPJA; // 0x18

	::System::Void _ctor(::Class_2_9AC7EED9B2600116* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9AC7EED9B2600116*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_862AEF6AB0156017__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Promises::IPromise_1<::Class_1_E292ED717571B1DC_3*>* Method_1_9E5BC508182C1E1C(::Class_1_F963C9FA5FC80637* a1, ::System::Int32 a2)
	{
		return ((::RPG::Client::Promises::IPromise_1<::Class_1_E292ED717571B1DC_3*>*(*)(::PVOID, ::Class_1_F963C9FA5FC80637*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_862AEF6AB0156017_METHOD_1_9E5BC508182C1E1C_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Promises::IPromise_1<::Class_1_E292ED717571B1DC_3*>* Method_1_D87E6A0817339627(::System::Int32 a1)
	{
		return ((::RPG::Client::Promises::IPromise_1<::Class_1_E292ED717571B1DC_3*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_862AEF6AB0156017_METHOD_1_D87E6A0817339627_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_1596* Method_1_218F2836DA51D562()
	{
		return ((::Class_0_16E4307DCC419505_1596*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_862AEF6AB0156017_METHOD_1_218F2836DA51D562_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_1E5D5BAEC1D9E6FE(::Class_1_F963C9FA5FC80637* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_F963C9FA5FC80637*))((::PBYTE)hIl2Cpp + CLASS_1_862AEF6AB0156017_METHOD_1_1E5D5BAEC1D9E6FE_OFFSET))(this, a1);
	}
};
