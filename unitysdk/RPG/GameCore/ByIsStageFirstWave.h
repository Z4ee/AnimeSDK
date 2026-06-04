#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISSTAGEFIRSTWAVE_METHOD_4_3DFE2EDEA89E4F8C_OFFSET UNITYSDK_OFFSET(0x1956EA90)
#define RPG_GAMECORE_BYISSTAGEFIRSTWAVE_METHOD_4_609E1AB46B18B65B_OFFSET UNITYSDK_OFFSET(0x1956E950)
#define RPG_GAMECORE_BYISSTAGEFIRSTWAVE_METHOD_4_7A6B85AE021BAEA1_OFFSET UNITYSDK_OFFSET(0x1956E880)
#define RPG_GAMECORE_BYISSTAGEFIRSTWAVE_METHOD_4_BEC41FD3D2768064_OFFSET UNITYSDK_OFFSET(0x1956EB10)
#define RPG_GAMECORE_BYISSTAGEFIRSTWAVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1956E900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsStageFirstWave_TypeDefinitionIndex = 22240;

	class ByIsStageFirstWave : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSTAGEFIRSTWAVE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7A6B85AE021BAEA1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsStageFirstWave*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsStageFirstWave*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSTAGEFIRSTWAVE_METHOD_4_7A6B85AE021BAEA1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_609E1AB46B18B65B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsStageFirstWave* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsStageFirstWave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSTAGEFIRSTWAVE_METHOD_4_609E1AB46B18B65B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3DFE2EDEA89E4F8C(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsStageFirstWave*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsStageFirstWave*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSTAGEFIRSTWAVE_METHOD_4_3DFE2EDEA89E4F8C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BEC41FD3D2768064(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsStageFirstWave* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsStageFirstWave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISSTAGEFIRSTWAVE_METHOD_4_BEC41FD3D2768064_OFFSET))(a1, a2);
		}
	};
}
