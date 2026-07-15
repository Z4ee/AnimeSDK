#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_72324A39E8AB0D12_METHOD_1_C099BFAC7CD3CF58_OFFSET UNITYSDK_OFFSET(0x17D7F460)
#define CLASS_1_72324A39E8AB0D12_METHOD_1_C4BFBB1BE6C0430A_OFFSET UNITYSDK_OFFSET(0x17D7F3C0)
#define CLASS_1_72324A39E8AB0D12__CTOR_OFFSET UNITYSDK_OFFSET(0x17D7F450)

inline static constexpr unsigned int Class_1_72324A39E8AB0D12_TypeDefinitionIndex = 59772;

class Class_1_72324A39E8AB0D12 : public ::System::Object
{
public:
	static ::Class_1_72324A39E8AB0D12** StaticGet_Field_1_0()
	{
		return (::Class_1_72324A39E8AB0D12**)Il2CppClass::FromTypeDefinitionIndex(Class_1_72324A39E8AB0D12_TypeDefinitionIndex)->GetStaticField(0x5E590);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_72324A39E8AB0D12__CTOR_OFFSET))(this);
	}

	static ::Class_1_72324A39E8AB0D12* Method_1_C4BFBB1BE6C0430A()
	{
		return ((::Class_1_72324A39E8AB0D12*(*)())((::PBYTE)hIl2Cpp + CLASS_1_72324A39E8AB0D12_METHOD_1_C4BFBB1BE6C0430A_OFFSET))();
	}

	::RPG::GameCore::FixPoint Method_1_C099BFAC7CD3CF58(::RPG::GameCore::FixPoint a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_72324A39E8AB0D12_METHOD_1_C099BFAC7CD3CF58_OFFSET))(this, a1);
	}
};
