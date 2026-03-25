#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_RELEASETARGETUNIQUENAME_METHOD_3_DAE2183EFD7871BB_OFFSET UNITYSDK_OFFSET(0x1758B000)
#define RPG_GAMECORE_RELEASETARGETUNIQUENAME_METHOD_3_F929DC2AEC6E6412_OFFSET UNITYSDK_OFFSET(0x1758B080)
#define RPG_GAMECORE_RELEASETARGETUNIQUENAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1758B050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ReleaseTargetUniqueName_TypeDefinitionIndex = 21409;

	class ReleaseTargetUniqueName : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* UniqueName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELEASETARGETUNIQUENAME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DAE2183EFD7871BB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ReleaseTargetUniqueName*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ReleaseTargetUniqueName*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELEASETARGETUNIQUENAME_METHOD_3_DAE2183EFD7871BB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F929DC2AEC6E6412(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ReleaseTargetUniqueName* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ReleaseTargetUniqueName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELEASETARGETUNIQUENAME_METHOD_3_F929DC2AEC6E6412_OFFSET))(a1, a2);
		}
	};
}
