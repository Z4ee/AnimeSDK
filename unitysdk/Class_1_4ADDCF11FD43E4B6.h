#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TurnBasedModifierEvent.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TaskConfig; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_4ADDCF11FD43E4B6_METHOD_1_0E62A1F7315AFBE8_OFFSET UNITYSDK_OFFSET(0x1CBA4FB0)
#define CLASS_1_4ADDCF11FD43E4B6_METHOD_1_FC218EB9B8045D08_OFFSET UNITYSDK_OFFSET(0x1CBA5020)
#define CLASS_1_4ADDCF11FD43E4B6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CBA5090)
#define CLASS_1_4ADDCF11FD43E4B6__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBA5080)

inline static constexpr unsigned int Class_1_4ADDCF11FD43E4B6_TypeDefinitionIndex = 18061;

class Class_1_4ADDCF11FD43E4B6 : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::RPG::GameCore::TurnBasedModifierEvent>** StaticGet_MIFENNBPJPJ()
	{
		return (::System::Collections::Generic::HashSet_1<::RPG::GameCore::TurnBasedModifierEvent>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4ADDCF11FD43E4B6_TypeDefinitionIndex)->GetStaticField(0x29790);
	}
	static ::System::Collections::Generic::HashSet_1<::System::Type*>** StaticGet_MEMKOIEEHNN()
	{
		return (::System::Collections::Generic::HashSet_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4ADDCF11FD43E4B6_TypeDefinitionIndex)->GetStaticField(0x29798);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4ADDCF11FD43E4B6__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4ADDCF11FD43E4B6__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_0E62A1F7315AFBE8(::RPG::GameCore::TaskConfig* a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::TaskConfig*))((::PBYTE)hIl2Cpp + CLASS_1_4ADDCF11FD43E4B6_METHOD_1_0E62A1F7315AFBE8_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_FC218EB9B8045D08(::RPG::GameCore::TurnBasedModifierEvent a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::TurnBasedModifierEvent))((::PBYTE)hIl2Cpp + CLASS_1_4ADDCF11FD43E4B6_METHOD_1_FC218EB9B8045D08_OFFSET))(a1);
	}
};
