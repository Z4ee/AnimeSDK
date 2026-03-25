#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActivityStatisticsType.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_3_784A9644D0FB9A1A_METHOD_3_1F96CACAEB5EDB64_OFFSET UNITYSDK_OFFSET(0x16B12300)
#define CLASS_3_784A9644D0FB9A1A_METHOD_3_FAE3758F0912001F_OFFSET UNITYSDK_OFFSET(0x16B12380)
#define CLASS_3_784A9644D0FB9A1A__CTOR_OFFSET UNITYSDK_OFFSET(0x16B12350)

inline static constexpr unsigned int Class_3_784A9644D0FB9A1A_TypeDefinitionIndex = 21470;

class Class_3_784A9644D0FB9A1A : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_3_2; // 0x18
	::RPG::GameCore::ActivityStatisticsType Field_3_0; // 0x20
	::RPG::GameCore::PropertyModifyFunction Field_3_1; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_784A9644D0FB9A1A__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_1F96CACAEB5EDB64(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_784A9644D0FB9A1A*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_784A9644D0FB9A1A*&))((::PBYTE)hIl2Cpp + CLASS_3_784A9644D0FB9A1A_METHOD_3_1F96CACAEB5EDB64_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_FAE3758F0912001F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_784A9644D0FB9A1A* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_784A9644D0FB9A1A*))((::PBYTE)hIl2Cpp + CLASS_3_784A9644D0FB9A1A_METHOD_3_FAE3758F0912001F_OFFSET))(a1, a2);
	}
};
