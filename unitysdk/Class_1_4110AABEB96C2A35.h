#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/GroupMemberIdentifier.h"
#include "unitysdk/Struct_2_FE9BD044832BC9C3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_5711A010083C610A_Class_0_16E7307DCC43CB2C_19;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4110AABEB96C2A35_METHOD_1_40DD523B0193E7CD_OFFSET UNITYSDK_OFFSET(0x13C07BB0)
#define CLASS_1_4110AABEB96C2A35_METHOD_1_8F064A1E4F43F691_OFFSET UNITYSDK_OFFSET(0x13C07AC0)
#define CLASS_1_4110AABEB96C2A35__CTOR_OFFSET UNITYSDK_OFFSET(0x13C079D0)

inline static constexpr unsigned int Class_1_4110AABEB96C2A35_TypeDefinitionIndex = 52962;

class Class_1_4110AABEB96C2A35 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::Class_1_5711A010083C610A_Class_0_16E7307DCC43CB2C_19*>* Field_1_0; // 0x10
	::Struct_2_FE9BD044832BC9C3 Field_1_1; // 0x18

	::System::Void _ctor(::Struct_2_FE9BD044832BC9C3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE9BD044832BC9C3))((::PBYTE)hIl2Cpp + CLASS_1_4110AABEB96C2A35__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_8F064A1E4F43F691(::Class_1_5711A010083C610A_Class_0_16E7307DCC43CB2C_19* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5711A010083C610A_Class_0_16E7307DCC43CB2C_19*))((::PBYTE)hIl2Cpp + CLASS_1_4110AABEB96C2A35_METHOD_1_8F064A1E4F43F691_OFFSET))(this, a1);
	}

	::System::Void Method_1_40DD523B0193E7CD(::System::Collections::Generic::List_1<::System::ValueTuple_2<::Foundation::ViewObject::GroupMemberIdentifier, ::System::Int32>>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::Foundation::ViewObject::GroupMemberIdentifier, ::System::Int32>>*))((::PBYTE)hIl2Cpp + CLASS_1_4110AABEB96C2A35_METHOD_1_40DD523B0193E7CD_OFFSET))(this, a1);
	}
};
