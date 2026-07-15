#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class Effect_PathDeformMonoPlugin; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0x1511C070)
#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR_METHOD_3_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1511B820)
#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR_METHOD_3_3CCA0B8A31B650A8_OFFSET UNITYSDK_OFFSET(0x1511C0B0)
#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x1511B9D0)
#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0x1511BA30)
#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1511B970)
#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR_METHOD_3_8F7825DAFFB9B517_OFFSET UNITYSDK_OFFSET(0x1511B370)
#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR_METHOD_3_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x1511B8F0)
#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1511B270)
#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR_METHOD_3_F0D9B6AAFF504D87_OFFSET UNITYSDK_OFFSET(0x1511B300)
#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0x1511BA90)
#define RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1511CFD0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_PathDeformBehavior_TypeDefinitionIndex = 67369;

	class Effect_PathDeformBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		::UnityEngine::MaterialPropertyBlock* _MatBlock; // 0x38
		::Il2CppArray<::UnityEngine::Vector3>* AxisAlignBoundCorners; // 0x40
		::UnityEngine::Bounds _RenderBound; // 0x48
		::System::Collections::Generic::List_1<::System::Single>* _PerInsPropertyList; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_3_F0D9B6AAFF504D87()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR_METHOD_3_F0D9B6AAFF504D87_OFFSET))(this);
		}

		::System::Void Method_3_30D1209326FA87FC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR_METHOD_3_30D1209326FA87FC_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Void Method_3_8F7825DAFFB9B517()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR_METHOD_3_8F7825DAFFB9B517_OFFSET))(this);
		}

		::System::Void Method_3_9681042564541CD6_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR_METHOD_3_9681042564541CD6_1_OFFSET))(this);
		}

		::System::Void Method_3_3CCA0B8A31B650A8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR_METHOD_3_3CCA0B8A31B650A8_OFFSET))(this);
		}

		::RPG::Client::Effect_PathDeformMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::Effect_PathDeformMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_PATHDEFORMBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}
	};
}
