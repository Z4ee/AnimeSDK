#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class SceneSoundObjDataItem; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_0969C348BD815FDD_CLASS_1_62D0B48D5E133D74_METHOD_1_54CD16E0A58B5943_OFFSET UNITYSDK_OFFSET(0x13783710)
#define CLASS_2_0969C348BD815FDD_CLASS_1_62D0B48D5E133D74__CTOR_OFFSET UNITYSDK_OFFSET(0x13783700)

inline static constexpr unsigned int Class_2_0969C348BD815FDD_Class_1_62D0B48D5E133D74_TypeDefinitionIndex = 74824;

class Class_2_0969C348BD815FDD_Class_1_62D0B48D5E133D74 : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_CLASS_1_62D0B48D5E133D74__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_54CD16E0A58B5943(::MoleMole::SceneSoundObjDataItem* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::SceneSoundObjDataItem*))((::PBYTE)hIl2Cpp + CLASS_2_0969C348BD815FDD_CLASS_1_62D0B48D5E133D74_METHOD_1_54CD16E0A58B5943_OFFSET))(this, a1);
	}
};
