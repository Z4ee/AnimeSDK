#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AimTargetType.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHAIMATTARGETLIST_METHOD_4_69AB294BA9E0E41D_OFFSET UNITYSDK_OFFSET(0x1D5A7F30)
#define RPG_GAMECORE_TARGETFETCHAIMATTARGETLIST_METHOD_4_7C11CF74121445EE_OFFSET UNITYSDK_OFFSET(0x1D5A7F80)
#define RPG_GAMECORE_TARGETFETCHAIMATTARGETLIST_METHOD_4_92423D26C6CD30E4_OFFSET UNITYSDK_OFFSET(0x1D5A8020)
#define RPG_GAMECORE_TARGETFETCHAIMATTARGETLIST_METHOD_4_95F670F5EACD7374_OFFSET UNITYSDK_OFFSET(0x1D5A8060)
#define RPG_GAMECORE_TARGETFETCHAIMATTARGETLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A7F70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAimAtTargetList_TypeDefinitionIndex = 23754;

	class TargetFetchAimAtTargetList : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::AimTargetType TargetType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAIMATTARGETLIST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_69AB294BA9E0E41D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAimAtTargetList*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAimAtTargetList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAIMATTARGETLIST_METHOD_4_69AB294BA9E0E41D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7C11CF74121445EE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TargetFetchAimAtTargetList* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TargetFetchAimAtTargetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAIMATTARGETLIST_METHOD_4_7C11CF74121445EE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_92423D26C6CD30E4(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAimAtTargetList*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAimAtTargetList*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAIMATTARGETLIST_METHOD_4_92423D26C6CD30E4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_95F670F5EACD7374(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAimAtTargetList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAimAtTargetList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHAIMATTARGETLIST_METHOD_4_95F670F5EACD7374_OFFSET))(a1, a2);
		}
	};
}
