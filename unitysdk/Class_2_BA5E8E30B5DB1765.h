#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FAF146B3D74C3C3F.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define CLASS_2_BA5E8E30B5DB1765_METHOD_2_35942D7A8A374AB0_OFFSET UNITYSDK_OFFSET(0xD74BEA0)
#define CLASS_2_BA5E8E30B5DB1765_METHOD_2_A0433AB55CC45192_OFFSET UNITYSDK_OFFSET(0xD74C470)
#define CLASS_2_BA5E8E30B5DB1765_METHOD_2_E5563473F4AA5B3F_OFFSET UNITYSDK_OFFSET(0xD74C4F0)
#define CLASS_2_BA5E8E30B5DB1765__CTOR_OFFSET UNITYSDK_OFFSET(0xD74B550)

inline static constexpr unsigned int Class_2_BA5E8E30B5DB1765_TypeDefinitionIndex = 82288;

class Class_2_BA5E8E30B5DB1765 : public ::Class_1_FAF146B3D74C3C3F
{
public:
	::System::String* MNDFOPKBHKP; // 0x20
	::System::String* FODBMMCKAEN; // 0x28

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::String* a3, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*, ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_BA5E8E30B5DB1765__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_35942D7A8A374AB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA5E8E30B5DB1765_METHOD_2_35942D7A8A374AB0_OFFSET))(this);
	}

	::System::Boolean Method_2_A0433AB55CC45192()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA5E8E30B5DB1765_METHOD_2_A0433AB55CC45192_OFFSET))(this);
	}

	::System::Int32 Method_2_E5563473F4AA5B3F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA5E8E30B5DB1765_METHOD_2_E5563473F4AA5B3F_OFFSET))(this);
	}
};
