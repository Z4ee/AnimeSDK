#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_45376C2A41320C07_METHOD_3_660F257C3D2E4349_OFFSET UNITYSDK_OFFSET(0x1CA826C0)
#define CLASS_3_45376C2A41320C07_METHOD_3_B0676F272208923C_OFFSET UNITYSDK_OFFSET(0x1CA82700)
#define CLASS_3_45376C2A41320C07__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA826F0)

inline static constexpr unsigned int Class_3_45376C2A41320C07_TypeDefinitionIndex = 10235;

class Class_3_45376C2A41320C07 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::System::UInt32>* CMNOBDCMGHE; // 0x18
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* CJALLEAFBOP; // 0x20
	::Il2CppArray<::RPG::GameCore::TaskConfig*>* POOLMDAHFCH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_45376C2A41320C07__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_660F257C3D2E4349(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_45376C2A41320C07*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_45376C2A41320C07*&))((::PBYTE)hIl2Cpp + CLASS_3_45376C2A41320C07_METHOD_3_660F257C3D2E4349_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B0676F272208923C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_45376C2A41320C07* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_45376C2A41320C07*))((::PBYTE)hIl2Cpp + CLASS_3_45376C2A41320C07_METHOD_3_B0676F272208923C_OFFSET))(a1, a2);
	}
};
