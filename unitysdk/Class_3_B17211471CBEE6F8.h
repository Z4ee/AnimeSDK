#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define CLASS_3_B17211471CBEE6F8_METHOD_3_8C07A6A51F854693_OFFSET UNITYSDK_OFFSET(0x1A3FD3B0)
#define CLASS_3_B17211471CBEE6F8_METHOD_3_C6AAD90EBB6BB822_OFFSET UNITYSDK_OFFSET(0x1A3FD370)
#define CLASS_3_B17211471CBEE6F8__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3FD3A0)

inline static constexpr unsigned int Class_3_B17211471CBEE6F8_TypeDefinitionIndex = 23931;

class Class_3_B17211471CBEE6F8 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* NMBGNGMDJOM; // 0x18
	::RPG::GameCore::RtBehaviorFlag GLABDALNODL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B17211471CBEE6F8__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_C6AAD90EBB6BB822(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_B17211471CBEE6F8*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_B17211471CBEE6F8*&))((::PBYTE)hIl2Cpp + CLASS_3_B17211471CBEE6F8_METHOD_3_C6AAD90EBB6BB822_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_8C07A6A51F854693(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_B17211471CBEE6F8* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_B17211471CBEE6F8*))((::PBYTE)hIl2Cpp + CLASS_3_B17211471CBEE6F8_METHOD_3_8C07A6A51F854693_OFFSET))(a1, a2);
	}
};
