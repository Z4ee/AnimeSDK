#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKFLOORCUSTOMBOOLV2_METHOD_4_467AC909A012CF04_OFFSET UNITYSDK_OFFSET(0x194FB690)
#define RPG_GAMECORE_BYCHECKFLOORCUSTOMBOOLV2_METHOD_4_67F1C18F54D964DF_OFFSET UNITYSDK_OFFSET(0x194FB870)
#define RPG_GAMECORE_BYCHECKFLOORCUSTOMBOOLV2_METHOD_4_74525B277C60E0BA_OFFSET UNITYSDK_OFFSET(0x194FB5C0)
#define RPG_GAMECORE_BYCHECKFLOORCUSTOMBOOLV2_METHOD_4_CDEE6363C5225A19_OFFSET UNITYSDK_OFFSET(0x194FB7F0)
#define RPG_GAMECORE_BYCHECKFLOORCUSTOMBOOLV2__CTOR_OFFSET UNITYSDK_OFFSET(0x194FB640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckFloorCustomBoolV2_TypeDefinitionIndex = 19558;

	class ByCheckFloorCustomBoolV2 : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicString* Name; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKFLOORCUSTOMBOOLV2__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_74525B277C60E0BA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckFloorCustomBoolV2*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckFloorCustomBoolV2*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKFLOORCUSTOMBOOLV2_METHOD_4_74525B277C60E0BA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_467AC909A012CF04(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckFloorCustomBoolV2* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckFloorCustomBoolV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKFLOORCUSTOMBOOLV2_METHOD_4_467AC909A012CF04_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CDEE6363C5225A19(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckFloorCustomBoolV2*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckFloorCustomBoolV2*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKFLOORCUSTOMBOOLV2_METHOD_4_CDEE6363C5225A19_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_67F1C18F54D964DF(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckFloorCustomBoolV2* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckFloorCustomBoolV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKFLOORCUSTOMBOOLV2_METHOD_4_67F1C18F54D964DF_OFFSET))(a1, a2);
		}
	};
}
