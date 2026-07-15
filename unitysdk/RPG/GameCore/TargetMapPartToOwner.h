#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETMAPPARTTOOWNER_METHOD_3_192DFC5B0D9188D7_OFFSET UNITYSDK_OFFSET(0x1D0C2F80)
#define RPG_GAMECORE_TARGETMAPPARTTOOWNER_METHOD_3_8A365F916148033A_OFFSET UNITYSDK_OFFSET(0x1D0C3040)
#define RPG_GAMECORE_TARGETMAPPARTTOOWNER_METHOD_3_9D11038456F5936F_OFFSET UNITYSDK_OFFSET(0x1D0C3070)
#define RPG_GAMECORE_TARGETMAPPARTTOOWNER_METHOD_3_C27B3F988338397A_OFFSET UNITYSDK_OFFSET(0x1D0C2EB0)
#define RPG_GAMECORE_TARGETMAPPARTTOOWNER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0C2F70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetMapPartToOwner_TypeDefinitionIndex = 23102;

	class TargetMapPartToOwner : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Boolean RemoveRepeat; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPPARTTOOWNER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C27B3F988338397A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapPartToOwner*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapPartToOwner*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPPARTTOOWNER_METHOD_3_C27B3F988338397A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_192DFC5B0D9188D7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetMapPartToOwner* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetMapPartToOwner*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPPARTTOOWNER_METHOD_3_192DFC5B0D9188D7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8A365F916148033A(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapPartToOwner*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapPartToOwner*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPPARTTOOWNER_METHOD_3_8A365F916148033A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9D11038456F5936F(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetMapPartToOwner* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetMapPartToOwner*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETMAPPARTTOOWNER_METHOD_3_9D11038456F5936F_OFFSET))(a1, a2);
		}
	};
}
