#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_085541A9CFF64383.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LevelPedestrianV2IntersectionChenLingTribeDropPointInfo; }

#define CLASS_2_9065242F5CF3F064_CLASS_1_D0C621D710A7915D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1785C6F0)
#define CLASS_2_9065242F5CF3F064_CLASS_1_D0C621D710A7915D_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1785C6D0)
#define CLASS_2_9065242F5CF3F064_CLASS_1_D0C621D710A7915D_METHOD_1_52C2CCD7D5CA7D95_OFFSET UNITYSDK_OFFSET(0x17859B10)
#define CLASS_2_9065242F5CF3F064_CLASS_1_D0C621D710A7915D_METHOD_1_D978819B0A4871A0_1_OFFSET UNITYSDK_OFFSET(0x17859B80)
#define CLASS_2_9065242F5CF3F064_CLASS_1_D0C621D710A7915D_METHOD_1_D978819B0A4871A0_OFFSET UNITYSDK_OFFSET(0x17859BA0)
#define CLASS_2_9065242F5CF3F064_CLASS_1_D0C621D710A7915D_SET_INFO_OFFSET UNITYSDK_OFFSET(0x1785C6E0)
#define CLASS_2_9065242F5CF3F064_CLASS_1_D0C621D710A7915D__CTOR_OFFSET UNITYSDK_OFFSET(0x17858980)

inline static constexpr unsigned int Class_2_9065242F5CF3F064_Class_1_D0C621D710A7915D_TypeDefinitionIndex = 69276;

class Class_2_9065242F5CF3F064_Class_1_D0C621D710A7915D : public ::System::Object
{
public:
	::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeDropPointInfo* _Info_k__BackingField; // 0x10

	::System::Void _ctor(::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeDropPointInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeDropPointInfo*))((::PBYTE)hIl2Cpp + CLASS_2_9065242F5CF3F064_CLASS_1_D0C621D710A7915D__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeDropPointInfo* get_Info()
	{
		return ((::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeDropPointInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9065242F5CF3F064_CLASS_1_D0C621D710A7915D_GET_INFO_OFFSET))(this);
	}

	::System::Void set_Info(::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeDropPointInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeDropPointInfo*))((::PBYTE)hIl2Cpp + CLASS_2_9065242F5CF3F064_CLASS_1_D0C621D710A7915D_SET_INFO_OFFSET))(this, a1);
	}

	::Struct_2_085541A9CFF64383 Method_1_52C2CCD7D5CA7D95()
	{
		return ((::Struct_2_085541A9CFF64383(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9065242F5CF3F064_CLASS_1_D0C621D710A7915D_METHOD_1_52C2CCD7D5CA7D95_OFFSET))(this);
	}

	::System::UInt32 Method_1_D978819B0A4871A0()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9065242F5CF3F064_CLASS_1_D0C621D710A7915D_METHOD_1_D978819B0A4871A0_OFFSET))(this);
	}

	::System::UInt32 Method_1_D978819B0A4871A0_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9065242F5CF3F064_CLASS_1_D0C621D710A7915D_METHOD_1_D978819B0A4871A0_1_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9065242F5CF3F064_CLASS_1_D0C621D710A7915D_DISPOSE_OFFSET))(this);
	}
};
