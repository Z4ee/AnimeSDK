#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_13E1F0BBFE52F5F0.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class DownloadFileInfo; }

#define CLASS_1_2B72FBE43B450502_CLASS_1_5F52C6151BA675E8_METHOD_1_DB04ABFA7C510F9B_OFFSET UNITYSDK_OFFSET(0x13125750)
#define CLASS_1_2B72FBE43B450502_CLASS_1_5F52C6151BA675E8__CTOR_OFFSET UNITYSDK_OFFSET(0x13125740)

inline static constexpr unsigned int Class_1_2B72FBE43B450502_Class_1_5F52C6151BA675E8_TypeDefinitionIndex = 76086;

class Class_1_2B72FBE43B450502_Class_1_5F52C6151BA675E8 : public ::System::Object
{
public:
	::Il2CppArray<::Enum_3_13E1F0BBFE52F5F0>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B72FBE43B450502_CLASS_1_5F52C6151BA675E8__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_DB04ABFA7C510F9B(::MoleMole::DownloadFileInfo* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::DownloadFileInfo*))((::PBYTE)hIl2Cpp + CLASS_1_2B72FBE43B450502_CLASS_1_5F52C6151BA675E8_METHOD_1_DB04ABFA7C510F9B_OFFSET))(this, a1);
	}
};
