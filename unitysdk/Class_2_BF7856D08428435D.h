#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FAF146B3D74C3C3F.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define CLASS_2_BF7856D08428435D_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x1056DD10)
#define CLASS_2_BF7856D08428435D__CTOR_OFFSET UNITYSDK_OFFSET(0x1056DB30)

inline static constexpr unsigned int Class_2_BF7856D08428435D_TypeDefinitionIndex = 64604;

class Class_2_BF7856D08428435D : public ::Class_1_FAF146B3D74C3C3F
{
public:
	::System::String* Field_2_0; // 0x20
	::System::Boolean Field_2_1; // 0x28

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_BF7856D08428435D__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BF7856D08428435D_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}
};
