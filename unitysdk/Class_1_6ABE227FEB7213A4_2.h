#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_019938BC9C50B169_4.h"
#include "unitysdk/System/Object.h"

class Class_1_AE30349E456D5B05;
class Class_1_D4714BA97EC5BBC2_1;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_6ABE227FEB7213A4_2_GET_FACTORY_OFFSET UNITYSDK_OFFSET(0x115003F0)
#define CLASS_1_6ABE227FEB7213A4_2_METHOD_1_593E2C667F2EB36C_OFFSET UNITYSDK_OFFSET(0x115005F0)
#define CLASS_1_6ABE227FEB7213A4_2_METHOD_1_E2DCAD83695495DC_OFFSET UNITYSDK_OFFSET(0x11500410)
#define CLASS_1_6ABE227FEB7213A4_2_SET_FACTORY_OFFSET UNITYSDK_OFFSET(0x11500400)
#define CLASS_1_6ABE227FEB7213A4_2__CTOR_OFFSET UNITYSDK_OFFSET(0x11500570)

inline static constexpr unsigned int Class_1_6ABE227FEB7213A4_2_TypeDefinitionIndex = 50954;

class Class_1_6ABE227FEB7213A4_2 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::Struct_2_019938BC9C50B169_4, ::Class_1_D4714BA97EC5BBC2_1*>* Field_1_0; // 0x10
	::Class_1_AE30349E456D5B05* _Factory_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6ABE227FEB7213A4_2__CTOR_OFFSET))(this);
	}

	::Class_1_AE30349E456D5B05* get_Factory()
	{
		return ((::Class_1_AE30349E456D5B05*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6ABE227FEB7213A4_2_GET_FACTORY_OFFSET))(this);
	}

	::System::Void set_Factory(::Class_1_AE30349E456D5B05* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_AE30349E456D5B05*))((::PBYTE)hIl2Cpp + CLASS_1_6ABE227FEB7213A4_2_SET_FACTORY_OFFSET))(this, value);
	}

	::Class_1_D4714BA97EC5BBC2_1* Method_1_E2DCAD83695495DC(::Struct_2_019938BC9C50B169_4& a1)
	{
		return ((::Class_1_D4714BA97EC5BBC2_1*(*)(::PVOID, ::Struct_2_019938BC9C50B169_4&))((::PBYTE)hIl2Cpp + CLASS_1_6ABE227FEB7213A4_2_METHOD_1_E2DCAD83695495DC_OFFSET))(this, a1);
	}

	::Class_1_D4714BA97EC5BBC2_1* Method_1_593E2C667F2EB36C(::Struct_2_019938BC9C50B169_4& a1)
	{
		return ((::Class_1_D4714BA97EC5BBC2_1*(*)(::PVOID, ::Struct_2_019938BC9C50B169_4&))((::PBYTE)hIl2Cpp + CLASS_1_6ABE227FEB7213A4_2_METHOD_1_593E2C667F2EB36C_OFFSET))(this, a1);
	}
};
