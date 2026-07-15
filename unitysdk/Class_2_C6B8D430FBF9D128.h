#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_C6B8D430FBF9D128_DISPOSE_OFFSET UNITYSDK_OFFSET(0x186E6B90)
#define CLASS_2_C6B8D430FBF9D128_METHOD_2_7B6EC255F45D034F_OFFSET UNITYSDK_OFFSET(0x186E6CD0)
#define CLASS_2_C6B8D430FBF9D128_METHOD_2_DB724851FEB3D97C_OFFSET UNITYSDK_OFFSET(0x186E6BD0)
#define CLASS_2_C6B8D430FBF9D128__CTOR_OFFSET UNITYSDK_OFFSET(0x186E6DA0)

inline static constexpr unsigned int Class_2_C6B8D430FBF9D128_TypeDefinitionIndex = 54993;

class Class_2_C6B8D430FBF9D128 : public ::RPG::GameCore::GameComponentBase
{
public:
	::System::Action_1<::RPG::GameCore::GameEntity*>* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C6B8D430FBF9D128__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C6B8D430FBF9D128_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_DB724851FEB3D97C(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_C6B8D430FBF9D128_METHOD_2_DB724851FEB3D97C_OFFSET))(this, a1);
	}

	::System::Void Method_2_7B6EC255F45D034F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_C6B8D430FBF9D128_METHOD_2_7B6EC255F45D034F_OFFSET))(this, a1);
	}
};
