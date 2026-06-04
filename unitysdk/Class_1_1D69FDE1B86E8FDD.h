#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C2130EF116E8AE29;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class FiveDimDanmuManagerConfig; }
namespace RPG::GameCore { class FiveDimDanmuTrack; }

#define CLASS_1_1D69FDE1B86E8FDD_METHOD_1_A0343326C82B0D03_OFFSET UNITYSDK_OFFSET(0x18D3C520)
#define CLASS_1_1D69FDE1B86E8FDD_METHOD_1_A1E1A38E5364276C_OFFSET UNITYSDK_OFFSET(0x18D3C5D0)
#define CLASS_1_1D69FDE1B86E8FDD_METHOD_1_BC66012D220D35CA_OFFSET UNITYSDK_OFFSET(0x18D3C390)
#define CLASS_1_1D69FDE1B86E8FDD__CTOR_OFFSET UNITYSDK_OFFSET(0x18D3C670)

inline static constexpr unsigned int Class_1_1D69FDE1B86E8FDD_TypeDefinitionIndex = 39996;

class Class_1_1D69FDE1B86E8FDD : public ::System::Object
{
public:
	::RPG::GameCore::FiveDimDanmuManagerConfig* Field_1_0; // 0x10
	::Class_1_C2130EF116E8AE29* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1D69FDE1B86E8FDD__CTOR_OFFSET))(this);
	}

	::RPG::PoolList_1<::RPG::GameCore::FiveDimDanmuTrack*>* Method_1_BC66012D220D35CA(::System::UInt32 a1)
	{
		return ((::RPG::PoolList_1<::RPG::GameCore::FiveDimDanmuTrack*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1D69FDE1B86E8FDD_METHOD_1_BC66012D220D35CA_OFFSET))(this, a1);
	}

	::RPG::GameCore::FiveDimDanmuTrack* Method_1_A1E1A38E5364276C(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::FiveDimDanmuTrack*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1D69FDE1B86E8FDD_METHOD_1_A1E1A38E5364276C_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::UInt32>* Method_1_A0343326C82B0D03(::System::UInt32 a1)
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1D69FDE1B86E8FDD_METHOD_1_A0343326C82B0D03_OFFSET))(this, a1);
	}
};
