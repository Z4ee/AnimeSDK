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

#define CONSTELLATIONEFFECTGROUP_ADDALLCHILD_OFFSET UNITYSDK_OFFSET(0xA6F6F40)
#define CONSTELLATIONEFFECTGROUP_FORCEUPDATE_OFFSET UNITYSDK_OFFSET(0xA6F6870)
#define CONSTELLATIONEFFECTGROUP_METHOD_5_07280B24DFAC0CA9_OFFSET UNITYSDK_OFFSET(0xA6F7140)
#define CONSTELLATIONEFFECTGROUP_METHOD_5_AEBE2A217F463B51_OFFSET UNITYSDK_OFFSET(0xA6F7650)
#define CONSTELLATIONEFFECTGROUP_METHOD_5_C365440D57901CE0_OFFSET UNITYSDK_OFFSET(0xA6F7980)
#define CONSTELLATIONEFFECTGROUP_METHOD_5_EA3063A5CDD6F164_OFFSET UNITYSDK_OFFSET(0xA6F6A90)
#define CONSTELLATIONEFFECTGROUP_METHOD_5_EC90937CEA9AFCA9_OFFSET UNITYSDK_OFFSET(0xA6F68C0)
#define CONSTELLATIONEFFECTGROUP_UPDATE_OFFSET UNITYSDK_OFFSET(0xA6F8030)
#define CONSTELLATIONEFFECTGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0xA6F8080)

inline static constexpr unsigned int ConstellationEffectGroup_TypeDefinitionIndex = 38229;

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

	::System::Void Method_5_07280B24DFAC0CA9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONSTELLATIONEFFECTGROUP_METHOD_5_07280B24DFAC0CA9_OFFSET))(this);
	}

	::System::Void Method_5_AEBE2A217F463B51()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONSTELLATIONEFFECTGROUP_METHOD_5_AEBE2A217F463B51_OFFSET))(this);
	}

	::System::Void Method_5_EA3063A5CDD6F164()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONSTELLATIONEFFECTGROUP_METHOD_5_EA3063A5CDD6F164_OFFSET))(this);
	}

	::System::Void Method_5_C365440D57901CE0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONSTELLATIONEFFECTGROUP_METHOD_5_C365440D57901CE0_OFFSET))(this);
	}

	::System::Void Method_5_EC90937CEA9AFCA9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONSTELLATIONEFFECTGROUP_METHOD_5_EC90937CEA9AFCA9_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONSTELLATIONEFFECTGROUP_UPDATE_OFFSET))(this);
	}
};
