#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TitanAtlasInfo; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_TITANATLASGROUP___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE228A90)
#define RPG_CLIENT_TITANATLASGROUP___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE228AD0)
#define RPG_CLIENT_TITANATLASGROUP___C__GETALLBASEINFOS_B__2_0_OFFSET UNITYSDK_OFFSET(0xE228AE0)

namespace RPG::Client
{
	inline static constexpr unsigned int TitanAtlasGroup___c_TypeDefinitionIndex = 68134;

	class TitanAtlasGroup___c : public ::System::Object
	{
	public:
		static ::RPG::Client::TitanAtlasGroup___c** StaticGet___9()
		{
			return (::RPG::Client::TitanAtlasGroup___c**)Il2CppClass::FromTypeDefinitionIndex(TitanAtlasGroup___c_TypeDefinitionIndex)->GetStaticField(0x597F0);
		}
		static ::System::Comparison_1<::RPG::Client::TitanAtlasInfo*>** StaticGet___9__2_0()
		{
			return (::System::Comparison_1<::RPG::Client::TitanAtlasInfo*>**)Il2CppClass::FromTypeDefinitionIndex(TitanAtlasGroup___c_TypeDefinitionIndex)->GetStaticField(0x597F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASGROUP___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASGROUP___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetAllBaseInfos_b__2_0(::RPG::Client::TitanAtlasInfo* a1, ::RPG::Client::TitanAtlasInfo* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TitanAtlasInfo*, ::RPG::Client::TitanAtlasInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TITANATLASGROUP___C__GETALLBASEINFOS_B__2_0_OFFSET))(this, a1, a2);
		}
	};
}
