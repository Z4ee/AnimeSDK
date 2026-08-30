#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }

#define RPG_GAMECORE_SETFUNCBTN_METHOD_3_8035AA36AD215ABD_OFFSET UNITYSDK_OFFSET(0x1D5004C0)
#define RPG_GAMECORE_SETFUNCBTN_METHOD_3_9D4F89E02E2443B4_OFFSET UNITYSDK_OFFSET(0x1D500480)
#define RPG_GAMECORE_SETFUNCBTN__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5004B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetFuncBtn_TypeDefinitionIndex = 21374;

	class SetFuncBtn : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* CustomString; // 0x18
		::System::String* IconPath; // 0x20
		::System::Boolean ShowBtnEffect; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFUNCBTN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9D4F89E02E2443B4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetFuncBtn*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetFuncBtn*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFUNCBTN_METHOD_3_9D4F89E02E2443B4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8035AA36AD215ABD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetFuncBtn* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetFuncBtn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETFUNCBTN_METHOD_3_8035AA36AD215ABD_OFFSET))(a1, a2);
		}
	};
}
