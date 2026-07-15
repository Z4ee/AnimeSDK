#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_36816D4DE394D200;
class Class_1_B072F3932DB9488D_1;
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_ACDBC0A3CD89B5C3_METHOD_1_171C06C7A35BD279_OFFSET UNITYSDK_OFFSET(0x1858A3E0)
#define CLASS_1_ACDBC0A3CD89B5C3_METHOD_1_411FD78C9ECCF191_OFFSET UNITYSDK_OFFSET(0x1858A300)
#define CLASS_1_ACDBC0A3CD89B5C3_METHOD_1_48D63B3F1BB73F6B_OFFSET UNITYSDK_OFFSET(0x1858A070)
#define CLASS_1_ACDBC0A3CD89B5C3_METHOD_1_6D82BA6D42D4F85D_OFFSET UNITYSDK_OFFSET(0x1858A220)
#define CLASS_1_ACDBC0A3CD89B5C3_METHOD_1_8DA3FEE3379AFF0E_OFFSET UNITYSDK_OFFSET(0x18589FE0)
#define CLASS_1_ACDBC0A3CD89B5C3__CTOR_OFFSET UNITYSDK_OFFSET(0x1858A510)

inline static constexpr unsigned int Class_1_ACDBC0A3CD89B5C3_TypeDefinitionIndex = 68757;

class Class_1_ACDBC0A3CD89B5C3 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::TurnBasedModifierInstance*, ::Class_1_B072F3932DB9488D_1*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACDBC0A3CD89B5C3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8DA3FEE3379AFF0E(::Class_1_36816D4DE394D200* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_36816D4DE394D200*))((::PBYTE)hIl2Cpp + CLASS_1_ACDBC0A3CD89B5C3_METHOD_1_8DA3FEE3379AFF0E_OFFSET))(this, a1);
	}

	::System::Void Method_1_6D82BA6D42D4F85D(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_ACDBC0A3CD89B5C3_METHOD_1_6D82BA6D42D4F85D_OFFSET))(this, a1);
	}

	::Class_1_B072F3932DB9488D_1* Method_1_411FD78C9ECCF191(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::Class_1_B072F3932DB9488D_1*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_ACDBC0A3CD89B5C3_METHOD_1_411FD78C9ECCF191_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* Method_1_171C06C7A35BD279()
	{
		return ((::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ACDBC0A3CD89B5C3_METHOD_1_171C06C7A35BD279_OFFSET))(this);
	}

	::Class_1_B072F3932DB9488D_1* Method_1_48D63B3F1BB73F6B(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::Class_1_B072F3932DB9488D_1*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_1_ACDBC0A3CD89B5C3_METHOD_1_48D63B3F1BB73F6B_OFFSET))(this, a1);
	}
};
