#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPSETENTITYLODOFFSET_METHOD_3_0FD7FD6625A86FA4_OFFSET UNITYSDK_OFFSET(0x1D36DFF0)
#define RPG_GAMECORE_PROPSETENTITYLODOFFSET_METHOD_3_C6A9ED10CFD9DE96_OFFSET UNITYSDK_OFFSET(0x1D36E070)
#define RPG_GAMECORE_PROPSETENTITYLODOFFSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1D36E040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropSetEntityLodOffset_TypeDefinitionIndex = 21714;

	class PropSetEntityLodOffset : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::MVector3 LocalOffset; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETENTITYLODOFFSET__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_0FD7FD6625A86FA4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropSetEntityLodOffset*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropSetEntityLodOffset*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETENTITYLODOFFSET_METHOD_3_0FD7FD6625A86FA4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C6A9ED10CFD9DE96(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropSetEntityLodOffset* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropSetEntityLodOffset*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSETENTITYLODOFFSET_METHOD_3_C6A9ED10CFD9DE96_OFFSET))(a1, a2);
		}
	};
}
