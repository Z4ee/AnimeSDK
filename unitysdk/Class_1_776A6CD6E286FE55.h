#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CB66E39D32BF42FF_1;
namespace RPG::Client::NavMap::FiveDim { class CartographyFiveDim; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_776A6CD6E286FE55_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15867900)
#define CLASS_1_776A6CD6E286FE55_METHOD_1_6D71CC7A9DF62322_OFFSET UNITYSDK_OFFSET(0x15867720)
#define CLASS_1_776A6CD6E286FE55_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x158678B0)
#define CLASS_1_776A6CD6E286FE55_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15867910)
#define CLASS_1_776A6CD6E286FE55__CTOR_OFFSET UNITYSDK_OFFSET(0x15867160)

inline static constexpr unsigned int Class_1_776A6CD6E286FE55_TypeDefinitionIndex = 74528;

class Class_1_776A6CD6E286FE55 : public ::System::Object
{
public:
	::RPG::Client::NavMap::FiveDim::CartographyFiveDim* NJEIIMCMDFN; // 0x10
	::System::Collections::Generic::List_1<::Class_1_CB66E39D32BF42FF_1*>* LFMPGKONJCH; // 0x18
	::System::Int32 _Current_k__BackingField; // 0x20

	::System::Void _ctor(::RPG::Client::NavMap::FiveDim::CartographyFiveDim* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::FiveDim::CartographyFiveDim*))((::PBYTE)hIl2Cpp + CLASS_1_776A6CD6E286FE55__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_6D71CC7A9DF62322()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_776A6CD6E286FE55_METHOD_1_6D71CC7A9DF62322_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_776A6CD6E286FE55_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Int32 get_Current()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_776A6CD6E286FE55_GET_CURRENT_OFFSET))(this);
	}

	::System::Void set_Current(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_776A6CD6E286FE55_SET_CURRENT_OFFSET))(this, a1);
	}
};
