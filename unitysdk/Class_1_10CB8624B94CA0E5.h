#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1218;
class Class_1_70D2E0F3216AAE0C_4;
class Class_1_F963C9FA5FC80637;
class Class_2_254035C1FAAB431D;
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }

#define CLASS_1_10CB8624B94CA0E5_METHOD_1_1E5D5BAEC1D9E6FE_OFFSET UNITYSDK_OFFSET(0xB787810)
#define CLASS_1_10CB8624B94CA0E5_METHOD_1_2094683BD8163FC4_OFFSET UNITYSDK_OFFSET(0xB787610)
#define CLASS_1_10CB8624B94CA0E5_METHOD_1_218F2836DA51D562_OFFSET UNITYSDK_OFFSET(0xB7877D0)
#define CLASS_1_10CB8624B94CA0E5_METHOD_1_56B286D457A5D95F_OFFSET UNITYSDK_OFFSET(0xB787450)
#define CLASS_1_10CB8624B94CA0E5__CTOR_OFFSET UNITYSDK_OFFSET(0xB787440)

inline static constexpr unsigned int Class_1_10CB8624B94CA0E5_TypeDefinitionIndex = 74150;

class Class_1_10CB8624B94CA0E5 : public ::System::Object
{
public:
	::Class_2_254035C1FAAB431D* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18

	::System::Void _ctor(::Class_2_254035C1FAAB431D* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_254035C1FAAB431D*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_10CB8624B94CA0E5__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Promises::IPromise_1<::Class_1_70D2E0F3216AAE0C_4*>* Method_1_56B286D457A5D95F(::Class_1_F963C9FA5FC80637* a1, ::System::Int32 a2)
	{
		return ((::RPG::Client::Promises::IPromise_1<::Class_1_70D2E0F3216AAE0C_4*>*(*)(::PVOID, ::Class_1_F963C9FA5FC80637*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_10CB8624B94CA0E5_METHOD_1_56B286D457A5D95F_OFFSET))(this, a1, a2);
	}

	::RPG::Client::Promises::IPromise_1<::Class_1_70D2E0F3216AAE0C_4*>* Method_1_2094683BD8163FC4(::System::Int32 a1)
	{
		return ((::RPG::Client::Promises::IPromise_1<::Class_1_70D2E0F3216AAE0C_4*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_10CB8624B94CA0E5_METHOD_1_2094683BD8163FC4_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_1218* Method_1_218F2836DA51D562()
	{
		return ((::Class_0_16E4307DCC419505_1218*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_10CB8624B94CA0E5_METHOD_1_218F2836DA51D562_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* Method_1_1E5D5BAEC1D9E6FE(::Class_1_F963C9FA5FC80637* a1)
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::Class_1_F963C9FA5FC80637*))((::PBYTE)hIl2Cpp + CLASS_1_10CB8624B94CA0E5_METHOD_1_1E5D5BAEC1D9E6FE_OFFSET))(this, a1);
	}
};
