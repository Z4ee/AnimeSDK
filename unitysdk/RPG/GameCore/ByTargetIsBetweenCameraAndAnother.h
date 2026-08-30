#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYTARGETISBETWEENCAMERAANDANOTHER_METHOD_4_3824804D8057BDBB_OFFSET UNITYSDK_OFFSET(0x1CF61970)
#define RPG_GAMECORE_BYTARGETISBETWEENCAMERAANDANOTHER_METHOD_4_BBE564B0CDBAEBF2_OFFSET UNITYSDK_OFFSET(0x1CF61930)
#define RPG_GAMECORE_BYTARGETISBETWEENCAMERAANDANOTHER_METHOD_4_CE77DE8BE6C3F0D7_OFFSET UNITYSDK_OFFSET(0x1CF61B30)
#define RPG_GAMECORE_BYTARGETISBETWEENCAMERAANDANOTHER_METHOD_4_F6B64CC094B21729_OFFSET UNITYSDK_OFFSET(0x1CF61B60)
#define RPG_GAMECORE_BYTARGETISBETWEENCAMERAANDANOTHER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF61960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTargetIsBetweenCameraAndAnother_TypeDefinitionIndex = 23062;

	class ByTargetIsBetweenCameraAndAnother : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* MiddleTarget; // 0x20
		::RPG::GameCore::TargetEvaluator* AnotherTarget; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETISBETWEENCAMERAANDANOTHER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_BBE564B0CDBAEBF2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetIsBetweenCameraAndAnother*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetIsBetweenCameraAndAnother*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETISBETWEENCAMERAANDANOTHER_METHOD_4_BBE564B0CDBAEBF2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_3824804D8057BDBB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByTargetIsBetweenCameraAndAnother* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByTargetIsBetweenCameraAndAnother*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETISBETWEENCAMERAANDANOTHER_METHOD_4_3824804D8057BDBB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_CE77DE8BE6C3F0D7(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetIsBetweenCameraAndAnother*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetIsBetweenCameraAndAnother*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETISBETWEENCAMERAANDANOTHER_METHOD_4_CE77DE8BE6C3F0D7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F6B64CC094B21729(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetIsBetweenCameraAndAnother* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetIsBetweenCameraAndAnother*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETISBETWEENCAMERAANDANOTHER_METHOD_4_F6B64CC094B21729_OFFSET))(a1, a2);
		}
	};
}
