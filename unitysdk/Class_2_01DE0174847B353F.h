#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FAF146B3D74C3C3F.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define CLASS_2_01DE0174847B353F_METHOD_2_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0x116C2260)
#define CLASS_2_01DE0174847B353F__CTOR_OFFSET UNITYSDK_OFFSET(0x116C2210)

inline static constexpr unsigned int Class_2_01DE0174847B353F_TypeDefinitionIndex = 64592;

class Class_2_01DE0174847B353F : public ::Class_1_FAF146B3D74C3C3F
{
public:
	::System::String* Field_2_0; // 0x20

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_01DE0174847B353F__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_805C56F44231AEF9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_01DE0174847B353F_METHOD_2_805C56F44231AEF9_OFFSET))(this);
	}
};
