#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_A2EB7BCE6758C89E.h"
#include "unitysdk/Struct_2_DF90B2BD73749811_1.h"
#include "unitysdk/System/Object.h"

class Class_1_5F51D4049EA87B7B;
class Class_2_24193089A4D2255F;
class Class_2_7AA0468CE6C1F3D7;
namespace RPG::GameCore { class RtModifierConfig; }
namespace RPG::GameCore { class RtSubModifierData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3B428BD704EBE2ED_CLEAR_OFFSET UNITYSDK_OFFSET(0x97BA9B0)
#define CLASS_1_3B428BD704EBE2ED_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x97BBAB0)
#define CLASS_1_3B428BD704EBE2ED_METHOD_1_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x97BB710)
#define CLASS_1_3B428BD704EBE2ED_METHOD_1_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x97BB790)
#define CLASS_1_3B428BD704EBE2ED_METHOD_1_72E394A14E3B998C_OFFSET UNITYSDK_OFFSET(0x97BB870)
#define CLASS_1_3B428BD704EBE2ED_METHOD_1_86DA694028D06103_OFFSET UNITYSDK_OFFSET(0x97BA9F0)
#define CLASS_1_3B428BD704EBE2ED_METHOD_1_8DC652D916C182B2_OFFSET UNITYSDK_OFFSET(0x97BAE70)
#define CLASS_1_3B428BD704EBE2ED_METHOD_1_F787FEE41CB137C4_OFFSET UNITYSDK_OFFSET(0x97BB8C0)
#define CLASS_1_3B428BD704EBE2ED__CTOR_OFFSET UNITYSDK_OFFSET(0x97BBAD0)

inline static constexpr unsigned int Class_1_3B428BD704EBE2ED_TypeDefinitionIndex = 49551;

class Class_1_3B428BD704EBE2ED : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Struct_2_A2EB7BCE6758C89E>* Field_1_5; // 0x10
	::RPG::GameCore::RtSubModifierData* Field_1_1; // 0x18
	::RPG::GameCore::RtModifierConfig* Field_1_3; // 0x20
	::System::Collections::Generic::List_1<::Struct_2_DF90B2BD73749811_1>* Field_1_4; // 0x28
	::Class_1_5F51D4049EA87B7B* Field_1_2; // 0x30
	::Class_2_24193089A4D2255F* Field_1_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B428BD704EBE2ED__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B428BD704EBE2ED_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_86DA694028D06103(::Class_2_24193089A4D2255F* a1, ::RPG::GameCore::RtSubModifierData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_24193089A4D2255F*, ::RPG::GameCore::RtSubModifierData*))((::PBYTE)hIl2Cpp + CLASS_1_3B428BD704EBE2ED_METHOD_1_86DA694028D06103_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B428BD704EBE2ED_METHOD_1_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Void Method_1_72E394A14E3B998C(::RPG::GameCore::RtSubModifierData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtSubModifierData*))((::PBYTE)hIl2Cpp + CLASS_1_3B428BD704EBE2ED_METHOD_1_72E394A14E3B998C_OFFSET))(this, a1);
	}

	::System::Void Method_1_8DC652D916C182B2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B428BD704EBE2ED_METHOD_1_8DC652D916C182B2_OFFSET))(this);
	}

	::System::Void Method_1_508D4DD02D3DB74E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B428BD704EBE2ED_METHOD_1_508D4DD02D3DB74E_OFFSET))(this);
	}

	::Class_2_7AA0468CE6C1F3D7* Method_1_F787FEE41CB137C4()
	{
		return ((::Class_2_7AA0468CE6C1F3D7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B428BD704EBE2ED_METHOD_1_F787FEE41CB137C4_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B428BD704EBE2ED_METHOD_1_128774387667156B_OFFSET))(this);
	}
};
