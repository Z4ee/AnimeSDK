#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"

namespace RPG::Client { class DeformationCharacterCasterMonoPlugin; }
namespace RPG::Client { class DeformationCharacterCasterMonoPlugin_DeformationCasterTransform; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_GET_HASRUNTIMEBINDING_OFFSET UNITYSDK_OFFSET(0xCBEF380)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0xCBEF9B0)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_METHOD_3_0A827B867256B61D_OFFSET UNITYSDK_OFFSET(0xCBEFA90)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xCBEFEA0)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_METHOD_3_245860B16C924CF6_OFFSET UNITYSDK_OFFSET(0xCBEF890)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_METHOD_3_305BA812E29C43AF_OFFSET UNITYSDK_OFFSET(0xCBF04D0)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xCBF01A0)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0xCBF0130)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xCBEF070)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_METHOD_3_83259CE775EE8F19_OFFSET UNITYSDK_OFFSET(0xCBF0240)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_METHOD_3_8542E37E74FDE1B5_OFFSET UNITYSDK_OFFSET(0xCBEF420)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_METHOD_3_930073A6194C4594_OFFSET UNITYSDK_OFFSET(0xCBEEF10)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_METHOD_3_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0xCBEEEA0)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xCBEEE10)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_METHOD_3_A30A293C4A520E17_OFFSET UNITYSDK_OFFSET(0xCBEFE20)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_METHOD_3_AA317D53E714CBE8_OFFSET UNITYSDK_OFFSET(0xCBEF9F0)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_METHOD_3_B749F4B0D43F6641_OFFSET UNITYSDK_OFFSET(0xCBEF830)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_METHOD_3_C3F147D70BD50952_OFFSET UNITYSDK_OFFSET(0xCBF09E0)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xCBF00E0)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_METHOD_3_CE8DC3326B601721_OFFSET UNITYSDK_OFFSET(0xCBF0570)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_METHOD_3_D9BF9B27FAC3AAD2_OFFSET UNITYSDK_OFFSET(0xCBEFF60)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_METHOD_3_F1C870D01294DAF7_OFFSET UNITYSDK_OFFSET(0xCBEF0E0)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0xCBF01E0)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0xCBF0CB0)
#define RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0xCBF0C20)

namespace RPG::Client
{
	inline static constexpr unsigned int DeformationCharacterCasterBehavior_TypeDefinitionIndex = 70268;

	class DeformationCharacterCasterBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_DefualtBoneNames()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DeformationCharacterCasterBehavior_TypeDefinitionIndex)->GetStaticField(0x20640);
		}
		// static const ::System::Int32 k_SerializedBindVersion = 0xFFFFFFFF; // 0x0
		::UnityEngine::GameObject* _RuntimeBindTarget; // 0x38
		::System::Int32 _RuntimeBindVersion; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::DeformationCharacterCasterMonoPlugin_DeformationCasterTransform*>* _RuntimeBindCasterTransforms; // 0x48
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* _CasterRenderers; // 0x50
		::System::Collections::Generic::List_1<::System::Int32>* _InstanceIds; // 0x58
		::System::Int32 _AppliedBindVersion; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR__CCTOR_OFFSET))();
		}

		::System::Void Method_3_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_3_9681042564541CD6_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_METHOD_3_9681042564541CD6_1_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_930073A6194C4594()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_METHOD_3_930073A6194C4594_OFFSET))(this);
		}

		::System::Void Method_3_0A827B867256B61D(::UnityEngine::GameObject* a1, ::Il2CppArray<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_METHOD_3_0A827B867256B61D_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_1290EA767C459179()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_METHOD_3_1290EA767C459179_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET))(this);
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

		::System::Void Method_3_305BA812E29C43AF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_METHOD_3_305BA812E29C43AF_OFFSET))(this);
		}

		::System::Void Method_3_245860B16C924CF6(::UnityEngine::GameObject* a1, ::System::Collections::Generic::List_1<::RPG::Client::DeformationCharacterCasterMonoPlugin_DeformationCasterTransform*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::RPG::Client::DeformationCharacterCasterMonoPlugin_DeformationCasterTransform*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_METHOD_3_245860B16C924CF6_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_CE8DC3326B601721(::UnityEngine::GameObject* a1, ::RPG::Client::DeformationCharacterCasterMonoPlugin_DeformationCasterTransform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::DeformationCharacterCasterMonoPlugin_DeformationCasterTransform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_METHOD_3_CE8DC3326B601721_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_F1C870D01294DAF7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_METHOD_3_F1C870D01294DAF7_OFFSET))(this);
		}

		::System::Void Method_3_83259CE775EE8F19()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_METHOD_3_83259CE775EE8F19_OFFSET))(this);
		}

		::System::Void Method_3_8542E37E74FDE1B5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_METHOD_3_8542E37E74FDE1B5_OFFSET))(this);
		}

		::System::Boolean get_HasRuntimeBinding()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_GET_HASRUNTIMEBINDING_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DeformationCharacterCasterMonoPlugin_DeformationCasterTransform*>* Method_3_B749F4B0D43F6641()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DeformationCharacterCasterMonoPlugin_DeformationCasterTransform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_METHOD_3_B749F4B0D43F6641_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DeformationCharacterCasterMonoPlugin_DeformationCasterTransform*>* Method_3_AA317D53E714CBE8()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DeformationCharacterCasterMonoPlugin_DeformationCasterTransform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_METHOD_3_AA317D53E714CBE8_OFFSET))(this);
		}

		::System::Void Method_3_A30A293C4A520E17(::UnityEngine::GameObject* a1, ::System::Collections::Generic::List_1<::RPG::Client::DeformationCharacterCasterMonoPlugin_DeformationCasterTransform*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::RPG::Client::DeformationCharacterCasterMonoPlugin_DeformationCasterTransform*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_METHOD_3_A30A293C4A520E17_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_METHOD_3_CA373AA1C7054598_OFFSET))(this);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::DeformationCharacterCasterMonoPlugin_DeformationCasterTransform*>* Method_3_C3F147D70BD50952(::System::Collections::Generic::List_1<::RPG::Client::DeformationCharacterCasterMonoPlugin_DeformationCasterTransform*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DeformationCharacterCasterMonoPlugin_DeformationCasterTransform*>*(*)(::System::Collections::Generic::List_1<::RPG::Client::DeformationCharacterCasterMonoPlugin_DeformationCasterTransform*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_METHOD_3_C3F147D70BD50952_OFFSET))(a1);
		}

		::RPG::Client::DeformationCharacterCasterMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::DeformationCharacterCasterMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DEFORMATIONCHARACTERCASTERBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}
	};
}
