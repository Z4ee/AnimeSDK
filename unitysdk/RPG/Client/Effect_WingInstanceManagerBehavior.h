#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace RPG::Client { class Effect_WingInstanceManagerMonoPlugin; }
namespace RPG::Client { class Effect_WingInstanceMonoPlugin; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define RPG_CLIENT_EFFECT_WINGINSTANCEMANAGERBEHAVIOR_GET__OWNER_OFFSET UNITYSDK_OFFSET(0xCE27F30)
#define RPG_CLIENT_EFFECT_WINGINSTANCEMANAGERBEHAVIOR_LATETICK_OFFSET UNITYSDK_OFFSET(0xCE27C40)
#define RPG_CLIENT_EFFECT_WINGINSTANCEMANAGERBEHAVIOR_METHOD_3_3B258437A86233AC_OFFSET UNITYSDK_OFFSET(0xCE278D0)
#define RPG_CLIENT_EFFECT_WINGINSTANCEMANAGERBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0xCE27860)
#define RPG_CLIENT_EFFECT_WINGINSTANCEMANAGERBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0xCE27BE0)
#define RPG_CLIENT_EFFECT_WINGINSTANCEMANAGERBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET UNITYSDK_OFFSET(0xCE28320)
#define RPG_CLIENT_EFFECT_WINGINSTANCEMANAGERBEHAVIOR_METHOD_3_4343F372F34C05BF_4_OFFSET UNITYSDK_OFFSET(0xCE28380)
#define RPG_CLIENT_EFFECT_WINGINSTANCEMANAGERBEHAVIOR_METHOD_3_4343F372F34C05BF_5_OFFSET UNITYSDK_OFFSET(0xCE283E0)
#define RPG_CLIENT_EFFECT_WINGINSTANCEMANAGERBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xCE27800)
#define RPG_CLIENT_EFFECT_WINGINSTANCEMANAGERBEHAVIOR_METHOD_3_A40475C44AA8CEAB_OFFSET UNITYSDK_OFFSET(0xCE28200)
#define RPG_CLIENT_EFFECT_WINGINSTANCEMANAGERBEHAVIOR_METHOD_3_AB88190D695EBEA9_OFFSET UNITYSDK_OFFSET(0xCE27FB0)
#define RPG_CLIENT_EFFECT_WINGINSTANCEMANAGERBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0xCE28450)
#define RPG_CLIENT_EFFECT_WINGINSTANCEMANAGERBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0xCE28440)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_WingInstanceManagerBehavior_TypeDefinitionIndex = 70497;

	class Effect_WingInstanceManagerBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::System::Int32* StaticGet__TimeLocationProp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Effect_WingInstanceManagerBehavior_TypeDefinitionIndex)->GetStaticField(0x14990);
		}
		::System::Collections::Generic::List_1<::RPG::Client::Effect_WingInstanceMonoPlugin*>* _InstanceList; // 0x38
		::UnityEngine::MaterialPropertyBlock* _MPB; // 0x40
		::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* _MatrixList; // 0x48
		::System::Collections::Generic::List_1<::System::Single>* _TimeLocationList; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_WINGINSTANCEMANAGERBEHAVIOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_WINGINSTANCEMANAGERBEHAVIOR__CCTOR_OFFSET))();
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_WINGINSTANCEMANAGERBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_WINGINSTANCEMANAGERBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_WINGINSTANCEMANAGERBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET))(this);
		}

		::System::Void LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_WINGINSTANCEMANAGERBEHAVIOR_LATETICK_OFFSET))(this, a1);
		}

		::System::Void Method_3_4343F372F34C05BF_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_WINGINSTANCEMANAGERBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_WINGINSTANCEMANAGERBEHAVIOR_METHOD_3_4343F372F34C05BF_4_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_WINGINSTANCEMANAGERBEHAVIOR_METHOD_3_4343F372F34C05BF_5_OFFSET))(this);
		}

		::System::Void Method_3_3B258437A86233AC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_WINGINSTANCEMANAGERBEHAVIOR_METHOD_3_3B258437A86233AC_OFFSET))(this);
		}

		::System::Void Method_3_AB88190D695EBEA9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_WINGINSTANCEMANAGERBEHAVIOR_METHOD_3_AB88190D695EBEA9_OFFSET))(this);
		}

		::System::Void Method_3_A40475C44AA8CEAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_WINGINSTANCEMANAGERBEHAVIOR_METHOD_3_A40475C44AA8CEAB_OFFSET))(this);
		}

		::RPG::Client::Effect_WingInstanceManagerMonoPlugin* get__Owner()
		{
			return ((::RPG::Client::Effect_WingInstanceManagerMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_WINGINSTANCEMANAGERBEHAVIOR_GET__OWNER_OFFSET))(this);
		}
	};
}
