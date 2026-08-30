#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraTalkContent.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERATALKCONTENTWITHWEIGHT_METHOD_3_58620A7110170606_OFFSET UNITYSDK_OFFSET(0x1E340D30)
#define RPG_GAMECORE_CHIMERATALKCONTENTWITHWEIGHT_METHOD_3_FC55740E80DC99DC_OFFSET UNITYSDK_OFFSET(0x1E340C00)
#define RPG_GAMECORE_CHIMERATALKCONTENTWITHWEIGHT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E340BF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraTalkContentWithWeight_TypeDefinitionIndex = 15681;

	class ChimeraTalkContentWithWeight : public ::RPG::GameCore::ChimeraTalkContent
	{
	public:
		::System::Single Weight; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATALKCONTENTWITHWEIGHT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_58620A7110170606(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraTalkContentWithWeight*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraTalkContentWithWeight*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATALKCONTENTWITHWEIGHT_METHOD_3_58620A7110170606_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FC55740E80DC99DC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraTalkContentWithWeight* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraTalkContentWithWeight*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERATALKCONTENTWITHWEIGHT_METHOD_3_FC55740E80DC99DC_OFFSET))(a1, a2);
		}
	};
}
