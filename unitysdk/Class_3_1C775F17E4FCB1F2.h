#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_75E63034C2ED40FA.h"

class Class_1_A92BC063ED2379EB;
class Class_2_B66C1067C0468FBB;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_1C775F17E4FCB1F2_METHOD_3_DE59A60487C8038A_1_OFFSET UNITYSDK_OFFSET(0x15F0ABE0)
#define CLASS_3_1C775F17E4FCB1F2_METHOD_3_DE59A60487C8038A_OFFSET UNITYSDK_OFFSET(0x15F0A990)
#define CLASS_3_1C775F17E4FCB1F2__CTOR_OFFSET UNITYSDK_OFFSET(0x15F0AE30)

inline static constexpr unsigned int Class_3_1C775F17E4FCB1F2_TypeDefinitionIndex = 73512;

class Class_3_1C775F17E4FCB1F2 : public ::Class_2_75E63034C2ED40FA
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_1C775F17E4FCB1F2__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_3_DE59A60487C8038A(::Class_1_A92BC063ED2379EB* a1, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_1C775F17E4FCB1F2_METHOD_3_DE59A60487C8038A_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_3_DE59A60487C8038A_1(::Class_1_A92BC063ED2379EB* a1, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A92BC063ED2379EB*, ::System::Collections::Generic::List_1<::Class_2_B66C1067C0468FBB*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_3_1C775F17E4FCB1F2_METHOD_3_DE59A60487C8038A_1_OFFSET))(this, a1, a2, a3);
	}
};
