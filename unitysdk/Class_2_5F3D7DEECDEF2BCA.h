#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_31.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/RPG/Client/MechCraft/ViewModel/CraftProgressAttrPipeline/MechCraftPerfUnitType.h"

class Class_0_16E4307DCC419505_1492;
namespace System { class Action; }

#define CLASS_2_5F3D7DEECDEF2BCA_METHOD_2_4CCB6DCE2E6483DA_OFFSET UNITYSDK_OFFSET(0xB343A80)
#define CLASS_2_5F3D7DEECDEF2BCA_METHOD_2_5D55113ED5C385C6_OFFSET UNITYSDK_OFFSET(0xB3438D0)
#define CLASS_2_5F3D7DEECDEF2BCA_METHOD_2_CC0D56B1687E0230_OFFSET UNITYSDK_OFFSET(0xB343920)
#define CLASS_2_5F3D7DEECDEF2BCA_METHOD_2_E639AC66E23A9DAF_OFFSET UNITYSDK_OFFSET(0xB343AD0)
#define CLASS_2_5F3D7DEECDEF2BCA__CTOR_OFFSET UNITYSDK_OFFSET(0xB343B20)

inline static constexpr unsigned int Class_2_5F3D7DEECDEF2BCA_TypeDefinitionIndex = 79794;

class Class_2_5F3D7DEECDEF2BCA : public ::Class_1_F9FBCC956DFCF137_31
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F3D7DEECDEF2BCA__CTOR_OFFSET))(this);
	}

	::RPG::Client::MechCraft::ViewModel::CraftProgressAttrPipeline::MechCraftPerfUnitType Method_2_5D55113ED5C385C6()
	{
		return ((::RPG::Client::MechCraft::ViewModel::CraftProgressAttrPipeline::MechCraftPerfUnitType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F3D7DEECDEF2BCA_METHOD_2_5D55113ED5C385C6_OFFSET))(this);
	}

	::System::Action* Method_2_CC0D56B1687E0230(::Class_0_16E4307DCC419505_1492* a1)
	{
		return ((::System::Action*(*)(::PVOID, ::Class_0_16E4307DCC419505_1492*))((::PBYTE)hIl2Cpp + CLASS_2_5F3D7DEECDEF2BCA_METHOD_2_CC0D56B1687E0230_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_4CCB6DCE2E6483DA(::RPG::Client::MechCraft::MechCraftAttributeType a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftAttributeType))((::PBYTE)hIl2Cpp + CLASS_2_5F3D7DEECDEF2BCA_METHOD_2_4CCB6DCE2E6483DA_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_E639AC66E23A9DAF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F3D7DEECDEF2BCA_METHOD_2_E639AC66E23A9DAF_OFFSET))(this);
	}
};
