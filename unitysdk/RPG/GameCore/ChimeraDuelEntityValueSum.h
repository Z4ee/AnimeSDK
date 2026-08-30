#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelEntityValueGetterBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELENTITYVALUESUM_METHOD_3_0016040F2F389E6B_OFFSET UNITYSDK_OFFSET(0x1E332BC0)
#define RPG_GAMECORE_CHIMERADUELENTITYVALUESUM_METHOD_3_8CBDCF814EAB2CFB_OFFSET UNITYSDK_OFFSET(0x1E332D10)
#define RPG_GAMECORE_CHIMERADUELENTITYVALUESUM__CTOR_OFFSET UNITYSDK_OFFSET(0x1E332BB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelEntityValueSum_TypeDefinitionIndex = 15751;

	class ChimeraDuelEntityValueSum : public ::RPG::GameCore::ChimeraDuelEntityValueGetterBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::ChimeraDuelEntityValueGetterBase*>* ValueGetters; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYVALUESUM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8CBDCF814EAB2CFB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelEntityValueSum*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelEntityValueSum*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYVALUESUM_METHOD_3_8CBDCF814EAB2CFB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_0016040F2F389E6B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelEntityValueSum* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelEntityValueSum*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYVALUESUM_METHOD_3_0016040F2F389E6B_OFFSET))(a1, a2);
		}
	};
}
