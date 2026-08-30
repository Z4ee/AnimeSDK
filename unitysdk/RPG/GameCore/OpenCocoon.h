#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_OPENCOCOON_METHOD_3_0E4B80EF56F3735F_OFFSET UNITYSDK_OFFSET(0x1CE96A40)
#define RPG_GAMECORE_OPENCOCOON_METHOD_3_9CB9B48AC89C2503_OFFSET UNITYSDK_OFFSET(0x1CE96B80)
#define RPG_GAMECORE_OPENCOCOON__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE96AF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OpenCocoon_TypeDefinitionIndex = 21836;

	class OpenCocoon : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCancel; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnUIEnter; // 0x20
		::RPG::GameCore::DynamicFloat* BattleAreaID; // 0x28
		::RPG::GameCore::DynamicFloat* BattleAreaConfigID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENCOCOON__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0E4B80EF56F3735F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpenCocoon*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpenCocoon*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENCOCOON_METHOD_3_0E4B80EF56F3735F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9CB9B48AC89C2503(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpenCocoon* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpenCocoon*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENCOCOON_METHOD_3_9CB9B48AC89C2503_OFFSET))(a1, a2);
		}
	};
}
