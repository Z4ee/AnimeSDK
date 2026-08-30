#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_STATERUNBLENDTREE_CLASS_1_3B76E13757985C28_4_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0xE0F14E0)
#define RPG_CLIENT_STATERUNBLENDTREE_CLASS_1_3B76E13757985C28_4__CTOR_OFFSET UNITYSDK_OFFSET(0xE0EF6C0)

namespace RPG::Client
{
	inline static constexpr unsigned int StateRunBlendTree_Class_1_3B76E13757985C28_4_TypeDefinitionIndex = 68809;

	class StateRunBlendTree_Class_1_3B76E13757985C28_4 : public ::System::Object
	{
	public:
		::System::Single MIAJNJNECOG; // 0x10
		::System::Single MCLLALGABAB; // 0x14
		::System::Single IEHPFADHJFD; // 0x18
		::System::Int32 NNACKOBKFGE; // 0x1C
		::System::Single GPOFMFPENLH; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATERUNBLENDTREE_CLASS_1_3B76E13757985C28_4__CTOR_OFFSET))(this);
		}

		::System::Single Method_1_A36150C5DCC8409E()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATERUNBLENDTREE_CLASS_1_3B76E13757985C28_4_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
		}
	};
}
