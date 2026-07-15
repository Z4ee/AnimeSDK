#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class MonoEffect; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOEFFECTPLUGINBASE_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0x10D00FA0)
#define RPG_CLIENT_MONOEFFECTPLUGINBASE_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0x10CFEB10)
#define RPG_CLIENT_MONOEFFECTPLUGINBASE_DISABLEPLUGIN_OFFSET UNITYSDK_OFFSET(0x10D01020)
#define RPG_CLIENT_MONOEFFECTPLUGINBASE_ENABLEPLUGIN_OFFSET UNITYSDK_OFFSET(0x10D00FE0)
#define RPG_CLIENT_MONOEFFECTPLUGINBASE_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0x10D01160)
#define RPG_CLIENT_MONOEFFECTPLUGINBASE_GET_ISINIT_OFFSET UNITYSDK_OFFSET(0x10D01460)
#define RPG_CLIENT_MONOEFFECTPLUGINBASE_GET_OWNEREFFECT_OFFSET UNITYSDK_OFFSET(0x10D01450)
#define RPG_CLIENT_MONOEFFECTPLUGINBASE_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0x10D00F60)
#define RPG_CLIENT_MONOEFFECTPLUGINBASE_LATETICK_OFFSET UNITYSDK_OFFSET(0x10D01100)
#define RPG_CLIENT_MONOEFFECTPLUGINBASE_METHOD_5_39979B9C3D6DBCEA_OFFSET UNITYSDK_OFFSET(0x10D01390)
#define RPG_CLIENT_MONOEFFECTPLUGINBASE_METHOD_5_789DF5FE645E0AFD_OFFSET UNITYSDK_OFFSET(0x10D013F0)
#define RPG_CLIENT_MONOEFFECTPLUGINBASE_METHOD_5_90EC931103FB6F31_OFFSET UNITYSDK_OFFSET(0x10D01320)
#define RPG_CLIENT_MONOEFFECTPLUGINBASE_METHOD_5_A3DF100F0752DD6E_1_OFFSET UNITYSDK_OFFSET(0x10D01270)
#define RPG_CLIENT_MONOEFFECTPLUGINBASE_METHOD_5_A3DF100F0752DD6E_OFFSET UNITYSDK_OFFSET(0x10D011C0)
#define RPG_CLIENT_MONOEFFECTPLUGINBASE_METHOD_5_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x10CFE840)
#define RPG_CLIENT_MONOEFFECTPLUGINBASE_METHOD_5_CD94359AF963D70E_OFFSET UNITYSDK_OFFSET(0x10CE15B0)
#define RPG_CLIENT_MONOEFFECTPLUGINBASE_PRERESETPLUGIN_OFFSET UNITYSDK_OFFSET(0x10D01060)
#define RPG_CLIENT_MONOEFFECTPLUGINBASE_SET_ISINIT_OFFSET UNITYSDK_OFFSET(0x10D01470)
#define RPG_CLIENT_MONOEFFECTPLUGINBASE_TICK_OFFSET UNITYSDK_OFFSET(0x10D010A0)
#define RPG_CLIENT_MONOEFFECTPLUGINBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x10CE4A80)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginBase_TypeDefinitionIndex = 66901;

	class MonoEffectPluginBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::MonoEffect* Field_5_0; // 0x18
		::System::Boolean Field_5_1; // 0x20
		::System::Boolean Field_5_2; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINBASE__CTOR_OFFSET))(this);
		}

		::System::Boolean IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINBASE_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINBASE_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void EnablePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINBASE_ENABLEPLUGIN_OFFSET))(this);
		}

		::System::Void DisablePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINBASE_DISABLEPLUGIN_OFFSET))(this);
		}

		::System::Void DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINBASE_DESTROYPLUGIN_OFFSET))(this);
		}

		::System::Void PreResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINBASE_PRERESETPLUGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINBASE_TICK_OFFSET))(this, a1);
		}

		::System::Void LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINBASE_LATETICK_OFFSET))(this, a1);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINBASE_ENDOFLATETICK_OFFSET))(this, a1);
		}

		::System::Void Method_5_CD94359AF963D70E(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINBASE_METHOD_5_CD94359AF963D70E_OFFSET))(this, a1);
		}

		::System::Void Method_5_B09E78EE7EE4F8FA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINBASE_METHOD_5_B09E78EE7EE4F8FA_OFFSET))(this);
		}

		::UnityEngine::GameObject* Method_5_A3DF100F0752DD6E()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINBASE_METHOD_5_A3DF100F0752DD6E_OFFSET))(this);
		}

		::UnityEngine::GameObject* Method_5_A3DF100F0752DD6E_1()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINBASE_METHOD_5_A3DF100F0752DD6E_1_OFFSET))(this);
		}

		::UnityEngine::Transform* Method_5_90EC931103FB6F31()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINBASE_METHOD_5_90EC931103FB6F31_OFFSET))(this);
		}

		::UnityEngine::Material* Method_5_39979B9C3D6DBCEA(::UnityEngine::Renderer* a1)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINBASE_METHOD_5_39979B9C3D6DBCEA_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Material*>* Method_5_789DF5FE645E0AFD(::UnityEngine::Renderer* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINBASE_METHOD_5_789DF5FE645E0AFD_OFFSET))(this, a1);
		}

		::RPG::Client::MonoEffect* get_OwnerEffect()
		{
			return ((::RPG::Client::MonoEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINBASE_GET_OWNEREFFECT_OFFSET))(this);
		}

		::System::Boolean get_IsInit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINBASE_GET_ISINIT_OFFSET))(this);
		}

		::System::Void set_IsInit(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINBASE_SET_ISINIT_OFFSET))(this, a1);
		}
	};
}
