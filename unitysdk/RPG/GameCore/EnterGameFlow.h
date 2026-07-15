#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameFlowType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ENTERGAMEFLOW_METHOD_3_914946643B1528D1_OFFSET UNITYSDK_OFFSET(0x1C052BC0)
#define RPG_GAMECORE_ENTERGAMEFLOW_METHOD_3_AFDB16E02C215CE4_OFFSET UNITYSDK_OFFSET(0x1C052C00)
#define RPG_GAMECORE_ENTERGAMEFLOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C052BF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnterGameFlow_TypeDefinitionIndex = 23206;

	class EnterGameFlow : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::GameFlowType Type; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DynamicString*>* Parameters; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERGAMEFLOW__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_914946643B1528D1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnterGameFlow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnterGameFlow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERGAMEFLOW_METHOD_3_914946643B1528D1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_AFDB16E02C215CE4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnterGameFlow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnterGameFlow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERGAMEFLOW_METHOD_3_AFDB16E02C215CE4_OFFSET))(a1, a2);
		}
	};
}
