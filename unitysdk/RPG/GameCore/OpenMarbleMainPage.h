#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_OPENMARBLEMAINPAGE_METHOD_3_3D9BBDADCBCECC5B_OFFSET UNITYSDK_OFFSET(0x1CE97660)
#define RPG_GAMECORE_OPENMARBLEMAINPAGE_METHOD_3_93C57998B75D77FC_OFFSET UNITYSDK_OFFSET(0x1CE976A0)
#define RPG_GAMECORE_OPENMARBLEMAINPAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE97690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OpenMarbleMainPage_TypeDefinitionIndex = 21028;

	class OpenMarbleMainPage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnUIEnterImmediately; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnUIExitImmediately; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENMARBLEMAINPAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3D9BBDADCBCECC5B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpenMarbleMainPage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpenMarbleMainPage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENMARBLEMAINPAGE_METHOD_3_3D9BBDADCBCECC5B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_93C57998B75D77FC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::OpenMarbleMainPage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::OpenMarbleMainPage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENMARBLEMAINPAGE_METHOD_3_93C57998B75D77FC_OFFSET))(a1, a2);
		}
	};
}
