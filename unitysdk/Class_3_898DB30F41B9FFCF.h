#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_BCA32DB678A03168.h"
#include "unitysdk/Enum_3_316FC8E376D95053.h"

namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_898DB30F41B9FFCF_METHOD_3_06A3B74574E752BD_OFFSET UNITYSDK_OFFSET(0x11C5ED40)
#define CLASS_3_898DB30F41B9FFCF__CTOR_OFFSET UNITYSDK_OFFSET(0x11C5EBE0)

inline static constexpr unsigned int Class_3_898DB30F41B9FFCF_TypeDefinitionIndex = 50754;

class Class_3_898DB30F41B9FFCF : public ::Class_2_BCA32DB678A03168
{
public:
	::System::Int32 Field_3_0; // 0x38

	::System::Void _ctor(::System::Int32 a1, ::Enum_3_316FC8E376D95053 a2, ::System::Int32 a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_316FC8E376D95053, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_898DB30F41B9FFCF__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_06A3B74574E752BD(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_3_898DB30F41B9FFCF_METHOD_3_06A3B74574E752BD_OFFSET))(this, a1);
	}
};
