#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::NavMap::FiveDim { class CartographyFiveDim; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_11E5C22A4A245065_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1295CD20)
#define CLASS_1_11E5C22A4A245065_METHOD_1_94C81405F83348DF_OFFSET UNITYSDK_OFFSET(0x1295CA70)
#define CLASS_1_11E5C22A4A245065_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x1295CCD0)
#define CLASS_1_11E5C22A4A245065_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1295CD30)
#define CLASS_1_11E5C22A4A245065__CTOR_OFFSET UNITYSDK_OFFSET(0x1295C600)

inline static constexpr unsigned int Class_1_11E5C22A4A245065_TypeDefinitionIndex = 68888;

class Class_1_11E5C22A4A245065 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_1; // 0x10
	::RPG::Client::NavMap::FiveDim::CartographyFiveDim* Field_1_2; // 0x18
	::System::Int32 _Current_k__BackingField; // 0x20

	::System::Void _ctor(::RPG::Client::NavMap::FiveDim::CartographyFiveDim* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::FiveDim::CartographyFiveDim*))((::PBYTE)hIl2Cpp + CLASS_1_11E5C22A4A245065__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_94C81405F83348DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_11E5C22A4A245065_METHOD_1_94C81405F83348DF_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_11E5C22A4A245065_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Int32 get_Current()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_11E5C22A4A245065_GET_CURRENT_OFFSET))(this);
	}

	::System::Void set_Current(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_11E5C22A4A245065_SET_CURRENT_OFFSET))(this, value);
	}
};
