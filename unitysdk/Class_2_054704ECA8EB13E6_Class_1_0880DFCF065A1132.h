#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_054704ECA8EB13E6;
namespace MoleMole { class IVideoPlayer; }
namespace System { class Action; }

#define CLASS_2_054704ECA8EB13E6_CLASS_1_0880DFCF065A1132_METHOD_1_84B84FEE379A0468_OFFSET UNITYSDK_OFFSET(0xF7CED80)
#define CLASS_2_054704ECA8EB13E6_CLASS_1_0880DFCF065A1132__CTOR_OFFSET UNITYSDK_OFFSET(0xF7CED70)

inline static constexpr unsigned int Class_2_054704ECA8EB13E6_Class_1_0880DFCF065A1132_TypeDefinitionIndex = 65526;

class Class_2_054704ECA8EB13E6_Class_1_0880DFCF065A1132 : public ::System::Object
{
public:
	::Class_2_054704ECA8EB13E6* Field_1_0; // 0x10
	::System::Action* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_054704ECA8EB13E6_CLASS_1_0880DFCF065A1132__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_84B84FEE379A0468(::MoleMole::IVideoPlayer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + CLASS_2_054704ECA8EB13E6_CLASS_1_0880DFCF065A1132_METHOD_1_84B84FEE379A0468_OFFSET))(this, a1);
	}
};
