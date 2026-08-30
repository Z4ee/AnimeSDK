#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3207B23A0433048D.h"
#include "unitysdk/Struct_2_7CAA93E3FEB7B3D6.h"

class Class_2_291F7DA21A504FC4;
class Class_3_0F021ECA96048DC9;
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_82A981B40431CD9C_METHOD_2_2C1C2A8E63DB0F10_OFFSET UNITYSDK_OFFSET(0x16451570)
#define CLASS_2_82A981B40431CD9C_METHOD_2_2EB7FB0B72460CED_OFFSET UNITYSDK_OFFSET(0x164510C0)
#define CLASS_2_82A981B40431CD9C_METHOD_2_3E522F4B992303E1_OFFSET UNITYSDK_OFFSET(0x16450FE0)
#define CLASS_2_82A981B40431CD9C_METHOD_2_739204D5D9016860_OFFSET UNITYSDK_OFFSET(0x164518D0)
#define CLASS_2_82A981B40431CD9C__CTOR_OFFSET UNITYSDK_OFFSET(0x164519B0)

inline static constexpr unsigned int Class_2_82A981B40431CD9C_TypeDefinitionIndex = 53941;

class Class_2_82A981B40431CD9C : public ::Class_1_3207B23A0433048D
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::Struct_2_7CAA93E3FEB7B3D6>*>* KKGOHAFJPJI; // 0x20
	::System::Collections::Generic::List_1<::Struct_2_7CAA93E3FEB7B3D6>* HNAJLHOLGEK; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82A981B40431CD9C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_3E522F4B992303E1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82A981B40431CD9C_METHOD_2_3E522F4B992303E1_OFFSET))(this);
	}

	::System::Void Method_2_2EB7FB0B72460CED(::Class_3_0F021ECA96048DC9* a1, ::RPG::GameCore::TaskContext* a2, ::Class_2_291F7DA21A504FC4* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_0F021ECA96048DC9*, ::RPG::GameCore::TaskContext*, ::Class_2_291F7DA21A504FC4*))((::PBYTE)hIl2Cpp + CLASS_2_82A981B40431CD9C_METHOD_2_2EB7FB0B72460CED_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_2C1C2A8E63DB0F10(::Class_2_291F7DA21A504FC4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_291F7DA21A504FC4*))((::PBYTE)hIl2Cpp + CLASS_2_82A981B40431CD9C_METHOD_2_2C1C2A8E63DB0F10_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Struct_2_7CAA93E3FEB7B3D6>* Method_2_739204D5D9016860(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_7CAA93E3FEB7B3D6>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_82A981B40431CD9C_METHOD_2_739204D5D9016860_OFFSET))(this, a1);
	}
};
