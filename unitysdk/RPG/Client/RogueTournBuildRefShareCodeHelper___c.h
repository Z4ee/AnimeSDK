#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueFormulaData; }
namespace RPG::Client { class RogueTournHexData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC803BD0)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC803C10)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER___C___TOPAYLOAD_B__8_0_OFFSET UNITYSDK_OFFSET(0xC803C20)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER___C___TOPAYLOAD_B__8_1_OFFSET UNITYSDK_OFFSET(0xC803C40)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER___C___TOPAYLOAD_B__8_2_OFFSET UNITYSDK_OFFSET(0xC803C60)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER___C___TOPAYLOAD_B__8_3_OFFSET UNITYSDK_OFFSET(0xC803C80)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER___C___TOPAYLOAD_B__8_4_OFFSET UNITYSDK_OFFSET(0xC803CA0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournBuildRefShareCodeHelper___c_TypeDefinitionIndex = 63188;

	class RogueTournBuildRefShareCodeHelper___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::RogueTournHexData*, ::System::UInt32>** StaticGet___9__8_3()
		{
			return (::System::Func_2<::RPG::Client::RogueTournHexData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournBuildRefShareCodeHelper___c_TypeDefinitionIndex)->GetStaticField(0x37D30);
		}
		static ::System::Func_2<::RPG::Client::RogueTournHexData*, ::System::UInt32>** StaticGet___9__8_2()
		{
			return (::System::Func_2<::RPG::Client::RogueTournHexData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournBuildRefShareCodeHelper___c_TypeDefinitionIndex)->GetStaticField(0x37D38);
		}
		static ::System::Func_2<::RPG::GameCore::AvatarBaseType, ::System::Int32>** StaticGet___9__8_4()
		{
			return (::System::Func_2<::RPG::GameCore::AvatarBaseType, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournBuildRefShareCodeHelper___c_TypeDefinitionIndex)->GetStaticField(0x37D40);
		}
		static ::System::Func_2<::RPG::Client::RogueFormulaData*, ::System::UInt32>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::RPG::Client::RogueFormulaData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournBuildRefShareCodeHelper___c_TypeDefinitionIndex)->GetStaticField(0x37D48);
		}
		static ::System::Func_2<::RPG::Client::RogueFormulaData*, ::System::UInt32>** StaticGet___9__8_1()
		{
			return (::System::Func_2<::RPG::Client::RogueFormulaData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournBuildRefShareCodeHelper___c_TypeDefinitionIndex)->GetStaticField(0x37D50);
		}
		static ::RPG::Client::RogueTournBuildRefShareCodeHelper___c** StaticGet___9()
		{
			return (::RPG::Client::RogueTournBuildRefShareCodeHelper___c**)Il2CppClass::FromTypeDefinitionIndex(RogueTournBuildRefShareCodeHelper___c_TypeDefinitionIndex)->GetStaticField(0x37D58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 __ToPayload_b__8_0(::RPG::Client::RogueFormulaData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RogueFormulaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER___C___TOPAYLOAD_B__8_0_OFFSET))(this, a1);
		}

		::System::UInt32 __ToPayload_b__8_1(::RPG::Client::RogueFormulaData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RogueFormulaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER___C___TOPAYLOAD_B__8_1_OFFSET))(this, a1);
		}

		::System::UInt32 __ToPayload_b__8_2(::RPG::Client::RogueTournHexData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RogueTournHexData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER___C___TOPAYLOAD_B__8_2_OFFSET))(this, a1);
		}

		::System::UInt32 __ToPayload_b__8_3(::RPG::Client::RogueTournHexData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RogueTournHexData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER___C___TOPAYLOAD_B__8_3_OFFSET))(this, a1);
		}

		::System::Int32 __ToPayload_b__8_4(::RPG::GameCore::AvatarBaseType a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::AvatarBaseType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER___C___TOPAYLOAD_B__8_4_OFFSET))(this, a1);
		}
	};
}
