#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_916A609943E0EE80_2;
class Class_1_F0E9DD085BA6740E_1;
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Text { class StringBuilder; }

#define CLASS_1_A78CE7582CF7C10E_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xB5D1220)
#define CLASS_1_A78CE7582CF7C10E_EQUALS_OFFSET UNITYSDK_OFFSET(0xB5D1120)
#define CLASS_1_A78CE7582CF7C10E_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xB5D0DF0)
#define CLASS_1_A78CE7582CF7C10E_GET_BUFFID_OFFSET UNITYSDK_OFFSET(0xB5D0610)
#define CLASS_1_A78CE7582CF7C10E_GET_EQUALITYCONTRACT_OFFSET UNITYSDK_OFFSET(0xB5D05D0)
#define CLASS_1_A78CE7582CF7C10E_GET_LINEUP_OFFSET UNITYSDK_OFFSET(0xB5D0600)
#define CLASS_1_A78CE7582CF7C10E_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xB5D0D50)
#define CLASS_1_A78CE7582CF7C10E_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xB5D0CB0)
#define CLASS_1_A78CE7582CF7C10E_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0xB5D0B40)
#define CLASS_1_A78CE7582CF7C10E_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB5D0900)
#define CLASS_1_A78CE7582CF7C10E__CLONE___OFFSET UNITYSDK_OFFSET(0xB5D1560)
#define CLASS_1_A78CE7582CF7C10E__CTOR_1_OFFSET UNITYSDK_OFFSET(0xB5D0770)
#define CLASS_1_A78CE7582CF7C10E__CTOR_2_OFFSET UNITYSDK_OFFSET(0xB5D15C0)
#define CLASS_1_A78CE7582CF7C10E__CTOR_OFFSET UNITYSDK_OFFSET(0xB5D0620)

inline static constexpr unsigned int Class_1_A78CE7582CF7C10E_TypeDefinitionIndex = 80134;

class Class_1_A78CE7582CF7C10E : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::Class_1_916A609943E0EE80_2*>* _Lineup_k__BackingField; // 0x10
	::System::Nullable_1<::System::UInt32> _BuffID_k__BackingField; // 0x18

	::System::Void _ctor(::System::Collections::Generic::IEnumerable_1<::Class_1_916A609943E0EE80_2*>* a1, ::System::Nullable_1<::System::UInt32> a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_916A609943E0EE80_2*>*, ::System::Nullable_1<::System::UInt32>))((::PBYTE)hIl2Cpp + CLASS_1_A78CE7582CF7C10E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::Class_1_F0E9DD085BA6740E_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_F0E9DD085BA6740E_1*))((::PBYTE)hIl2Cpp + CLASS_1_A78CE7582CF7C10E__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void _ctor_2(::Class_1_A78CE7582CF7C10E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A78CE7582CF7C10E*))((::PBYTE)hIl2Cpp + CLASS_1_A78CE7582CF7C10E__CTOR_2_OFFSET))(this, a1);
	}

	::System::Type* get_EqualityContract()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A78CE7582CF7C10E_GET_EQUALITYCONTRACT_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_916A609943E0EE80_2*>* get_Lineup()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_916A609943E0EE80_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A78CE7582CF7C10E_GET_LINEUP_OFFSET))(this);
	}

	::System::Nullable_1<::System::UInt32> get_BuffID()
	{
		return ((::System::Nullable_1<::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A78CE7582CF7C10E_GET_BUFFID_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A78CE7582CF7C10E_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + CLASS_1_A78CE7582CF7C10E_PRINTMEMBERS_OFFSET))(this, a1);
	}

	static ::System::Boolean op_Inequality(::Class_1_A78CE7582CF7C10E* a1, ::Class_1_A78CE7582CF7C10E* a2)
	{
		return ((::System::Boolean(*)(::Class_1_A78CE7582CF7C10E*, ::Class_1_A78CE7582CF7C10E*))((::PBYTE)hIl2Cpp + CLASS_1_A78CE7582CF7C10E_OP_INEQUALITY_OFFSET))(a1, a2);
	}

	static ::System::Boolean op_Equality(::Class_1_A78CE7582CF7C10E* a1, ::Class_1_A78CE7582CF7C10E* a2)
	{
		return ((::System::Boolean(*)(::Class_1_A78CE7582CF7C10E*, ::Class_1_A78CE7582CF7C10E*))((::PBYTE)hIl2Cpp + CLASS_1_A78CE7582CF7C10E_OP_EQUALITY_OFFSET))(a1, a2);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A78CE7582CF7C10E_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A78CE7582CF7C10E_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_A78CE7582CF7C10E* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A78CE7582CF7C10E*))((::PBYTE)hIl2Cpp + CLASS_1_A78CE7582CF7C10E_EQUALS_1_OFFSET))(this, a1);
	}

	::Class_1_A78CE7582CF7C10E* _Clone__()
	{
		return ((::Class_1_A78CE7582CF7C10E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A78CE7582CF7C10E__CLONE___OFFSET))(this);
	}
};
