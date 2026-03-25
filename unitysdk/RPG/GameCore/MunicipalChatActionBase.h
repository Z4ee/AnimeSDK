#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MUNICIPALCHATACTIONBASE_METHOD_2_19E99EBB281CA339_OFFSET UNITYSDK_OFFSET(0x1745AC30)
#define RPG_GAMECORE_MUNICIPALCHATACTIONBASE_METHOD_2_1F4943C81EF80B74_OFFSET UNITYSDK_OFFSET(0x1745AF40)
#define RPG_GAMECORE_MUNICIPALCHATACTIONBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1745AF30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MunicipalChatActionBase_TypeDefinitionIndex = 15492;

	class MunicipalChatActionBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* UniqueName; // 0x10
		::System::Single WaitDelayTime; // 0x18
		::System::Int32 WaitActionIndex; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALCHATACTIONBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_19E99EBB281CA339(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MunicipalChatActionBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MunicipalChatActionBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALCHATACTIONBASE_METHOD_2_19E99EBB281CA339_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_1F4943C81EF80B74(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MunicipalChatActionBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MunicipalChatActionBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUNICIPALCHATACTIONBASE_METHOD_2_1F4943C81EF80B74_OFFSET))(a1, a2);
		}
	};
}
