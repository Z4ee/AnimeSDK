#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED790DAC948A65A9_2.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_A16A53BCE99E4A94_METHOD_3_8C07A6A51F854693_OFFSET UNITYSDK_OFFSET(0x1CCF1A50)
#define CLASS_3_A16A53BCE99E4A94_METHOD_3_C6AAD90EBB6BB822_OFFSET UNITYSDK_OFFSET(0x1CCF1A10)
#define CLASS_3_A16A53BCE99E4A94__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCF1A40)

inline static constexpr unsigned int Class_3_A16A53BCE99E4A94_TypeDefinitionIndex = 19917;

class Class_3_A16A53BCE99E4A94 : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::StringHash BBBAMBGCGPL; // 0x18
	::Enum_3_ED790DAC948A65A9_2 MCLLALGABAB; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A16A53BCE99E4A94__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_C6AAD90EBB6BB822(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_A16A53BCE99E4A94*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_A16A53BCE99E4A94*&))((::PBYTE)hIl2Cpp + CLASS_3_A16A53BCE99E4A94_METHOD_3_C6AAD90EBB6BB822_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_8C07A6A51F854693(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_A16A53BCE99E4A94* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_A16A53BCE99E4A94*))((::PBYTE)hIl2Cpp + CLASS_3_A16A53BCE99E4A94_METHOD_3_8C07A6A51F854693_OFFSET))(a1, a2);
	}
};
