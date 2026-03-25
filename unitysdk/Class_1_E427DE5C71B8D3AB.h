#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore::Match3 { class Match3EnvActionConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E427DE5C71B8D3AB__CTOR_OFFSET UNITYSDK_OFFSET(0x16838EA0)

inline static constexpr unsigned int Class_1_E427DE5C71B8D3AB_TypeDefinitionIndex = 32707;

class Class_1_E427DE5C71B8D3AB : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::Match3::Match3EnvActionConfig*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E427DE5C71B8D3AB__CTOR_OFFSET))(this);
	}
};
