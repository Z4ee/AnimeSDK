#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYFATECONTENTCOUNT_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1E81CB30)
#define RPG_GAMECORE_SETDYNAMICVALUEBYFATECONTENTCOUNT_METHOD_4_9AC6292222A1BFBF_OFFSET UNITYSDK_OFFSET(0x1E81C950)
#define RPG_GAMECORE_SETDYNAMICVALUEBYFATECONTENTCOUNT_METHOD_4_B6FAE4905C20BF12_OFFSET UNITYSDK_OFFSET(0x1E81C910)
#define RPG_GAMECORE_SETDYNAMICVALUEBYFATECONTENTCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E81C940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByFateContentCount_TypeDefinitionIndex = 23021;

	class SetDynamicValueByFateContentCount : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::UInt32 HouguID; // 0x18
		::System::UInt32 AffixID; // 0x1C
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::System::String* DynamicKey; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYFATECONTENTCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_B6FAE4905C20BF12(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByFateContentCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByFateContentCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYFATECONTENTCOUNT_METHOD_4_B6FAE4905C20BF12_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_9AC6292222A1BFBF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueByFateContentCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueByFateContentCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYFATECONTENTCOUNT_METHOD_4_9AC6292222A1BFBF_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYFATECONTENTCOUNT_GETDYNAMICKEY_OFFSET))(this);
		}
	};
}
