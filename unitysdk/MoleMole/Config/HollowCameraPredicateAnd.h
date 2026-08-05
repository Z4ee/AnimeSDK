#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BaseHollowCameraPredicate.h"
#include "unitysdk/Struct_2_31FD36EFA5418B17.h"

namespace MoleMole::Config { class IHollowCameraPredicate; }

#define MOLEMOLE_CONFIG_HOLLOWCAMERAPREDICATEAND_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1BD6FDE0)
#define MOLEMOLE_CONFIG_HOLLOWCAMERAPREDICATEAND__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD6FF70)

namespace MoleMole::Config
{
	inline static constexpr unsigned int HollowCameraPredicateAnd_TypeDefinitionIndex = 42317;

	class HollowCameraPredicateAnd : public ::MoleMole::Config::BaseHollowCameraPredicate
	{
	public:
		::Il2CppArray<::MoleMole::Config::IHollowCameraPredicate*>* Predicates; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWCAMERAPREDICATEAND__CTOR_OFFSET))(this);
		}

		::System::Boolean Evaluate(::Struct_2_31FD36EFA5418B17& info)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_31FD36EFA5418B17&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOWCAMERAPREDICATEAND_EVALUATE_OFFSET))(this, info);
		}
	};
}
