#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Context_1.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameLevelRotation.h"
#include "unitysdk/Struct_2_06297BD58B1627CC.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_C2963602F383E66F;
class Class_2_A41F1ABCEA98EF1E;
namespace UnityEngine { class Transform; }

#define CLASS_2_ED5ACF982FC3BE02_METHOD_2_23DDC3B53AB5E1F1_OFFSET UNITYSDK_OFFSET(0x17F60460)
#define CLASS_2_ED5ACF982FC3BE02_METHOD_2_58EA5F4E77C0F4AE_OFFSET UNITYSDK_OFFSET(0x17F602C0)
#define CLASS_2_ED5ACF982FC3BE02_METHOD_2_7183C790EA8096D2_OFFSET UNITYSDK_OFFSET(0x17F60B10)
#define CLASS_2_ED5ACF982FC3BE02_METHOD_2_D312400E7F0A0270_OFFSET UNITYSDK_OFFSET(0x17F60790)
#define CLASS_2_ED5ACF982FC3BE02_METHOD_2_E14A7FCF78650419_OFFSET UNITYSDK_OFFSET(0x17F603E0)
#define CLASS_2_ED5ACF982FC3BE02_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17F60440)
#define CLASS_2_ED5ACF982FC3BE02__CTOR_OFFSET UNITYSDK_OFFSET(0x17F60B70)

inline static constexpr unsigned int Class_2_ED5ACF982FC3BE02_TypeDefinitionIndex = 38369;

class Class_2_ED5ACF982FC3BE02 : public ::Entitas::Context_1<::Class_2_A41F1ABCEA98EF1E*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5ACF982FC3BE02__CTOR_OFFSET))(this);
	}

	::Class_2_A41F1ABCEA98EF1E* Method_2_58EA5F4E77C0F4AE()
	{
		return ((::Class_2_A41F1ABCEA98EF1E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5ACF982FC3BE02_METHOD_2_58EA5F4E77C0F4AE_OFFSET))(this);
	}

	::Class_1_C2963602F383E66F* Method_2_E14A7FCF78650419()
	{
		return ((::Class_1_C2963602F383E66F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5ACF982FC3BE02_METHOD_2_E14A7FCF78650419_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5ACF982FC3BE02_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::Class_2_A41F1ABCEA98EF1E* Method_2_23DDC3B53AB5E1F1(::UnityEngine::Transform* a1, ::RPG::Client::LittleGame::ETimelineControlGameLevelRotation a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6, ::UnityEngine::Vector3 a7, ::System::Nullable_1<::Struct_2_06297BD58B1627CC> a8)
	{
		return ((::Class_2_A41F1ABCEA98EF1E*(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::Client::LittleGame::ETimelineControlGameLevelRotation, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Nullable_1<::Struct_2_06297BD58B1627CC>))((::PBYTE)hIl2Cpp + CLASS_2_ED5ACF982FC3BE02_METHOD_2_23DDC3B53AB5E1F1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_D312400E7F0A0270(::UnityEngine::Transform* a1, ::RPG::Client::LittleGame::ETimelineControlGameLevelRotation a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector3 a6, ::UnityEngine::Vector3 a7, ::System::Nullable_1<::Struct_2_06297BD58B1627CC> a8)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::Client::LittleGame::ETimelineControlGameLevelRotation, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Nullable_1<::Struct_2_06297BD58B1627CC>))((::PBYTE)hIl2Cpp + CLASS_2_ED5ACF982FC3BE02_METHOD_2_D312400E7F0A0270_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_7183C790EA8096D2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED5ACF982FC3BE02_METHOD_2_7183C790EA8096D2_OFFSET))(this);
	}
};
