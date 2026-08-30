#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FAF146B3D74C3C3F.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define CLASS_2_A0A85A70480D92CB_METHOD_2_652F3820D8B242FF_OFFSET UNITYSDK_OFFSET(0x188B7770)
#define CLASS_2_A0A85A70480D92CB__CTOR_OFFSET UNITYSDK_OFFSET(0x188B7500)

inline static constexpr unsigned int Class_2_A0A85A70480D92CB_TypeDefinitionIndex = 80896;

class Class_2_A0A85A70480D92CB : public ::Class_1_FAF146B3D74C3C3F
{
public:
	::System::Int64 GDBJDAOOCOH; // 0x20
	::System::Int32 GBKFPMBPIGP; // 0x28

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_A0A85A70480D92CB__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_652F3820D8B242FF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0A85A70480D92CB_METHOD_2_652F3820D8B242FF_OFFSET))(this);
	}
};
