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

#define RPG_CLIENT_SHADERPROPERTYOVERRIDEMONOPLUGIN_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xE0B6790)
#define RPG_CLIENT_SHADERPROPERTYOVERRIDEMONOPLUGIN_DUMP_OFFSET UNITYSDK_OFFSET(0xE0B5DE0)
#define RPG_CLIENT_SHADERPROPERTYOVERRIDEMONOPLUGIN_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xE0B5C20)
#define RPG_CLIENT_SHADERPROPERTYOVERRIDEMONOPLUGIN_GET_ISLEAFPREFERRED_OFFSET UNITYSDK_OFFSET(0xE0B5C30)
#define RPG_CLIENT_SHADERPROPERTYOVERRIDEMONOPLUGIN_LOAD_OFFSET UNITYSDK_OFFSET(0xE0B5E30)
#define RPG_CLIENT_SHADERPROPERTYOVERRIDEMONOPLUGIN_METHOD_7_00523BAC9115E920_1_OFFSET UNITYSDK_OFFSET(0xE0B5D00)
#define RPG_CLIENT_SHADERPROPERTYOVERRIDEMONOPLUGIN_METHOD_7_00523BAC9115E920_OFFSET UNITYSDK_OFFSET(0xE0B5C40)
#define RPG_CLIENT_SHADERPROPERTYOVERRIDEMONOPLUGIN_METHOD_7_3CDB16AF04E6187A_1_OFFSET UNITYSDK_OFFSET(0xE0B5D70)
#define RPG_CLIENT_SHADERPROPERTYOVERRIDEMONOPLUGIN_METHOD_7_3CDB16AF04E6187A_OFFSET UNITYSDK_OFFSET(0xE0B5CA0)
#define RPG_CLIENT_SHADERPROPERTYOVERRIDEMONOPLUGIN_METHOD_7_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0xE0B66E0)
#define RPG_CLIENT_SHADERPROPERTYOVERRIDEMONOPLUGIN_SPAWNED_OFFSET UNITYSDK_OFFSET(0xE0B6750)
#define RPG_CLIENT_SHADERPROPERTYOVERRIDEMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xE0B67D0)

namespace RPG::Client
{
	inline static constexpr unsigned int ShaderPropertyOverrideMonoPlugin_TypeDefinitionIndex = 71022;

	class ShaderPropertyOverrideMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::ShaderPropertyOverrideBehavior*>
	{
	public:
		::System::String* _instanceId; // 0x30
		::ShaderPropertyProfile* profile; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::PropertyOverrideValue*>* overrideValues; // 0x40
		::System::Boolean requireMaterialHasProperty; // 0x48
		::System::Boolean _leafPreferred; // 0x49

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
