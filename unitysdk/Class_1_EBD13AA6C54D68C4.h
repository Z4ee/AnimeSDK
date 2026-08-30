#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LevelDialogInfo; }
namespace System { class String; }

#define CLASS_1_EBD13AA6C54D68C4_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16374920)
#define CLASS_1_EBD13AA6C54D68C4__CTOR_OFFSET UNITYSDK_OFFSET(0x16374990)

inline static constexpr unsigned int Class_1_EBD13AA6C54D68C4_TypeDefinitionIndex = 65722;

class Class_1_EBD13AA6C54D68C4 : public ::System::Object
{
public:
	::System::String* OJDMHBKCEEM; // 0x10
	::RPG::GameCore::LevelDialogInfo* ONHHCMNCOLI; // 0x18
	::System::String* KIAOBNHIAPO; // 0x20
	::System::UInt32 DLIBPIIIAIB; // 0x28
	::System::Boolean PDNGFBJEDCL; // 0x2C
	::System::Boolean CFEFFDMCKKO; // 0x2D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBD13AA6C54D68C4__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBD13AA6C54D68C4_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
