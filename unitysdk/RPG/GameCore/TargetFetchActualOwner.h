#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHACTUALOWNER_METHOD_3_1CC8438339E45518_OFFSET UNITYSDK_OFFSET(0x19D08310)
#define RPG_GAMECORE_TARGETFETCHACTUALOWNER_METHOD_3_2E1D81AA84DF008F_OFFSET UNITYSDK_OFFSET(0x19D081B0)
#define RPG_GAMECORE_TARGETFETCHACTUALOWNER_METHOD_3_8FD704EDE6F18C3F_OFFSET UNITYSDK_OFFSET(0x19D082D0)
#define RPG_GAMECORE_TARGETFETCHACTUALOWNER_METHOD_3_ACB94AD031885676_OFFSET UNITYSDK_OFFSET(0x19D08270)
#define RPG_GAMECORE_TARGETFETCHACTUALOWNER__CTOR_OFFSET UNITYSDK_OFFSET(0x19D08250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchActualOwner_TypeDefinitionIndex = 22648;

	class TargetFetchActualOwner : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHACTUALOWNER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2E1D81AA84DF008F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchActualOwner*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchActualOwner*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHACTUALOWNER_METHOD_3_2E1D81AA84DF008F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_ACB94AD031885676(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchActualOwner* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchActualOwner*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHACTUALOWNER_METHOD_3_ACB94AD031885676_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8FD704EDE6F18C3F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchActualOwner*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchActualOwner*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHACTUALOWNER_METHOD_3_8FD704EDE6F18C3F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1CC8438339E45518(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchActualOwner* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchActualOwner*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHACTUALOWNER_METHOD_3_1CC8438339E45518_OFFSET))(a1, a2);
		}
	};
}
