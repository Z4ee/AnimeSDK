#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SilverWolf999UltraSkillUIState.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_3_FE094EB2398453F4_METHOD_3_1F96CACAEB5EDB64_OFFSET UNITYSDK_OFFSET(0x181FB1B0)
#define CLASS_3_FE094EB2398453F4_METHOD_3_FAE3758F0912001F_OFFSET UNITYSDK_OFFSET(0x181FB230)
#define CLASS_3_FE094EB2398453F4__CTOR_OFFSET UNITYSDK_OFFSET(0x181FB200)

inline static constexpr unsigned int Class_3_FE094EB2398453F4_TypeDefinitionIndex = 22113;

class Class_3_FE094EB2398453F4 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* Field_3_1; // 0x18
	::RPG::GameCore::DynamicFloat* Field_3_2; // 0x20
	::RPG::GameCore::SilverWolf999UltraSkillUIState Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FE094EB2398453F4__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_1F96CACAEB5EDB64(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_FE094EB2398453F4*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_FE094EB2398453F4*&))((::PBYTE)hIl2Cpp + CLASS_3_FE094EB2398453F4_METHOD_3_1F96CACAEB5EDB64_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_FAE3758F0912001F(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_FE094EB2398453F4* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_FE094EB2398453F4*))((::PBYTE)hIl2Cpp + CLASS_3_FE094EB2398453F4_METHOD_3_FAE3758F0912001F_OFFSET))(a1, a2);
	}
};
