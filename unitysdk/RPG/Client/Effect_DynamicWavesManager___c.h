#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x150E6E50)
#define RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x150E6E90)
#define RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER___C__UPDATEHITPOINTFROMCACHELIST_B__51_0_OFFSET UNITYSDK_OFFSET(0x150E6EA0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_DynamicWavesManager___c_TypeDefinitionIndex = 67294;

	class Effect_DynamicWavesManager___c : public ::System::Object
	{
	public:
		static ::RPG::Client::Effect_DynamicWavesManager___c** StaticGet___9()
		{
			return (::RPG::Client::Effect_DynamicWavesManager___c**)Il2CppClass::FromTypeDefinitionIndex(Effect_DynamicWavesManager___c_TypeDefinitionIndex)->GetStaticField(0x6B940);
		}
		static ::System::Func_2<::System::Boolean, ::System::Boolean>** StaticGet___9__51_0()
		{
			return (::System::Func_2<::System::Boolean, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Effect_DynamicWavesManager___c_TypeDefinitionIndex)->GetStaticField(0x6B948);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _UpdateHitPointFromCacheList_b__51_0(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_DYNAMICWAVESMANAGER___C__UPDATEHITPOINTFROMCACHELIST_B__51_0_OFFSET))(this, a1);
		}
	};
}
