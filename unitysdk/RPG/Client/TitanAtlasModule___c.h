#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TitanAtlasGroup; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_TITANATLASMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB3203C0)
#define RPG_CLIENT_TITANATLASMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB320400)
#define RPG_CLIENT_TITANATLASMODULE___C__GETALLGROUPS_B__2_0_OFFSET UNITYSDK_OFFSET(0xB320410)

namespace RPG::Client
{
	inline static constexpr unsigned int TitanAtlasModule___c_TypeDefinitionIndex = 62827;

	class TitanAtlasModule___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::TitanAtlasGroup*>** StaticGet___9__2_0()
		{
			return (::System::Comparison_1<::RPG::Client::TitanAtlasGroup*>**)Il2CppClass::FromTypeDefinitionIndex(TitanAtlasModule___c_TypeDefinitionIndex)->GetStaticField(0x3D480);
		}
		static ::RPG::Client::TitanAtlasModule___c** StaticGet___9()
		{
			return (::RPG::Client::TitanAtlasModule___c**)Il2CppClass::FromTypeDefinitionIndex(TitanAtlasModule___c_TypeDefinitionIndex)->GetStaticField(0x3D488);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetAllGroups_b__2_0(::RPG::Client::TitanAtlasGroup* a, ::RPG::Client::TitanAtlasGroup* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TitanAtlasGroup*, ::RPG::Client::TitanAtlasGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASMODULE___C__GETALLGROUPS_B__2_0_OFFSET))(this, a, b);
		}
	};
}
