#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightRole; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTAUGMENTEFFECTDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19301850)
#define RPG_CLIENT_GRIDFIGHTAUGMENTEFFECTDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19301890)
#define RPG_CLIENT_GRIDFIGHTAUGMENTEFFECTDATA___C__GET_ADDROLEPOSINDEXES_B__5_0_OFFSET UNITYSDK_OFFSET(0x193018A0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAugmentEffectData___c_TypeDefinitionIndex = 61463;

	class GridFightAugmentEffectData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::UInt32>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(GridFightAugmentEffectData___c_TypeDefinitionIndex)->GetStaticField(0x1DC50);
		}
		static ::RPG::Client::GridFightAugmentEffectData___c** StaticGet___9()
		{
			return (::RPG::Client::GridFightAugmentEffectData___c**)Il2CppClass::FromTypeDefinitionIndex(GridFightAugmentEffectData___c_TypeDefinitionIndex)->GetStaticField(0x1DC58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTEFFECTDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTEFFECTDATA___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _get_AddRolePosIndexes_b__5_0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTEFFECTDATA___C__GET_ADDROLEPOSINDEXES_B__5_0_OFFSET))(this, a1);
		}
	};
}
