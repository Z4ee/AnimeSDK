#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PhotoGraphFindNpc.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_PHOTOGRAPHSETSINGLETARGETUNIQUENAME_METHOD_3_02650869D9FACF30_OFFSET UNITYSDK_OFFSET(0x1D32B9C0)
#define RPG_GAMECORE_PHOTOGRAPHSETSINGLETARGETUNIQUENAME_METHOD_3_4924C21275E5CE7C_OFFSET UNITYSDK_OFFSET(0x1D32D590)
#define RPG_GAMECORE_PHOTOGRAPHSETSINGLETARGETUNIQUENAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1D32B9B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphSetSingleTargetUniqueName_TypeDefinitionIndex = 21380;

	class PhotoGraphSetSingleTargetUniqueName : public ::RPG::GameCore::PhotoGraphFindNpc
	{
	public:
		::RPG::GameCore::DynamicString* UniqueName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHSETSINGLETARGETUNIQUENAME__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4924C21275E5CE7C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PhotoGraphSetSingleTargetUniqueName*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhotoGraphSetSingleTargetUniqueName*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHSETSINGLETARGETUNIQUENAME_METHOD_3_4924C21275E5CE7C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_02650869D9FACF30(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PhotoGraphSetSingleTargetUniqueName* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhotoGraphSetSingleTargetUniqueName*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHSETSINGLETARGETUNIQUENAME_METHOD_3_02650869D9FACF30_OFFSET))(a1, a2);
		}
	};
}
