#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_617;
namespace RPG::GameCore { class TextDynamicParamBase; }

#define CLASS_1_FD539970FDAA9D5C_3_METHOD_1_531C61C922828528_OFFSET UNITYSDK_OFFSET(0x116FD660)
#define CLASS_1_FD539970FDAA9D5C_3__CTOR_OFFSET UNITYSDK_OFFSET(0x116FD750)

inline static constexpr unsigned int Class_1_FD539970FDAA9D5C_3_TypeDefinitionIndex = 64460;

class Class_1_FD539970FDAA9D5C_3 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD539970FDAA9D5C_3__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_617* Method_1_531C61C922828528(::RPG::GameCore::TextDynamicParamBase* a1)
	{
		return ((::Class_0_16E4307DCC419505_617*(*)(::PVOID, ::RPG::GameCore::TextDynamicParamBase*))((::PBYTE)hIl2Cpp + CLASS_1_FD539970FDAA9D5C_3_METHOD_1_531C61C922828528_OFFSET))(this, a1);
	}
};
