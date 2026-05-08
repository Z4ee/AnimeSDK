#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_AC7F03CCD3FA44CC;
namespace MoleMole { class MultipleVideoPlayerManager; }

#define CLASS_3_AC7F03CCD3FA44CC_CLASS_1_692DE17C6D286628_METHOD_1_425AFF51FB23C131_OFFSET UNITYSDK_OFFSET(0x11E592E0)
#define CLASS_3_AC7F03CCD3FA44CC_CLASS_1_692DE17C6D286628__CTOR_OFFSET UNITYSDK_OFFSET(0x11E592D0)

inline static constexpr unsigned int Class_3_AC7F03CCD3FA44CC_Class_1_692DE17C6D286628_TypeDefinitionIndex = 55975;

class Class_3_AC7F03CCD3FA44CC_Class_1_692DE17C6D286628 : public ::System::Object
{
public:
	::Class_3_AC7F03CCD3FA44CC* Field_1_1; // 0x10
	::System::Boolean Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AC7F03CCD3FA44CC_CLASS_1_692DE17C6D286628__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_425AFF51FB23C131(::MoleMole::MultipleVideoPlayerManager* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MultipleVideoPlayerManager*))((::PBYTE)hIl2Cpp + CLASS_3_AC7F03CCD3FA44CC_CLASS_1_692DE17C6D286628_METHOD_1_425AFF51FB23C131_OFFSET))(this, a1);
	}
};
