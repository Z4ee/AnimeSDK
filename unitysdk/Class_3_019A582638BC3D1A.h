#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_019A582638BC3D1A_METHOD_3_79D2339C9987D6C4_OFFSET UNITYSDK_OFFSET(0x1D43F020)
#define CLASS_3_019A582638BC3D1A_METHOD_3_9EA7A67A8BC52A5F_OFFSET UNITYSDK_OFFSET(0x1D43F060)
#define CLASS_3_019A582638BC3D1A__CTOR_OFFSET UNITYSDK_OFFSET(0x1D43F050)

inline static constexpr unsigned int Class_3_019A582638BC3D1A_TypeDefinitionIndex = 10205;

class Class_3_019A582638BC3D1A : public ::RPG::GameCore::TaskConfig
{
public:
	::Il2CppArray<::System::UInt32>* FEEPJOMGLIP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_019A582638BC3D1A__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_79D2339C9987D6C4(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_019A582638BC3D1A*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_019A582638BC3D1A*&))((::PBYTE)hIl2Cpp + CLASS_3_019A582638BC3D1A_METHOD_3_79D2339C9987D6C4_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_9EA7A67A8BC52A5F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_019A582638BC3D1A* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_019A582638BC3D1A*))((::PBYTE)hIl2Cpp + CLASS_3_019A582638BC3D1A_METHOD_3_9EA7A67A8BC52A5F_OFFSET))(a1, a2);
	}
};
