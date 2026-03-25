#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueFormulaData; }
namespace RPG::Client { class RogueTournHexData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA37B9E0)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA37BA20)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER___C___TOPAYLOAD_B__8_0_OFFSET UNITYSDK_OFFSET(0xA37BA30)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER___C___TOPAYLOAD_B__8_1_OFFSET UNITYSDK_OFFSET(0xA37BA50)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER___C___TOPAYLOAD_B__8_2_OFFSET UNITYSDK_OFFSET(0xA37BA70)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER___C___TOPAYLOAD_B__8_3_OFFSET UNITYSDK_OFFSET(0xA37BA90)
#define RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER___C___TOPAYLOAD_B__8_4_OFFSET UNITYSDK_OFFSET(0xA37BAB0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournBuildRefShareCodeHelper___c_TypeDefinitionIndex = 55067;

	class RogueTournBuildRefShareCodeHelper___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::RogueTournHexData*, ::System::UInt32>** StaticGet___9__8_2()
		{
			return (::System::Func_2<::RPG::Client::RogueTournHexData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournBuildRefShareCodeHelper___c_TypeDefinitionIndex)->GetStaticField(0x1ABA0);
		}
		static ::System::Func_2<::RPG::Client::RogueTournHexData*, ::System::UInt32>** StaticGet___9__8_3()
		{
			return (::System::Func_2<::RPG::Client::RogueTournHexData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournBuildRefShareCodeHelper___c_TypeDefinitionIndex)->GetStaticField(0x1ABA8);
		}
		static ::RPG::Client::RogueTournBuildRefShareCodeHelper___c** StaticGet___9()
		{
			return (::RPG::Client::RogueTournBuildRefShareCodeHelper___c**)Il2CppClass::FromTypeDefinitionIndex(RogueTournBuildRefShareCodeHelper___c_TypeDefinitionIndex)->GetStaticField(0x1ABB0);
		}
		static ::System::Func_2<::RPG::GameCore::AvatarBaseType, ::System::Int32>** StaticGet___9__8_4()
		{
			return (::System::Func_2<::RPG::GameCore::AvatarBaseType, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournBuildRefShareCodeHelper___c_TypeDefinitionIndex)->GetStaticField(0x1ABB8);
		}
		static ::System::Func_2<::RPG::Client::RogueFormulaData*, ::System::UInt32>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::RPG::Client::RogueFormulaData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournBuildRefShareCodeHelper___c_TypeDefinitionIndex)->GetStaticField(0x1ABC0);
		}
		static ::System::Func_2<::RPG::Client::RogueFormulaData*, ::System::UInt32>** StaticGet___9__8_1()
		{
			return (::System::Func_2<::RPG::Client::RogueFormulaData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournBuildRefShareCodeHelper___c_TypeDefinitionIndex)->GetStaticField(0x1ABC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 __ToPayload_b__8_0(::RPG::Client::RogueFormulaData* f)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RogueFormulaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER___C___TOPAYLOAD_B__8_0_OFFSET))(this, f);
		}

		::System::UInt32 __ToPayload_b__8_1(::RPG::Client::RogueFormulaData* f)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RogueFormulaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER___C___TOPAYLOAD_B__8_1_OFFSET))(this, f);
		}

		::System::UInt32 __ToPayload_b__8_2(::RPG::Client::RogueTournHexData* m)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RogueTournHexData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER___C___TOPAYLOAD_B__8_2_OFFSET))(this, m);
		}

		::System::UInt32 __ToPayload_b__8_3(::RPG::Client::RogueTournHexData* m)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RogueTournHexData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER___C___TOPAYLOAD_B__8_3_OFFSET))(this, m);
		}

		::System::Int32 __ToPayload_b__8_4(::RPG::GameCore::AvatarBaseType path)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::AvatarBaseType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFSHARECODEHELPER___C___TOPAYLOAD_B__8_4_OFFSET))(this, path);
		}
	};
}
