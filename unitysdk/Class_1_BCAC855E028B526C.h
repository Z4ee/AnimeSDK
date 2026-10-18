#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_120;

#define CLASS_1_BCAC855E028B526C_GET_ATTRIBUTETYPE_OFFSET UNITYSDK_OFFSET(0x154B5590)
#define CLASS_1_BCAC855E028B526C_GET_CHIPCONFIG_OFFSET UNITYSDK_OFFSET(0x154B5570)
#define CLASS_1_BCAC855E028B526C_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x154B55B0)
#define CLASS_1_BCAC855E028B526C_METHOD_1_37D0382D0C30A2DC_OFFSET UNITYSDK_OFFSET(0x154B55D0)
#define CLASS_1_BCAC855E028B526C_SET_ATTRIBUTETYPE_OFFSET UNITYSDK_OFFSET(0x154B55A0)
#define CLASS_1_BCAC855E028B526C_SET_CHIPCONFIG_OFFSET UNITYSDK_OFFSET(0x154B5580)
#define CLASS_1_BCAC855E028B526C_SET_COUNT_OFFSET UNITYSDK_OFFSET(0x154B55C0)
#define CLASS_1_BCAC855E028B526C__CTOR_OFFSET UNITYSDK_OFFSET(0x154B5650)

inline static constexpr unsigned int Class_1_BCAC855E028B526C_TypeDefinitionIndex = 79716;

class Class_1_BCAC855E028B526C : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_120* _ChipConfig_k__BackingField; // 0x10
	::System::UInt32 _Count_k__BackingField; // 0x18
	::System::Nullable_1<::RPG::Client::MechCraft::MechCraftAttributeType> _AttributeType_k__BackingField; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCAC855E028B526C__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_120* get_ChipConfig()
	{
		return ((::Class_0_16E4307DCC419505_120*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCAC855E028B526C_GET_CHIPCONFIG_OFFSET))(this);
	}

	::System::Void set_ChipConfig(::Class_0_16E4307DCC419505_120* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_120*))((::PBYTE)hIl2Cpp + CLASS_1_BCAC855E028B526C_SET_CHIPCONFIG_OFFSET))(this, a1);
	}

	::System::Nullable_1<::RPG::Client::MechCraft::MechCraftAttributeType> get_AttributeType()
	{
		return ((::System::Nullable_1<::RPG::Client::MechCraft::MechCraftAttributeType>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCAC855E028B526C_GET_ATTRIBUTETYPE_OFFSET))(this);
	}

	::System::Void set_AttributeType(::System::Nullable_1<::RPG::Client::MechCraft::MechCraftAttributeType> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::Client::MechCraft::MechCraftAttributeType>))((::PBYTE)hIl2Cpp + CLASS_1_BCAC855E028B526C_SET_ATTRIBUTETYPE_OFFSET))(this, a1);
	}

	::System::UInt32 get_Count()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCAC855E028B526C_GET_COUNT_OFFSET))(this);
	}

	::System::Void set_Count(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BCAC855E028B526C_SET_COUNT_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_37D0382D0C30A2DC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCAC855E028B526C_METHOD_1_37D0382D0C30A2DC_OFFSET))(this);
	}
};
