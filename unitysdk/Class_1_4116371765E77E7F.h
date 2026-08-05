#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_4116371765E77E7F_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x15586F80)
#define CLASS_1_4116371765E77E7F__CTOR_OFFSET UNITYSDK_OFFSET(0x15586F70)

inline static constexpr unsigned int Class_1_4116371765E77E7F_TypeDefinitionIndex = 71827;

class Class_1_4116371765E77E7F : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4116371765E77E7F__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4116371765E77E7F_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
