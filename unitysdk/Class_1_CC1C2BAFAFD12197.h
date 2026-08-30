#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C85C4DAB350DD5FC_2;
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Text { class StringBuilder; }

#define CLASS_1_CC1C2BAFAFD12197_DECONSTRUCT_OFFSET UNITYSDK_OFFSET(0x18D34720)
#define CLASS_1_CC1C2BAFAFD12197_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18D34330)
#define CLASS_1_CC1C2BAFAFD12197_EQUALS_OFFSET UNITYSDK_OFFSET(0x18D34640)
#define CLASS_1_CC1C2BAFAFD12197_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18D34490)
#define CLASS_1_CC1C2BAFAFD12197_GET_CARDS_OFFSET UNITYSDK_OFFSET(0x18D33EB0)
#define CLASS_1_CC1C2BAFAFD12197_GET_EQUALITYCONTRACT_OFFSET UNITYSDK_OFFSET(0x18D33E80)
#define CLASS_1_CC1C2BAFAFD12197_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x18D34310)
#define CLASS_1_CC1C2BAFAFD12197_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x18D342E0)
#define CLASS_1_CC1C2BAFAFD12197_PRINTMEMBERS_OFFSET UNITYSDK_OFFSET(0x18D341D0)
#define CLASS_1_CC1C2BAFAFD12197_SET_CARDS_OFFSET UNITYSDK_OFFSET(0x18D33EC0)
#define CLASS_1_CC1C2BAFAFD12197_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18D33F30)
#define CLASS_1_CC1C2BAFAFD12197__CLONE___OFFSET UNITYSDK_OFFSET(0x18D346A0)
#define CLASS_1_CC1C2BAFAFD12197__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18D33ED0)
#define CLASS_1_CC1C2BAFAFD12197__CTOR_2_OFFSET UNITYSDK_OFFSET(0x18D34700)
#define CLASS_1_CC1C2BAFAFD12197__CTOR_OFFSET UNITYSDK_OFFSET(0x18D33E70)

inline static constexpr unsigned int Class_1_CC1C2BAFAFD12197_TypeDefinitionIndex = 79771;

class Class_1_CC1C2BAFAFD12197 : public ::System::Object
{
public:
	::System::Collections::Generic::IEnumerable_1<::Class_1_C85C4DAB350DD5FC_2*>* _Cards_k__BackingField; // 0x10

	::System::Void _ctor(::System::Collections::Generic::IEnumerable_1<::Class_1_C85C4DAB350DD5FC_2*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_C85C4DAB350DD5FC_2*>*))((::PBYTE)hIl2Cpp + CLASS_1_CC1C2BAFAFD12197__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::Class_1_C85C4DAB350DD5FC_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C85C4DAB350DD5FC_2*))((::PBYTE)hIl2Cpp + CLASS_1_CC1C2BAFAFD12197__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void _ctor_2(::Class_1_CC1C2BAFAFD12197* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_CC1C2BAFAFD12197*))((::PBYTE)hIl2Cpp + CLASS_1_CC1C2BAFAFD12197__CTOR_2_OFFSET))(this, a1);
	}

	::System::Type* get_EqualityContract()
	{
		return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC1C2BAFAFD12197_GET_EQUALITYCONTRACT_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_1_C85C4DAB350DD5FC_2*>* get_Cards()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_1_C85C4DAB350DD5FC_2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC1C2BAFAFD12197_GET_CARDS_OFFSET))(this);
	}

	::System::Void set_Cards(::System::Collections::Generic::IEnumerable_1<::Class_1_C85C4DAB350DD5FC_2*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_C85C4DAB350DD5FC_2*>*))((::PBYTE)hIl2Cpp + CLASS_1_CC1C2BAFAFD12197_SET_CARDS_OFFSET))(this, a1);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC1C2BAFAFD12197_TOSTRING_OFFSET))(this);
	}

	::System::Boolean PrintMembers(::System::Text::StringBuilder* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + CLASS_1_CC1C2BAFAFD12197_PRINTMEMBERS_OFFSET))(this, a1);
	}

	static ::System::Boolean op_Inequality(::Class_1_CC1C2BAFAFD12197* a1, ::Class_1_CC1C2BAFAFD12197* a2)
	{
		return ((::System::Boolean(*)(::Class_1_CC1C2BAFAFD12197*, ::Class_1_CC1C2BAFAFD12197*))((::PBYTE)hIl2Cpp + CLASS_1_CC1C2BAFAFD12197_OP_INEQUALITY_OFFSET))(a1, a2);
	}

	static ::System::Boolean op_Equality(::Class_1_CC1C2BAFAFD12197* a1, ::Class_1_CC1C2BAFAFD12197* a2)
	{
		return ((::System::Boolean(*)(::Class_1_CC1C2BAFAFD12197*, ::Class_1_CC1C2BAFAFD12197*))((::PBYTE)hIl2Cpp + CLASS_1_CC1C2BAFAFD12197_OP_EQUALITY_OFFSET))(a1, a2);
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC1C2BAFAFD12197_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean Equals(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_CC1C2BAFAFD12197_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::Class_1_CC1C2BAFAFD12197* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_CC1C2BAFAFD12197*))((::PBYTE)hIl2Cpp + CLASS_1_CC1C2BAFAFD12197_EQUALS_1_OFFSET))(this, a1);
	}

	::Class_1_CC1C2BAFAFD12197* _Clone__()
	{
		return ((::Class_1_CC1C2BAFAFD12197*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CC1C2BAFAFD12197__CLONE___OFFSET))(this);
	}

	::System::Void Deconstruct(::System::Collections::Generic::IEnumerable_1<::Class_1_C85C4DAB350DD5FC_2*>*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_C85C4DAB350DD5FC_2*>*&))((::PBYTE)hIl2Cpp + CLASS_1_CC1C2BAFAFD12197_DECONSTRUCT_OFFSET))(this, a1);
	}
};
