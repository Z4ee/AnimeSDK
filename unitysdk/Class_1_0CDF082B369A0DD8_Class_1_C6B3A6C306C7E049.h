#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigMaterialPropertyModifierMap; }

#define CLASS_1_0CDF082B369A0DD8_CLASS_1_C6B3A6C306C7E049_METHOD_1_C3EF911094DBF0DF_OFFSET UNITYSDK_OFFSET(0x168067A0)
#define CLASS_1_0CDF082B369A0DD8_CLASS_1_C6B3A6C306C7E049__CTOR_OFFSET UNITYSDK_OFFSET(0x16806790)

inline static constexpr unsigned int Class_1_0CDF082B369A0DD8_Class_1_C6B3A6C306C7E049_TypeDefinitionIndex = 71541;

class Class_1_0CDF082B369A0DD8_Class_1_C6B3A6C306C7E049 : public ::System::Object
{
public:
	::Foundation::AssetPath Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0CDF082B369A0DD8_CLASS_1_C6B3A6C306C7E049__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C3EF911094DBF0DF(::MoleMole::Config::ConfigMaterialPropertyModifierMap* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMaterialPropertyModifierMap*))((::PBYTE)hIl2Cpp + CLASS_1_0CDF082B369A0DD8_CLASS_1_C6B3A6C306C7E049_METHOD_1_C3EF911094DBF0DF_OFFSET))(this, a1);
	}
};
