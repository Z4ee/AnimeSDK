#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/DoActionSource.h"
#include "unitysdk/Struct_2_DF3F1B8142DB3648.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T> class PoolList_1; }

#define CLASS_1_76C7E08195ED7984_CLEAR_OFFSET UNITYSDK_OFFSET(0x18D40F80)
#define CLASS_1_76C7E08195ED7984_METHOD_1_FF42F159977D1AE4_OFFSET UNITYSDK_OFFSET(0x18D40E50)
#define CLASS_1_76C7E08195ED7984__CTOR_OFFSET UNITYSDK_OFFSET(0x18D40FE0)

inline static constexpr unsigned int Class_1_76C7E08195ED7984_TypeDefinitionIndex = 39911;

class Class_1_76C7E08195ED7984 : public ::System::Object
{
public:
	::RPG::PoolList_1<::Struct_2_DF3F1B8142DB3648>* Field_1_0; // 0x10
	::RPG::PoolList_1<::Struct_2_DF3F1B8142DB3648>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76C7E08195ED7984__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_FF42F159977D1AE4(::RPG::Client::LittleGame::FiveDim::DoActionSource a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::DoActionSource))((::PBYTE)hIl2Cpp + CLASS_1_76C7E08195ED7984_METHOD_1_FF42F159977D1AE4_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_76C7E08195ED7984_CLEAR_OFFSET))(this);
	}
};
