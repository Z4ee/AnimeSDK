#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CB66E39D32BF42FF_2;
namespace RPG::Client::NavMap::FiveDim { class CartographyFiveDim; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_776A6CD6E286FE55_1_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1556C380)
#define CLASS_1_776A6CD6E286FE55_1_METHOD_1_37D3D9A3F3244B90_OFFSET UNITYSDK_OFFSET(0x1556C1A0)
#define CLASS_1_776A6CD6E286FE55_1_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x1556C330)
#define CLASS_1_776A6CD6E286FE55_1_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1556C390)
#define CLASS_1_776A6CD6E286FE55_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1556BBE0)

inline static constexpr unsigned int Class_1_776A6CD6E286FE55_1_TypeDefinitionIndex = 74531;

class Class_1_776A6CD6E286FE55_1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_CB66E39D32BF42FF_2*>* DDHDBPGFNCC; // 0x10
	::RPG::Client::NavMap::FiveDim::CartographyFiveDim* NJEIIMCMDFN; // 0x18
	::System::Int32 _Current_k__BackingField; // 0x20

	::System::Void _ctor(::RPG::Client::NavMap::FiveDim::CartographyFiveDim* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::FiveDim::CartographyFiveDim*))((::PBYTE)hIl2Cpp + CLASS_1_776A6CD6E286FE55_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_37D3D9A3F3244B90()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_776A6CD6E286FE55_1_METHOD_1_37D3D9A3F3244B90_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_776A6CD6E286FE55_1_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Int32 get_Current()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_776A6CD6E286FE55_1_GET_CURRENT_OFFSET))(this);
	}

	::System::Void set_Current(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_776A6CD6E286FE55_1_SET_CURRENT_OFFSET))(this, a1);
	}
};
