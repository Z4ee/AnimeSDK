#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_E03B78B927A9E70C_4.h"
#include "unitysdk/System/Object.h"

class Class_1_DAD235E7E82A1F67;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_4A1B4C49479E611D_METHOD_1_36D3F3291CA04525_1_OFFSET UNITYSDK_OFFSET(0x14E5DD80)
#define CLASS_1_4A1B4C49479E611D_METHOD_1_36D3F3291CA04525_OFFSET UNITYSDK_OFFSET(0x14E5DBE0)
#define CLASS_1_4A1B4C49479E611D_METHOD_1_71532C62A7CC4C0D_OFFSET UNITYSDK_OFFSET(0x14E5DF10)
#define CLASS_1_4A1B4C49479E611D__CTOR_OFFSET UNITYSDK_OFFSET(0x14E5E040)

inline static constexpr unsigned int Class_1_4A1B4C49479E611D_TypeDefinitionIndex = 75871;

class Class_1_4A1B4C49479E611D : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4A1B4C49479E611D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_36D3F3291CA04525(::Class_1_DAD235E7E82A1F67* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DAD235E7E82A1F67*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_4A1B4C49479E611D_METHOD_1_36D3F3291CA04525_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_36D3F3291CA04525_1(::Class_1_DAD235E7E82A1F67* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DAD235E7E82A1F67*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_4A1B4C49479E611D_METHOD_1_36D3F3291CA04525_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_71532C62A7CC4C0D(::Class_1_DAD235E7E82A1F67* a1, ::Struct_2_E03B78B927A9E70C_4 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DAD235E7E82A1F67*, ::Struct_2_E03B78B927A9E70C_4))((::PBYTE)hIl2Cpp + CLASS_1_4A1B4C49479E611D_METHOD_1_71532C62A7CC4C0D_OFFSET))(this, a1, a2);
	}
};
