#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_34F7035555410463_1.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class DownloadFileInfo; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_2B72FBE43B450502_CLASS_1_46B117926A075044_METHOD_1_C9B74FCCB2C0D2CB_OFFSET UNITYSDK_OFFSET(0x13B582A0)
#define CLASS_1_2B72FBE43B450502_CLASS_1_46B117926A075044__CTOR_OFFSET UNITYSDK_OFFSET(0x13B58290)

inline static constexpr unsigned int Class_1_2B72FBE43B450502_Class_1_46B117926A075044_TypeDefinitionIndex = 61700;

class Class_1_2B72FBE43B450502_Class_1_46B117926A075044 : public ::System::Object
{
public:
	::System::Collections::Generic::IEnumerable_1<::Enum_3_34F7035555410463_1>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B72FBE43B450502_CLASS_1_46B117926A075044__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_C9B74FCCB2C0D2CB(::MoleMole::DownloadFileInfo* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::DownloadFileInfo*))((::PBYTE)hIl2Cpp + CLASS_1_2B72FBE43B450502_CLASS_1_46B117926A075044_METHOD_1_C9B74FCCB2C0D2CB_OFFSET))(this, a1);
	}
};
