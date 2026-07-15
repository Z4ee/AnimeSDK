#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_2_BE37E8E5B7815649;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_44B7D1F846C3D6F3_METHOD_2_6C9963159B9A9A14_OFFSET UNITYSDK_OFFSET(0x15B223A0)
#define CLASS_2_44B7D1F846C3D6F3_METHOD_2_AE0B725AB77F7E6F_OFFSET UNITYSDK_OFFSET(0x15B21C40)
#define CLASS_2_44B7D1F846C3D6F3_METHOD_2_ED65AE7582736594_OFFSET UNITYSDK_OFFSET(0x15B22020)
#define CLASS_2_44B7D1F846C3D6F3_METHOD_2_F26CE4FC4BEDB222_OFFSET UNITYSDK_OFFSET(0x15B21AD0)
#define CLASS_2_44B7D1F846C3D6F3_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x15B21B90)
#define CLASS_2_44B7D1F846C3D6F3_ONRETURN_OFFSET UNITYSDK_OFFSET(0x15B21FD0)
#define CLASS_2_44B7D1F846C3D6F3__CTOR_OFFSET UNITYSDK_OFFSET(0x15B226A0)
#define CLASS_2_44B7D1F846C3D6F3__ONBIND_OFFSET UNITYSDK_OFFSET(0x15B218A0)

inline static constexpr unsigned int Class_2_44B7D1F846C3D6F3_TypeDefinitionIndex = 68644;

class Class_2_44B7D1F846C3D6F3 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::RPG::GameCore::GameEntity* Field_2_1; // 0x60
	::System::Collections::Generic::List_1<::Class_2_BE37E8E5B7815649*>* Field_2_2; // 0x68
	::RPG::GameCore::TurnBasedAbilityComponent* Field_2_3; // 0x70
	::System::Int32 Field_2_4; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44B7D1F846C3D6F3__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44B7D1F846C3D6F3__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_F26CE4FC4BEDB222(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_44B7D1F846C3D6F3_METHOD_2_F26CE4FC4BEDB222_OFFSET))(this, a1);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_44B7D1F846C3D6F3_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44B7D1F846C3D6F3_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_2_AE0B725AB77F7E6F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44B7D1F846C3D6F3_METHOD_2_AE0B725AB77F7E6F_OFFSET))(this);
	}

	::System::Void Method_2_ED65AE7582736594()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_44B7D1F846C3D6F3_METHOD_2_ED65AE7582736594_OFFSET))(this);
	}

	::System::Void Method_2_6C9963159B9A9A14(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_44B7D1F846C3D6F3_METHOD_2_6C9963159B9A9A14_OFFSET))(this, a1);
	}
};
