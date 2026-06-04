#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9DFEED9E47A49175.h"
#include "unitysdk/Struct_2_7CAA93E3FEB7B3D6.h"

class Class_2_24193089A4D2255F;
class Class_3_0F021ECA96048DC9;
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_82A981B40431CD9C_METHOD_2_2C1C2A8E63DB0F10_OFFSET UNITYSDK_OFFSET(0x145C2B20)
#define CLASS_2_82A981B40431CD9C_METHOD_2_2EB7FB0B72460CED_OFFSET UNITYSDK_OFFSET(0x145C2680)
#define CLASS_2_82A981B40431CD9C_METHOD_2_3E522F4B992303E1_OFFSET UNITYSDK_OFFSET(0x145C25A0)
#define CLASS_2_82A981B40431CD9C_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x145C3080)
#define CLASS_2_82A981B40431CD9C_METHOD_2_739204D5D9016860_OFFSET UNITYSDK_OFFSET(0x145C2E80)
#define CLASS_2_82A981B40431CD9C__CTOR_OFFSET UNITYSDK_OFFSET(0x145C2F60)

inline static constexpr unsigned int Class_2_82A981B40431CD9C_TypeDefinitionIndex = 50175;

class Class_2_82A981B40431CD9C : public ::Class_1_9DFEED9E47A49175
{
public:
	::System::Collections::Generic::List_1<::Struct_2_7CAA93E3FEB7B3D6>* Field_2_0; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::Struct_2_7CAA93E3FEB7B3D6>*>* Field_2_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82A981B40431CD9C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_3E522F4B992303E1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82A981B40431CD9C_METHOD_2_3E522F4B992303E1_OFFSET))(this);
	}

	::System::Void Method_2_2EB7FB0B72460CED(::Class_3_0F021ECA96048DC9* a1, ::RPG::GameCore::TaskContext* a2, ::Class_2_24193089A4D2255F* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_0F021ECA96048DC9*, ::RPG::GameCore::TaskContext*, ::Class_2_24193089A4D2255F*))((::PBYTE)hIl2Cpp + CLASS_2_82A981B40431CD9C_METHOD_2_2EB7FB0B72460CED_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_2C1C2A8E63DB0F10(::Class_2_24193089A4D2255F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_24193089A4D2255F*))((::PBYTE)hIl2Cpp + CLASS_2_82A981B40431CD9C_METHOD_2_2C1C2A8E63DB0F10_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Struct_2_7CAA93E3FEB7B3D6>* Method_2_739204D5D9016860(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_7CAA93E3FEB7B3D6>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_82A981B40431CD9C_METHOD_2_739204D5D9016860_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_82A981B40431CD9C_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
