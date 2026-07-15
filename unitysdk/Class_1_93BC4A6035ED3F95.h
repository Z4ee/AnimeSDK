#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/LittleGameAbilityAttributeType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1260;
class Class_1_046112F54DBF767D;
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace RPG::GameCore { class LittleGameAbilityPixAirEquipmentCoreTargetSelectorConfig; }
namespace RPG::GameCore { class LittleGameAbilityPixAirEquipmentFactionTargetSelectorConfig; }
namespace RPG::GameCore { class LittleGameAbilityPixAirEquipmentRelativeIndexTargetSelectorConfig; }
namespace RPG::GameCore { class LittleGameAbilityPixAirEquipmentSizeTargetSelectorConfig; }
namespace RPG::GameCore { class LittleGameAbilityPixAirEquipmentTagTargetSelectorConfig; }
namespace RPG::GameCore { class LittleGameAbilityPixAirOneSideEquipmentTargetSelectorConfig; }
namespace RPG::GameCore { class LittleGameAbilityTargetSelectorExcludeConfig; }
namespace RPG::GameCore { class LittleGameAbilityTargetSelectorFilterByAttributeConfig; }
namespace RPG::GameCore { class LittleGameAbilityTargetSelectorIntersectConfig; }
namespace RPG::GameCore { class LittleGameAbilityTargetSelectorPlaneConfig; }
namespace RPG::GameCore { class LittleGameAbilityTargetSelectorTakeByCountConfig; }
namespace RPG::GameCore { class LittleGameAbilityTargetSelectorUnionConfig; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_93BC4A6035ED3F95_METHOD_1_0491199E89349565_OFFSET UNITYSDK_OFFSET(0x17A86110)
#define CLASS_1_93BC4A6035ED3F95_METHOD_1_0527044364D580C1_OFFSET UNITYSDK_OFFSET(0x17A86000)
#define CLASS_1_93BC4A6035ED3F95_METHOD_1_2BB54DF3A22A6315_OFFSET UNITYSDK_OFFSET(0x17A862C0)
#define CLASS_1_93BC4A6035ED3F95_METHOD_1_3BFAA7F520527998_OFFSET UNITYSDK_OFFSET(0x17A865A0)
#define CLASS_1_93BC4A6035ED3F95_METHOD_1_4821902EAA5077CA_OFFSET UNITYSDK_OFFSET(0x17A85420)
#define CLASS_1_93BC4A6035ED3F95_METHOD_1_67165D7557FCC825_OFFSET UNITYSDK_OFFSET(0x17A86D70)
#define CLASS_1_93BC4A6035ED3F95_METHOD_1_6B502731F15110CB_OFFSET UNITYSDK_OFFSET(0x17A86390)
#define CLASS_1_93BC4A6035ED3F95_METHOD_1_7933E26CAF24807D_OFFSET UNITYSDK_OFFSET(0x17A85F20)
#define CLASS_1_93BC4A6035ED3F95_METHOD_1_7DC604E4C7D88010_OFFSET UNITYSDK_OFFSET(0x17A85980)
#define CLASS_1_93BC4A6035ED3F95_METHOD_1_845885F4C48D9162_OFFSET UNITYSDK_OFFSET(0x17A85B60)
#define CLASS_1_93BC4A6035ED3F95_METHOD_1_B2B736AD3A37DB08_OFFSET UNITYSDK_OFFSET(0x17A85770)
#define CLASS_1_93BC4A6035ED3F95_METHOD_1_B5B4EF195EDC2AB9_OFFSET UNITYSDK_OFFSET(0x17A85590)
#define CLASS_1_93BC4A6035ED3F95_METHOD_1_E29ECA382518D6A1_OFFSET UNITYSDK_OFFSET(0x17A84F80)
#define CLASS_1_93BC4A6035ED3F95_METHOD_1_EDBD1C818C5084A6_OFFSET UNITYSDK_OFFSET(0x17A85390)
#define CLASS_1_93BC4A6035ED3F95_METHOD_1_FD9E472C041D8C5D_OFFSET UNITYSDK_OFFSET(0x17A85D40)
#define CLASS_1_93BC4A6035ED3F95__CTOR_OFFSET UNITYSDK_OFFSET(0x17A86F30)

inline static constexpr unsigned int Class_1_93BC4A6035ED3F95_TypeDefinitionIndex = 75374;

class Class_1_93BC4A6035ED3F95 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93BC4A6035ED3F95__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* Method_1_E29ECA382518D6A1(::Class_0_16E4307DCC419505_1260* a1, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1260*, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_93BC4A6035ED3F95_METHOD_1_E29ECA382518D6A1_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* Method_1_EDBD1C818C5084A6(::Class_0_16E4307DCC419505_1260* a1)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1260*))((::PBYTE)hIl2Cpp + CLASS_1_93BC4A6035ED3F95_METHOD_1_EDBD1C818C5084A6_OFFSET))(this, a1);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* Method_1_4821902EAA5077CA(::Class_0_16E4307DCC419505_1260* a1, ::RPG::GameCore::LittleGameAbilityPixAirEquipmentRelativeIndexTargetSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1260*, ::RPG::GameCore::LittleGameAbilityPixAirEquipmentRelativeIndexTargetSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_93BC4A6035ED3F95_METHOD_1_4821902EAA5077CA_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* Method_1_B5B4EF195EDC2AB9(::Class_0_16E4307DCC419505_1260* a1, ::RPG::GameCore::LittleGameAbilityPixAirEquipmentFactionTargetSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1260*, ::RPG::GameCore::LittleGameAbilityPixAirEquipmentFactionTargetSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_93BC4A6035ED3F95_METHOD_1_B5B4EF195EDC2AB9_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* Method_1_B2B736AD3A37DB08(::Class_0_16E4307DCC419505_1260* a1, ::RPG::GameCore::LittleGameAbilityPixAirEquipmentTagTargetSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1260*, ::RPG::GameCore::LittleGameAbilityPixAirEquipmentTagTargetSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_93BC4A6035ED3F95_METHOD_1_B2B736AD3A37DB08_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* Method_1_7DC604E4C7D88010(::Class_0_16E4307DCC419505_1260* a1, ::RPG::GameCore::LittleGameAbilityPixAirEquipmentSizeTargetSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1260*, ::RPG::GameCore::LittleGameAbilityPixAirEquipmentSizeTargetSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_93BC4A6035ED3F95_METHOD_1_7DC604E4C7D88010_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* Method_1_845885F4C48D9162(::Class_0_16E4307DCC419505_1260* a1, ::RPG::GameCore::LittleGameAbilityPixAirEquipmentCoreTargetSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1260*, ::RPG::GameCore::LittleGameAbilityPixAirEquipmentCoreTargetSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_93BC4A6035ED3F95_METHOD_1_845885F4C48D9162_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* Method_1_FD9E472C041D8C5D(::Class_0_16E4307DCC419505_1260* a1, ::RPG::GameCore::LittleGameAbilityPixAirOneSideEquipmentTargetSelectorConfig* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1260*, ::RPG::GameCore::LittleGameAbilityPixAirOneSideEquipmentTargetSelectorConfig*))((::PBYTE)hIl2Cpp + CLASS_1_93BC4A6035ED3F95_METHOD_1_FD9E472C041D8C5D_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* Method_1_7933E26CAF24807D(::Class_0_16E4307DCC419505_1260* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorPlaneConfig* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1260*, ::RPG::GameCore::LittleGameAbilityTargetSelectorPlaneConfig*))((::PBYTE)hIl2Cpp + CLASS_1_93BC4A6035ED3F95_METHOD_1_7933E26CAF24807D_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* Method_1_0527044364D580C1(::Class_0_16E4307DCC419505_1260* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorUnionConfig* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1260*, ::RPG::GameCore::LittleGameAbilityTargetSelectorUnionConfig*))((::PBYTE)hIl2Cpp + CLASS_1_93BC4A6035ED3F95_METHOD_1_0527044364D580C1_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* Method_1_0491199E89349565(::Class_0_16E4307DCC419505_1260* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorIntersectConfig* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1260*, ::RPG::GameCore::LittleGameAbilityTargetSelectorIntersectConfig*))((::PBYTE)hIl2Cpp + CLASS_1_93BC4A6035ED3F95_METHOD_1_0491199E89349565_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* Method_1_2BB54DF3A22A6315(::Class_0_16E4307DCC419505_1260* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorExcludeConfig* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1260*, ::RPG::GameCore::LittleGameAbilityTargetSelectorExcludeConfig*))((::PBYTE)hIl2Cpp + CLASS_1_93BC4A6035ED3F95_METHOD_1_2BB54DF3A22A6315_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* Method_1_6B502731F15110CB(::Class_0_16E4307DCC419505_1260* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorFilterByAttributeConfig* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1260*, ::RPG::GameCore::LittleGameAbilityTargetSelectorFilterByAttributeConfig*))((::PBYTE)hIl2Cpp + CLASS_1_93BC4A6035ED3F95_METHOD_1_6B502731F15110CB_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::HashSet_1<::System::Int32>* Method_1_3BFAA7F520527998(::Class_0_16E4307DCC419505_1260* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorTakeByCountConfig* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::PVOID, ::Class_0_16E4307DCC419505_1260*, ::RPG::GameCore::LittleGameAbilityTargetSelectorTakeByCountConfig*))((::PBYTE)hIl2Cpp + CLASS_1_93BC4A6035ED3F95_METHOD_1_3BFAA7F520527998_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_1_67165D7557FCC825(::Class_1_046112F54DBF767D* a1, ::RPG::GameCore::LittleGameAbilityAttributeType a2)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::Class_1_046112F54DBF767D*, ::RPG::GameCore::LittleGameAbilityAttributeType))((::PBYTE)hIl2Cpp + CLASS_1_93BC4A6035ED3F95_METHOD_1_67165D7557FCC825_OFFSET))(this, a1, a2);
	}
};
