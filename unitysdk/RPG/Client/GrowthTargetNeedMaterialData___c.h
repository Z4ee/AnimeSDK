#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ItemConfig; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GROWTHTARGETNEEDMATERIALDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD389C30)
#define RPG_CLIENT_GROWTHTARGETNEEDMATERIALDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD389C70)
#define RPG_CLIENT_GROWTHTARGETNEEDMATERIALDATA___C___ENSURECOMPOSEMATERIALMAP_B__8_0_OFFSET UNITYSDK_OFFSET(0xD389C80)

namespace RPG::Client
{
	inline static constexpr unsigned int GrowthTargetNeedMaterialData___c_TypeDefinitionIndex = 65667;

	class GrowthTargetNeedMaterialData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::GameCore::ItemConfig*, ::System::UInt32>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::RPG::GameCore::ItemConfig*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GrowthTargetNeedMaterialData___c_TypeDefinitionIndex)->GetStaticField(0x564D0);
		}
		static ::RPG::Client::GrowthTargetNeedMaterialData___c** StaticGet___9()
		{
			return (::RPG::Client::GrowthTargetNeedMaterialData___c**)Il2CppClass::FromTypeDefinitionIndex(GrowthTargetNeedMaterialData___c_TypeDefinitionIndex)->GetStaticField(0x564D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETNEEDMATERIALDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETNEEDMATERIALDATA___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 __EnsureComposeMaterialMap_b__8_0(::RPG::GameCore::ItemConfig* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::ItemConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETNEEDMATERIALDATA___C___ENSURECOMPOSEMATERIALMAP_B__8_0_OFFSET))(this, a1);
		}
	};
}
