#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class IVideoPlayer; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_62DF67754B2A7986_CLASS_1_3B0D2979BC7843E9__CTOR_OFFSET UNITYSDK_OFFSET(0xFD579D0)

inline static constexpr unsigned int Class_2_62DF67754B2A7986_Class_1_3B0D2979BC7843E9_TypeDefinitionIndex = 82727;

class Class_2_62DF67754B2A7986_Class_1_3B0D2979BC7843E9 : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::MoleMole::IVideoPlayer* Field_1_10; // 0x18
	::System::Action* Field_1_9; // 0x20
	::System::Action* Field_1_3; // 0x28
	::System::Action* Field_1_8; // 0x30
	::System::Action_1<::MoleMole::IVideoPlayer*>* Field_1_4; // 0x38
	::System::Action_1<::MoleMole::IVideoPlayer*>* Field_1_5; // 0x40
	::System::Boolean Field_1_2; // 0x48
	::System::Boolean Field_1_7; // 0x49
	::System::Int32 Field_1_6; // 0x4C
	::System::Single Field_1_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62DF67754B2A7986_CLASS_1_3B0D2979BC7843E9__CTOR_OFFSET))(this);
	}
};
