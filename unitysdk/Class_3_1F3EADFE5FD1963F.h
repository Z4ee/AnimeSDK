#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SetJumpEnergyType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_3_1F3EADFE5FD1963F_METHOD_3_387C40D074FB1980_OFFSET UNITYSDK_OFFSET(0x16D86BA0)
#define CLASS_3_1F3EADFE5FD1963F_METHOD_3_8C07A6A51F854693_OFFSET UNITYSDK_OFFSET(0x16D86C20)
#define CLASS_3_1F3EADFE5FD1963F__CTOR_OFFSET UNITYSDK_OFFSET(0x16D86BF0)

inline static constexpr unsigned int Class_3_1F3EADFE5FD1963F_TypeDefinitionIndex = 19656;

class Class_3_1F3EADFE5FD1963F : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_3_1; // 0x18
	::RPG::GameCore::SetJumpEnergyType Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1F3EADFE5FD1963F__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_387C40D074FB1980(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_1F3EADFE5FD1963F*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_1F3EADFE5FD1963F*&))((::PBYTE)hIl2Cpp + CLASS_3_1F3EADFE5FD1963F_METHOD_3_387C40D074FB1980_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_8C07A6A51F854693(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_1F3EADFE5FD1963F* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_1F3EADFE5FD1963F*))((::PBYTE)hIl2Cpp + CLASS_3_1F3EADFE5FD1963F_METHOD_3_8C07A6A51F854693_OFFSET))(a1, a2);
	}
};
