#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraDuelItemData; }
namespace RPG::GameCore { class ChimeraDuelItemRow; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHIMERADUELITEMINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB694F90)
#define RPG_CLIENT_CHIMERADUELITEMINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB694FC0)
#define RPG_CLIENT_CHIMERADUELITEMINFO___C___CTOR_B__1_0_OFFSET UNITYSDK_OFFSET(0xB694FD0)
#define RPG_CLIENT_CHIMERADUELITEMINFO___C___CTOR_B__1_1_OFFSET UNITYSDK_OFFSET(0xB695050)
#define RPG_CLIENT_CHIMERADUELITEMINFO___C___CTOR_B__1_2_OFFSET UNITYSDK_OFFSET(0xB695060)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelItemInfo___c_TypeDefinitionIndex = 59306;

	class ChimeraDuelItemInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::ChimeraDuelItemData*, ::System::UInt32>** StaticGet___9__1_2()
		{
			return (::System::Func_2<::RPG::Client::ChimeraDuelItemData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelItemInfo___c_TypeDefinitionIndex)->GetStaticField(0x642B0);
		}
		static ::RPG::Client::ChimeraDuelItemInfo___c** StaticGet___9()
		{
			return (::RPG::Client::ChimeraDuelItemInfo___c**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelItemInfo___c_TypeDefinitionIndex)->GetStaticField(0x642B8);
		}
		static ::System::Func_2<::RPG::Client::ChimeraDuelItemData*, ::System::Boolean>** StaticGet___9__1_1()
		{
			return (::System::Func_2<::RPG::Client::ChimeraDuelItemData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelItemInfo___c_TypeDefinitionIndex)->GetStaticField(0x642C0);
		}
		static ::System::Func_2<::RPG::GameCore::ChimeraDuelItemRow*, ::RPG::Client::ChimeraDuelItemData*>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::RPG::GameCore::ChimeraDuelItemRow*, ::RPG::Client::ChimeraDuelItemData*>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelItemInfo___c_TypeDefinitionIndex)->GetStaticField(0x642C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMINFO___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::ChimeraDuelItemData* __ctor_b__1_0(::RPG::GameCore::ChimeraDuelItemRow* a1)
		{
			return ((::RPG::Client::ChimeraDuelItemData*(*)(::PVOID, ::RPG::GameCore::ChimeraDuelItemRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMINFO___C___CTOR_B__1_0_OFFSET))(this, a1);
		}

		::System::Boolean __ctor_b__1_1(::RPG::Client::ChimeraDuelItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChimeraDuelItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMINFO___C___CTOR_B__1_1_OFFSET))(this, a1);
		}

		::System::UInt32 __ctor_b__1_2(::RPG::Client::ChimeraDuelItemData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ChimeraDuelItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELITEMINFO___C___CTOR_B__1_2_OFFSET))(this, a1);
		}
	};
}
