#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_FC1D173B0E9199B5_METHOD_3_5433D6C708F8C421_OFFSET UNITYSDK_OFFSET(0x1B480DD0)
#define CLASS_3_FC1D173B0E9199B5_METHOD_3_CC5389287A803194_OFFSET UNITYSDK_OFFSET(0x1B480E20)
#define CLASS_3_FC1D173B0E9199B5__CTOR_OFFSET UNITYSDK_OFFSET(0x1B480E10)

inline static constexpr unsigned int Class_3_FC1D173B0E9199B5_TypeDefinitionIndex = 9928;

class Class_3_FC1D173B0E9199B5 : public ::RPG::GameCore::TaskConfig
{
public:
	::System::UInt32 Field_3_0; // 0x18
	::System::Boolean Field_3_1; // 0x1C
	::System::UInt32 Field_3_2; // 0x20
	::System::UInt32 Field_3_3; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FC1D173B0E9199B5__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_5433D6C708F8C421(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_FC1D173B0E9199B5*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_FC1D173B0E9199B5*&))((::PBYTE)hIl2Cpp + CLASS_3_FC1D173B0E9199B5_METHOD_3_5433D6C708F8C421_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_CC5389287A803194(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_FC1D173B0E9199B5* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_FC1D173B0E9199B5*))((::PBYTE)hIl2Cpp + CLASS_3_FC1D173B0E9199B5_METHOD_3_CC5389287A803194_OFFSET))(a1, a2);
	}
};
