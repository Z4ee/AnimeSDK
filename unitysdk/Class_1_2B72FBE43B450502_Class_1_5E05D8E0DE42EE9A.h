#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_34F7035555410463_1.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class DownloadFileInfo; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_2B72FBE43B450502_CLASS_1_5E05D8E0DE42EE9A_METHOD_1_7A3823965CEA065A_OFFSET UNITYSDK_OFFSET(0xE98A440)
#define CLASS_1_2B72FBE43B450502_CLASS_1_5E05D8E0DE42EE9A__CTOR_OFFSET UNITYSDK_OFFSET(0xE98A430)

inline static constexpr unsigned int Class_1_2B72FBE43B450502_Class_1_5E05D8E0DE42EE9A_TypeDefinitionIndex = 61695;

class Class_1_2B72FBE43B450502_Class_1_5E05D8E0DE42EE9A : public ::System::Object
{
public:
	::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B72FBE43B450502_CLASS_1_5E05D8E0DE42EE9A__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_7A3823965CEA065A(::MoleMole::DownloadFileInfo* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::DownloadFileInfo*))((::PBYTE)hIl2Cpp + CLASS_1_2B72FBE43B450502_CLASS_1_5E05D8E0DE42EE9A_METHOD_1_7A3823965CEA065A_OFFSET))(this, a1);
	}
};
