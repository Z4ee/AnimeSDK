#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CARTOONSCREENTRANSFER_METHOD_3_2436847688D48795_OFFSET UNITYSDK_OFFSET(0x1CF7DBD0)
#define RPG_GAMECORE_CARTOONSCREENTRANSFER_METHOD_3_435C10A6AC5CEB94_OFFSET UNITYSDK_OFFSET(0x1CF7DB80)
#define RPG_GAMECORE_CARTOONSCREENTRANSFER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF7DBC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CartoonScreenTransfer_TypeDefinitionIndex = 22051;

	class CartoonScreenTransfer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetEntity; // 0x18
		::System::String* AttachPoint; // 0x20
		::System::Single Duration; // 0x28
		::System::String* AnimationCurvePath; // 0x30
		::System::Boolean Close; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CARTOONSCREENTRANSFER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_435C10A6AC5CEB94(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CartoonScreenTransfer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CartoonScreenTransfer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CARTOONSCREENTRANSFER_METHOD_3_435C10A6AC5CEB94_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2436847688D48795(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CartoonScreenTransfer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CartoonScreenTransfer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CARTOONSCREENTRANSFER_METHOD_3_2436847688D48795_OFFSET))(a1, a2);
		}
	};
}
