#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_75E63034C2ED40FA.h"

class Class_1_4BA3656021000ED5;
class Class_1_A92BC063ED2379EB;
class Class_1_FB3E7B71A45FEB7C;
class Class_2_B66C1067C0468FBB;
class Class_3_E6ABB31B8050F1C6;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_CEE0D55282FAE7DA_METHOD_3_4E22A18EF530BFA8_OFFSET UNITYSDK_OFFSET(0xC108D20)
#define CLASS_3_CEE0D55282FAE7DA_METHOD_3_75FD638E8D17DCA6_OFFSET UNITYSDK_OFFSET(0xC108D90)
#define CLASS_3_CEE0D55282FAE7DA_METHOD_3_9276CA9E1909CA0C_OFFSET UNITYSDK_OFFSET(0xC109080)
#define CLASS_3_CEE0D55282FAE7DA__CTOR_OFFSET UNITYSDK_OFFSET(0xC109520)

inline static constexpr unsigned int Class_3_CEE0D55282FAE7DA_TypeDefinitionIndex = 76984;

class Class_3_CEE0D55282FAE7DA : public ::Class_2_75E63034C2ED40FA
{
public:
	::Class_1_FB3E7B71A45FEB7C* HBIFBEDEAIA; // 0x10
	::Class_1_4BA3656021000ED5* CEFLLELKFOP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CEE0D55282FAE7DA__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_4E22A18EF530BFA8(::Class_3_E6ABB31B8050F1C6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_E6ABB31B8050F1C6*))((::PBYTE)hIl2Cpp + CLASS_3_CEE0D55282FAE7DA_METHOD_3_4E22A18EF530BFA8_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_75FD638E8D17DCA6(::Class_1_A92BC063ED2379EB* a1, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_CEE0D55282FAE7DA_METHOD_3_75FD638E8D17DCA6_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_9276CA9E1909CA0C(::Class_1_A92BC063ED2379EB* a1, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_CEE0D55282FAE7DA_METHOD_3_9276CA9E1909CA0C_OFFSET))(this, a1, a2, a3);
	}
};
