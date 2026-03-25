#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/DoActionSource.h"
#include "unitysdk/Struct_2_A7B9824716EA1FCD.h"
#include "unitysdk/System/Object.h"

namespace RPG { template <typename T> class PoolList_1; }

#define CLASS_1_806321C94BBFF6D2_CLEAR_OFFSET UNITYSDK_OFFSET(0x169F2590)
#define CLASS_1_806321C94BBFF6D2_METHOD_1_C1C660A40A03E0C3_OFFSET UNITYSDK_OFFSET(0x169F24C0)
#define CLASS_1_806321C94BBFF6D2__CTOR_OFFSET UNITYSDK_OFFSET(0x169F25F0)

inline static constexpr unsigned int Class_1_806321C94BBFF6D2_TypeDefinitionIndex = 33351;

class Class_1_806321C94BBFF6D2 : public ::System::Object
{
public:
	::RPG::PoolList_1<::Struct_2_A7B9824716EA1FCD>* Field_1_0; // 0x10
	::RPG::PoolList_1<::Struct_2_A7B9824716EA1FCD>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_806321C94BBFF6D2__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_C1C660A40A03E0C3(::RPG::Client::LittleGame::FiveDim::DoActionSource a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::DoActionSource))((::PBYTE)hIl2Cpp + CLASS_1_806321C94BBFF6D2_METHOD_1_C1C660A40A03E0C3_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_806321C94BBFF6D2_CLEAR_OFFSET))(this);
	}
};
