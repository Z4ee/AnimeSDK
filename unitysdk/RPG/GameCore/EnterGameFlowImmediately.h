#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameFlowType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ENTERGAMEFLOWIMMEDIATELY_METHOD_3_2F67AEC2BF1961B3_OFFSET UNITYSDK_OFFSET(0x1D7C2C60)
#define RPG_GAMECORE_ENTERGAMEFLOWIMMEDIATELY_METHOD_3_C53330CE2F77C64A_OFFSET UNITYSDK_OFFSET(0x1D7C2CA0)
#define RPG_GAMECORE_ENTERGAMEFLOWIMMEDIATELY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C2C90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnterGameFlowImmediately_TypeDefinitionIndex = 23787;

	class EnterGameFlowImmediately : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::GameFlowType Type; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicString*>* Parameters; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERGAMEFLOWIMMEDIATELY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2F67AEC2BF1961B3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnterGameFlowImmediately*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnterGameFlowImmediately*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERGAMEFLOWIMMEDIATELY_METHOD_3_2F67AEC2BF1961B3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C53330CE2F77C64A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnterGameFlowImmediately* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnterGameFlowImmediately*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERGAMEFLOWIMMEDIATELY_METHOD_3_C53330CE2F77C64A_OFFSET))(a1, a2);
		}
	};
}
