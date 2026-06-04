#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISEVOLVEBUILDCOUNTDOWNITEMSHOW_METHOD_4_0381868994C87CB9_OFFSET UNITYSDK_OFFSET(0x19562D20)
#define RPG_GAMECORE_BYISEVOLVEBUILDCOUNTDOWNITEMSHOW_METHOD_4_8B2F13FB53C16346_OFFSET UNITYSDK_OFFSET(0x19562BE0)
#define RPG_GAMECORE_BYISEVOLVEBUILDCOUNTDOWNITEMSHOW_METHOD_4_9FEB8ED0C604758C_OFFSET UNITYSDK_OFFSET(0x19562B10)
#define RPG_GAMECORE_BYISEVOLVEBUILDCOUNTDOWNITEMSHOW_METHOD_4_BFEF955FDBE1899D_OFFSET UNITYSDK_OFFSET(0x19562DA0)
#define RPG_GAMECORE_BYISEVOLVEBUILDCOUNTDOWNITEMSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x19562B90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsEvolveBuildCountDownItemShow_TypeDefinitionIndex = 23038;

	class ByIsEvolveBuildCountDownItemShow : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISEVOLVEBUILDCOUNTDOWNITEMSHOW__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9FEB8ED0C604758C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsEvolveBuildCountDownItemShow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsEvolveBuildCountDownItemShow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISEVOLVEBUILDCOUNTDOWNITEMSHOW_METHOD_4_9FEB8ED0C604758C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_8B2F13FB53C16346(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByIsEvolveBuildCountDownItemShow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByIsEvolveBuildCountDownItemShow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISEVOLVEBUILDCOUNTDOWNITEMSHOW_METHOD_4_8B2F13FB53C16346_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0381868994C87CB9(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsEvolveBuildCountDownItemShow*& a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsEvolveBuildCountDownItemShow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISEVOLVEBUILDCOUNTDOWNITEMSHOW_METHOD_4_0381868994C87CB9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_BFEF955FDBE1899D(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsEvolveBuildCountDownItemShow* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsEvolveBuildCountDownItemShow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISEVOLVEBUILDCOUNTDOWNITEMSHOW_METHOD_4_BFEF955FDBE1899D_OFFSET))(a1, a2);
		}
	};
}
