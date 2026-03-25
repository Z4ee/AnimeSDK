#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_BC950E36747FB4C9.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define STRUCT_2_EDE247AF05B200CA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x14E4E10)
#define STRUCT_2_EDE247AF05B200CA_EQUALS_OFFSET UNITYSDK_OFFSET(0x14E4D90)
#define STRUCT_2_EDE247AF05B200CA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x14E4E20)
#define STRUCT_2_EDE247AF05B200CA_GET_PROMOTIONLEVEL_OFFSET UNITYSDK_OFFSET(0xD250)
#define STRUCT_2_EDE247AF05B200CA_GET_PROTOTYPEIDENTIFIER_OFFSET UNITYSDK_OFFSET(0x5580)
#define STRUCT_2_EDE247AF05B200CA__CTOR_OFFSET UNITYSDK_OFFSET(0x852E0)
#define STRUCT_2_EDE247AF05B200CA___IFIXBASEPROXY_EQUALS_OFFSET UNITYSDK_OFFSET(0x14E4E90)
#define STRUCT_2_EDE247AF05B200CA___IFIXBASEPROXY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x14E4F00)

inline static constexpr unsigned int Struct_2_EDE247AF05B200CA_TypeDefinitionIndex = 41984;

struct alignas(4) Struct_2_EDE247AF05B200CA
{
	::Struct_2_BC950E36747FB4C9 _PrototypeIdentifier_k__BackingField; // 0x10
	::System::UInt32 _PromotionLevel_k__BackingField; // 0x18

	::System::Void _ctor(::Struct_2_BC950E36747FB4C9 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_BC950E36747FB4C9, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_EDE247AF05B200CA__CTOR_OFFSET))(this, a1, a2);
	}

	::Struct_2_BC950E36747FB4C9 get_PrototypeIdentifier()
	{
		return ((::Struct_2_BC950E36747FB4C9(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_EDE247AF05B200CA_GET_PROTOTYPEIDENTIFIER_OFFSET))(this);
	}

	::System::UInt32 get_PromotionLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_EDE247AF05B200CA_GET_PROMOTIONLEVEL_OFFSET))(this);
	}

	::System::Boolean Equals(::Struct_2_EDE247AF05B200CA a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_EDE247AF05B200CA))((::PBYTE)hIl2Cpp + STRUCT_2_EDE247AF05B200CA_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_EDE247AF05B200CA_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_EDE247AF05B200CA_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy_Equals(::System::Object* P0)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_EDE247AF05B200CA___IFIXBASEPROXY_EQUALS_OFFSET))(this, P0);
	}

	::System::Int32 __iFixBaseProxy_GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_EDE247AF05B200CA___IFIXBASEPROXY_GETHASHCODE_OFFSET))(this);
	}
};
