#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace System { class String; }

#define CLASS_1_BEC5D8EEC9856D94_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xBC15650)
#define CLASS_1_BEC5D8EEC9856D94__CTOR_OFFSET UNITYSDK_OFFSET(0xBC15660)

inline static constexpr unsigned int Class_1_BEC5D8EEC9856D94_TypeDefinitionIndex = 50382;

class Class_1_BEC5D8EEC9856D94 : public ::System::Object
{
public:
	::R3::ReactiveProperty_1<::System::String*>* _Title_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEC5D8EEC9856D94__CTOR_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::String*>* get_Title()
	{
		return ((::R3::ReactiveProperty_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BEC5D8EEC9856D94_GET_TITLE_OFFSET))(this);
	}
};
