#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKFLOORCUSTOMBOOLV2_METHOD_4_467AC909A012CF04_OFFSET UNITYSDK_OFFSET(0x19CC5A10)
#define RPG_GAMECORE_BYCHECKFLOORCUSTOMBOOLV2_METHOD_4_961F003A16B98FEB_OFFSET UNITYSDK_OFFSET(0x19CC5BA0)
#define RPG_GAMECORE_BYCHECKFLOORCUSTOMBOOLV2_METHOD_4_A5158F2186BC2884_OFFSET UNITYSDK_OFFSET(0x19CC5B70)
#define RPG_GAMECORE_BYCHECKFLOORCUSTOMBOOLV2_METHOD_4_D846DB6256948201_OFFSET UNITYSDK_OFFSET(0x19CC59D0)
#define RPG_GAMECORE_BYCHECKFLOORCUSTOMBOOLV2__CTOR_OFFSET UNITYSDK_OFFSET(0x19CC5A00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckFloorCustomBoolV2_TypeDefinitionIndex = 19917;

	class ByCheckFloorCustomBoolV2 : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicString* Name; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKFLOORCUSTOMBOOLV2__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D846DB6256948201(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckFloorCustomBoolV2*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckFloorCustomBoolV2*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKFLOORCUSTOMBOOLV2_METHOD_4_D846DB6256948201_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_467AC909A012CF04(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckFloorCustomBoolV2* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckFloorCustomBoolV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKFLOORCUSTOMBOOLV2_METHOD_4_467AC909A012CF04_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_A5158F2186BC2884(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckFloorCustomBoolV2*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckFloorCustomBoolV2*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKFLOORCUSTOMBOOLV2_METHOD_4_A5158F2186BC2884_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_961F003A16B98FEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckFloorCustomBoolV2* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckFloorCustomBoolV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKFLOORCUSTOMBOOLV2_METHOD_4_961F003A16B98FEB_OFFSET))(a1, a2);
		}
	};
}
