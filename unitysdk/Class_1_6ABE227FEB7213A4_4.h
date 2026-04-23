#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_019938BC9C50B169_8.h"
#include "unitysdk/System/Object.h"

class Class_1_6869ECCA5B46F302_1;
class Class_1_E2F5AEB140BB7868;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_6ABE227FEB7213A4_4_GET_FACTORY_OFFSET UNITYSDK_OFFSET(0x902C550)
#define CLASS_1_6ABE227FEB7213A4_4_METHOD_1_B4C568BF1C1AA0A5_OFFSET UNITYSDK_OFFSET(0x902C570)
#define CLASS_1_6ABE227FEB7213A4_4_SET_FACTORY_OFFSET UNITYSDK_OFFSET(0x902C560)
#define CLASS_1_6ABE227FEB7213A4_4__CTOR_OFFSET UNITYSDK_OFFSET(0x902C6F0)

inline static constexpr unsigned int Class_1_6ABE227FEB7213A4_4_TypeDefinitionIndex = 57839;

class Class_1_6ABE227FEB7213A4_4 : public ::System::Object
{
public:
	::Class_1_6869ECCA5B46F302_1* _Factory_k__BackingField; // 0x10
	::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169_8, ::Class_1_E2F5AEB140BB7868*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6ABE227FEB7213A4_4__CTOR_OFFSET))(this);
	}

	::Class_1_6869ECCA5B46F302_1* get_Factory()
	{
		return ((::Class_1_6869ECCA5B46F302_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6ABE227FEB7213A4_4_GET_FACTORY_OFFSET))(this);
	}

	::System::Void set_Factory(::Class_1_6869ECCA5B46F302_1* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_6869ECCA5B46F302_1*))((::PBYTE)hIl2Cpp + CLASS_1_6ABE227FEB7213A4_4_SET_FACTORY_OFFSET))(this, value);
	}

	::Class_1_E2F5AEB140BB7868* Method_1_B4C568BF1C1AA0A5(::Struct_2_019938BC9C50B169_8& a1)
	{
		return ((::Class_1_E2F5AEB140BB7868*(*)(::PVOID, ::Struct_2_019938BC9C50B169_8&))((::PBYTE)hIl2Cpp + CLASS_1_6ABE227FEB7213A4_4_METHOD_1_B4C568BF1C1AA0A5_OFFSET))(this, a1);
	}
};
