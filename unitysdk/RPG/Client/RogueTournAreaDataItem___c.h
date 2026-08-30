#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RogueTournExpScoreRow; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ROGUETOURNAREADATAITEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AEF0BA0)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM___C__CREATE_B__1_0_OFFSET UNITYSDK_OFFSET(0x1AEF0BE0)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM___C__CREATE_B__1_1_OFFSET UNITYSDK_OFFSET(0x1AEF0C00)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEF0BD0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournAreaDataItem___c_TypeDefinitionIndex = 67495;

	class RogueTournAreaDataItem___c : public ::System::Object
	{
	public:
		static ::RPG::Client::RogueTournAreaDataItem___c** StaticGet___9()
		{
			return (::RPG::Client::RogueTournAreaDataItem___c**)Il2CppClass::FromTypeDefinitionIndex(RogueTournAreaDataItem___c_TypeDefinitionIndex)->GetStaticField(0xFA10);
		}
		static ::System::Func_2<::RPG::GameCore::RogueTournExpScoreRow*, ::System::UInt32>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::RPG::GameCore::RogueTournExpScoreRow*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournAreaDataItem___c_TypeDefinitionIndex)->GetStaticField(0xFA18);
		}
		static ::System::Func_2<::RPG::GameCore::RogueTournExpScoreRow*, ::System::UInt32>** StaticGet___9__1_1()
		{
			return (::System::Func_2<::RPG::GameCore::RogueTournExpScoreRow*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournAreaDataItem___c_TypeDefinitionIndex)->GetStaticField(0xFA20);
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
