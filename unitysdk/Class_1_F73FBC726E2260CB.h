#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8B8F03295FD087BE;
namespace RPG::GameCore { class SpecialAvatarRow; }

#define CLASS_1_F73FBC726E2260CB_METHOD_1_106686C52A79476B_OFFSET UNITYSDK_OFFSET(0x1586C520)
#define CLASS_1_F73FBC726E2260CB__CTOR_OFFSET UNITYSDK_OFFSET(0x1586C5C0)

inline static constexpr unsigned int Class_1_F73FBC726E2260CB_TypeDefinitionIndex = 62886;

class Class_1_F73FBC726E2260CB : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F73FBC726E2260CB__CTOR_OFFSET))(this);
	}

	::Class_1_8B8F03295FD087BE* Method_1_106686C52A79476B(::RPG::GameCore::SpecialAvatarRow* a1)
	{
		return ((::Class_1_8B8F03295FD087BE*(*)(::PVOID, ::RPG::GameCore::SpecialAvatarRow*))((::PBYTE)hIl2Cpp + CLASS_1_F73FBC726E2260CB_METHOD_1_106686C52A79476B_OFFSET))(this, a1);
	}
};
