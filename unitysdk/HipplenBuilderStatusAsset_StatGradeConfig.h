#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define HIPPLENBUILDERSTATUSASSET_STATGRADECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17A6A7C0)

inline static constexpr unsigned int HipplenBuilderStatusAsset_StatGradeConfig_TypeDefinitionIndex = 45441;

class HipplenBuilderStatusAsset_StatGradeConfig : public ::System::Object
{
public:
	::System::String* GradeName; // 0x10
	::System::Int32 GadeReqMin; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUSASSET_STATGRADECONFIG__CTOR_OFFSET))(this);
	}
};
