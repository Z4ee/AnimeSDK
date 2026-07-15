#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RtSubModifierData; }

#define CLASS_3_BF0209E2F29D1F5A_METHOD_3_79D2339C9987D6C4_OFFSET UNITYSDK_OFFSET(0x1B915FD0)
#define CLASS_3_BF0209E2F29D1F5A_METHOD_3_9EA7A67A8BC52A5F_OFFSET UNITYSDK_OFFSET(0x1B916010)
#define CLASS_3_BF0209E2F29D1F5A__CTOR_OFFSET UNITYSDK_OFFSET(0x1B916000)

inline static constexpr unsigned int Class_3_BF0209E2F29D1F5A_TypeDefinitionIndex = 23332;

class Class_3_BF0209E2F29D1F5A : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::RPG::GameCore::RtSubModifierData*>* Field_3_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BF0209E2F29D1F5A__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_79D2339C9987D6C4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_BF0209E2F29D1F5A*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_BF0209E2F29D1F5A*&))((::PBYTE)hIl2Cpp + CLASS_3_BF0209E2F29D1F5A_METHOD_3_79D2339C9987D6C4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9EA7A67A8BC52A5F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_BF0209E2F29D1F5A* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_BF0209E2F29D1F5A*))((::PBYTE)hIl2Cpp + CLASS_3_BF0209E2F29D1F5A_METHOD_3_9EA7A67A8BC52A5F_OFFSET))(a1, a2);
	}
};
