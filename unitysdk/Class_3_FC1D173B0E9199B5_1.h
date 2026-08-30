#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_FC1D173B0E9199B5_1_METHOD_3_5433D6C708F8C421_OFFSET UNITYSDK_OFFSET(0x1CFC4550)
#define CLASS_3_FC1D173B0E9199B5_1_METHOD_3_CC5389287A803194_OFFSET UNITYSDK_OFFSET(0x1CFC4590)
#define CLASS_3_FC1D173B0E9199B5_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFC4580)

inline static constexpr unsigned int Class_3_FC1D173B0E9199B5_1_TypeDefinitionIndex = 10216;

class Class_3_FC1D173B0E9199B5_1 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::UInt32 DFFLADLLADD; // 0x18
	::System::UInt32 DKPOHCDMHBF; // 0x1C
	::System::Boolean DMKJAJLNEBK; // 0x20
	::System::UInt32 IHALCLABNOJ; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FC1D173B0E9199B5_1__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_5433D6C708F8C421(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_FC1D173B0E9199B5_1*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_FC1D173B0E9199B5_1*&))((::PBYTE)hIl2Cpp + CLASS_3_FC1D173B0E9199B5_1_METHOD_3_5433D6C708F8C421_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_CC5389287A803194(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_FC1D173B0E9199B5_1* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_FC1D173B0E9199B5_1*))((::PBYTE)hIl2Cpp + CLASS_3_FC1D173B0E9199B5_1_METHOD_3_CC5389287A803194_OFFSET))(a1, a2);
	}
};
