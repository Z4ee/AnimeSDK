#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ScenePeformAnimatorParam; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_EF32BCC5C168925E_METHOD_1_12A14BF49AB4A871_OFFSET UNITYSDK_OFFSET(0xD0D0B20)
#define CLASS_1_EF32BCC5C168925E_METHOD_1_3BCF0226A6CDC13B_OFFSET UNITYSDK_OFFSET(0xD0D0FD0)
#define CLASS_1_EF32BCC5C168925E_METHOD_1_457D942101EAAD26_OFFSET UNITYSDK_OFFSET(0xD0D0760)
#define CLASS_1_EF32BCC5C168925E_METHOD_1_5F938AAF43EA0D4B_OFFSET UNITYSDK_OFFSET(0xD0D09A0)
#define CLASS_1_EF32BCC5C168925E_METHOD_1_8F059A365E90744C_OFFSET UNITYSDK_OFFSET(0xD0D0E00)
#define CLASS_1_EF32BCC5C168925E_METHOD_1_DFF98536D8B4074F_OFFSET UNITYSDK_OFFSET(0xD0D1320)

inline static constexpr unsigned int Class_1_EF32BCC5C168925E_TypeDefinitionIndex = 42093;

class Class_1_EF32BCC5C168925E : public ::System::Object
{
public:
	static ::System::Void Method_1_457D942101EAAD26(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_EF32BCC5C168925E_METHOD_1_457D942101EAAD26_OFFSET))(a1);
	}

	static ::System::Void Method_1_5F938AAF43EA0D4B(::System::Collections::Generic::List_1<::Il2CppArray<::MoleMole::Config::ScenePeformAnimatorParam*>*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Il2CppArray<::MoleMole::Config::ScenePeformAnimatorParam*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_EF32BCC5C168925E_METHOD_1_5F938AAF43EA0D4B_OFFSET))(a1);
	}

	static ::System::Void Method_1_12A14BF49AB4A871(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::ScenePeformAnimatorParam* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::ScenePeformAnimatorParam*))((::PBYTE)hIl2Cpp + CLASS_1_EF32BCC5C168925E_METHOD_1_12A14BF49AB4A871_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_8F059A365E90744C()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_EF32BCC5C168925E_METHOD_1_8F059A365E90744C_OFFSET))();
	}

	static ::System::Void Method_1_3BCF0226A6CDC13B()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EF32BCC5C168925E_METHOD_1_3BCF0226A6CDC13B_OFFSET))();
	}

	static ::System::Boolean Method_1_DFF98536D8B4074F()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_EF32BCC5C168925E_METHOD_1_DFF98536D8B4074F_OFFSET))();
	}
};
