#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_019938BC9C50B169_3.h"
#include "unitysdk/System/Object.h"

class Class_1_27D7C9B1E553F802;
class Class_1_D4714BA97EC5BBC2;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_6ABE227FEB7213A4_1_GET_FACTORY_OFFSET UNITYSDK_OFFSET(0x8790B30)
#define CLASS_1_6ABE227FEB7213A4_1_METHOD_1_593E2C667F2EB36C_OFFSET UNITYSDK_OFFSET(0x8790D30)
#define CLASS_1_6ABE227FEB7213A4_1_METHOD_1_E2DCAD83695495DC_OFFSET UNITYSDK_OFFSET(0x8790B50)
#define CLASS_1_6ABE227FEB7213A4_1_SET_FACTORY_OFFSET UNITYSDK_OFFSET(0x8790B40)
#define CLASS_1_6ABE227FEB7213A4_1__CTOR_OFFSET UNITYSDK_OFFSET(0x8790CB0)

inline static constexpr unsigned int Class_1_6ABE227FEB7213A4_1_TypeDefinitionIndex = 50962;

class Class_1_6ABE227FEB7213A4_1 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169_3, ::Class_1_D4714BA97EC5BBC2*>* Field_1_0; // 0x10
	::Class_1_27D7C9B1E553F802* _Factory_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6ABE227FEB7213A4_1__CTOR_OFFSET))(this);
	}

	::Class_1_27D7C9B1E553F802* get_Factory()
	{
		return ((::Class_1_27D7C9B1E553F802*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6ABE227FEB7213A4_1_GET_FACTORY_OFFSET))(this);
	}

	::System::Void set_Factory(::Class_1_27D7C9B1E553F802* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_27D7C9B1E553F802*))((::PBYTE)hIl2Cpp + CLASS_1_6ABE227FEB7213A4_1_SET_FACTORY_OFFSET))(this, value);
	}

	::Class_1_D4714BA97EC5BBC2* Method_1_E2DCAD83695495DC(::Struct_2_019938BC9C50B169_3& a1)
	{
		return ((::Class_1_D4714BA97EC5BBC2*(*)(::PVOID, ::Struct_2_019938BC9C50B169_3&))((::PBYTE)hIl2Cpp + CLASS_1_6ABE227FEB7213A4_1_METHOD_1_E2DCAD83695495DC_OFFSET))(this, a1);
	}

	::Class_1_D4714BA97EC5BBC2* Method_1_593E2C667F2EB36C(::Struct_2_019938BC9C50B169_3& a1)
	{
		return ((::Class_1_D4714BA97EC5BBC2*(*)(::PVOID, ::Struct_2_019938BC9C50B169_3&))((::PBYTE)hIl2Cpp + CLASS_1_6ABE227FEB7213A4_1_METHOD_1_593E2C667F2EB36C_OFFSET))(this, a1);
	}
};
