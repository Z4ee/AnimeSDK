#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"

namespace RPG::Client { class DeformationCharacterCasterMonoPlugin; }
namespace RPG::Client { class DeformationCharacterCasterMonoPlugin_DeformationCasterTransform; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0x18093360)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_METHOD_3_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0x18093B00)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x180930F0)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x18092E80)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0x18093080)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x18092E20)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_METHOD_3_7B114B11B5D7CDE9_OFFSET UNITYSDK_OFFSET(0x18093550)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_METHOD_3_7C4654B8D22255C9_OFFSET UNITYSDK_OFFSET(0x180933A0)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x18092D90)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_METHOD_3_D9BF9B27FAC3AAD2_OFFSET UNITYSDK_OFFSET(0x18092EF0)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_METHOD_3_F5A5858ACB836225_OFFSET UNITYSDK_OFFSET(0x18093190)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0x18093130)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x18093C20)

namespace RPG::Client
{
	inline static constexpr unsigned int DeformationCharacterCasterBehavior_TypeDefinitionIndex = 67120;

	class DeformationCharacterCasterBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* _CasterRenderers; // 0x38
		::System::Collections::Generic::List_1<::System::Int32>* _InstanceIds; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET))(this);
		}

		::System::Boolean Method_3_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Void Method_3_D9BF9B27FAC3AAD2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_METHOD_3_D9BF9B27FAC3AAD2_OFFSET))(this);
		}

		::System::Void Method_3_7C4654B8D22255C9(::UnityEngine::GameObject* a1, ::System::Collections::Generic::List_1<::RPG::Client::DeformationCharacterCasterMonoPlugin_DeformationCasterTransform*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::RPG::Client::DeformationCharacterCasterMonoPlugin_DeformationCasterTransform*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_METHOD_3_7C4654B8D22255C9_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_7B114B11B5D7CDE9(::UnityEngine::GameObject* a1, ::RPG::Client::DeformationCharacterCasterMonoPlugin_DeformationCasterTransform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::DeformationCharacterCasterMonoPlugin_DeformationCasterTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_METHOD_3_7B114B11B5D7CDE9_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_F5A5858ACB836225()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_METHOD_3_F5A5858ACB836225_OFFSET))(this);
		}

		::System::Void Method_3_289F28027FF47717()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_METHOD_3_289F28027FF47717_OFFSET))(this);
		}

		::RPG::Client::DeformationCharacterCasterMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::DeformationCharacterCasterMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}
	};
}
