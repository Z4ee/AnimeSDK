#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6770BC9DDC5C458C_1;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_8857594379FFB0EF_GET_UNLOCKEDLEVEL_OFFSET UNITYSDK_OFFSET(0x13A562D0)
#define CLASS_1_8857594379FFB0EF_METHOD_1_6E57D3559C10FFA9_OFFSET UNITYSDK_OFFSET(0x13A561D0)
#define CLASS_1_8857594379FFB0EF_METHOD_1_CBBB30978BA34B92_OFFSET UNITYSDK_OFFSET(0x13A56220)
#define CLASS_1_8857594379FFB0EF_SET_UNLOCKEDLEVEL_OFFSET UNITYSDK_OFFSET(0x13A562E0)
#define CLASS_1_8857594379FFB0EF__CTOR_OFFSET UNITYSDK_OFFSET(0x13A55F70)

inline static constexpr unsigned int Class_1_8857594379FFB0EF_TypeDefinitionIndex = 75765;

class Class_1_8857594379FFB0EF : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_6770BC9DDC5C458C_1*>* Field_1_0; // 0x10
	::System::UInt32 _UnlockedLevel_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8857594379FFB0EF__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6E57D3559C10FFA9(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8857594379FFB0EF_METHOD_1_6E57D3559C10FFA9_OFFSET))(this, a1);
	}

	::Class_1_6770BC9DDC5C458C_1* Method_1_CBBB30978BA34B92(::System::UInt32 a1)
	{
		return ((::Class_1_6770BC9DDC5C458C_1*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8857594379FFB0EF_METHOD_1_CBBB30978BA34B92_OFFSET))(this, a1);
	}

	::System::UInt32 get_UnlockedLevel()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8857594379FFB0EF_GET_UNLOCKEDLEVEL_OFFSET))(this);
	}

	::System::Void set_UnlockedLevel(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8857594379FFB0EF_SET_UNLOCKEDLEVEL_OFFSET))(this, a1);
	}
};
