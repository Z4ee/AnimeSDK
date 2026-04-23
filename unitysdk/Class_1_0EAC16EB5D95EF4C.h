#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_813743369E0E31B2_1;
namespace RPG::Client::NavMap::FiveDim { class CartographyFiveDim; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0EAC16EB5D95EF4C_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD35D5F0)
#define CLASS_1_0EAC16EB5D95EF4C_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0xD35D5A0)
#define CLASS_1_0EAC16EB5D95EF4C_METHOD_1_B877181B6123B7F6_OFFSET UNITYSDK_OFFSET(0xD35D390)
#define CLASS_1_0EAC16EB5D95EF4C_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0xD35D600)
#define CLASS_1_0EAC16EB5D95EF4C__CTOR_OFFSET UNITYSDK_OFFSET(0xD35CF10)

inline static constexpr unsigned int Class_1_0EAC16EB5D95EF4C_TypeDefinitionIndex = 68887;

class Class_1_0EAC16EB5D95EF4C : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_813743369E0E31B2_1*>* Field_1_1; // 0x10
	::RPG::Client::NavMap::FiveDim::CartographyFiveDim* Field_1_2; // 0x18
	::System::Int32 _Current_k__BackingField; // 0x20

	::System::Void _ctor(::RPG::Client::NavMap::FiveDim::CartographyFiveDim* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::FiveDim::CartographyFiveDim*))((::PBYTE)hIl2Cpp + CLASS_1_0EAC16EB5D95EF4C__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_B877181B6123B7F6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EAC16EB5D95EF4C_METHOD_1_B877181B6123B7F6_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EAC16EB5D95EF4C_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Int32 get_Current()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0EAC16EB5D95EF4C_GET_CURRENT_OFFSET))(this);
	}

	::System::Void set_Current(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0EAC16EB5D95EF4C_SET_CURRENT_OFFSET))(this, value);
	}
};
