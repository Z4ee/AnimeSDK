#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_F47F7A3F5E97970D;
namespace Entitas { class IContext; }

#define CLASS_1_24C2E7EF22229C6A_CLEAR_OFFSET UNITYSDK_OFFSET(0x16762630)
#define CLASS_1_24C2E7EF22229C6A_GET_ALLCONTEXTS_OFFSET UNITYSDK_OFFSET(0x16762750)
#define CLASS_1_24C2E7EF22229C6A_GET_FIVEDIMGAME_OFFSET UNITYSDK_OFFSET(0x16762740)
#define CLASS_1_24C2E7EF22229C6A_METHOD_1_ACE888BF6F5BC5FD_OFFSET UNITYSDK_OFFSET(0x167625E0)
#define CLASS_1_24C2E7EF22229C6A__CTOR_OFFSET UNITYSDK_OFFSET(0x167624F0)

inline static constexpr unsigned int Class_1_24C2E7EF22229C6A_TypeDefinitionIndex = 32383;

class Class_1_24C2E7EF22229C6A : public ::System::Object
{
public:
	::Class_2_F47F7A3F5E97970D* _fiveDimGame_k__BackingField; // 0x10
	::Il2CppArray<::Entitas::IContext*>* _allContexts_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24C2E7EF22229C6A__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24C2E7EF22229C6A_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_ACE888BF6F5BC5FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24C2E7EF22229C6A_METHOD_1_ACE888BF6F5BC5FD_OFFSET))(this);
	}

	::Class_2_F47F7A3F5E97970D* get_fiveDimGame()
	{
		return ((::Class_2_F47F7A3F5E97970D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24C2E7EF22229C6A_GET_FIVEDIMGAME_OFFSET))(this);
	}

	::Il2CppArray<::Entitas::IContext*>* get_allContexts()
	{
		return ((::Il2CppArray<::Entitas::IContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_24C2E7EF22229C6A_GET_ALLCONTEXTS_OFFSET))(this);
	}
};
