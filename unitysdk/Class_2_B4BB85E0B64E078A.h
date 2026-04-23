#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FAF146B3D74C3C3F.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define CLASS_2_B4BB85E0B64E078A_METHOD_2_AE80CBC984AADFD5_OFFSET UNITYSDK_OFFSET(0x1182D0A0)
#define CLASS_2_B4BB85E0B64E078A__CTOR_OFFSET UNITYSDK_OFFSET(0x1182CCF0)

inline static constexpr unsigned int Class_2_B4BB85E0B64E078A_TypeDefinitionIndex = 72649;

class Class_2_B4BB85E0B64E078A : public ::Class_1_FAF146B3D74C3C3F
{
public:
	::System::String* Field_2_0; // 0x20
	::System::String* Field_2_5; // 0x28
	::System::Boolean Field_2_2; // 0x30
	::System::Boolean Field_2_1; // 0x31
	::System::Boolean Field_2_4; // 0x32
	::System::Single Field_2_3; // 0x34

	::System::Void _ctor(::System::Boolean a1, ::System::Int32 a2, ::System::Int32 a3, ::System::String* a4, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::String*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_B4BB85E0B64E078A__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_2_AE80CBC984AADFD5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4BB85E0B64E078A_METHOD_2_AE80CBC984AADFD5_OFFSET))(this);
	}
};
