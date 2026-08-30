#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace System { class String; }

#define CLASS_1_BEC5D8EEC9856D94_1_GET_FOOTERHINT_OFFSET UNITYSDK_OFFSET(0xDD924C0)
#define CLASS_1_BEC5D8EEC9856D94_1__CTOR_OFFSET UNITYSDK_OFFSET(0xDD924D0)

inline static constexpr unsigned int Class_1_BEC5D8EEC9856D94_1_TypeDefinitionIndex = 50388;

class Class_1_BEC5D8EEC9856D94_1 : public ::System::Object
{
public:
	::R3::ReactiveProperty_1<::System::String*>* _FooterHint_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEC5D8EEC9856D94_1__CTOR_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::String*>* get_FooterHint()
	{
		return ((::R3::ReactiveProperty_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEC5D8EEC9856D94_1_GET_FOOTERHINT_OFFSET))(this);
	}
};
