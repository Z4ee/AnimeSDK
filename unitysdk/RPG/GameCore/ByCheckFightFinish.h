#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKFIGHTFINISH_METHOD_4_1E5DB1E69EE66563_OFFSET UNITYSDK_OFFSET(0x19CC4F70)
#define RPG_GAMECORE_BYCHECKFIGHTFINISH_METHOD_4_5B856EA6DAC78EB9_OFFSET UNITYSDK_OFFSET(0x19CC50B0)
#define RPG_GAMECORE_BYCHECKFIGHTFINISH_METHOD_4_A95436BC26D69AF0_OFFSET UNITYSDK_OFFSET(0x19CC50E0)
#define RPG_GAMECORE_BYCHECKFIGHTFINISH_METHOD_4_D04E177BCF5A5E50_OFFSET UNITYSDK_OFFSET(0x19CC4F30)
#define RPG_GAMECORE_BYCHECKFIGHTFINISH__CTOR_OFFSET UNITYSDK_OFFSET(0x19CC4F60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckFightFinish_TypeDefinitionIndex = 22602;

	class ByCheckFightFinish : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKFIGHTFINISH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D04E177BCF5A5E50(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckFightFinish*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckFightFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKFIGHTFINISH_METHOD_4_D04E177BCF5A5E50_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_1E5DB1E69EE66563(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckFightFinish* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckFightFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKFIGHTFINISH_METHOD_4_1E5DB1E69EE66563_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5B856EA6DAC78EB9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckFightFinish*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckFightFinish*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKFIGHTFINISH_METHOD_4_5B856EA6DAC78EB9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A95436BC26D69AF0(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckFightFinish* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckFightFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKFIGHTFINISH_METHOD_4_A95436BC26D69AF0_OFFSET))(a1, a2);
		}
	};
}
