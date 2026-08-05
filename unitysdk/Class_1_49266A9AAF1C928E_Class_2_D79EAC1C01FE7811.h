#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_49266A9AAF1C928E_Class_1_02F8008115ABA9CB.h"
#include "unitysdk/Class_1_49266A9AAF1C928E_Struct_2_52459899DB7358B9.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/EAvatarCameraShotType.h"

class Class_0_16E4307DCC419505_417;
namespace MoleMole { class LevelSectionGroupData; }
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_49266A9AAF1C928E_CLASS_2_D79EAC1C01FE7811_METHOD_2_2B66C008535F8B01_OFFSET UNITYSDK_OFFSET(0x1993C970)
#define CLASS_1_49266A9AAF1C928E_CLASS_2_D79EAC1C01FE7811_METHOD_2_998E122F46014853_OFFSET UNITYSDK_OFFSET(0x1993CE90)
#define CLASS_1_49266A9AAF1C928E_CLASS_2_D79EAC1C01FE7811__CTOR_OFFSET UNITYSDK_OFFSET(0x1993CE20)

inline static constexpr unsigned int Class_1_49266A9AAF1C928E_Class_2_D79EAC1C01FE7811_TypeDefinitionIndex = 78851;

class Class_1_49266A9AAF1C928E_Class_2_D79EAC1C01FE7811 : public ::Class_1_49266A9AAF1C928E_Class_1_02F8008115ABA9CB
{
public:
	::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType Field_2_0; // 0x78

	::System::Void _ctor(::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType a1, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* a2, ::Class_1_49266A9AAF1C928E_Struct_2_52459899DB7358B9 a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Boolean a6, ::MoleMole::LevelSectionGroupData* a7, ::Class_0_16E4307DCC419505_417* a8)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*, ::Class_1_49266A9AAF1C928E_Struct_2_52459899DB7358B9, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::MoleMole::LevelSectionGroupData*, ::Class_0_16E4307DCC419505_417*))((::PBYTE)hIl2Cpp + CLASS_1_49266A9AAF1C928E_CLASS_2_D79EAC1C01FE7811__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Void Method_2_2B66C008535F8B01()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49266A9AAF1C928E_CLASS_2_D79EAC1C01FE7811_METHOD_2_2B66C008535F8B01_OFFSET))(this);
	}

	::System::Void Method_2_998E122F46014853()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49266A9AAF1C928E_CLASS_2_D79EAC1C01FE7811_METHOD_2_998E122F46014853_OFFSET))(this);
	}
};
