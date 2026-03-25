#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_019938BC9C50B169_6.h"
#include "unitysdk/System/Object.h"

class Class_1_6869ECCA5B46F302;
class Class_1_68A7E1D93E15255C;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_6ABE227FEB7213A4_3_GET_FACTORY_OFFSET UNITYSDK_OFFSET(0x11691330)
#define CLASS_1_6ABE227FEB7213A4_3_METHOD_1_B4C568BF1C1AA0A5_OFFSET UNITYSDK_OFFSET(0x11691350)
#define CLASS_1_6ABE227FEB7213A4_3_SET_FACTORY_OFFSET UNITYSDK_OFFSET(0x11691340)
#define CLASS_1_6ABE227FEB7213A4_3__CTOR_OFFSET UNITYSDK_OFFSET(0x116914D0)

inline static constexpr unsigned int Class_1_6ABE227FEB7213A4_3_TypeDefinitionIndex = 50947;

class Class_1_6ABE227FEB7213A4_3 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169_6, ::Class_1_68A7E1D93E15255C*>* Field_1_0; // 0x10
	::Class_1_6869ECCA5B46F302* _Factory_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6ABE227FEB7213A4_3__CTOR_OFFSET))(this);
	}

	::Class_1_6869ECCA5B46F302* get_Factory()
	{
		return ((::Class_1_6869ECCA5B46F302*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6ABE227FEB7213A4_3_GET_FACTORY_OFFSET))(this);
	}

	::System::Void set_Factory(::Class_1_6869ECCA5B46F302* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6869ECCA5B46F302*))((::PBYTE)hIl2Cpp + CLASS_1_6ABE227FEB7213A4_3_SET_FACTORY_OFFSET))(this, value);
	}

	::Class_1_68A7E1D93E15255C* Method_1_B4C568BF1C1AA0A5(::Struct_2_019938BC9C50B169_6& a1)
	{
		return ((::Class_1_68A7E1D93E15255C*(*)(::PVOID, ::Struct_2_019938BC9C50B169_6&))((::PBYTE)hIl2Cpp + CLASS_1_6ABE227FEB7213A4_3_METHOD_1_B4C568BF1C1AA0A5_OFFSET))(this, a1);
	}
};
