#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_HIPPLENGAMEAREALISTENER_METHOD_3_54998919F21D4FB2_OFFSET UNITYSDK_OFFSET(0x198339F0)
#define RPG_GAMECORE_HIPPLENGAMEAREALISTENER_METHOD_3_D7A3D3B0F4AC09DE_OFFSET UNITYSDK_OFFSET(0x19833970)
#define RPG_GAMECORE_HIPPLENGAMEAREALISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x198339C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenGameAreaListener_TypeDefinitionIndex = 20131;

	class HipplenGameAreaListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnLoad; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnUnload; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENGAMEAREALISTENER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D7A3D3B0F4AC09DE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenGameAreaListener*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenGameAreaListener*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENGAMEAREALISTENER_METHOD_3_D7A3D3B0F4AC09DE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_54998919F21D4FB2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::HipplenGameAreaListener* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::HipplenGameAreaListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENGAMEAREALISTENER_METHOD_3_54998919F21D4FB2_OFFSET))(a1, a2);
		}
	};
}
