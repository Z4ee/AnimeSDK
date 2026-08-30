#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::NavMap::FiveDim { class CartographyFiveDim; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_07BFB92F4361B693_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A32490)
#define CLASS_1_07BFB92F4361B693_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15A32470)
#define CLASS_1_07BFB92F4361B693_METHOD_1_37D8D2BDEDA565ED_OFFSET UNITYSDK_OFFSET(0x15A323D0)
#define CLASS_1_07BFB92F4361B693_METHOD_1_47EDBC4CA1AB8BEE_OFFSET UNITYSDK_OFFSET(0x15A320B0)
#define CLASS_1_07BFB92F4361B693_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x15A32420)
#define CLASS_1_07BFB92F4361B693_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15A32480)
#define CLASS_1_07BFB92F4361B693__CTOR_OFFSET UNITYSDK_OFFSET(0x15A32020)

inline static constexpr unsigned int Class_1_07BFB92F4361B693_TypeDefinitionIndex = 74532;

class Class_1_07BFB92F4361B693 : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* AMGOFIHIOEK; // 0x10
	::RPG::Client::NavMap::FiveDim::CartographyFiveDim* NJEIIMCMDFN; // 0x18
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
