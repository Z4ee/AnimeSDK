#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_2.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_3_8AE8BAD303600A2F_METHOD_3_5FDBC3ED1A2E374E_OFFSET UNITYSDK_OFFSET(0x1D296830)
#define CLASS_3_8AE8BAD303600A2F_METHOD_3_FAE3758F0912001F_OFFSET UNITYSDK_OFFSET(0x1D296870)
#define CLASS_3_8AE8BAD303600A2F__CTOR_OFFSET UNITYSDK_OFFSET(0x1D296860)

inline static constexpr unsigned int Class_3_8AE8BAD303600A2F_TypeDefinitionIndex = 19916;

class Class_3_8AE8BAD303600A2F : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* MNDFOPKBHKP; // 0x18
	::RPG::GameCore::StringHash BBBAMBGCGPL; // 0x20
	::Enum_3_ED790DAC948A65A9_2 MCLLALGABAB; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8AE8BAD303600A2F__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_5FDBC3ED1A2E374E(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_8AE8BAD303600A2F*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_8AE8BAD303600A2F*&))((::PBYTE)hIl2Cpp + CLASS_3_8AE8BAD303600A2F_METHOD_3_5FDBC3ED1A2E374E_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_FAE3758F0912001F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_8AE8BAD303600A2F* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_8AE8BAD303600A2F*))((::PBYTE)hIl2Cpp + CLASS_3_8AE8BAD303600A2F_METHOD_3_FAE3758F0912001F_OFFSET))(a1, a2);
	}
};
