#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_13E1F0BBFE52F5F0.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class DownloadFileInfo; }

#define CLASS_1_2B72FBE43B450502_CLASS_1_9081B5ACAAB2F561_METHOD_1_4B3C89E34B373969_OFFSET UNITYSDK_OFFSET(0x1655DBC0)
#define CLASS_1_2B72FBE43B450502_CLASS_1_9081B5ACAAB2F561__CTOR_OFFSET UNITYSDK_OFFSET(0x1655DBB0)

inline static constexpr unsigned int Class_1_2B72FBE43B450502_Class_1_9081B5ACAAB2F561_TypeDefinitionIndex = 76088;

class Class_1_2B72FBE43B450502_Class_1_9081B5ACAAB2F561 : public ::System::Object
{
public:
	::Il2CppArray<::Enum_3_13E1F0BBFE52F5F0>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B72FBE43B450502_CLASS_1_9081B5ACAAB2F561__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_4B3C89E34B373969(::MoleMole::DownloadFileInfo* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::DownloadFileInfo*))((::PBYTE)hIl2Cpp + CLASS_1_2B72FBE43B450502_CLASS_1_9081B5ACAAB2F561_METHOD_1_4B3C89E34B373969_OFFSET))(this, a1);
	}
};
