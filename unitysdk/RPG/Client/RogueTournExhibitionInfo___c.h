#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueTournExhibitionData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ROGUETOURNEXHIBITIONINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF16A00)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF16A40)
#define RPG_CLIENT_ROGUETOURNEXHIBITIONINFO___C__GET_UNLOCKEDEXHIBITIONCOUNT_B__26_0_OFFSET UNITYSDK_OFFSET(0x1AF16A50)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournExhibitionInfo___c_TypeDefinitionIndex = 67574;

	class RogueTournExhibitionInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::RogueTournExhibitionData*, ::System::Boolean>** StaticGet___9__26_0()
		{
			return (::System::Func_2<::RPG::Client::RogueTournExhibitionData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RogueTournExhibitionInfo___c_TypeDefinitionIndex)->GetStaticField(0x12050);
		}
		static ::RPG::Client::RogueTournExhibitionInfo___c** StaticGet___9()
		{
			return (::RPG::Client::RogueTournExhibitionInfo___c**)Il2CppClass::FromTypeDefinitionIndex(RogueTournExhibitionInfo___c_TypeDefinitionIndex)->GetStaticField(0x12058);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONINFO___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_UnlockedExhibitionCount_b__26_0(::RPG::Client::RogueTournExhibitionData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueTournExhibitionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNEXHIBITIONINFO___C__GET_UNLOCKEDEXHIBITIONCOUNT_B__26_0_OFFSET))(this, a1);
		}
	};
}
