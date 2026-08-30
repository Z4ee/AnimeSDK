#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseTypeKind.h"
#include "unitysdk/RPG/GameCore/AvatarBaseTypeMask.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7D30ED5FDFCD62D4_METHOD_1_0B9D4213A537E6DD_OFFSET UNITYSDK_OFFSET(0x18D1CF00)
#define CLASS_1_7D30ED5FDFCD62D4_METHOD_1_479202325C20375A_OFFSET UNITYSDK_OFFSET(0x18D1C960)
#define CLASS_1_7D30ED5FDFCD62D4_METHOD_1_89E374FDB216A4AF_OFFSET UNITYSDK_OFFSET(0x18D1CEB0)
#define CLASS_1_7D30ED5FDFCD62D4_METHOD_1_8CB0C5E3A46AB52E_OFFSET UNITYSDK_OFFSET(0x18D1CE60)
#define CLASS_1_7D30ED5FDFCD62D4_METHOD_1_B33FD7B60DF9CD38_OFFSET UNITYSDK_OFFSET(0x18D1C750)
#define CLASS_1_7D30ED5FDFCD62D4_METHOD_1_C398A014A5A70BE1_OFFSET UNITYSDK_OFFSET(0x18D19420)
#define CLASS_1_7D30ED5FDFCD62D4_METHOD_1_EEF6ABCE8E789D51_OFFSET UNITYSDK_OFFSET(0x18D1C6F0)

inline static constexpr unsigned int Class_1_7D30ED5FDFCD62D4_TypeDefinitionIndex = 59181;

class Class_1_7D30ED5FDFCD62D4 : public ::System::Object
{
public:
	static ::System::Int32 Method_1_EEF6ABCE8E789D51(::RPG::GameCore::AvatarBaseTypeMask a1)
	{
		return ((::System::Int32(*)(::RPG::GameCore::AvatarBaseTypeMask))((::PBYTE)hIl2Cpp + CLASS_1_7D30ED5FDFCD62D4_METHOD_1_EEF6ABCE8E789D51_OFFSET))(a1);
	}

	static ::RPG::GameCore::AvatarBaseTypeMask Method_1_C398A014A5A70BE1(::Il2CppArray<::RPG::GameCore::AvatarBaseType>* a1)
	{
		return ((::RPG::GameCore::AvatarBaseTypeMask(*)(::Il2CppArray<::RPG::GameCore::AvatarBaseType>*))((::PBYTE)hIl2Cpp + CLASS_1_7D30ED5FDFCD62D4_METHOD_1_C398A014A5A70BE1_OFFSET))(a1);
	}

	static ::RPG::GameCore::AvatarBaseType Method_1_B33FD7B60DF9CD38(::RPG::GameCore::AvatarBaseTypeMask a1)
	{
		return ((::RPG::GameCore::AvatarBaseType(*)(::RPG::GameCore::AvatarBaseTypeMask))((::PBYTE)hIl2Cpp + CLASS_1_7D30ED5FDFCD62D4_METHOD_1_B33FD7B60DF9CD38_OFFSET))(a1);
	}

	static ::System::Void Method_1_479202325C20375A(::RPG::GameCore::AvatarBaseTypeMask a1, ::System::Collections::Generic::List_1<::RPG::GameCore::AvatarBaseType>* a2)
	{
		return ((::System::Void(*)(::RPG::GameCore::AvatarBaseTypeMask, ::System::Collections::Generic::List_1<::RPG::GameCore::AvatarBaseType>*))((::PBYTE)hIl2Cpp + CLASS_1_7D30ED5FDFCD62D4_METHOD_1_479202325C20375A_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_8CB0C5E3A46AB52E(::RPG::GameCore::AvatarBaseTypeMask a1, ::RPG::GameCore::AvatarBaseType a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::AvatarBaseTypeMask, ::RPG::GameCore::AvatarBaseType))((::PBYTE)hIl2Cpp + CLASS_1_7D30ED5FDFCD62D4_METHOD_1_8CB0C5E3A46AB52E_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_89E374FDB216A4AF(::RPG::GameCore::AvatarBaseTypeMask a1, ::RPG::GameCore::AvatarBaseTypeMask a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::AvatarBaseTypeMask, ::RPG::GameCore::AvatarBaseTypeMask))((::PBYTE)hIl2Cpp + CLASS_1_7D30ED5FDFCD62D4_METHOD_1_89E374FDB216A4AF_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_0B9D4213A537E6DD(::RPG::GameCore::AvatarBaseTypeKind a1, ::RPG::GameCore::AvatarBaseTypeKind a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::AvatarBaseTypeKind, ::RPG::GameCore::AvatarBaseTypeKind))((::PBYTE)hIl2Cpp + CLASS_1_7D30ED5FDFCD62D4_METHOD_1_0B9D4213A537E6DD_OFFSET))(a1, a2);
	}
};
