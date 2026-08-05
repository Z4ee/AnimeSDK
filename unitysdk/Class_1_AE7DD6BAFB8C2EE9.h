#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class DownloadFileInfo; }
namespace System { class String; }

#define CLASS_1_AE7DD6BAFB8C2EE9__CTOR_OFFSET UNITYSDK_OFFSET(0x141CDFE0)

inline static constexpr unsigned int Class_1_AE7DD6BAFB8C2EE9_TypeDefinitionIndex = 52106;

class Class_1_AE7DD6BAFB8C2EE9 : public ::System::Object
{
public:
	::System::String* Field_1_6; // 0x10
	::System::String* Field_1_2; // 0x18
	::MoleMole::DownloadFileInfo* Field_1_7; // 0x20
	::System::String* Field_1_1; // 0x28
	::MoleMole::DownloadFileInfo* Field_1_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE7DD6BAFB8C2EE9__CTOR_OFFSET))(this);
	}
};
