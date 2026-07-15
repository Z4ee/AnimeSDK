#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/RecoverablePlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace EnviromentSystem { class EnviromentProfile; }
namespace RPG::Client { class EnvironmentSystem; }
namespace RPGTools::Timeline::EnvironmentSyetem { class EnviroSysTransitionBehaviour_Class_1_44B94E282D7AD5BD; }
namespace System { class Object; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSTRANSITIONBEHAVIOUR_METHOD_3_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x19A57790)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSTRANSITIONBEHAVIOUR_METHOD_3_3D6722B9F8F20694_OFFSET UNITYSDK_OFFSET(0x19A56CE0)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSTRANSITIONBEHAVIOUR_METHOD_3_60C07F80F75AC78A_OFFSET UNITYSDK_OFFSET(0x19A571D0)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSTRANSITIONBEHAVIOUR_METHOD_3_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x19A56A70)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSTRANSITIONBEHAVIOUR_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x19A569B0)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSTRANSITIONBEHAVIOUR_METHOD_3_E693A0026D178D8E_OFFSET UNITYSDK_OFFSET(0x19A56B00)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSTRANSITIONBEHAVIOUR_METHOD_3_EC2B405D0723571D_OFFSET UNITYSDK_OFFSET(0x19A57AF0)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSTRANSITIONBEHAVIOUR_METHOD_3_ED29F23CD1CAE89E_OFFSET UNITYSDK_OFFSET(0x19A575A0)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSTRANSITIONBEHAVIOUR_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x19A567A0)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSTRANSITIONBEHAVIOUR_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x19A56B70)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSTRANSITIONBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x19A56BE0)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSTRANSITIONBEHAVIOUR__CCTOR_OFFSET UNITYSDK_OFFSET(0x19A57BF0)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSTRANSITIONBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x19A57BD0)

namespace RPGTools::Timeline::EnvironmentSyetem
{
	inline static constexpr unsigned int EnviroSysTransitionBehaviour_TypeDefinitionIndex = 46849;

	class EnviroSysTransitionBehaviour : public ::RPGTools::Timeline::RecoverablePlayableBehaviour
	{
	public:
		static ::RPGTools::Timeline::EnvironmentSyetem::EnviroSysTransitionBehaviour** StaticGet_Current()
		{
			return (::RPGTools::Timeline::EnvironmentSyetem::EnviroSysTransitionBehaviour**)Il2CppClass::FromTypeDefinitionIndex(EnviroSysTransitionBehaviour_TypeDefinitionIndex)->GetStaticField(0x6B530);
		}
		static ::System::Int32* StaticGet__LastEnvTransitionHandle()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroSysTransitionBehaviour_TypeDefinitionIndex)->GetStaticField(0x146D0);
		}
		::System::Single TransRate; // 0x18
		::System::Boolean UseStoryPriority; // 0x1C
		::System::String* ProfilePath; // 0x20
		::System::Int32 _EnvTransitionHandle; // 0x28
		::RPGTools::Timeline::EnvironmentSyetem::EnviroSysTransitionBehaviour_Class_1_44B94E282D7AD5BD* _EnvParamSource; // 0x30
		::RPG::Client::EnvironmentSystem* _EnvSystem; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSTRANSITIONBEHAVIOUR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSTRANSITIONBEHAVIOUR__CCTOR_OFFSET))();
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSTRANSITIONBEHAVIOUR_ONGRAPHSTART_OFFSET))(this, a1);
		}

		::System::Void OnGraphStop(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSTRANSITIONBEHAVIOUR_ONGRAPHSTOP_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSTRANSITIONBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_E693A0026D178D8E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSTRANSITIONBEHAVIOUR_METHOD_3_E693A0026D178D8E_OFFSET))(this);
		}

		::System::Void Method_3_60C07F80F75AC78A(::EnviromentSystem::EnviromentProfile* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSTRANSITIONBEHAVIOUR_METHOD_3_60C07F80F75AC78A_OFFSET))(this, a1);
		}

		::System::Void Method_3_ED29F23CD1CAE89E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSTRANSITIONBEHAVIOUR_METHOD_3_ED29F23CD1CAE89E_OFFSET))(this);
		}

		::System::Void Method_3_25DEA5C65A602671()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSTRANSITIONBEHAVIOUR_METHOD_3_25DEA5C65A602671_OFFSET))(this);
		}

		::System::Void Method_3_3D6722B9F8F20694()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSTRANSITIONBEHAVIOUR_METHOD_3_3D6722B9F8F20694_OFFSET))(this);
		}

		::System::Void Method_3_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSTRANSITIONBEHAVIOUR_METHOD_3_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_3_9681042564541CD6_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSTRANSITIONBEHAVIOUR_METHOD_3_9681042564541CD6_1_OFFSET))(this);
		}

		::System::Void Method_3_EC2B405D0723571D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSTRANSITIONBEHAVIOUR_METHOD_3_EC2B405D0723571D_OFFSET))(this);
		}
	};
}
