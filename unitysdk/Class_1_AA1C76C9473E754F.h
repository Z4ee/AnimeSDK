#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_32BC7AB644206538.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class FiveDimCrystalConfig; }

#define CLASS_1_AA1C76C9473E754F_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C3CC4A0)
#define CLASS_1_AA1C76C9473E754F__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3CC4F0)

inline static constexpr unsigned int Class_1_AA1C76C9473E754F_TypeDefinitionIndex = 41873;

class Class_1_AA1C76C9473E754F : public ::System::Object
{
public:
	::Struct_2_32BC7AB644206538 BPAPBAFOMCH; // 0x10
	::RPG::GameCore::FiveDimCrystalConfig* EABKOHGCHFP; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA1C76C9473E754F__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA1C76C9473E754F_CLEAR_OFFSET))(this);
	}
};
