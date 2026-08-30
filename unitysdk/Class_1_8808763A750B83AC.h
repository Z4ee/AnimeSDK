#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::NavMap::FiveDim { class CartographyFiveDim; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8808763A750B83AC_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBAA41C0)
#define CLASS_1_8808763A750B83AC_METHOD_1_6D8E8D1FC2488E6B_OFFSET UNITYSDK_OFFSET(0xBAA3FD0)
#define CLASS_1_8808763A750B83AC_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0xBAA4170)
#define CLASS_1_8808763A750B83AC_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBAA41D0)
#define CLASS_1_8808763A750B83AC__CTOR_OFFSET UNITYSDK_OFFSET(0xBAA3A00)

inline static constexpr unsigned int Class_1_8808763A750B83AC_TypeDefinitionIndex = 74530;

class Class_1_8808763A750B83AC : public ::System::Object
{
public:
	::RPG::Client::NavMap::FiveDim::CartographyFiveDim* NJEIIMCMDFN; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* CJFMILLAOBL; // 0x18
	::System::Int32 _Current_k__BackingField; // 0x20

	::System::Void _ctor(::RPG::Client::NavMap::FiveDim::CartographyFiveDim* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::FiveDim::CartographyFiveDim*))((::PBYTE)hIl2Cpp + CLASS_1_8808763A750B83AC__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_6D8E8D1FC2488E6B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8808763A750B83AC_METHOD_1_6D8E8D1FC2488E6B_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8808763A750B83AC_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Int32 get_Current()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8808763A750B83AC_GET_CURRENT_OFFSET))(this);
	}

	::System::Void set_Current(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_8808763A750B83AC_SET_CURRENT_OFFSET))(this, a1);
	}
};
