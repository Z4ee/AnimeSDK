#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ADVNPCTRACKEDSEARCH_METHOD_3_F5C303B4C58A9890_OFFSET UNITYSDK_OFFSET(0x16F39C30)
#define RPG_GAMECORE_ADVNPCTRACKEDSEARCH_METHOD_3_FD007F0F30449849_OFFSET UNITYSDK_OFFSET(0x16F39BB0)
#define RPG_GAMECORE_ADVNPCTRACKEDSEARCH__CTOR_OFFSET UNITYSDK_OFFSET(0x16F39C00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNpcTrackedSearch_TypeDefinitionIndex = 18266;

	class AdvNpcTrackedSearch : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBeginAlert; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCTRACKEDSEARCH__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_FD007F0F30449849(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNpcTrackedSearch*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNpcTrackedSearch*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCTRACKEDSEARCH_METHOD_3_FD007F0F30449849_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_F5C303B4C58A9890(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvNpcTrackedSearch* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvNpcTrackedSearch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCTRACKEDSEARCH_METHOD_3_F5C303B4C58A9890_OFFSET))(a1, a2);
		}
	};
}
