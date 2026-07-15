#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DialogueGroupRow; }

#define CLASS_1_AE00FC2B4A6D6E8C_METHOD_1_C9A9E35511EDAC8C_OFFSET UNITYSDK_OFFSET(0x15F6F2A0)
#define CLASS_1_AE00FC2B4A6D6E8C_METHOD_1_CE2522F1183A8062_OFFSET UNITYSDK_OFFSET(0x15F6EF70)

inline static constexpr unsigned int Class_1_AE00FC2B4A6D6E8C_TypeDefinitionIndex = 53960;

class Class_1_AE00FC2B4A6D6E8C : public ::System::Object
{
public:
	static ::System::Void Method_1_CE2522F1183A8062(::RPG::GameCore::DialogueGroupRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::DialogueGroupRow*))((::PBYTE)hIl2Cpp + CLASS_1_AE00FC2B4A6D6E8C_METHOD_1_CE2522F1183A8062_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_C9A9E35511EDAC8C(::RPG::GameCore::DialogueGroupRow* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::DialogueGroupRow*))((::PBYTE)hIl2Cpp + CLASS_1_AE00FC2B4A6D6E8C_METHOD_1_C9A9E35511EDAC8C_OFFSET))(a1);
	}
};
