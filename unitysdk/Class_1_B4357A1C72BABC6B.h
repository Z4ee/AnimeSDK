#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_F47F7A3F5E97970D;
namespace Entitas { class IContext; }

#define CLASS_1_B4357A1C72BABC6B_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C916110)
#define CLASS_1_B4357A1C72BABC6B_GET_ALLCONTEXTS_OFFSET UNITYSDK_OFFSET(0x1C9161E0)
#define CLASS_1_B4357A1C72BABC6B_GET_FIVEDIMGAME_OFFSET UNITYSDK_OFFSET(0x1C9161D0)
#define CLASS_1_B4357A1C72BABC6B_METHOD_1_E693A0026D178D8E_OFFSET UNITYSDK_OFFSET(0x1C9160C0)
#define CLASS_1_B4357A1C72BABC6B__CTOR_OFFSET UNITYSDK_OFFSET(0x1C915FE0)

inline static constexpr unsigned int Class_1_B4357A1C72BABC6B_TypeDefinitionIndex = 42128;

class Class_1_B4357A1C72BABC6B : public ::System::Object
{
public:
	::Class_2_F47F7A3F5E97970D* _fiveDimGame_k__BackingField; // 0x10
	::Il2CppArray<::Entitas::IContext*>* _allContexts_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4357A1C72BABC6B__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4357A1C72BABC6B_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_E693A0026D178D8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4357A1C72BABC6B_METHOD_1_E693A0026D178D8E_OFFSET))(this);
	}

	::Class_2_F47F7A3F5E97970D* get_fiveDimGame()
	{
		return ((::Class_2_F47F7A3F5E97970D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4357A1C72BABC6B_GET_FIVEDIMGAME_OFFSET))(this);
	}

	::Il2CppArray<::Entitas::IContext*>* get_allContexts()
	{
		return ((::Il2CppArray<::Entitas::IContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B4357A1C72BABC6B_GET_ALLCONTEXTS_OFFSET))(this);
	}
};
