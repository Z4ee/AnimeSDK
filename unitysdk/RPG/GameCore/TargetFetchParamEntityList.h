#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TARGETFETCHPARAMENTITYLIST_METHOD_4_2BA77E645B243D08_OFFSET UNITYSDK_OFFSET(0x177B77A0)
#define RPG_GAMECORE_TARGETFETCHPARAMENTITYLIST_METHOD_4_8CFAFF36D4B1839A_OFFSET UNITYSDK_OFFSET(0x177BFCC0)
#define RPG_GAMECORE_TARGETFETCHPARAMENTITYLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x177B7750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchParamEntityList_TypeDefinitionIndex = 22193;

	class TargetFetchParamEntityList : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPARAMENTITYLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8CFAFF36D4B1839A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchParamEntityList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchParamEntityList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPARAMENTITYLIST_METHOD_4_8CFAFF36D4B1839A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_2BA77E645B243D08(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchParamEntityList* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchParamEntityList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHPARAMENTITYLIST_METHOD_4_2BA77E645B243D08_OFFSET))(a1, a2);
		}
	};
}
