#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define STRUCT_2_7C3EF1FF302C26DE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3B7AF00)
#define STRUCT_2_7C3EF1FF302C26DE_EQUALS_OFFSET UNITYSDK_OFFSET(0x3B7AEC0)
#define STRUCT_2_7C3EF1FF302C26DE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3B7AFD0)
#define STRUCT_2_7C3EF1FF302C26DE_METHOD_2_57A8E11FECF10345_1_OFFSET UNITYSDK_OFFSET(0x1C3C3720)
#define STRUCT_2_7C3EF1FF302C26DE_METHOD_2_57A8E11FECF10345_OFFSET UNITYSDK_OFFSET(0x1C3C3660)

inline static constexpr unsigned int Struct_2_7C3EF1FF302C26DE_TypeDefinitionIndex = 40429;

struct alignas(8) Struct_2_7C3EF1FF302C26DE
{
	::System::Int32 BCNJOLIFEEF; // 0x10
	::System::Boolean LJPDMIJFEFM; // 0x14
	::System::Boolean KJGAONILDMA; // 0x15
	::System::String* DHMDAEKJENF; // 0x18
	::System::UInt32 DFEJABODPGM; // 0x20
	::System::Action* IMDLGFPMPEK; // 0x28
	::System::Action_3<::System::String*, ::System::UInt32, ::System::Int32>* LMOBGIANDOO; // 0x30

	::System::Boolean Equals(::Struct_2_7C3EF1FF302C26DE a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_7C3EF1FF302C26DE))((::PBYTE)hIl2Cpp + STRUCT_2_7C3EF1FF302C26DE_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + STRUCT_2_7C3EF1FF302C26DE_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_7C3EF1FF302C26DE_GETHASHCODE_OFFSET))(this);
	}

	static ::System::Boolean Method_2_57A8E11FECF10345(::Struct_2_7C3EF1FF302C26DE a1, ::Struct_2_7C3EF1FF302C26DE a2)
	{
		return ((::System::Boolean(*)(::Struct_2_7C3EF1FF302C26DE, ::Struct_2_7C3EF1FF302C26DE))((::PBYTE)hIl2Cpp + STRUCT_2_7C3EF1FF302C26DE_METHOD_2_57A8E11FECF10345_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_2_57A8E11FECF10345_1(::Struct_2_7C3EF1FF302C26DE a1, ::Struct_2_7C3EF1FF302C26DE a2)
	{
		return ((::System::Boolean(*)(::Struct_2_7C3EF1FF302C26DE, ::Struct_2_7C3EF1FF302C26DE))((::PBYTE)hIl2Cpp + STRUCT_2_7C3EF1FF302C26DE_METHOD_2_57A8E11FECF10345_1_OFFSET))(a1, a2);
	}
};
