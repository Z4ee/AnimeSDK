#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::NavMap::FiveDim { class CartographyFiveDim; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_654A1B801DEFD99B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12B1CA40)
#define CLASS_1_654A1B801DEFD99B_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x12B1CA20)
#define CLASS_1_654A1B801DEFD99B_METHOD_1_414C8F92528E4746_OFFSET UNITYSDK_OFFSET(0x12B1C5F0)
#define CLASS_1_654A1B801DEFD99B_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x12B1C9D0)
#define CLASS_1_654A1B801DEFD99B_METHOD_1_DBC5F3BB0E348F90_OFFSET UNITYSDK_OFFSET(0x12B1C980)
#define CLASS_1_654A1B801DEFD99B_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x12B1CA30)
#define CLASS_1_654A1B801DEFD99B__CTOR_OFFSET UNITYSDK_OFFSET(0x12B1C580)

inline static constexpr unsigned int Class_1_654A1B801DEFD99B_TypeDefinitionIndex = 68890;

class Class_1_654A1B801DEFD99B : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_1; // 0x10
	::RPG::Client::NavMap::FiveDim::CartographyFiveDim* Field_1_0; // 0x18
	::System::Int32 _Current_k__BackingField; // 0x20

	::System::Void _ctor(::RPG::Client::NavMap::FiveDim::CartographyFiveDim* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::FiveDim::CartographyFiveDim*))((::PBYTE)hIl2Cpp + CLASS_1_654A1B801DEFD99B__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_DBC5F3BB0E348F90(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_654A1B801DEFD99B_METHOD_1_DBC5F3BB0E348F90_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_654A1B801DEFD99B_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Int32 get_Current()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_654A1B801DEFD99B_GET_CURRENT_OFFSET))(this);
	}

	::System::Void set_Current(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_654A1B801DEFD99B_SET_CURRENT_OFFSET))(this, value);
	}

	::System::Void Method_1_414C8F92528E4746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_654A1B801DEFD99B_METHOD_1_414C8F92528E4746_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_654A1B801DEFD99B_DISPOSE_OFFSET))(this);
	}
};
