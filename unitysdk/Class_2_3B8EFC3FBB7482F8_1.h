#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_31.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/RPG/Client/MechCraft/ViewModel/CraftProgressAttrPipeline/MechCraftPerfUnitType.h"

class Class_0_16E4307DCC419505_1492;
namespace System { class Action; }

#define CLASS_2_3B8EFC3FBB7482F8_1_GET_TARGET_OFFSET UNITYSDK_OFFSET(0x1598F7C0)
#define CLASS_2_3B8EFC3FBB7482F8_1_METHOD_2_4CCB6DCE2E6483DA_OFFSET UNITYSDK_OFFSET(0x1598F890)
#define CLASS_2_3B8EFC3FBB7482F8_1_METHOD_2_5019DFA22A9B0DDA_OFFSET UNITYSDK_OFFSET(0x1598F820)
#define CLASS_2_3B8EFC3FBB7482F8_1_METHOD_2_5D55113ED5C385C6_OFFSET UNITYSDK_OFFSET(0x1598F7D0)
#define CLASS_2_3B8EFC3FBB7482F8_1_METHOD_2_D2809205008ACF99_OFFSET UNITYSDK_OFFSET(0x1598F8E0)
#define CLASS_2_3B8EFC3FBB7482F8_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1598F810)

inline static constexpr unsigned int Class_2_3B8EFC3FBB7482F8_1_TypeDefinitionIndex = 79794;

class Class_2_3B8EFC3FBB7482F8_1 : public ::Class_1_F9FBCC956DFCF137_31
{
public:
	::RPG::Client::MechCraft::MechCraftAttributeType _Target_k__BackingField; // 0x18

	::System::Void _ctor(::RPG::Client::MechCraft::MechCraftAttributeType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftAttributeType))((::PBYTE)hIl2Cpp + CLASS_2_3B8EFC3FBB7482F8_1__CTOR_OFFSET))(this, a1);
	}

	::RPG::Client::MechCraft::MechCraftAttributeType get_Target()
	{
		return ((::RPG::Client::MechCraft::MechCraftAttributeType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B8EFC3FBB7482F8_1_GET_TARGET_OFFSET))(this);
	}

	::RPG::Client::MechCraft::ViewModel::CraftProgressAttrPipeline::MechCraftPerfUnitType Method_2_5D55113ED5C385C6()
	{
		return ((::RPG::Client::MechCraft::ViewModel::CraftProgressAttrPipeline::MechCraftPerfUnitType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B8EFC3FBB7482F8_1_METHOD_2_5D55113ED5C385C6_OFFSET))(this);
	}

	::System::Action* Method_2_5019DFA22A9B0DDA(::Class_0_16E4307DCC419505_1492* a1)
	{
		return ((::System::Action*(*)(::PVOID, ::Class_0_16E4307DCC419505_1492*))((::PBYTE)hIl2Cpp + CLASS_2_3B8EFC3FBB7482F8_1_METHOD_2_5019DFA22A9B0DDA_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_4CCB6DCE2E6483DA(::RPG::Client::MechCraft::MechCraftAttributeType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftAttributeType))((::PBYTE)hIl2Cpp + CLASS_2_3B8EFC3FBB7482F8_1_METHOD_2_4CCB6DCE2E6483DA_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_D2809205008ACF99()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B8EFC3FBB7482F8_1_METHOD_2_D2809205008ACF99_OFFSET))(this);
	}
};
