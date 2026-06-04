#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_FORCEFIVEDIMLOADMODEL_METHOD_3_329AE0C5F3747D3C_OFFSET UNITYSDK_OFFSET(0x19763D50)
#define RPG_GAMECORE_FORCEFIVEDIMLOADMODEL_METHOD_3_70C5BBA4393F1ABD_OFFSET UNITYSDK_OFFSET(0x19763CD0)
#define RPG_GAMECORE_FORCEFIVEDIMLOADMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x19763D20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ForceFiveDimLoadModel_TypeDefinitionIndex = 19902;

	class ForceFiveDimLoadModel : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* Target; // 0x18
		::System::Boolean Enable; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCEFIVEDIMLOADMODEL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_70C5BBA4393F1ABD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ForceFiveDimLoadModel*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ForceFiveDimLoadModel*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCEFIVEDIMLOADMODEL_METHOD_3_70C5BBA4393F1ABD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_329AE0C5F3747D3C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ForceFiveDimLoadModel* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ForceFiveDimLoadModel*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCEFIVEDIMLOADMODEL_METHOD_3_329AE0C5F3747D3C_OFFSET))(a1, a2);
		}
	};
}
