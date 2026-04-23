#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2C65134DD292041D_2;
class Class_1_36816D4DE394D200;
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_ACDBC0A3CD89B5C3_METHOD_1_411FD78C9ECCF191_OFFSET UNITYSDK_OFFSET(0x11191C60)
#define CLASS_1_ACDBC0A3CD89B5C3_METHOD_1_48D63B3F1BB73F6B_OFFSET UNITYSDK_OFFSET(0x111919C0)
#define CLASS_1_ACDBC0A3CD89B5C3_METHOD_1_B7781A3D4E91A7C2_OFFSET UNITYSDK_OFFSET(0x111918D0)
#define CLASS_1_ACDBC0A3CD89B5C3_METHOD_1_D452C747752E2DC4_OFFSET UNITYSDK_OFFSET(0x11191D50)
#define CLASS_1_ACDBC0A3CD89B5C3_METHOD_1_EF99AAFB3BCA5654_OFFSET UNITYSDK_OFFSET(0x11191B80)
#define CLASS_1_ACDBC0A3CD89B5C3__CTOR_OFFSET UNITYSDK_OFFSET(0x11191DE0)

inline static constexpr unsigned int Class_1_ACDBC0A3CD89B5C3_TypeDefinitionIndex = 66352;

class Class_1_ACDBC0A3CD89B5C3 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TurnBasedModifierInstance*, ::Class_1_2C65134DD292041D_2*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACDBC0A3CD89B5C3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B7781A3D4E91A7C2(::Class_1_36816D4DE394D200* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_36816D4DE394D200*))((::PBYTE)hIl2Cpp + CLASS_1_ACDBC0A3CD89B5C3_METHOD_1_B7781A3D4E91A7C2_OFFSET))(this, a1);
	}

	::System::Void Method_1_EF99AAFB3BCA5654(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_ACDBC0A3CD89B5C3_METHOD_1_EF99AAFB3BCA5654_OFFSET))(this, a1);
	}

	::Class_1_2C65134DD292041D_2* Method_1_411FD78C9ECCF191(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::Class_1_2C65134DD292041D_2*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_ACDBC0A3CD89B5C3_METHOD_1_411FD78C9ECCF191_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* Method_1_D452C747752E2DC4()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACDBC0A3CD89B5C3_METHOD_1_D452C747752E2DC4_OFFSET))(this);
	}

	::Class_1_2C65134DD292041D_2* Method_1_48D63B3F1BB73F6B(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::Class_1_2C65134DD292041D_2*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_ACDBC0A3CD89B5C3_METHOD_1_48D63B3F1BB73F6B_OFFSET))(this, a1);
	}
};
