#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_C52D8E01F122AD4F_2.h"
#include "unitysdk/System/Object.h"

class Class_1_5C805055193EF43F;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_38F73E91EC9DD65D_METHOD_1_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x117FE750)
#define CLASS_1_38F73E91EC9DD65D_METHOD_1_6094C824B8548B0C_OFFSET UNITYSDK_OFFSET(0x117FE620)
#define CLASS_1_38F73E91EC9DD65D_METHOD_1_61AE26E956842140_OFFSET UNITYSDK_OFFSET(0x117FE850)
#define CLASS_1_38F73E91EC9DD65D_METHOD_1_CCBD2F52C6EA12BB_OFFSET UNITYSDK_OFFSET(0x117FE440)
#define CLASS_1_38F73E91EC9DD65D_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x117FE700)
#define CLASS_1_38F73E91EC9DD65D__CTOR_OFFSET UNITYSDK_OFFSET(0x117FE390)

inline static constexpr unsigned int Class_1_38F73E91EC9DD65D_TypeDefinitionIndex = 67912;

class Class_1_38F73E91EC9DD65D : public ::System::Object
{
public:
	::Class_1_5C805055193EF43F* Field_1_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Enum_3_C52D8E01F122AD4F_2>* Field_1_1; // 0x18
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_38F73E91EC9DD65D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CCBD2F52C6EA12BB(::System::Int32 a1, ::Enum_3_C52D8E01F122AD4F_2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_C52D8E01F122AD4F_2))((::PBYTE)hIl2Cpp + CLASS_1_38F73E91EC9DD65D_METHOD_1_CCBD2F52C6EA12BB_OFFSET))(this, a1, a2);
	}

	::Enum_3_C52D8E01F122AD4F_2 Method_1_6094C824B8548B0C(::System::Int32 a1)
	{
		return ((::Enum_3_C52D8E01F122AD4F_2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_38F73E91EC9DD65D_METHOD_1_6094C824B8548B0C_OFFSET))(this, a1);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_5C805055193EF43F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5C805055193EF43F*))((::PBYTE)hIl2Cpp + CLASS_1_38F73E91EC9DD65D_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_1_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_38F73E91EC9DD65D_METHOD_1_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_1_61AE26E956842140(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_38F73E91EC9DD65D_METHOD_1_61AE26E956842140_OFFSET))(this, a1);
	}
};
