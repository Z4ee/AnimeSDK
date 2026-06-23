#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define STRUCT_2_78D42C4796256BD0_METHOD_2_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0x842010)
#define STRUCT_2_78D42C4796256BD0_METHOD_2_BE6C191AFAB59F19_OFFSET UNITYSDK_OFFSET(0x180566B0)

inline static constexpr unsigned int Struct_2_78D42C4796256BD0_TypeDefinitionIndex = 85394;

struct alignas(8) Struct_2_78D42C4796256BD0
{
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* Field_2_0; // 0x10
	::System::Collections::Generic::List_1<::System::Collections::Generic::HashSet_1<::System::String*>*>* Field_2_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::String*>*>* Field_2_2; // 0x20
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_2_3; // 0x28

	static ::Struct_2_78D42C4796256BD0 Method_2_BE6C191AFAB59F19()
	{
		return ((::Struct_2_78D42C4796256BD0(*)())((::PBYTE)hIl2Cpp + STRUCT_2_78D42C4796256BD0_METHOD_2_BE6C191AFAB59F19_OFFSET))();
	}

	::System::Void Method_2_7646FFE662147970()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_78D42C4796256BD0_METHOD_2_7646FFE662147970_OFFSET))(this);
	}
};
