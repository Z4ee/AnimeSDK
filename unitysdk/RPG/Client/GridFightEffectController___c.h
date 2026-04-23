#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA4728B0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA4728F0)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__PLAYFLYEFFECT_B__16_0_OFFSET UNITYSDK_OFFSET(0xA472900)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__PLAYFLYEFFECT_B__16_1_OFFSET UNITYSDK_OFFSET(0xA472910)
#define RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__PLAYFLYEFFECT_B__16_2_OFFSET UNITYSDK_OFFSET(0xA472920)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEffectController___c_TypeDefinitionIndex = 59327;

	class GridFightEffectController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::Vector3, ::System::Single>** StaticGet___9__16_0()
		{
			return (::System::Func_2<::UnityEngine::Vector3, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(GridFightEffectController___c_TypeDefinitionIndex)->GetStaticField(0x1A0E0);
		}
		static ::RPG::Client::GridFightEffectController___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightEffectController___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightEffectController___c_TypeDefinitionIndex)->GetStaticField(0x1A0E8);
		}
		static ::System::Func_2<::UnityEngine::Vector3, ::System::Single>** StaticGet___9__16_1()
		{
			return (::System::Func_2<::UnityEngine::Vector3, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(GridFightEffectController___c_TypeDefinitionIndex)->GetStaticField(0x1A0F0);
		}
		static ::System::Func_2<::UnityEngine::Vector3, ::System::Single>** StaticGet___9__16_2()
		{
			return (::System::Func_2<::UnityEngine::Vector3, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(GridFightEffectController___c_TypeDefinitionIndex)->GetStaticField(0x1A0F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Single _PlayFlyEffect_b__16_0(::UnityEngine::Vector3 p)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__PLAYFLYEFFECT_B__16_0_OFFSET))(this, p);
		}

		::System::Single _PlayFlyEffect_b__16_1(::UnityEngine::Vector3 p)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__PLAYFLYEFFECT_B__16_1_OFFSET))(this, p);
		}

		::System::Single _PlayFlyEffect_b__16_2(::UnityEngine::Vector3 p)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEFFECTCONTROLLER___C__PLAYFLYEFFECT_B__16_2_OFFSET))(this, p);
		}
	};
}
