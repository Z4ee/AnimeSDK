#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GroupEntityInfo.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_NPCENTITYINFO_METHOD_3_7FD0878B44A9B0D9_OFFSET UNITYSDK_OFFSET(0x1D2F80F0)
#define RPG_GAMECORE_NPCENTITYINFO_METHOD_3_91ED8B6831B6AF21_OFFSET UNITYSDK_OFFSET(0x1D2F8090)
#define RPG_GAMECORE_NPCENTITYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2F80E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NpcEntityInfo_TypeDefinitionIndex = 20051;

	class NpcEntityInfo : public ::RPG::GameCore::GroupEntityInfo
	{
	public:
		::RPG::GameCore::DynamicString* UniqueName; // 0x20
		::RPG::GameCore::DynamicString* DefaultIdleStateName; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCENTITYINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_91ED8B6831B6AF21(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NpcEntityInfo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NpcEntityInfo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCENTITYINFO_METHOD_3_91ED8B6831B6AF21_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_7FD0878B44A9B0D9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NpcEntityInfo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NpcEntityInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCENTITYINFO_METHOD_3_7FD0878B44A9B0D9_OFFSET))(a1, a2);
		}
	};
}
