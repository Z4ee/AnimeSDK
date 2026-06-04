#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelValueGetter.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelStatusType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELSTATUSGETTER_METHOD_3_5D0AA5C20CC28135_OFFSET UNITYSDK_OFFSET(0x19647560)
#define RPG_GAMECORE_CHIMERADUELSTATUSGETTER_METHOD_3_890810B4AE4F4DCD_OFFSET UNITYSDK_OFFSET(0x196475C0)
#define RPG_GAMECORE_CHIMERADUELSTATUSGETTER__CTOR_OFFSET UNITYSDK_OFFSET(0x196475B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelStatusGetter_TypeDefinitionIndex = 15216;

	class ChimeraDuelStatusGetter : public ::RPG::GameCore::BaseChimeraDuelValueGetter
	{
	public:
		::Il2CppArray<::RPG::GameCore::ChimeraDuelStatusType>* Status; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSTATUSGETTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_5D0AA5C20CC28135(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelStatusGetter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelStatusGetter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSTATUSGETTER_METHOD_3_5D0AA5C20CC28135_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_890810B4AE4F4DCD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelStatusGetter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelStatusGetter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSTATUSGETTER_METHOD_3_890810B4AE4F4DCD_OFFSET))(a1, a2);
		}
	};
}
