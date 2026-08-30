#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_3E99D33E36863945_METHOD_3_660F257C3D2E4349_OFFSET UNITYSDK_OFFSET(0x1D6C4500)
#define CLASS_3_3E99D33E36863945_METHOD_3_B0676F272208923C_OFFSET UNITYSDK_OFFSET(0x1D6C4540)
#define CLASS_3_3E99D33E36863945__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C4530)

inline static constexpr unsigned int Class_3_3E99D33E36863945_TypeDefinitionIndex = 21258;

class Class_3_3E99D33E36863945 : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::System::UInt32>* EEBEGPJMGPD; // 0x18
	::Il2CppArray<::System::Single>* AEDJHCMLLND; // 0x20
	::System::UInt32 CMNOEFFFNPE; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3E99D33E36863945__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_660F257C3D2E4349(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_3E99D33E36863945*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_3E99D33E36863945*&))((::PBYTE)hIl2Cpp + CLASS_3_3E99D33E36863945_METHOD_3_660F257C3D2E4349_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_B0676F272208923C(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_3E99D33E36863945* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_3E99D33E36863945*))((::PBYTE)hIl2Cpp + CLASS_3_3E99D33E36863945_METHOD_3_B0676F272208923C_OFFSET))(a1, a2);
	}
};
