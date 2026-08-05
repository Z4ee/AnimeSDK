#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_13E1F0BBFE52F5F0.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class DownloadFileInfo; }

#define CLASS_1_2B72FBE43B450502_CLASS_1_2C5737B12E8A3486_METHOD_1_4B3C89E34B373969_OFFSET UNITYSDK_OFFSET(0x13E37E80)
#define CLASS_1_2B72FBE43B450502_CLASS_1_2C5737B12E8A3486__CTOR_OFFSET UNITYSDK_OFFSET(0x13E35970)

inline static constexpr unsigned int Class_1_2B72FBE43B450502_Class_1_2C5737B12E8A3486_TypeDefinitionIndex = 61699;

class Class_1_2B72FBE43B450502_Class_1_2C5737B12E8A3486 : public ::System::Object
{
public:
	::Il2CppArray<::Enum_3_13E1F0BBFE52F5F0>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B72FBE43B450502_CLASS_1_2C5737B12E8A3486__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_4B3C89E34B373969(::MoleMole::DownloadFileInfo* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::DownloadFileInfo*))((::PBYTE)hIl2Cpp + CLASS_1_2B72FBE43B450502_CLASS_1_2C5737B12E8A3486_METHOD_1_4B3C89E34B373969_OFFSET))(this, a1);
	}
};
