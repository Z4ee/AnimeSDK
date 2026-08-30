#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AddMenuItem; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B6B9A3B6860BC0CA_METHOD_1_301D07C4CEBB0226_OFFSET UNITYSDK_OFFSET(0xB8659B0)
#define CLASS_1_B6B9A3B6860BC0CA_METHOD_1_3B1474793D7293B3_OFFSET UNITYSDK_OFFSET(0xB8656E0)
#define CLASS_1_B6B9A3B6860BC0CA_METHOD_1_92F352043AA6CC5A_OFFSET UNITYSDK_OFFSET(0xB8653C0)
#define CLASS_1_B6B9A3B6860BC0CA_METHOD_1_A316021A388DD2DA_OFFSET UNITYSDK_OFFSET(0xB865430)
#define CLASS_1_B6B9A3B6860BC0CA_METHOD_1_DA294BFA59CE7A56_OFFSET UNITYSDK_OFFSET(0xB865750)

inline static constexpr unsigned int Class_1_B6B9A3B6860BC0CA_TypeDefinitionIndex = 59189;

class Class_1_B6B9A3B6860BC0CA : public ::System::Object
{
public:
	static ::System::Boolean Method_1_92F352043AA6CC5A(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B6B9A3B6860BC0CA_METHOD_1_92F352043AA6CC5A_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_3B1474793D7293B3(::RPG::GameCore::PropComponent* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::PropComponent*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B6B9A3B6860BC0CA_METHOD_1_3B1474793D7293B3_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_A316021A388DD2DA(::System::UInt32 a1, ::System::Boolean a2, ::System::String* a3)
	{
		return ((::System::Boolean(*)(::System::UInt32, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B6B9A3B6860BC0CA_METHOD_1_A316021A388DD2DA_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_DA294BFA59CE7A56(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::GameCore::RuntimeGroupInfo* a4, ::RPG::GameCore::HoyoTagContainer* a5, ::System::String* a6)
	{
		return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::RuntimeGroupInfo*, ::RPG::GameCore::HoyoTagContainer*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B6B9A3B6860BC0CA_METHOD_1_DA294BFA59CE7A56_OFFSET))(a1, a2, a3, a4, a5, a6);
	}

	static ::System::Void Method_1_301D07C4CEBB0226(::System::UInt32 a1, ::System::Collections::Generic::List_1<::RPG::GameCore::AddMenuItem*>* a2)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::AddMenuItem*>*))((::PBYTE)hIl2Cpp + CLASS_1_B6B9A3B6860BC0CA_METHOD_1_301D07C4CEBB0226_OFFSET))(a1, a2);
	}
};
