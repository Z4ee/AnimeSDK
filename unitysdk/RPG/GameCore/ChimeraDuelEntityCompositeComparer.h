#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelEntityComparerBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELENTITYCOMPOSITECOMPARER_METHOD_4_2789D15426BC0952_OFFSET UNITYSDK_OFFSET(0x1E332670)
#define RPG_GAMECORE_CHIMERADUELENTITYCOMPOSITECOMPARER_METHOD_4_F8F4BA34595883A2_OFFSET UNITYSDK_OFFSET(0x1E330410)
#define RPG_GAMECORE_CHIMERADUELENTITYCOMPOSITECOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E330400)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelEntityCompositeComparer_TypeDefinitionIndex = 15758;

	class ChimeraDuelEntityCompositeComparer : public ::RPG::GameCore::ChimeraDuelEntityComparerBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::ChimeraDuelEntityComparerBase*>* Comparers; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYCOMPOSITECOMPARER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_2789D15426BC0952(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelEntityCompositeComparer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelEntityCompositeComparer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYCOMPOSITECOMPARER_METHOD_4_2789D15426BC0952_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F8F4BA34595883A2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelEntityCompositeComparer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelEntityCompositeComparer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYCOMPOSITECOMPARER_METHOD_4_F8F4BA34595883A2_OFFSET))(a1, a2);
		}
	};
}
