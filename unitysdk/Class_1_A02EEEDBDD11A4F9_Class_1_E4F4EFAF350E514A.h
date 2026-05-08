#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class IVideoPlayer; }
namespace System { class Action; }

#define CLASS_1_A02EEEDBDD11A4F9_CLASS_1_E4F4EFAF350E514A_METHOD_1_0908F380FE29BFC0_OFFSET UNITYSDK_OFFSET(0x12CCE2B0)
#define CLASS_1_A02EEEDBDD11A4F9_CLASS_1_E4F4EFAF350E514A__CTOR_OFFSET UNITYSDK_OFFSET(0x12CCE2A0)

inline static constexpr unsigned int Class_1_A02EEEDBDD11A4F9_Class_1_E4F4EFAF350E514A_TypeDefinitionIndex = 81270;

class Class_1_A02EEEDBDD11A4F9_Class_1_E4F4EFAF350E514A : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A02EEEDBDD11A4F9_CLASS_1_E4F4EFAF350E514A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0908F380FE29BFC0(::MoleMole::IVideoPlayer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + CLASS_1_A02EEEDBDD11A4F9_CLASS_1_E4F4EFAF350E514A_METHOD_1_0908F380FE29BFC0_OFFSET))(this, a1);
	}
};
