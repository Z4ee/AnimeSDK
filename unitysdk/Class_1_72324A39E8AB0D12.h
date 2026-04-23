#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_72324A39E8AB0D12_METHOD_1_9C06C768B25E4E13_OFFSET UNITYSDK_OFFSET(0x1197DFE0)
#define CLASS_1_72324A39E8AB0D12_METHOD_1_C099BFAC7CD3CF58_OFFSET UNITYSDK_OFFSET(0x1197E060)
#define CLASS_1_72324A39E8AB0D12__CTOR_OFFSET UNITYSDK_OFFSET(0x1197E050)

inline static constexpr unsigned int Class_1_72324A39E8AB0D12_TypeDefinitionIndex = 57711;

class Class_1_72324A39E8AB0D12 : public ::System::Object
{
public:
	static ::Class_1_72324A39E8AB0D12** StaticGet_Field_1_0()
	{
		return (::Class_1_72324A39E8AB0D12**)Il2CppClass::FromTypeDefinitionIndex(Class_1_72324A39E8AB0D12_TypeDefinitionIndex)->GetStaticField(0x2F650);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72324A39E8AB0D12__CTOR_OFFSET))(this);
	}

	static ::Class_1_72324A39E8AB0D12* Method_1_9C06C768B25E4E13()
	{
		return ((::Class_1_72324A39E8AB0D12*(*)())((::PBYTE)hIl2Cpp + CLASS_1_72324A39E8AB0D12_METHOD_1_9C06C768B25E4E13_OFFSET))();
	}

	::RPG::GameCore::FixPoint Method_1_C099BFAC7CD3CF58(::RPG::GameCore::FixPoint a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_72324A39E8AB0D12_METHOD_1_C099BFAC7CD3CF58_OFFSET))(this, a1);
	}
};
