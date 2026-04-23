#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SETCAMERACONFIGPRIORITY_METHOD_3_1B8C2CF37F7BCCA1_OFFSET UNITYSDK_OFFSET(0x18E0EC40)
#define RPG_GAMECORE_SETCAMERACONFIGPRIORITY_METHOD_3_4071100F3B5A7718_OFFSET UNITYSDK_OFFSET(0x18E0EBC0)
#define RPG_GAMECORE_SETCAMERACONFIGPRIORITY__CTOR_OFFSET UNITYSDK_OFFSET(0x18E0EC10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetCameraConfigPriority_TypeDefinitionIndex = 21275;

	class SetCameraConfigPriority : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Int32 Priority; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCAMERACONFIGPRIORITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4071100F3B5A7718(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetCameraConfigPriority*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetCameraConfigPriority*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCAMERACONFIGPRIORITY_METHOD_3_4071100F3B5A7718_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1B8C2CF37F7BCCA1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetCameraConfigPriority* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetCameraConfigPriority*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCAMERACONFIGPRIORITY_METHOD_3_1B8C2CF37F7BCCA1_OFFSET))(a1, a2);
		}
	};
}
