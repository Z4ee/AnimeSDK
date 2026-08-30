#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_75E63034C2ED40FA.h"

class Class_1_A7993FD8B166AE9B;
class Class_1_A92BC063ED2379EB;
class Class_2_B66C1067C0468FBB;
class Class_3_E6ABB31B8050F1C6;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_9A53B66BBB6BB31C_METHOD_3_4E22A18EF530BFA8_OFFSET UNITYSDK_OFFSET(0xB5F3510)
#define CLASS_3_9A53B66BBB6BB31C_METHOD_3_F15C2A86E41B06D4_OFFSET UNITYSDK_OFFSET(0xB5F3570)
#define CLASS_3_9A53B66BBB6BB31C_METHOD_3_FD2AC483192E81E2_OFFSET UNITYSDK_OFFSET(0xB5F3920)
#define CLASS_3_9A53B66BBB6BB31C__CTOR_OFFSET UNITYSDK_OFFSET(0xB5F39C0)

inline static constexpr unsigned int Class_3_9A53B66BBB6BB31C_TypeDefinitionIndex = 77010;

class Class_3_9A53B66BBB6BB31C : public ::Class_2_75E63034C2ED40FA
{
public:
	::Class_1_A7993FD8B166AE9B* LGEFCADNPMN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_9A53B66BBB6BB31C__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_4E22A18EF530BFA8(::Class_3_E6ABB31B8050F1C6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_E6ABB31B8050F1C6*))((::PBYTE)hIl2Cpp + CLASS_3_9A53B66BBB6BB31C_METHOD_3_4E22A18EF530BFA8_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_F15C2A86E41B06D4(::Class_1_A92BC063ED2379EB* a1, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_9A53B66BBB6BB31C_METHOD_3_F15C2A86E41B06D4_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_FD2AC483192E81E2(::Class_1_A92BC063ED2379EB* a1, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_9A53B66BBB6BB31C_METHOD_3_FD2AC483192E81E2_OFFSET))(this, a1, a2, a3);
	}
};
