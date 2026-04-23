#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HipplenBuilderStatus_StatType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

class HipplenBuilderStatusAsset_StatGradeConfig;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HIPPLENBUILDERSTATUSASSET_STATCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x11E0A9C0)

inline static constexpr unsigned int HipplenBuilderStatusAsset_StatConfig_TypeDefinitionIndex = 44022;

class HipplenBuilderStatusAsset_StatConfig : public ::System::Object
{
public:
	::HipplenBuilderStatus_StatType Type; // 0x10
	::System::String* Name; // 0x18
	::System::String* NameNegative; // 0x20
	::UnityEngine::Vector2Int Range; // 0x28
	::System::Int32 DefaultValue; // 0x30
	::System::Boolean IsShow; // 0x34
	::System::Collections::Generic::List_1<::HipplenBuilderStatusAsset_StatGradeConfig*>* Grades; // 0x38
	::System::Int32 WarningValue; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPPLENBUILDERSTATUSASSET_STATCONFIG__CTOR_OFFSET))(this);
	}
};
