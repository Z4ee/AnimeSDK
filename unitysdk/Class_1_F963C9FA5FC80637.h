#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_A78CE7582CF7C10E;
class Class_1_F0E9DD085BA6740E_1;
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Text { class StringBuilder; }

#define CLASS_1_F963C9FA5FC80637_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x16ED3300)
#define CLASS_1_F963C9FA5FC80637_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x16ED3070)
#define CLASS_1_F963C9FA5FC80637_EQUALS_OFFSET UNITYSDK_OFFSET(0x16ED2F70)
#define CLASS_1_F963C9FA5FC80637_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x16ED2D70)
#define CLASS_1_F963C9FA5FC80637_GET_EQUALITYCONTRACT_OFFSET UNITYSDK_OFFSET(0x16ED2530)
#define CLASS_1_F963C9FA5FC80637_GET_STAGES_OFFSET UNITYSDK_OFFSET(0x16ED2560)
#define CLASS_1_F963C9FA5FC80637_METHOD_1_07396957EB9BA45F_OFFSET UNITYSDK_OFFSET(0x16ED26D0)
#define CLASS_1_F963C9FA5FC80637_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x16ED2CD0)
#define CLASS_1_F963C9FA5FC80637_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x16ED2C30)
#define CLASS_1_F963C9FA5FC80637_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x16ED2B20)
#define CLASS_1_F963C9FA5FC80637_SET_STAGES_OFFSET UNITYSDK_OFFSET(0x16ED2570)
#define CLASS_1_F963C9FA5FC80637_TOSTRING_OFFSET UNITYSDK_OFFSET(0x16ED28E0)
#define CLASS_1_F963C9FA5FC80637__CLONE___OFFSET UNITYSDK_OFFSET(0x16ED3280)
#define CLASS_1_F963C9FA5FC80637__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16ED2580)
#define CLASS_1_F963C9FA5FC80637__CTOR_2_OFFSET UNITYSDK_OFFSET(0x16ED32E0)
#define CLASS_1_F963C9FA5FC80637__CTOR_OFFSET UNITYSDK_OFFSET(0x16ED2520)

inline static constexpr unsigned int Class_1_F963C9FA5FC80637_TypeDefinitionIndex = 80130;

class Class_1_F963C9FA5FC80637 : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::Class_1_A78CE7582CF7C10E*>* _Stages_k__BackingField; // 0x10

	::System::Void _ctor(::System::Collections::Generic::IReadOnlyList_1<::Class_1_A78CE7582CF7C10E*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_A78CE7582CF7C10E*>*))((::PBYTE)hIl2Cpp + CLASS_1_F963C9FA5FC80637__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::System::Collections::Generic::IEnumerable_1<::Class_1_F0E9DD085BA6740E_1*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_F0E9DD085BA6740E_1*>*))((::PBYTE)hIl2Cpp + CLASS_1_F963C9FA5FC80637__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void _ctor_2(::Class_1_F963C9FA5FC80637* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F963C9FA5FC80637*))((::PBYTE)hIl2Cpp + CLASS_1_F963C9FA5FC80637__CTOR_2_OFFSET))(this, a1);
	}

	::System::Type* get_EqualityContract()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F963C9FA5FC80637_GET_EQUALITYCONTRACT_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_A78CE7582CF7C10E*>* get_Stages()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_A78CE7582CF7C10E*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F963C9FA5FC80637_GET_STAGES_OFFSET))(this);
	}

	::System::Void set_Stages(::System::Collections::Generic::IReadOnlyList_1<::Class_1_A78CE7582CF7C10E*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_A78CE7582CF7C10E*>*))((::PBYTE)hIl2Cpp + CLASS_1_F963C9FA5FC80637_SET_STAGES_OFFSET))(this, a1);
	}

	::Class_1_F963C9FA5FC80637* Method_1_07396957EB9BA45F(::System::Int32 a1, ::System::Nullable_1<::System::UInt32> a2)
	{
		return ((::Class_1_F963C9FA5FC80637*(*)(::PVOID, ::System::Int32, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_F963C9FA5FC80637_METHOD_1_07396957EB9BA45F_OFFSET))(this, a1, a2);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F963C9FA5FC80637_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + CLASS_1_F963C9FA5FC80637_PRINTMEMBERS_OFFSET))(this, a1);
	}

	static ::System::Boolean op_Inequality(::Class_1_F963C9FA5FC80637* a1, ::Class_1_F963C9FA5FC80637* a2)
	{
		return ((::System::Boolean(*)(::Class_1_F963C9FA5FC80637*, ::Class_1_F963C9FA5FC80637*))((::PBYTE)hIl2Cpp + CLASS_1_F963C9FA5FC80637_OP_INEQUALITY_OFFSET))(a1, a2);
	}

	static ::System::Boolean op_Equality(::Class_1_F963C9FA5FC80637* a1, ::Class_1_F963C9FA5FC80637* a2)
	{
		return ((::System::Boolean(*)(::Class_1_F963C9FA5FC80637*, ::Class_1_F963C9FA5FC80637*))((::PBYTE)hIl2Cpp + CLASS_1_F963C9FA5FC80637_OP_EQUALITY_OFFSET))(a1, a2);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F963C9FA5FC80637_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_F963C9FA5FC80637_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_F963C9FA5FC80637* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_F963C9FA5FC80637*))((::PBYTE)hIl2Cpp + CLASS_1_F963C9FA5FC80637_EQUALS_1_OFFSET))(this, a1);
	}

	::Class_1_F963C9FA5FC80637* _Clone__()
	{
		return ((::Class_1_F963C9FA5FC80637*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F963C9FA5FC80637__CLONE___OFFSET))(this);
	}

	::System::Void Deconstruct(::System::Collections::Generic::IReadOnlyList_1<::Class_1_A78CE7582CF7C10E*>*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_A78CE7582CF7C10E*>*&))((::PBYTE)hIl2Cpp + CLASS_1_F963C9FA5FC80637_DECONSTRUCT_OFFSET))(this, a1);
	}
};
