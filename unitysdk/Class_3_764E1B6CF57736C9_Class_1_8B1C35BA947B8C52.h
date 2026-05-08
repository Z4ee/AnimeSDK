#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_764E1B6CF57736C9;
namespace MoleMole { class IVideoPlayer; }
namespace System { class Action; }

#define CLASS_3_764E1B6CF57736C9_CLASS_1_8B1C35BA947B8C52_METHOD_1_78921921D4A69B97_OFFSET UNITYSDK_OFFSET(0x139CF7E0)
#define CLASS_3_764E1B6CF57736C9_CLASS_1_8B1C35BA947B8C52__CTOR_OFFSET UNITYSDK_OFFSET(0x139CF7D0)

inline static constexpr unsigned int Class_3_764E1B6CF57736C9_Class_1_8B1C35BA947B8C52_TypeDefinitionIndex = 53204;

class Class_3_764E1B6CF57736C9_Class_1_8B1C35BA947B8C52 : public ::System::Object
{
public:
	::Class_3_764E1B6CF57736C9* Field_1_1; // 0x10
	::System::Action* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_764E1B6CF57736C9_CLASS_1_8B1C35BA947B8C52__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_78921921D4A69B97(::MoleMole::IVideoPlayer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + CLASS_3_764E1B6CF57736C9_CLASS_1_8B1C35BA947B8C52_METHOD_1_78921921D4A69B97_OFFSET))(this, a1);
	}
};
