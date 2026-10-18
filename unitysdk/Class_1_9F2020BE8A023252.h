#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CE573B7713B36D39;
namespace RPG::GameCore { class FiveDimMusicDirectorComponentConfig; }

#define CLASS_1_9F2020BE8A023252__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA6E320)

inline static constexpr unsigned int Class_1_9F2020BE8A023252_TypeDefinitionIndex = 43402;

class Class_1_9F2020BE8A023252 : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimMusicDirectorComponentConfig* EABKOHGCHFP; // 0x10
	::Class_1_CE573B7713B36D39* MEPFOEEGBEA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F2020BE8A023252__CTOR_OFFSET))(this);
	}
};
