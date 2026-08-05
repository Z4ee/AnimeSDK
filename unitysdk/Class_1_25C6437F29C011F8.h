#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigPointScoreCalculatePipe; }

#define CLASS_1_25C6437F29C011F8__CCTOR_OFFSET UNITYSDK_OFFSET(0x14C5EDC0)

inline static constexpr unsigned int Class_1_25C6437F29C011F8_TypeDefinitionIndex = 83729;

class Class_1_25C6437F29C011F8 : public ::System::Object
{
public:
	static ::MoleMole::ConfigPointScoreCalculatePipe** StaticGet_Field_1_0()
	{
		return (::MoleMole::ConfigPointScoreCalculatePipe**)Il2CppClass::FromTypeDefinitionIndex(Class_1_25C6437F29C011F8_TypeDefinitionIndex)->GetStaticField(0x3EE20);
	}
	static ::MoleMole::ConfigPointScoreCalculatePipe** StaticGet_Field_1_1()
	{
		return (::MoleMole::ConfigPointScoreCalculatePipe**)Il2CppClass::FromTypeDefinitionIndex(Class_1_25C6437F29C011F8_TypeDefinitionIndex)->GetStaticField(0x3EE28);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_25C6437F29C011F8__CCTOR_OFFSET))();
	}
};
