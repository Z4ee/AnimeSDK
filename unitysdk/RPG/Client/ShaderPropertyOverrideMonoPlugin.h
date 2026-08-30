#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/Struct_2_331ACDD60B60D2E3.h"
#include "unitysdk/Struct_2_CC45B4503679E14E_11.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

class ShaderPropertyProfile;
namespace RPG::Client { class PropertyOverrideValue; }
namespace RPG::Client { class ShaderPropertyOverrideBehavior; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SHADERPROPERTYOVERRIDEMONOPLUGIN_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x1AF7D9E0)
#define RPG_CLIENT_SHADERPROPERTYOVERRIDEMONOPLUGIN_DUMP_OFFSET UNITYSDK_OFFSET(0x1AF7D030)
#define RPG_CLIENT_SHADERPROPERTYOVERRIDEMONOPLUGIN_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x1AF7CE70)
#define RPG_CLIENT_SHADERPROPERTYOVERRIDEMONOPLUGIN_GET_ISLEAFPREFERRED_OFFSET UNITYSDK_OFFSET(0x1AF7CE80)
#define RPG_CLIENT_SHADERPROPERTYOVERRIDEMONOPLUGIN_LOAD_OFFSET UNITYSDK_OFFSET(0x1AF7D080)
#define RPG_CLIENT_SHADERPROPERTYOVERRIDEMONOPLUGIN_METHOD_7_00523BAC9115E920_1_OFFSET UNITYSDK_OFFSET(0x1AF7CF50)
#define RPG_CLIENT_SHADERPROPERTYOVERRIDEMONOPLUGIN_METHOD_7_00523BAC9115E920_OFFSET UNITYSDK_OFFSET(0x1AF7CE90)
#define RPG_CLIENT_SHADERPROPERTYOVERRIDEMONOPLUGIN_METHOD_7_3CDB16AF04E6187A_1_OFFSET UNITYSDK_OFFSET(0x1AF7CFC0)
#define RPG_CLIENT_SHADERPROPERTYOVERRIDEMONOPLUGIN_METHOD_7_3CDB16AF04E6187A_OFFSET UNITYSDK_OFFSET(0x1AF7CEF0)
#define RPG_CLIENT_SHADERPROPERTYOVERRIDEMONOPLUGIN_METHOD_7_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x1AF7D930)
#define RPG_CLIENT_SHADERPROPERTYOVERRIDEMONOPLUGIN_SPAWNED_OFFSET UNITYSDK_OFFSET(0x1AF7D9A0)
#define RPG_CLIENT_SHADERPROPERTYOVERRIDEMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF7DA20)

namespace RPG::Client
{
	inline static constexpr unsigned int ShaderPropertyOverrideMonoPlugin_TypeDefinitionIndex = 70990;

	class ShaderPropertyOverrideMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::ShaderPropertyOverrideBehavior*>
	{
	public:
		::System::String* _instanceId; // 0x30
		::ShaderPropertyProfile* profile; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::PropertyOverrideValue*>* overrideValues; // 0x40
		::System::Boolean onlyAffectMatchingShader; // 0x48
		::System::Boolean requireMaterialHasProperty; // 0x49
		::System::Boolean _leafPreferred; // 0x4A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHADERPROPERTYOVERRIDEMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::String* get_InstanceId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHADERPROPERTYOVERRIDEMONOPLUGIN_GET_INSTANCEID_OFFSET))(this);
		}

		::System::Boolean get_IsLeafPreferred()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHADERPROPERTYOVERRIDEMONOPLUGIN_GET_ISLEAFPREFERRED_OFFSET))(this);
		}

		static ::Struct_2_331ACDD60B60D2E3 Method_7_00523BAC9115E920(::UnityEngine::Color a1)
		{
			return ((::Struct_2_331ACDD60B60D2E3(*)(::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHADERPROPERTYOVERRIDEMONOPLUGIN_METHOD_7_00523BAC9115E920_OFFSET))(a1);
		}

		static ::Struct_2_331ACDD60B60D2E3 Method_7_3CDB16AF04E6187A(::UnityEngine::Vector4 a1)
		{
			return ((::Struct_2_331ACDD60B60D2E3(*)(::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHADERPROPERTYOVERRIDEMONOPLUGIN_METHOD_7_3CDB16AF04E6187A_OFFSET))(a1);
		}

		static ::UnityEngine::Color Method_7_00523BAC9115E920_1(::Struct_2_331ACDD60B60D2E3 a1)
		{
			return ((::UnityEngine::Color(*)(::Struct_2_331ACDD60B60D2E3))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHADERPROPERTYOVERRIDEMONOPLUGIN_METHOD_7_00523BAC9115E920_1_OFFSET))(a1);
		}

		static ::UnityEngine::Vector4 Method_7_3CDB16AF04E6187A_1(::Struct_2_331ACDD60B60D2E3 a1)
		{
			return ((::UnityEngine::Vector4(*)(::Struct_2_331ACDD60B60D2E3))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHADERPROPERTYOVERRIDEMONOPLUGIN_METHOD_7_3CDB16AF04E6187A_1_OFFSET))(a1);
		}

		::System::Void Dump(::Struct_2_CC45B4503679E14E_11 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_CC45B4503679E14E_11))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHADERPROPERTYOVERRIDEMONOPLUGIN_DUMP_OFFSET))(this, a1);
		}

		::System::Void Load(::Struct_2_CC45B4503679E14E_11 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_CC45B4503679E14E_11))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHADERPROPERTYOVERRIDEMONOPLUGIN_LOAD_OFFSET))(this, a1);
		}

		::System::Void Method_7_A239DF324AF4215D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHADERPROPERTYOVERRIDEMONOPLUGIN_METHOD_7_A239DF324AF4215D_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHADERPROPERTYOVERRIDEMONOPLUGIN_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHADERPROPERTYOVERRIDEMONOPLUGIN_DESPAWNED_OFFSET))(this);
		}
	};
}
