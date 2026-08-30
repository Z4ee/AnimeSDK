#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKFLOORCUSTOMBOOL_METHOD_4_0556A85D31899424_OFFSET UNITYSDK_OFFSET(0x1CEA6600)
#define RPG_GAMECORE_BYCHECKFLOORCUSTOMBOOL_METHOD_4_204C874DF3D0210B_OFFSET UNITYSDK_OFFSET(0x1CEA6630)
#define RPG_GAMECORE_BYCHECKFLOORCUSTOMBOOL_METHOD_4_D0C988ECCBC93A24_OFFSET UNITYSDK_OFFSET(0x1CEA64A0)
#define RPG_GAMECORE_BYCHECKFLOORCUSTOMBOOL_METHOD_4_FD262333B1D5B9A1_OFFSET UNITYSDK_OFFSET(0x1CEA6460)
#define RPG_GAMECORE_BYCHECKFLOORCUSTOMBOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEA6490)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckFloorCustomBool_TypeDefinitionIndex = 20456;

	class ByCheckFloorCustomBool : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicString* Name; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKFLOORCUSTOMBOOL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_FD262333B1D5B9A1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckFloorCustomBool*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckFloorCustomBool*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKFLOORCUSTOMBOOL_METHOD_4_FD262333B1D5B9A1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D0C988ECCBC93A24(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckFloorCustomBool* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckFloorCustomBool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKFLOORCUSTOMBOOL_METHOD_4_D0C988ECCBC93A24_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0556A85D31899424(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckFloorCustomBool*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckFloorCustomBool*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKFLOORCUSTOMBOOL_METHOD_4_0556A85D31899424_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_204C874DF3D0210B(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckFloorCustomBool* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckFloorCustomBool*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKFLOORCUSTOMBOOL_METHOD_4_204C874DF3D0210B_OFFSET))(a1, a2);
		}
	};
}
