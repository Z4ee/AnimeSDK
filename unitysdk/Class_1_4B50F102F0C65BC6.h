#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::NavMap::FiveDim { class CartographyFiveDim; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4B50F102F0C65BC6_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA6AC1C0)
#define CLASS_1_4B50F102F0C65BC6_METHOD_1_6D8E8D1FC2488E6B_OFFSET UNITYSDK_OFFSET(0xA6ABFD0)
#define CLASS_1_4B50F102F0C65BC6_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0xA6AC170)
#define CLASS_1_4B50F102F0C65BC6_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0xA6AC1D0)
#define CLASS_1_4B50F102F0C65BC6__CTOR_OFFSET UNITYSDK_OFFSET(0xA6ABB60)

inline static constexpr unsigned int Class_1_4B50F102F0C65BC6_TypeDefinitionIndex = 69700;

class Class_1_4B50F102F0C65BC6 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_0; // 0x10
	::RPG::Client::NavMap::FiveDim::CartographyFiveDim* Field_1_1; // 0x18
	::System::Int32 _Current_k__BackingField; // 0x20

	::System::Void _ctor(::RPG::Client::NavMap::FiveDim::CartographyFiveDim* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::FiveDim::CartographyFiveDim*))((::PBYTE)hIl2Cpp + CLASS_1_4B50F102F0C65BC6__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_6D8E8D1FC2488E6B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B50F102F0C65BC6_METHOD_1_6D8E8D1FC2488E6B_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B50F102F0C65BC6_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Int32 get_Current()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4B50F102F0C65BC6_GET_CURRENT_OFFSET))(this);
	}

	::System::Void set_Current(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4B50F102F0C65BC6_SET_CURRENT_OFFSET))(this, a1);
	}
};
