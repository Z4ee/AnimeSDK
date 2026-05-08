#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigBattlePhotoActivity; }
namespace System { class Action; }

#define CLASS_1_4F1D452C628E12FE_CLASS_1_F97078B8505BCF05_METHOD_1_C15CE41A58FC9DB2_OFFSET UNITYSDK_OFFSET(0x1329E640)
#define CLASS_1_4F1D452C628E12FE_CLASS_1_F97078B8505BCF05__CTOR_OFFSET UNITYSDK_OFFSET(0x1329E630)

inline static constexpr unsigned int Class_1_4F1D452C628E12FE_Class_1_F97078B8505BCF05_TypeDefinitionIndex = 38358;

class Class_1_4F1D452C628E12FE_Class_1_F97078B8505BCF05 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F1D452C628E12FE_CLASS_1_F97078B8505BCF05__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C15CE41A58FC9DB2(::MoleMole::Config::ConfigBattlePhotoActivity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigBattlePhotoActivity*))((::PBYTE)hIl2Cpp + CLASS_1_4F1D452C628E12FE_CLASS_1_F97078B8505BCF05_METHOD_1_C15CE41A58FC9DB2_OFFSET))(this, a1);
	}
};
