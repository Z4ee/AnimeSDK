#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITGROUPUNLOAD_METHOD_3_57639384934FD674_OFFSET UNITYSDK_OFFSET(0x190FFE20)
#define RPG_GAMECORE_WAITGROUPUNLOAD_METHOD_3_9A1AD4171DD0F4E5_OFFSET UNITYSDK_OFFSET(0x190FFEA0)
#define RPG_GAMECORE_WAITGROUPUNLOAD__CTOR_OFFSET UNITYSDK_OFFSET(0x190FFE70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitGroupUnload_TypeDefinitionIndex = 20204;

	class WaitGroupUnload : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnUnload; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITGROUPUNLOAD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_57639384934FD674(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitGroupUnload*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitGroupUnload*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITGROUPUNLOAD_METHOD_3_57639384934FD674_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9A1AD4171DD0F4E5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitGroupUnload* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitGroupUnload*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITGROUPUNLOAD_METHOD_3_9A1AD4171DD0F4E5_OFFSET))(a1, a2);
		}
	};
}
