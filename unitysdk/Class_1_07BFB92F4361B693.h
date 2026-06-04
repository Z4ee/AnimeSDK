#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::NavMap::FiveDim { class CartographyFiveDim; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_07BFB92F4361B693_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13B9CB10)
#define CLASS_1_07BFB92F4361B693_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x13B9CAF0)
#define CLASS_1_07BFB92F4361B693_METHOD_1_37D8D2BDEDA565ED_OFFSET UNITYSDK_OFFSET(0x13B9CA50)
#define CLASS_1_07BFB92F4361B693_METHOD_1_47EDBC4CA1AB8BEE_OFFSET UNITYSDK_OFFSET(0x13B9C730)
#define CLASS_1_07BFB92F4361B693_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x13B9CAA0)
#define CLASS_1_07BFB92F4361B693_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x13B9CB00)
#define CLASS_1_07BFB92F4361B693__CTOR_OFFSET UNITYSDK_OFFSET(0x13B9C6A0)

inline static constexpr unsigned int Class_1_07BFB92F4361B693_TypeDefinitionIndex = 69702;

class Class_1_07BFB92F4361B693 : public ::System::Object
{
public:
	::RPG::Client::NavMap::FiveDim::CartographyFiveDim* Field_1_0; // 0x10
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_1_1; // 0x18
	::System::Int32 _Current_k__BackingField; // 0x20

	::System::Void _ctor(::RPG::Client::NavMap::FiveDim::CartographyFiveDim* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::FiveDim::CartographyFiveDim*))((::PBYTE)hIl2Cpp + CLASS_1_07BFB92F4361B693__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_37D8D2BDEDA565ED(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_07BFB92F4361B693_METHOD_1_37D8D2BDEDA565ED_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07BFB92F4361B693_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Int32 get_Current()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07BFB92F4361B693_GET_CURRENT_OFFSET))(this);
	}

	::System::Void set_Current(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_07BFB92F4361B693_SET_CURRENT_OFFSET))(this, a1);
	}

	::System::Void Method_1_47EDBC4CA1AB8BEE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07BFB92F4361B693_METHOD_1_47EDBC4CA1AB8BEE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07BFB92F4361B693_DISPOSE_OFFSET))(this);
	}
};
