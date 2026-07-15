#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class ConstellationEffectGroup_Class_1_77B6A5C3CCA4BBDC;
class ConstellationEffectGroup_ConstellationAnchor;
class ConstellationEffectGroup_ConstellationLine;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class LineRenderer; }
namespace UnityEngine { class Material; }

#define CONSTELLATIONEFFECTGROUP_ADDALLCHILD_OFFSET UNITYSDK_OFFSET(0x16B47540)
#define CONSTELLATIONEFFECTGROUP_FORCEUPDATE_OFFSET UNITYSDK_OFFSET(0x16B46CF0)
#define CONSTELLATIONEFFECTGROUP_METHOD_5_2BC1A70133D64A3E_OFFSET UNITYSDK_OFFSET(0x16B47D90)
#define CONSTELLATIONEFFECTGROUP_METHOD_5_AB0E32D900C7A89E_OFFSET UNITYSDK_OFFSET(0x16B477A0)
#define CONSTELLATIONEFFECTGROUP_METHOD_5_CD054ADA8D27B4D4_OFFSET UNITYSDK_OFFSET(0x16B46D40)
#define CONSTELLATIONEFFECTGROUP_METHOD_5_E38DBF86ED41255C_OFFSET UNITYSDK_OFFSET(0x16B480B0)
#define CONSTELLATIONEFFECTGROUP_METHOD_5_EA3063A5CDD6F164_OFFSET UNITYSDK_OFFSET(0x16B46F60)
#define CONSTELLATIONEFFECTGROUP_UPDATE_OFFSET UNITYSDK_OFFSET(0x16B487B0)
#define CONSTELLATIONEFFECTGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x16B48800)

inline static constexpr unsigned int ConstellationEffectGroup_TypeDefinitionIndex = 45538;

class ConstellationEffectGroup : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::GameObject* StarPrefab; // 0x18
	::UnityEngine::Material* LineMat; // 0x20
	::System::Collections::Generic::List_1<::ConstellationEffectGroup_ConstellationAnchor*>* StarAnchorList; // 0x28
	::System::Collections::Generic::List_1<::ConstellationEffectGroup_ConstellationLine*>* LineList; // 0x30
	::System::Collections::Generic::List_1<::UnityEngine::LineRenderer*>* _ConstellationLineRenderer; // 0x38
	::System::Collections::Generic::List_1<::ConstellationEffectGroup_Class_1_77B6A5C3CCA4BBDC*>* _ConstellationStarList; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONSTELLATIONEFFECTGROUP__CTOR_OFFSET))(this);
	}

	::System::Void ForceUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONSTELLATIONEFFECTGROUP_FORCEUPDATE_OFFSET))(this);
	}

	::System::Void AddAllChild()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONSTELLATIONEFFECTGROUP_ADDALLCHILD_OFFSET))(this);
	}

	::System::Void Method_5_AB0E32D900C7A89E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONSTELLATIONEFFECTGROUP_METHOD_5_AB0E32D900C7A89E_OFFSET))(this);
	}

	::System::Void Method_5_2BC1A70133D64A3E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONSTELLATIONEFFECTGROUP_METHOD_5_2BC1A70133D64A3E_OFFSET))(this);
	}

	::System::Void Method_5_EA3063A5CDD6F164()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONSTELLATIONEFFECTGROUP_METHOD_5_EA3063A5CDD6F164_OFFSET))(this);
	}

	::System::Void Method_5_E38DBF86ED41255C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONSTELLATIONEFFECTGROUP_METHOD_5_E38DBF86ED41255C_OFFSET))(this);
	}

	::System::Void Method_5_CD054ADA8D27B4D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONSTELLATIONEFFECTGROUP_METHOD_5_CD054ADA8D27B4D4_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONSTELLATIONEFFECTGROUP_UPDATE_OFFSET))(this);
	}
};
