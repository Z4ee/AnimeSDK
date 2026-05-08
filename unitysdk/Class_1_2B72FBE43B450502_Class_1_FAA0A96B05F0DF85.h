#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class DownloadFileInfo; }
namespace System { class String; }

#define CLASS_1_2B72FBE43B450502_CLASS_1_FAA0A96B05F0DF85_METHOD_1_4FD85048808AE419_OFFSET UNITYSDK_OFFSET(0xDB4C350)
#define CLASS_1_2B72FBE43B450502_CLASS_1_FAA0A96B05F0DF85__CTOR_OFFSET UNITYSDK_OFFSET(0xDB4C340)

inline static constexpr unsigned int Class_1_2B72FBE43B450502_Class_1_FAA0A96B05F0DF85_TypeDefinitionIndex = 76084;

class Class_1_2B72FBE43B450502_Class_1_FAA0A96B05F0DF85 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B72FBE43B450502_CLASS_1_FAA0A96B05F0DF85__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_4FD85048808AE419(::MoleMole::DownloadFileInfo* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::DownloadFileInfo*))((::PBYTE)hIl2Cpp + CLASS_1_2B72FBE43B450502_CLASS_1_FAA0A96B05F0DF85_METHOD_1_4FD85048808AE419_OFFSET))(this, a1);
	}
};
