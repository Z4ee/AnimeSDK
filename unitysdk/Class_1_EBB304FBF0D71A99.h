#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimChestState.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimChestConfig; }
namespace System { class String; }

#define CLASS_1_EBB304FBF0D71A99__CTOR_OFFSET UNITYSDK_OFFSET(0x1C14AD30)

inline static constexpr unsigned int Class_1_EBB304FBF0D71A99_TypeDefinitionIndex = 41838;

class Class_1_EBB304FBF0D71A99 : public ::System::Object
{
public:
	::System::String* PJNDKCMPMAO; // 0x10
	::RPG::GameCore::FiveDimChestConfig* EABKOHGCHFP; // 0x18
	::RPG::GameCore::FiveDimChestState MEPFOEEGBEA; // 0x20
	::System::Int32 MNMHMECGDAK; // 0x24
	::System::Boolean EDCNKGHPHFC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBB304FBF0D71A99__CTOR_OFFSET))(this);
	}
};
