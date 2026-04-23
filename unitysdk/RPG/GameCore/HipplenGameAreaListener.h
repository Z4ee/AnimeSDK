#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_HIPPLENGAMEAREALISTENER_METHOD_3_202CCA5AF2120810_OFFSET UNITYSDK_OFFSET(0x18A01450)
#define RPG_GAMECORE_HIPPLENGAMEAREALISTENER_METHOD_3_CEB2B37753C29380_OFFSET UNITYSDK_OFFSET(0x18A014D0)
#define RPG_GAMECORE_HIPPLENGAMEAREALISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x18A014A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenGameAreaListener_TypeDefinitionIndex = 20281;

	class HipplenGameAreaListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnLoad; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnUnload; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENGAMEAREALISTENER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_202CCA5AF2120810(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenGameAreaListener*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenGameAreaListener*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENGAMEAREALISTENER_METHOD_3_202CCA5AF2120810_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CEB2B37753C29380(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenGameAreaListener* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenGameAreaListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENGAMEAREALISTENER_METHOD_3_CEB2B37753C29380_OFFSET))(a1, a2);
		}
	};
}
