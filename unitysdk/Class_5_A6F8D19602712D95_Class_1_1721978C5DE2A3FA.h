#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_5_A6F8D19602712D95;
namespace MoleMole { class IVideoPlayer; }
namespace System { template <typename T> class Action_1; }

#define CLASS_5_A6F8D19602712D95_CLASS_1_1721978C5DE2A3FA_METHOD_1_3EAE0F6D775220FA_OFFSET UNITYSDK_OFFSET(0x10B02150)
#define CLASS_5_A6F8D19602712D95_CLASS_1_1721978C5DE2A3FA__CTOR_OFFSET UNITYSDK_OFFSET(0x10B02140)

inline static constexpr unsigned int Class_5_A6F8D19602712D95_Class_1_1721978C5DE2A3FA_TypeDefinitionIndex = 63071;

class Class_5_A6F8D19602712D95_Class_1_1721978C5DE2A3FA : public ::System::Object
{
public:
	::Class_5_A6F8D19602712D95* Field_1_0; // 0x10
	::System::Action_1<::MoleMole::IVideoPlayer*>* Field_1_7; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_CLASS_1_1721978C5DE2A3FA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3EAE0F6D775220FA(::MoleMole::IVideoPlayer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + CLASS_5_A6F8D19602712D95_CLASS_1_1721978C5DE2A3FA_METHOD_1_3EAE0F6D775220FA_OFFSET))(this, a1);
	}
};
