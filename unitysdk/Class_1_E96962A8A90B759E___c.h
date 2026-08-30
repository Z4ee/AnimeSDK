#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LoadingStratageConfigRow; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_E96962A8A90B759E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18ABA320)
#define CLASS_1_E96962A8A90B759E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18ABA350)
#define CLASS_1_E96962A8A90B759E___C___SELECTLOADINGSTRATEGYBYCONDITION_B__7_0_OFFSET UNITYSDK_OFFSET(0x18ABA360)

inline static constexpr unsigned int Class_1_E96962A8A90B759E___c_TypeDefinitionIndex = 60564;

class Class_1_E96962A8A90B759E___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::RPG::GameCore::LoadingStratageConfigRow*>** StaticGet___9__7_0()
	{
		return (::System::Comparison_1<::RPG::GameCore::LoadingStratageConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E96962A8A90B759E___c_TypeDefinitionIndex)->GetStaticField(0x673D0);
	}
	static ::Class_1_E96962A8A90B759E___c** StaticGet___9()
	{
		return (::Class_1_E96962A8A90B759E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E96962A8A90B759E___c_TypeDefinitionIndex)->GetStaticField(0x673D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E96962A8A90B759E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E96962A8A90B759E___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __SelectLoadingStrategyByCondition_b__7_0(::RPG::GameCore::LoadingStratageConfigRow* a1, ::RPG::GameCore::LoadingStratageConfigRow* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::LoadingStratageConfigRow*, ::RPG::GameCore::LoadingStratageConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_E96962A8A90B759E___C___SELECTLOADINGSTRATEGYBYCONDITION_B__7_0_OFFSET))(this, a1, a2);
	}
};
