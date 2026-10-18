#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_0_16E4307DCC419505_1486_AttributeState.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_117;
class Class_0_16E4307DCC419505_121;
class Class_0_16E4307DCC419505_127;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_0E82996AB71291C3_ADD_HINTVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x159EF9F0)
#define CLASS_1_0E82996AB71291C3_GET_ATTRIBUTELEVELUPRULE_OFFSET UNITYSDK_OFFSET(0x159EF8F0)
#define CLASS_1_0E82996AB71291C3_GET_CURRENTATTRIBUTEVALUES_OFFSET UNITYSDK_OFFSET(0x159EF930)
#define CLASS_1_0E82996AB71291C3_GET_CUSTOMATTRIBUTESTATES_OFFSET UNITYSDK_OFFSET(0x159EF9B0)
#define CLASS_1_0E82996AB71291C3_GET_EXCESSTHRESHOLDPERCENT_OFFSET UNITYSDK_OFFSET(0x159EF990)
#define CLASS_1_0E82996AB71291C3_GET_SHOULDEMPHASIZENONTARGETWRONGLYPEAKED_OFFSET UNITYSDK_OFFSET(0x159EF950)
#define CLASS_1_0E82996AB71291C3_GET_SORTEDATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x159EF8D0)
#define CLASS_1_0E82996AB71291C3_GET_TARGETATTRIBUTELEVELS_OFFSET UNITYSDK_OFFSET(0x159EF910)
#define CLASS_1_0E82996AB71291C3_REMOVE_HINTVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x159EFA50)
#define CLASS_1_0E82996AB71291C3_SET_ATTRIBUTELEVELUPRULE_OFFSET UNITYSDK_OFFSET(0x159EF900)
#define CLASS_1_0E82996AB71291C3_SET_CURRENTATTRIBUTEVALUES_OFFSET UNITYSDK_OFFSET(0x159EF940)
#define CLASS_1_0E82996AB71291C3_SET_EXCESSTHRESHOLDPERCENT_OFFSET UNITYSDK_OFFSET(0x159EF9A0)
#define CLASS_1_0E82996AB71291C3_SET_SORTEDATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x159EF8E0)
#define CLASS_1_0E82996AB71291C3_SET_TARGETATTRIBUTELEVELS_OFFSET UNITYSDK_OFFSET(0x159EF920)
#define CLASS_1_0E82996AB71291C3__CTOR_OFFSET UNITYSDK_OFFSET(0x159EFAB0)

inline static constexpr unsigned int Class_1_0E82996AB71291C3_TypeDefinitionIndex = 79735;

class Class_1_0E82996AB71291C3 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_121* _TargetAttributeLevels_k__BackingField; // 0x10
	::Class_0_16E4307DCC419505_127* _AttributeLevelUpRule_k__BackingField; // 0x18
	::System::Action* HintValueChanged; // 0x20
	::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_117*>* _SortedAttributes_k__BackingField; // 0x28
	::Class_0_16E4307DCC419505_121* _CurrentAttributeValues_k__BackingField; // 0x30
	::System::Int32 _ExcessThresholdPercent_k__BackingField; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E82996AB71291C3__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_117*>* get_SortedAttributes()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_117*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E82996AB71291C3_GET_SORTEDATTRIBUTES_OFFSET))(this);
	}

	::System::Void set_SortedAttributes(::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_117*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_0_16E4307DCC419505_117*>*))((::PBYTE)hIl2Cpp + CLASS_1_0E82996AB71291C3_SET_SORTEDATTRIBUTES_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_127* get_AttributeLevelUpRule()
	{
		return ((::Class_0_16E4307DCC419505_127*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E82996AB71291C3_GET_ATTRIBUTELEVELUPRULE_OFFSET))(this);
	}

	::System::Void set_AttributeLevelUpRule(::Class_0_16E4307DCC419505_127* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_127*))((::PBYTE)hIl2Cpp + CLASS_1_0E82996AB71291C3_SET_ATTRIBUTELEVELUPRULE_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_121* get_TargetAttributeLevels()
	{
		return ((::Class_0_16E4307DCC419505_121*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E82996AB71291C3_GET_TARGETATTRIBUTELEVELS_OFFSET))(this);
	}

	::System::Void set_TargetAttributeLevels(::Class_0_16E4307DCC419505_121* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_121*))((::PBYTE)hIl2Cpp + CLASS_1_0E82996AB71291C3_SET_TARGETATTRIBUTELEVELS_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_121* get_CurrentAttributeValues()
	{
		return ((::Class_0_16E4307DCC419505_121*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E82996AB71291C3_GET_CURRENTATTRIBUTEVALUES_OFFSET))(this);
	}

	::System::Void set_CurrentAttributeValues(::Class_0_16E4307DCC419505_121* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_121*))((::PBYTE)hIl2Cpp + CLASS_1_0E82996AB71291C3_SET_CURRENTATTRIBUTEVALUES_OFFSET))(this, a1);
	}

	::System::Boolean get_ShouldEmphasizeNonTargetWronglyPeaked()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E82996AB71291C3_GET_SHOULDEMPHASIZENONTARGETWRONGLYPEAKED_OFFSET))(this);
	}

	::System::Int32 get_ExcessThresholdPercent()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E82996AB71291C3_GET_EXCESSTHRESHOLDPERCENT_OFFSET))(this);
	}

	::System::Void set_ExcessThresholdPercent(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0E82996AB71291C3_SET_EXCESSTHRESHOLDPERCENT_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::Class_0_16E4307DCC419505_1486_AttributeState>* get_CustomAttributeStates()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::RPG::Client::MechCraft::MechCraftAttributeType, ::Class_0_16E4307DCC419505_1486_AttributeState>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0E82996AB71291C3_GET_CUSTOMATTRIBUTESTATES_OFFSET))(this);
	}

	::System::Void add_HintValueChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_0E82996AB71291C3_ADD_HINTVALUECHANGED_OFFSET))(this, a1);
	}

	::System::Void remove_HintValueChanged(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_0E82996AB71291C3_REMOVE_HINTVALUECHANGED_OFFSET))(this, a1);
	}
};
