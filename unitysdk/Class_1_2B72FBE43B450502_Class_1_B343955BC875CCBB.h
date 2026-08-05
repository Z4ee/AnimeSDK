#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_34F7035555410463_1.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class DownloadFileInfo; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_2B72FBE43B450502_CLASS_1_B343955BC875CCBB_METHOD_1_1B337B8257CB3996_OFFSET UNITYSDK_OFFSET(0x17823050)
#define CLASS_1_2B72FBE43B450502_CLASS_1_B343955BC875CCBB_METHOD_1_D9C9E3CAF5981924_OFFSET UNITYSDK_OFFSET(0x178230B0)
#define CLASS_1_2B72FBE43B450502_CLASS_1_B343955BC875CCBB__CTOR_OFFSET UNITYSDK_OFFSET(0x17823040)

inline static constexpr unsigned int Class_1_2B72FBE43B450502_Class_1_B343955BC875CCBB_TypeDefinitionIndex = 61698;

class Class_1_2B72FBE43B450502_Class_1_B343955BC875CCBB : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::Enum_3_34F7035555410463_1>* Field_1_1; // 0x10
	::System::Func_2<::Enum_3_34F7035555410463_1, ::System::Boolean>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B72FBE43B450502_CLASS_1_B343955BC875CCBB__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1B337B8257CB3996(::Enum_3_34F7035555410463_1 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_34F7035555410463_1))((::PBYTE)hIl2Cpp + CLASS_1_2B72FBE43B450502_CLASS_1_B343955BC875CCBB_METHOD_1_1B337B8257CB3996_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_D9C9E3CAF5981924(::MoleMole::DownloadFileInfo* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::DownloadFileInfo*))((::PBYTE)hIl2Cpp + CLASS_1_2B72FBE43B450502_CLASS_1_B343955BC875CCBB_METHOD_1_D9C9E3CAF5981924_OFFSET))(this, a1);
	}
};
