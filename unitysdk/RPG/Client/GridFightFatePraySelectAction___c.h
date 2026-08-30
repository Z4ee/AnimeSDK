#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightPrayQuest; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTFATEPRAYSELECTACTION___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD3D4D0)
#define RPG_CLIENT_GRIDFIGHTFATEPRAYSELECTACTION___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD3D510)
#define RPG_CLIENT_GRIDFIGHTFATEPRAYSELECTACTION___C__GETBLACKCOUNT_B__10_0_OFFSET UNITYSDK_OFFSET(0x1BD3D590)
#define RPG_CLIENT_GRIDFIGHTFATEPRAYSELECTACTION___C__GET_HASBLACKQUEST_B__9_0_OFFSET UNITYSDK_OFFSET(0x1BD3D520)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightFatePraySelectAction___c_TypeDefinitionIndex = 65416;

	class GridFightFatePraySelectAction___c : public ::System::Object
	{
	public:
		static ::RPG::Client::GridFightFatePraySelectAction___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightFatePraySelectAction___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightFatePraySelectAction___c_TypeDefinitionIndex)->GetStaticField(0x26EF0);
		}
		static ::System::Func_2<::RPG::Client::GridFightPrayQuest*, ::System::Boolean>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightPrayQuest*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightFatePraySelectAction___c_TypeDefinitionIndex)->GetStaticField(0x26EF8);
		}
		static ::System::Func_2<::RPG::Client::GridFightPrayQuest*, ::System::Boolean>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightPrayQuest*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(GridFightFatePraySelectAction___c_TypeDefinitionIndex)->GetStaticField(0x26F00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFATEPRAYSELECTACTION___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFATEPRAYSELECTACTION___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_HasBlackQuest_b__9_0(::RPG::Client::GridFightPrayQuest* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightPrayQuest*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFATEPRAYSELECTACTION___C__GET_HASBLACKQUEST_B__9_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetBlackCount_b__10_0(::RPG::Client::GridFightPrayQuest* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightPrayQuest*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTFATEPRAYSELECTACTION___C__GETBLACKCOUNT_B__10_0_OFFSET))(this, a1);
		}
	};
}
