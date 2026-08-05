#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class IVideoPlayer; }
namespace System { class Action; }

#define CLASS_1_A02EEEDBDD11A4F9_CLASS_1_25A95DD6BCA562C5_METHOD_1_DB94376260633337_OFFSET UNITYSDK_OFFSET(0x16C08910)
#define CLASS_1_A02EEEDBDD11A4F9_CLASS_1_25A95DD6BCA562C5__CTOR_OFFSET UNITYSDK_OFFSET(0x16C08900)

inline static constexpr unsigned int Class_1_A02EEEDBDD11A4F9_Class_1_25A95DD6BCA562C5_TypeDefinitionIndex = 49555;

class Class_1_A02EEEDBDD11A4F9_Class_1_25A95DD6BCA562C5 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A02EEEDBDD11A4F9_CLASS_1_25A95DD6BCA562C5__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_DB94376260633337(::MoleMole::IVideoPlayer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + CLASS_1_A02EEEDBDD11A4F9_CLASS_1_25A95DD6BCA562C5_METHOD_1_DB94376260633337_OFFSET))(this, a1);
	}
};
