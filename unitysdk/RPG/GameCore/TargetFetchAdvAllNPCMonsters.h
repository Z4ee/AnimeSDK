#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHADVALLNPCMONSTERS_METHOD_4_6DD9E87A8E7E4302_OFFSET UNITYSDK_OFFSET(0x1B44E9F0)
#define RPG_GAMECORE_TARGETFETCHADVALLNPCMONSTERS_METHOD_4_6E9C21F5D38540BA_OFFSET UNITYSDK_OFFSET(0x1B44EA70)
#define RPG_GAMECORE_TARGETFETCHADVALLNPCMONSTERS_METHOD_4_8C91E0B0A9270987_OFFSET UNITYSDK_OFFSET(0x1B44EA50)
#define RPG_GAMECORE_TARGETFETCHADVALLNPCMONSTERS_METHOD_4_C36E6E6ACEC61F83_OFFSET UNITYSDK_OFFSET(0x1B44E980)
#define RPG_GAMECORE_TARGETFETCHADVALLNPCMONSTERS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0B24C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAdvAllNPCMonsters_TypeDefinitionIndex = 23012;

	class TargetFetchAdvAllNPCMonsters : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVALLNPCMONSTERS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_C36E6E6ACEC61F83(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvAllNPCMonsters*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvAllNPCMonsters*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVALLNPCMONSTERS_METHOD_4_C36E6E6ACEC61F83_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6DD9E87A8E7E4302(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAdvAllNPCMonsters* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAdvAllNPCMonsters*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVALLNPCMONSTERS_METHOD_4_6DD9E87A8E7E4302_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8C91E0B0A9270987(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvAllNPCMonsters*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvAllNPCMonsters*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVALLNPCMONSTERS_METHOD_4_8C91E0B0A9270987_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6E9C21F5D38540BA(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvAllNPCMonsters* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvAllNPCMonsters*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVALLNPCMONSTERS_METHOD_4_6E9C21F5D38540BA_OFFSET))(a1, a2);
		}
	};
}
