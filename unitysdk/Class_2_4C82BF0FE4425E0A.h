#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_AA642DEE53091501.h"

class Class_1_43BD383C98B4C0C5_207;
class Class_1_A92BC063ED2379EB;
class Class_1_FB3E7B71A45FEB7C;
class Class_2_B66C1067C0468FBB;
class Class_3_E6ABB31B8050F1C6;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_4C82BF0FE4425E0A_METHOD_2_4E22A18EF530BFA8_OFFSET UNITYSDK_OFFSET(0x1528AB50)
#define CLASS_2_4C82BF0FE4425E0A_METHOD_2_BA4CE27271C37FA3_OFFSET UNITYSDK_OFFSET(0x1528ABB0)
#define CLASS_2_4C82BF0FE4425E0A__CTOR_OFFSET UNITYSDK_OFFSET(0x1528B080)

inline static constexpr unsigned int Class_2_4C82BF0FE4425E0A_TypeDefinitionIndex = 77015;

class Class_2_4C82BF0FE4425E0A : public ::Class_1_AA642DEE53091501
{
public:
	::Class_1_FB3E7B71A45FEB7C* DBJJLAGHKFE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C82BF0FE4425E0A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4E22A18EF530BFA8(::Class_3_E6ABB31B8050F1C6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_E6ABB31B8050F1C6*))((::PBYTE)hIl2Cpp + CLASS_2_4C82BF0FE4425E0A_METHOD_2_4E22A18EF530BFA8_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_BA4CE27271C37FA3(::Class_1_A92BC063ED2379EB* a1, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3, ::Class_1_43BD383C98B4C0C5_207*& a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*, ::Class_1_43BD383C98B4C0C5_207*&))((::PBYTE)hIl2Cpp + CLASS_2_4C82BF0FE4425E0A_METHOD_2_BA4CE27271C37FA3_OFFSET))(this, a1, a2, a3, a4);
	}
};
