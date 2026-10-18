#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_SUBSTAGEDATA_METHOD_2_6B593F795FD7A40F_OFFSET UNITYSDK_OFFSET(0x1DB0B550)
#define RPG_GAMECORE_SUBSTAGEDATA_METHOD_2_E60C65E867AE92A3_OFFSET UNITYSDK_OFFSET(0x1DB0B3D0)
#define RPG_GAMECORE_SUBSTAGEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB0B540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SubStageData_TypeDefinitionIndex = 19139;

	class SubStageData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 PositionOffset; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBSTAGEDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E60C65E867AE92A3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SubStageData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SubStageData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBSTAGEDATA_METHOD_2_E60C65E867AE92A3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_6B593F795FD7A40F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::SubStageData*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::SubStageData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBSTAGEDATA_METHOD_2_6B593F795FD7A40F_OFFSET))(a1, a2);
		}
	};
}
