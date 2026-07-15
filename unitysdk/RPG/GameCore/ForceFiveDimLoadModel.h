#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_FORCEFIVEDIMLOADMODEL_METHOD_3_329AE0C5F3747D3C_OFFSET UNITYSDK_OFFSET(0x1BEBEC10)
#define RPG_GAMECORE_FORCEFIVEDIMLOADMODEL_METHOD_3_A33ADD201EA7DB4F_OFFSET UNITYSDK_OFFSET(0x1BEBEBD0)
#define RPG_GAMECORE_FORCEFIVEDIMLOADMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEBEC00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ForceFiveDimLoadModel_TypeDefinitionIndex = 20266;

	class ForceFiveDimLoadModel : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* Target; // 0x18
		::System::Boolean Enable; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCEFIVEDIMLOADMODEL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A33ADD201EA7DB4F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ForceFiveDimLoadModel*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ForceFiveDimLoadModel*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCEFIVEDIMLOADMODEL_METHOD_3_A33ADD201EA7DB4F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_329AE0C5F3747D3C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ForceFiveDimLoadModel* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ForceFiveDimLoadModel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCEFIVEDIMLOADMODEL_METHOD_3_329AE0C5F3747D3C_OFFSET))(a1, a2);
		}
	};
}
