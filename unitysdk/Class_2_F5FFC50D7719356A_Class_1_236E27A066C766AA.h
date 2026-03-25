#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_085541A9CFF64383.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LevelPedestrianV2IntersectionChenLingTribeDropPointInfo; }

#define CLASS_2_F5FFC50D7719356A_CLASS_1_236E27A066C766AA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCB52990)
#define CLASS_2_F5FFC50D7719356A_CLASS_1_236E27A066C766AA_GET_INFO_OFFSET UNITYSDK_OFFSET(0xCB52970)
#define CLASS_2_F5FFC50D7719356A_CLASS_1_236E27A066C766AA_METHOD_1_52C2CCD7D5CA7D95_OFFSET UNITYSDK_OFFSET(0xCB520A0)
#define CLASS_2_F5FFC50D7719356A_CLASS_1_236E27A066C766AA_METHOD_1_D978819B0A4871A0_1_OFFSET UNITYSDK_OFFSET(0xCB52110)
#define CLASS_2_F5FFC50D7719356A_CLASS_1_236E27A066C766AA_METHOD_1_D978819B0A4871A0_OFFSET UNITYSDK_OFFSET(0xCB52130)
#define CLASS_2_F5FFC50D7719356A_CLASS_1_236E27A066C766AA_SET_INFO_OFFSET UNITYSDK_OFFSET(0xCB52980)
#define CLASS_2_F5FFC50D7719356A_CLASS_1_236E27A066C766AA__CTOR_OFFSET UNITYSDK_OFFSET(0xCB50FB0)

inline static constexpr unsigned int Class_2_F5FFC50D7719356A_Class_1_236E27A066C766AA_TypeDefinitionIndex = 56650;

class Class_2_F5FFC50D7719356A_Class_1_236E27A066C766AA : public ::System::Object
{
public:
	::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeDropPointInfo* _Info_k__BackingField; // 0x10

	::System::Void _ctor(::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeDropPointInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeDropPointInfo*))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_CLASS_1_236E27A066C766AA__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeDropPointInfo* get_Info()
	{
		return ((::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeDropPointInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_CLASS_1_236E27A066C766AA_GET_INFO_OFFSET))(this);
	}

	::System::Void set_Info(::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeDropPointInfo* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelPedestrianV2IntersectionChenLingTribeDropPointInfo*))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_CLASS_1_236E27A066C766AA_SET_INFO_OFFSET))(this, value);
	}

	::Struct_2_085541A9CFF64383 Method_1_52C2CCD7D5CA7D95()
	{
		return ((::Struct_2_085541A9CFF64383(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_CLASS_1_236E27A066C766AA_METHOD_1_52C2CCD7D5CA7D95_OFFSET))(this);
	}

	::System::UInt32 Method_1_D978819B0A4871A0()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_CLASS_1_236E27A066C766AA_METHOD_1_D978819B0A4871A0_OFFSET))(this);
	}

	::System::UInt32 Method_1_D978819B0A4871A0_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_CLASS_1_236E27A066C766AA_METHOD_1_D978819B0A4871A0_1_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F5FFC50D7719356A_CLASS_1_236E27A066C766AA_DISPOSE_OFFSET))(this);
	}
};
