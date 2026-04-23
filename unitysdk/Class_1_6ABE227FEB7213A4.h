#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BC950E36747FB4C9.h"
#include "unitysdk/System/Object.h"

class Class_1_16D8E68BCE885505;
class Class_1_ED3EE411CAE2A27E;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_6ABE227FEB7213A4_GET_FACTORY_OFFSET UNITYSDK_OFFSET(0xD9BE9A0)
#define CLASS_1_6ABE227FEB7213A4_METHOD_1_E2DCAD83695495DC_OFFSET UNITYSDK_OFFSET(0xD9BE9C0)
#define CLASS_1_6ABE227FEB7213A4_SET_FACTORY_OFFSET UNITYSDK_OFFSET(0xD9BE9B0)
#define CLASS_1_6ABE227FEB7213A4__CTOR_OFFSET UNITYSDK_OFFSET(0xD9BEB20)

inline static constexpr unsigned int Class_1_6ABE227FEB7213A4_TypeDefinitionIndex = 57832;

class Class_1_6ABE227FEB7213A4 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Struct_2_BC950E36747FB4C9, ::Class_1_16D8E68BCE885505*>* Field_1_0; // 0x10
	::Class_1_ED3EE411CAE2A27E* _Factory_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6ABE227FEB7213A4__CTOR_OFFSET))(this);
	}

	::Class_1_ED3EE411CAE2A27E* get_Factory()
	{
		return ((::Class_1_ED3EE411CAE2A27E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6ABE227FEB7213A4_GET_FACTORY_OFFSET))(this);
	}

	::System::Void set_Factory(::Class_1_ED3EE411CAE2A27E* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_ED3EE411CAE2A27E*))((::PBYTE)hIl2Cpp + CLASS_1_6ABE227FEB7213A4_SET_FACTORY_OFFSET))(this, value);
	}

	::Class_1_16D8E68BCE885505* Method_1_E2DCAD83695495DC(::Struct_2_BC950E36747FB4C9& a1)
	{
		return ((::Class_1_16D8E68BCE885505*(*)(::PVOID, ::Struct_2_BC950E36747FB4C9&))((::PBYTE)hIl2Cpp + CLASS_1_6ABE227FEB7213A4_METHOD_1_E2DCAD83695495DC_OFFSET))(this, a1);
	}
};
