#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PhotoGraphAimContainerTargetBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_PHOTOGRAPHAIMCONTAIERNPC_METHOD_3_1598172E4DB82115_OFFSET UNITYSDK_OFFSET(0x1B4BD7D0)
#define RPG_GAMECORE_PHOTOGRAPHAIMCONTAIERNPC_METHOD_3_A93B84AEE4406A84_OFFSET UNITYSDK_OFFSET(0x1B4BD710)
#define RPG_GAMECORE_PHOTOGRAPHAIMCONTAIERNPC__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4BD790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphAimContaierNpc_TypeDefinitionIndex = 16817;

	class PhotoGraphAimContaierNpc : public ::RPG::GameCore::PhotoGraphAimContainerTargetBase
	{
	public:
		::RPG::GameCore::DynamicFloat* AimNpcID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHAIMCONTAIERNPC__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A93B84AEE4406A84(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PhotoGraphAimContaierNpc*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhotoGraphAimContaierNpc*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHAIMCONTAIERNPC_METHOD_3_A93B84AEE4406A84_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1598172E4DB82115(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PhotoGraphAimContaierNpc* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PhotoGraphAimContaierNpc*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHAIMCONTAIERNPC_METHOD_3_1598172E4DB82115_OFFSET))(a1, a2);
		}
	};
}
