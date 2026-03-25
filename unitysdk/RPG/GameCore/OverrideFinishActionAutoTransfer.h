#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ScreenTransferType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_OVERRIDEFINISHACTIONAUTOTRANSFER_METHOD_3_465E036BB405B90C_OFFSET UNITYSDK_OFFSET(0x17482870)
#define RPG_GAMECORE_OVERRIDEFINISHACTIONAUTOTRANSFER_METHOD_3_CAFB93ED15CD6E3C_OFFSET UNITYSDK_OFFSET(0x174828F0)
#define RPG_GAMECORE_OVERRIDEFINISHACTIONAUTOTRANSFER__CTOR_OFFSET UNITYSDK_OFFSET(0x174828C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OverrideFinishActionAutoTransfer_TypeDefinitionIndex = 18647;

	class OverrideFinishActionAutoTransfer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 SubmissionID; // 0x18
		::RPG::GameCore::ScreenTransferType TransferType; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEFINISHACTIONAUTOTRANSFER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_465E036BB405B90C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OverrideFinishActionAutoTransfer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OverrideFinishActionAutoTransfer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEFINISHACTIONAUTOTRANSFER_METHOD_3_465E036BB405B90C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CAFB93ED15CD6E3C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OverrideFinishActionAutoTransfer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OverrideFinishActionAutoTransfer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDEFINISHACTIONAUTOTRANSFER_METHOD_3_CAFB93ED15CD6E3C_OFFSET))(a1, a2);
		}
	};
}
