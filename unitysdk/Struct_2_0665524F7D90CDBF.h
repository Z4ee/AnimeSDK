#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3C783B10034614E4.h"
#include "unitysdk/Share/EItemType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define STRUCT_2_0665524F7D90CDBF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x7452D0)
#define STRUCT_2_0665524F7D90CDBF_EQUALS_OFFSET UNITYSDK_OFFSET(0x745270)
#define STRUCT_2_0665524F7D90CDBF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7452E0)
#define STRUCT_2_0665524F7D90CDBF_METHOD_2_57A8E11FECF10345_OFFSET UNITYSDK_OFFSET(0x121C10F0)
#define STRUCT_2_0665524F7D90CDBF_METHOD_2_6D0360BD23602584_OFFSET UNITYSDK_OFFSET(0x745340)
#define STRUCT_2_0665524F7D90CDBF_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x7453A0)
#define STRUCT_2_0665524F7D90CDBF_METHOD_2_B1927CDB601FF21A_OFFSET UNITYSDK_OFFSET(0x121C1060)
#define STRUCT_2_0665524F7D90CDBF__CTOR_OFFSET UNITYSDK_OFFSET(0x745260)

inline static constexpr unsigned int Struct_2_0665524F7D90CDBF_TypeDefinitionIndex = 81561;

struct alignas(2) Struct_2_0665524F7D90CDBF
{
	::Enum_3_3C783B10034614E4 Field_2_0; // 0x10
	::Share::EItemType Field_2_1; // 0x12

	::System::Void _ctor(::Enum_3_3C783B10034614E4 a1, ::Share::EItemType a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_3C783B10034614E4, ::Share::EItemType))((::PBYTE)hIl2Cpp + STRUCT_2_0665524F7D90CDBF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Equals(::Struct_2_0665524F7D90CDBF a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_0665524F7D90CDBF))((::PBYTE)hIl2Cpp + STRUCT_2_0665524F7D90CDBF_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_0665524F7D90CDBF_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0665524F7D90CDBF_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Method_2_6D0360BD23602584(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_0665524F7D90CDBF_METHOD_2_6D0360BD23602584_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_2_B1927CDB601FF21A(::Struct_2_0665524F7D90CDBF a1, ::Struct_2_0665524F7D90CDBF a2)
	{
		return ((::System::Boolean(*)(::Struct_2_0665524F7D90CDBF, ::Struct_2_0665524F7D90CDBF))((::PBYTE)hIl2Cpp + STRUCT_2_0665524F7D90CDBF_METHOD_2_B1927CDB601FF21A_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_2_57A8E11FECF10345(::Struct_2_0665524F7D90CDBF a1, ::Struct_2_0665524F7D90CDBF a2)
	{
		return ((::System::Boolean(*)(::Struct_2_0665524F7D90CDBF, ::Struct_2_0665524F7D90CDBF))((::PBYTE)hIl2Cpp + STRUCT_2_0665524F7D90CDBF_METHOD_2_57A8E11FECF10345_OFFSET))(a1, a2);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0665524F7D90CDBF_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}
};
