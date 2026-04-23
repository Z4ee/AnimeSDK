#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_76A4522D4905FF64.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MonoPlayerAttachmentController; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_2_97295DF10D81AD78_CLASS_1_12CFD4109BB62456_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11BD5360)
#define CLASS_2_97295DF10D81AD78_CLASS_1_12CFD4109BB62456_METHOD_1_3CAD92CFB876DBF6_OFFSET UNITYSDK_OFFSET(0x11BD5E50)
#define CLASS_2_97295DF10D81AD78_CLASS_1_12CFD4109BB62456_METHOD_1_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x11BD5F00)
#define CLASS_2_97295DF10D81AD78_CLASS_1_12CFD4109BB62456_METHOD_1_A8F6F688241E6DBC_OFFSET UNITYSDK_OFFSET(0x11BD56C0)
#define CLASS_2_97295DF10D81AD78_CLASS_1_12CFD4109BB62456_METHOD_1_B92638D2AEE08621_OFFSET UNITYSDK_OFFSET(0x11BD5DA0)
#define CLASS_2_97295DF10D81AD78_CLASS_1_12CFD4109BB62456__CTOR_OFFSET UNITYSDK_OFFSET(0x11BD5A20)

inline static constexpr unsigned int Class_2_97295DF10D81AD78_Class_1_12CFD4109BB62456_TypeDefinitionIndex = 55479;

class Class_2_97295DF10D81AD78_Class_1_12CFD4109BB62456 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::UnityEngine::Transform* Field_1_1; // 0x18
	::System::String* Field_1_3; // 0x20
	::RPG::GameCore::GameEntity* Field_1_5; // 0x28
	::RPG::Client::MonoPlayerAttachmentController* Field_1_2; // 0x30
	::UnityEngine::Vector3 Field_1_4; // 0x38

	::System::Void _ctor(::Struct_2_76A4522D4905FF64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_76A4522D4905FF64))((::PBYTE)hIl2Cpp + CLASS_2_97295DF10D81AD78_CLASS_1_12CFD4109BB62456__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97295DF10D81AD78_CLASS_1_12CFD4109BB62456_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_B92638D2AEE08621()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97295DF10D81AD78_CLASS_1_12CFD4109BB62456_METHOD_1_B92638D2AEE08621_OFFSET))(this);
	}

	::System::Void Method_1_3CAD92CFB876DBF6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97295DF10D81AD78_CLASS_1_12CFD4109BB62456_METHOD_1_3CAD92CFB876DBF6_OFFSET))(this);
	}

	::System::Boolean Method_1_A8F6F688241E6DBC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97295DF10D81AD78_CLASS_1_12CFD4109BB62456_METHOD_1_A8F6F688241E6DBC_OFFSET))(this);
	}

	::System::Void Method_1_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97295DF10D81AD78_CLASS_1_12CFD4109BB62456_METHOD_1_4EA6B1791DACA9CC_OFFSET))(this);
	}
};
