#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FAF146B3D74C3C3F.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define CLASS_2_95C4D8408AEA5CE5_METHOD_2_0F30679B05E70FC1_OFFSET UNITYSDK_OFFSET(0xBF6F560)
#define CLASS_2_95C4D8408AEA5CE5_METHOD_2_35942D7A8A374AB0_OFFSET UNITYSDK_OFFSET(0xBF6EF90)
#define CLASS_2_95C4D8408AEA5CE5_METHOD_2_E5563473F4AA5B3F_OFFSET UNITYSDK_OFFSET(0xBF6F5E0)
#define CLASS_2_95C4D8408AEA5CE5__CTOR_OFFSET UNITYSDK_OFFSET(0xBF6E880)

inline static constexpr unsigned int Class_2_95C4D8408AEA5CE5_TypeDefinitionIndex = 74478;

class Class_2_95C4D8408AEA5CE5 : public ::Class_1_FAF146B3D74C3C3F
{
public:
	::System::String* Field_2_0; // 0x20
	::System::String* Field_2_1; // 0x28

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_95C4D8408AEA5CE5__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_35942D7A8A374AB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_95C4D8408AEA5CE5_METHOD_2_35942D7A8A374AB0_OFFSET))(this);
	}

	::System::Boolean Method_2_0F30679B05E70FC1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_95C4D8408AEA5CE5_METHOD_2_0F30679B05E70FC1_OFFSET))(this);
	}

	::System::Int32 Method_2_E5563473F4AA5B3F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_95C4D8408AEA5CE5_METHOD_2_E5563473F4AA5B3F_OFFSET))(this);
	}
};
