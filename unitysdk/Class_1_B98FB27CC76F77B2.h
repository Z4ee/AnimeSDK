#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MatchThreeTemplateType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_B98FB27CC76F77B2__CTOR_OFFSET UNITYSDK_OFFSET(0x1A017F00)

inline static constexpr unsigned int Class_1_B98FB27CC76F77B2_TypeDefinitionIndex = 40069;

class Class_1_B98FB27CC76F77B2 : public ::System::Object
{
public:
	::RPG::GameCore::MatchThreeTemplateType Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B98FB27CC76F77B2__CTOR_OFFSET))(this);
	}
};
