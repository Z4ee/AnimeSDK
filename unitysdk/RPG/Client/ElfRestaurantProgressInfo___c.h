#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ElfRestaurantProgressData; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ELFRESTAURANTPROGRESSINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x95ECBA0)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x95ECBE0)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSINFO___C__GETMENUUNLOCKPROGRESS_B__9_0_OFFSET UNITYSDK_OFFSET(0x95ECBF0)
#define RPG_CLIENT_ELFRESTAURANTPROGRESSINFO___C__GET_PROGRESSLIST_B__39_0_OFFSET UNITYSDK_OFFSET(0x95ECCF0)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfRestaurantProgressInfo___c_TypeDefinitionIndex = 51772;

	class ElfRestaurantProgressInfo___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::ElfRestaurantProgressData*>** StaticGet___9__9_0()
		{
			return (::System::Comparison_1<::RPG::Client::ElfRestaurantProgressData*>**)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantProgressInfo___c_TypeDefinitionIndex)->GetStaticField(0x46A70);
		}
		static ::System::Func_2<::RPG::Client::ElfRestaurantProgressData*, ::System::UInt32>** StaticGet___9__39_0()
		{
			return (::System::Func_2<::RPG::Client::ElfRestaurantProgressData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantProgressInfo___c_TypeDefinitionIndex)->GetStaticField(0x46A78);
		}
		static ::RPG::Client::ElfRestaurantProgressInfo___c** StaticGet___9()
		{
			return (::RPG::Client::ElfRestaurantProgressInfo___c**)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantProgressInfo___c_TypeDefinitionIndex)->GetStaticField(0x46A80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSINFO___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetMenuUnlockProgress_b__9_0(::RPG::Client::ElfRestaurantProgressData* a, ::RPG::Client::ElfRestaurantProgressData* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ElfRestaurantProgressData*, ::RPG::Client::ElfRestaurantProgressData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSINFO___C__GETMENUUNLOCKPROGRESS_B__9_0_OFFSET))(this, a, b);
		}

		::System::UInt32 _get_ProgressList_b__39_0(::RPG::Client::ElfRestaurantProgressData* a)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ElfRestaurantProgressData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROGRESSINFO___C__GET_PROGRESSLIST_B__39_0_OFFSET))(this, a);
		}
	};
}
