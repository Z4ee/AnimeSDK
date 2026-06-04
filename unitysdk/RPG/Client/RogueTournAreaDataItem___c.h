#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RogueTournExpScoreRow; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ROGUETOURNAREADATAITEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xC7F43C0)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM___C__CREATE_B__1_0_OFFSET UNITYSDK_OFFSET(0xC7F4400)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM___C__CREATE_B__1_1_OFFSET UNITYSDK_OFFSET(0xC7F4420)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0xC7F43F0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournAreaDataItem___c_TypeDefinitionIndex = 63132;

	class RogueTournAreaDataItem___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::GameCore::RogueTournExpScoreRow*, ::System::UInt32>** StaticGet___9__1_1()
		{
			return (::System::Func_2<::RPG::GameCore::RogueTournExpScoreRow*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournAreaDataItem___c_TypeDefinitionIndex)->GetStaticField(0x36E60);
		}
		static ::RPG::Client::RogueTournAreaDataItem___c** StaticGet___9()
		{
			return (::RPG::Client::RogueTournAreaDataItem___c**)Il2CppClass::FromTypeDefinitionIndex(RogueTournAreaDataItem___c_TypeDefinitionIndex)->GetStaticField(0x36E68);
		}
		static ::System::Func_2<::RPG::GameCore::RogueTournExpScoreRow*, ::System::UInt32>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::RPG::GameCore::RogueTournExpScoreRow*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournAreaDataItem___c_TypeDefinitionIndex)->GetStaticField(0x36E70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _Create_b__1_0(::RPG::GameCore::RogueTournExpScoreRow* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::RogueTournExpScoreRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM___C__CREATE_B__1_0_OFFSET))(this, a1);
		}

		::System::UInt32 _Create_b__1_1(::RPG::GameCore::RogueTournExpScoreRow* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::RogueTournExpScoreRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM___C__CREATE_B__1_1_OFFSET))(this, a1);
		}
	};
}
