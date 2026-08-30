#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Context_1.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameLevelRotation.h"
#include "unitysdk/Struct_2_06297BD58B1627CC.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_C2963602F383E66F;
class Class_2_8B484FF8094B23EF;
namespace UnityEngine { class Transform; }

#define CLASS_2_ED5ACF982FC3BE02_METHOD_2_1561BFA77991A03A_OFFSET UNITYSDK_OFFSET(0x1C4AA600)
#define CLASS_2_ED5ACF982FC3BE02_METHOD_2_23DDC3B53AB5E1F1_OFFSET UNITYSDK_OFFSET(0x1C4AA680)
#define CLASS_2_ED5ACF982FC3BE02_METHOD_2_455E250D679F9642_OFFSET UNITYSDK_OFFSET(0x1C4AAD30)
#define CLASS_2_ED5ACF982FC3BE02_METHOD_2_673DE15674E18423_OFFSET UNITYSDK_OFFSET(0x1C4AA4C0)
#define CLASS_2_ED5ACF982FC3BE02_METHOD_2_D312400E7F0A0270_OFFSET UNITYSDK_OFFSET(0x1C4AA9B0)
#define CLASS_2_ED5ACF982FC3BE02_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1C4AA660)
#define CLASS_2_ED5ACF982FC3BE02__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4AAD90)

inline static constexpr unsigned int Class_2_ED5ACF982FC3BE02_TypeDefinitionIndex = 40824;

class Class_2_ED5ACF982FC3BE02 : public ::Entitas::Context_1<::Class_2_8B484FF8094B23EF*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5ACF982FC3BE02__CTOR_OFFSET))(this);
	}

	::Class_2_8B484FF8094B23EF* Method_2_673DE15674E18423()
	{
		return ((::Class_2_8B484FF8094B23EF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5ACF982FC3BE02_METHOD_2_673DE15674E18423_OFFSET))(this);
	}

	::Class_1_C2963602F383E66F* Method_2_1561BFA77991A03A()
	{
		return ((::Class_1_C2963602F383E66F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5ACF982FC3BE02_METHOD_2_1561BFA77991A03A_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5ACF982FC3BE02_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::Class_2_8B484FF8094B23EF* Method_2_23DDC3B53AB5E1F1(::UnityEngine::Transform* a1, ::RPG::Client::LittleGame::ETimelineControlGameLevelRotation a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6, ::UnityEngine::Vector3 a7, ::System::Nullable_1<::Struct_2_06297BD58B1627CC> a8)
	{
		return ((::Class_2_8B484FF8094B23EF*(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::Client::LittleGame::ETimelineControlGameLevelRotation, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Nullable_1<::Struct_2_06297BD58B1627CC>))((::PBYTE)hIl2Cpp + CLASS_2_ED5ACF982FC3BE02_METHOD_2_23DDC3B53AB5E1F1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_D312400E7F0A0270(::UnityEngine::Transform* a1, ::RPG::Client::LittleGame::ETimelineControlGameLevelRotation a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6, ::UnityEngine::Vector3 a7, ::System::Nullable_1<::Struct_2_06297BD58B1627CC> a8)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::Client::LittleGame::ETimelineControlGameLevelRotation, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Nullable_1<::Struct_2_06297BD58B1627CC>))((::PBYTE)hIl2Cpp + CLASS_2_ED5ACF982FC3BE02_METHOD_2_D312400E7F0A0270_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_455E250D679F9642()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5ACF982FC3BE02_METHOD_2_455E250D679F9642_OFFSET))(this);
	}
};
