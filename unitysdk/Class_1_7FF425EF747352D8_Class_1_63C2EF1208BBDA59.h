#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_7FF425EF747352D8_Class_1_883ADE4270632287;
namespace MoleMole::Config { class ConfigEntitySkills; }

#define CLASS_1_7FF425EF747352D8_CLASS_1_63C2EF1208BBDA59_METHOD_1_221B7B7384BF3727_OFFSET UNITYSDK_OFFSET(0xFB05C10)
#define CLASS_1_7FF425EF747352D8_CLASS_1_63C2EF1208BBDA59__CTOR_OFFSET UNITYSDK_OFFSET(0xFB05C00)

inline static constexpr unsigned int Class_1_7FF425EF747352D8_Class_1_63C2EF1208BBDA59_TypeDefinitionIndex = 45546;

class Class_1_7FF425EF747352D8_Class_1_63C2EF1208BBDA59 : public ::System::Object
{
public:
	::Foundation::AssetPath Field_1_0; // 0x10
	::Class_1_7FF425EF747352D8_Class_1_883ADE4270632287* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7FF425EF747352D8_CLASS_1_63C2EF1208BBDA59__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_221B7B7384BF3727(::MoleMole::Config::ConfigEntitySkills* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntitySkills*))((::PBYTE)hIl2Cpp + CLASS_1_7FF425EF747352D8_CLASS_1_63C2EF1208BBDA59_METHOD_1_221B7B7384BF3727_OFFSET))(this, a1);
	}
};
