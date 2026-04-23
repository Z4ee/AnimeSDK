#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAvatarInfoProvider; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B9CDA67AFC3B82E5_METHOD_1_1D88E3986031EE10_OFFSET UNITYSDK_OFFSET(0x91EF0D0)
#define CLASS_1_B9CDA67AFC3B82E5_METHOD_1_BB7A1049F84E8127_OFFSET UNITYSDK_OFFSET(0x91EF050)
#define CLASS_1_B9CDA67AFC3B82E5__CTOR_OFFSET UNITYSDK_OFFSET(0x91EF0C0)

inline static constexpr unsigned int Class_1_B9CDA67AFC3B82E5_TypeDefinitionIndex = 57720;

class Class_1_B9CDA67AFC3B82E5 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B9CDA67AFC3B82E5__CTOR_OFFSET))(this);
	}

	static ::Class_1_B9CDA67AFC3B82E5* Method_1_BB7A1049F84E8127()
	{
		return ((::Class_1_B9CDA67AFC3B82E5*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B9CDA67AFC3B82E5_METHOD_1_BB7A1049F84E8127_OFFSET))();
	}

	::System::Void Method_1_1D88E3986031EE10(::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*))((::PBYTE)hIl2Cpp + CLASS_1_B9CDA67AFC3B82E5_METHOD_1_1D88E3986031EE10_OFFSET))(this, a1);
	}
};
