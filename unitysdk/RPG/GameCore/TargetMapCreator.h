#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPCREATOR_METHOD_3_8DCB7D9A12336BC8_OFFSET UNITYSDK_OFFSET(0x1E1BBD80)
#define RPG_GAMECORE_TARGETMAPCREATOR_METHOD_3_96D680FC5ADE9421_OFFSET UNITYSDK_OFFSET(0x1E1BBBB0)
#define RPG_GAMECORE_TARGETMAPCREATOR_METHOD_3_E672CC14B28613F1_OFFSET UNITYSDK_OFFSET(0x1E1BBD50)
#define RPG_GAMECORE_TARGETMAPCREATOR_METHOD_3_F60E08B86302AAA4_OFFSET UNITYSDK_OFFSET(0x1E1BBC90)
#define RPG_GAMECORE_TARGETMAPCREATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1BBC80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapCreator_TypeDefinitionIndex = 23678;

	class TargetMapCreator : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Boolean Recursive; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPCREATOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_96D680FC5ADE9421(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapCreator*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapCreator*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPCREATOR_METHOD_3_96D680FC5ADE9421_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F60E08B86302AAA4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapCreator* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapCreator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPCREATOR_METHOD_3_F60E08B86302AAA4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E672CC14B28613F1(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapCreator*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapCreator*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPCREATOR_METHOD_3_E672CC14B28613F1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8DCB7D9A12336BC8(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapCreator* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapCreator*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPCREATOR_METHOD_3_8DCB7D9A12336BC8_OFFSET))(a1, a2);
		}
	};
}
