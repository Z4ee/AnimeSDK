#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ScenePeformAnimatorParam; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_49266A9AAF1C928E_METHOD_1_025C10A50003DFAB_OFFSET UNITYSDK_OFFSET(0x1097FFE0)
#define CLASS_1_49266A9AAF1C928E_METHOD_1_38BF5646B800498A_OFFSET UNITYSDK_OFFSET(0x1097FB90)
#define CLASS_1_49266A9AAF1C928E_METHOD_1_3BCF0226A6CDC13B_OFFSET UNITYSDK_OFFSET(0x109805B0)
#define CLASS_1_49266A9AAF1C928E_METHOD_1_5734C5E675356D53_OFFSET UNITYSDK_OFFSET(0x1097FE60)
#define CLASS_1_49266A9AAF1C928E_METHOD_1_8F059A365E90744C_OFFSET UNITYSDK_OFFSET(0x109803E0)
#define CLASS_1_49266A9AAF1C928E_METHOD_1_DFF98536D8B4074F_OFFSET UNITYSDK_OFFSET(0x10980220)

inline static constexpr unsigned int Class_1_49266A9AAF1C928E_TypeDefinitionIndex = 78842;

class Class_1_49266A9AAF1C928E : public ::System::Object
{
public:
	static ::System::Void Method_1_38BF5646B800498A(::MoleMole::Battle::Entity* a1, ::MoleMole::Config::ScenePeformAnimatorParam* a2)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::ScenePeformAnimatorParam*))((::PBYTE)hIl2Cpp + CLASS_1_49266A9AAF1C928E_METHOD_1_38BF5646B800498A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_5734C5E675356D53(::System::Collections::Generic::List_1<::Il2CppArray<::MoleMole::Config::ScenePeformAnimatorParam*>*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Il2CppArray<::MoleMole::Config::ScenePeformAnimatorParam*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_49266A9AAF1C928E_METHOD_1_5734C5E675356D53_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_DFF98536D8B4074F()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_49266A9AAF1C928E_METHOD_1_DFF98536D8B4074F_OFFSET))();
	}

	static ::System::Boolean Method_1_8F059A365E90744C()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_49266A9AAF1C928E_METHOD_1_8F059A365E90744C_OFFSET))();
	}

	static ::System::Void Method_1_025C10A50003DFAB(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_49266A9AAF1C928E_METHOD_1_025C10A50003DFAB_OFFSET))(a1);
	}

	static ::System::Void Method_1_3BCF0226A6CDC13B()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_49266A9AAF1C928E_METHOD_1_3BCF0226A6CDC13B_OFFSET))();
	}
};
