#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RogueTournExpScoreRow; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ROGUETOURNAREADATAITEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA36BF00)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM___C__CREATE_B__1_0_OFFSET UNITYSDK_OFFSET(0xA36BF40)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM___C__CREATE_B__1_1_OFFSET UNITYSDK_OFFSET(0xA36BF60)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA36BF30)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournAreaDataItem___c_TypeDefinitionIndex = 55011;

	class RogueTournAreaDataItem___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::GameCore::RogueTournExpScoreRow*, ::System::UInt32>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::RPG::GameCore::RogueTournExpScoreRow*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournAreaDataItem___c_TypeDefinitionIndex)->GetStaticField(0x1A650);
		}
		static ::System::Func_2<::RPG::GameCore::RogueTournExpScoreRow*, ::System::UInt32>** StaticGet___9__1_1()
		{
			return (::System::Func_2<::RPG::GameCore::RogueTournExpScoreRow*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournAreaDataItem___c_TypeDefinitionIndex)->GetStaticField(0x1A658);
		}
		static ::RPG::Client::RogueTournAreaDataItem___c** StaticGet___9()
		{
			return (::RPG::Client::RogueTournAreaDataItem___c**)Il2CppClass::FromTypeDefinitionIndex(RogueTournAreaDataItem___c_TypeDefinitionIndex)->GetStaticField(0x1A660);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _Create_b__1_0(::RPG::GameCore::RogueTournExpScoreRow* scoreRow)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::RogueTournExpScoreRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM___C__CREATE_B__1_0_OFFSET))(this, scoreRow);
		}

		::System::UInt32 _Create_b__1_1(::RPG::GameCore::RogueTournExpScoreRow* scoreRow)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::RogueTournExpScoreRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM___C__CREATE_B__1_1_OFFSET))(this, scoreRow);
		}
	};
}
