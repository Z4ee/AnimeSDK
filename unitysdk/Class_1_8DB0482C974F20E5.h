#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TurnBasedModifierEvent.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TaskConfig; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_8DB0482C974F20E5_METHOD_1_48272A3A1C5FA1EB_OFFSET UNITYSDK_OFFSET(0x16B1C4C0)
#define CLASS_1_8DB0482C974F20E5_METHOD_1_FC218EB9B8045D08_OFFSET UNITYSDK_OFFSET(0x16B1C560)
#define CLASS_1_8DB0482C974F20E5__CCTOR_OFFSET UNITYSDK_OFFSET(0x16B1C5D0)
#define CLASS_1_8DB0482C974F20E5__CTOR_OFFSET UNITYSDK_OFFSET(0x16B1C5C0)

inline static constexpr unsigned int Class_1_8DB0482C974F20E5_TypeDefinitionIndex = 22484;

class Class_1_8DB0482C974F20E5 : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::RPG::GameCore::TurnBasedModifierEvent>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::HashSet_1<::RPG::GameCore::TurnBasedModifierEvent>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8DB0482C974F20E5_TypeDefinitionIndex)->GetStaticField(0x28A00);
	}
	static ::System::Collections::Generic::HashSet_1<::System::Type*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::HashSet_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8DB0482C974F20E5_TypeDefinitionIndex)->GetStaticField(0x28A08);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8DB0482C974F20E5__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8DB0482C974F20E5__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_48272A3A1C5FA1EB(::RPG::GameCore::TaskConfig* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::TaskConfig*))((::PBYTE)hIl2Cpp + CLASS_1_8DB0482C974F20E5_METHOD_1_48272A3A1C5FA1EB_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_FC218EB9B8045D08(::RPG::GameCore::TurnBasedModifierEvent a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::TurnBasedModifierEvent))((::PBYTE)hIl2Cpp + CLASS_1_8DB0482C974F20E5_METHOD_1_FC218EB9B8045D08_OFFSET))(a1);
	}
};
