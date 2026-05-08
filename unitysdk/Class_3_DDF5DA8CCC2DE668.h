#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_BCA32DB678A03168.h"
#include "unitysdk/Enum_3_316FC8E376D95053.h"
#include "unitysdk/Enum_3_81A3942BCC6E42B5.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_DDF5DA8CCC2DE668_METHOD_3_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0x17840430)
#define CLASS_3_DDF5DA8CCC2DE668_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17840670)
#define CLASS_3_DDF5DA8CCC2DE668__CTOR_OFFSET UNITYSDK_OFFSET(0x17840370)

inline static constexpr unsigned int Class_3_DDF5DA8CCC2DE668_TypeDefinitionIndex = 76133;

class Class_3_DDF5DA8CCC2DE668 : public ::Class_2_BCA32DB678A03168
{
public:
	::Enum_3_81A3942BCC6E42B5 Field_3_0; // 0x38

	::System::Void _ctor(::System::Int32 a1, ::Enum_3_316FC8E376D95053 a2, ::System::Int32 a3, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_316FC8E376D95053, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_3_DDF5DA8CCC2DE668__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_5A124CAF1E48B74F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DDF5DA8CCC2DE668_METHOD_3_5A124CAF1E48B74F_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DDF5DA8CCC2DE668_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
