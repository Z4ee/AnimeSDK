#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigAbilityTargetData; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_8F7C5537073E374C___C_METHOD_1_EAF15542B25540F8_OFFSET UNITYSDK_OFFSET(0x13383250)
#define CLASS_1_8F7C5537073E374C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13383200)
#define CLASS_1_8F7C5537073E374C___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13383240)

inline static constexpr unsigned int Class_1_8F7C5537073E374C___c_TypeDefinitionIndex = 47165;

class Class_1_8F7C5537073E374C___c : public ::System::Object
{
public:
	static ::Class_1_8F7C5537073E374C___c** StaticGet___9()
	{
		return (::Class_1_8F7C5537073E374C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8F7C5537073E374C___c_TypeDefinitionIndex)->GetStaticField(0x32B20);
	}
	static ::System::Comparison_1<::MoleMole::Config::ConfigAbilityTargetData*>** StaticGet___9__3_0()
	{
		return (::System::Comparison_1<::MoleMole::Config::ConfigAbilityTargetData*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8F7C5537073E374C___c_TypeDefinitionIndex)->GetStaticField(0x32B28);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8F7C5537073E374C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F7C5537073E374C___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_EAF15542B25540F8(::MoleMole::Config::ConfigAbilityTargetData* a1, ::MoleMole::Config::ConfigAbilityTargetData* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::Config::ConfigAbilityTargetData*, ::MoleMole::Config::ConfigAbilityTargetData*))((::PBYTE)hIl2Cpp + CLASS_1_8F7C5537073E374C___C_METHOD_1_EAF15542B25540F8_OFFSET))(this, a1, a2);
	}
};
