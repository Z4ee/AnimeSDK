#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_76A4522D4905FF64.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MonoPlayerAttachmentController; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_2_1B2135D3497F8A66_CLASS_1_12CFD4109BB62456_DISPOSE_OFFSET UNITYSDK_OFFSET(0x137B9A30)
#define CLASS_2_1B2135D3497F8A66_CLASS_1_12CFD4109BB62456_METHOD_1_3CAD92CFB876DBF6_OFFSET UNITYSDK_OFFSET(0x137BA5D0)
#define CLASS_2_1B2135D3497F8A66_CLASS_1_12CFD4109BB62456_METHOD_1_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0x137BA6A0)
#define CLASS_2_1B2135D3497F8A66_CLASS_1_12CFD4109BB62456_METHOD_1_A8F6F688241E6DBC_OFFSET UNITYSDK_OFFSET(0x137B9DA0)
#define CLASS_2_1B2135D3497F8A66_CLASS_1_12CFD4109BB62456_METHOD_1_B01F5292A1B6EB04_OFFSET UNITYSDK_OFFSET(0x137BA500)
#define CLASS_2_1B2135D3497F8A66_CLASS_1_12CFD4109BB62456__CTOR_OFFSET UNITYSDK_OFFSET(0x137BA190)

inline static constexpr unsigned int Class_2_1B2135D3497F8A66_Class_1_12CFD4109BB62456_TypeDefinitionIndex = 56230;

class Class_2_1B2135D3497F8A66_Class_1_12CFD4109BB62456 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::RPG::GameCore::GameEntity* Field_1_2; // 0x20
	::RPG::Client::MonoPlayerAttachmentController* Field_1_3; // 0x28
	::UnityEngine::Transform* Field_1_4; // 0x30
	::UnityEngine::Vector3 Field_1_5; // 0x38

	::System::Void _ctor(::Struct_2_76A4522D4905FF64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_76A4522D4905FF64))((::PBYTE)hIl2Cpp + CLASS_2_1B2135D3497F8A66_CLASS_1_12CFD4109BB62456__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B2135D3497F8A66_CLASS_1_12CFD4109BB62456_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_B01F5292A1B6EB04()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B2135D3497F8A66_CLASS_1_12CFD4109BB62456_METHOD_1_B01F5292A1B6EB04_OFFSET))(this);
	}

	::System::Void Method_1_3CAD92CFB876DBF6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B2135D3497F8A66_CLASS_1_12CFD4109BB62456_METHOD_1_3CAD92CFB876DBF6_OFFSET))(this);
	}

	::System::Boolean Method_1_A8F6F688241E6DBC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B2135D3497F8A66_CLASS_1_12CFD4109BB62456_METHOD_1_A8F6F688241E6DBC_OFFSET))(this);
	}

	::System::Void Method_1_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B2135D3497F8A66_CLASS_1_12CFD4109BB62456_METHOD_1_4EA6B1791DACA9CC_OFFSET))(this);
	}
};
