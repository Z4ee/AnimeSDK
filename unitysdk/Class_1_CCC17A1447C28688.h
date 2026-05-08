#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/GameplayEffectModifier.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_1_D366ED82D8A1F916;
class Class_3_247B97EFF95C09A1;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_CCC17A1447C28688_DISPOSE_OFFSET UNITYSDK_OFFSET(0x187CE6C0)
#define CLASS_1_CCC17A1447C28688_METHOD_1_143DFFC09F3128EE_OFFSET UNITYSDK_OFFSET(0x187CEFD0)
#define CLASS_1_CCC17A1447C28688_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0x187CF160)
#define CLASS_1_CCC17A1447C28688_METHOD_1_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x187CEF60)
#define CLASS_1_CCC17A1447C28688_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x187CE8F0)
#define CLASS_1_CCC17A1447C28688_METHOD_1_5E852A75624F0507_1_OFFSET UNITYSDK_OFFSET(0x187CEEF0)
#define CLASS_1_CCC17A1447C28688_METHOD_1_5E852A75624F0507_OFFSET UNITYSDK_OFFSET(0x187CEA30)
#define CLASS_1_CCC17A1447C28688_METHOD_1_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x187CEAA0)
#define CLASS_1_CCC17A1447C28688_METHOD_1_63468D32EF9DA323_OFFSET UNITYSDK_OFFSET(0x187CEF50)
#define CLASS_1_CCC17A1447C28688_METHOD_1_67013AED7A137AC2_OFFSET UNITYSDK_OFFSET(0x187CEF00)
#define CLASS_1_CCC17A1447C28688_METHOD_1_6D3A4546382BD733_1_OFFSET UNITYSDK_OFFSET(0x187CEFC0)
#define CLASS_1_CCC17A1447C28688_METHOD_1_6D3A4546382BD733_OFFSET UNITYSDK_OFFSET(0x187CEBF0)
#define CLASS_1_CCC17A1447C28688_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0x187CECE0)
#define CLASS_1_CCC17A1447C28688_METHOD_1_9ADFAA56C4A0B186_OFFSET UNITYSDK_OFFSET(0x187CEC10)
#define CLASS_1_CCC17A1447C28688_METHOD_1_B64C60973842FE45_OFFSET UNITYSDK_OFFSET(0x187CF170)
#define CLASS_1_CCC17A1447C28688_METHOD_1_B9D8FD15D18938A0_1_OFFSET UNITYSDK_OFFSET(0x187CEC00)
#define CLASS_1_CCC17A1447C28688_METHOD_1_B9D8FD15D18938A0_OFFSET UNITYSDK_OFFSET(0x187CEBE0)
#define CLASS_1_CCC17A1447C28688_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x187CEFB0)
#define CLASS_1_CCC17A1447C28688_METHOD_1_C8C3AFE9690BE60A_OFFSET UNITYSDK_OFFSET(0x187CEBD0)
#define CLASS_1_CCC17A1447C28688_METHOD_1_CA06088965E43409_OFFSET UNITYSDK_OFFSET(0x187CEA40)
#define CLASS_1_CCC17A1447C28688_METHOD_1_D464790C5D44CCA3_OFFSET UNITYSDK_OFFSET(0x187CED00)
#define CLASS_1_CCC17A1447C28688_METHOD_1_D49882D09C51557D_1_OFFSET UNITYSDK_OFFSET(0x187CEE00)
#define CLASS_1_CCC17A1447C28688_METHOD_1_D49882D09C51557D_OFFSET UNITYSDK_OFFSET(0x187CE940)
#define CLASS_1_CCC17A1447C28688_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x187CE8E0)
#define CLASS_1_CCC17A1447C28688_METHOD_1_FD24DDB099A88700_1_OFFSET UNITYSDK_OFFSET(0x187CECF0)
#define CLASS_1_CCC17A1447C28688_METHOD_1_FD24DDB099A88700_OFFSET UNITYSDK_OFFSET(0x187CEBC0)
#define CLASS_1_CCC17A1447C28688__CTOR_OFFSET UNITYSDK_OFFSET(0x187CE6B0)

inline static constexpr unsigned int Class_1_CCC17A1447C28688_TypeDefinitionIndex = 40985;

class Class_1_CCC17A1447C28688 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Battle::GameplayEffectModifier>* Field_1_4; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Field_1_5; // 0x18
	::MoleMole::Battle::Entity* Field_1_1; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Field_1_6; // 0x28
	::MoleMole::Battle::Entity* Field_1_2; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Field_1_0; // 0x38
	::Class_1_D366ED82D8A1F916* Field_1_3; // 0x40
	::System::Boolean Field_1_7; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCC17A1447C28688__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCC17A1447C28688_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCC17A1447C28688_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCC17A1447C28688_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::Class_3_247B97EFF95C09A1* Method_1_D49882D09C51557D()
	{
		return ((::Class_3_247B97EFF95C09A1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCC17A1447C28688_METHOD_1_D49882D09C51557D_OFFSET))(this);
	}

	::System::Void Method_1_5E852A75624F0507(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_CCC17A1447C28688_METHOD_1_5E852A75624F0507_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA06088965E43409(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_CCC17A1447C28688_METHOD_1_CA06088965E43409_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FD24DDB099A88700(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_CCC17A1447C28688_METHOD_1_FD24DDB099A88700_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::MoleMole::Battle::GameplayEffectModifier>* Method_1_C8C3AFE9690BE60A()
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Battle::GameplayEffectModifier>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCC17A1447C28688_METHOD_1_C8C3AFE9690BE60A_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* Method_1_B9D8FD15D18938A0()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCC17A1447C28688_METHOD_1_B9D8FD15D18938A0_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Method_1_6D3A4546382BD733()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCC17A1447C28688_METHOD_1_6D3A4546382BD733_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* Method_1_B9D8FD15D18938A0_1()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCC17A1447C28688_METHOD_1_B9D8FD15D18938A0_1_OFFSET))(this);
	}

	::System::Void Method_1_9ADFAA56C4A0B186(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_CCC17A1447C28688_METHOD_1_9ADFAA56C4A0B186_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_D366ED82D8A1F916* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D366ED82D8A1F916*))((::PBYTE)hIl2Cpp + CLASS_1_CCC17A1447C28688_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Void Method_1_FD24DDB099A88700_1(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_CCC17A1447C28688_METHOD_1_FD24DDB099A88700_1_OFFSET))(this, a1);
	}

	::System::Nullable_1<::System::Single> Method_1_D464790C5D44CCA3(::System::String* a1)
	{
		return ((::System::Nullable_1<::System::Single>(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CCC17A1447C28688_METHOD_1_D464790C5D44CCA3_OFFSET))(this, a1);
	}

	::Class_3_247B97EFF95C09A1* Method_1_D49882D09C51557D_1()
	{
		return ((::Class_3_247B97EFF95C09A1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCC17A1447C28688_METHOD_1_D49882D09C51557D_1_OFFSET))(this);
	}

	::System::Void Method_1_5E852A75624F0507_1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_CCC17A1447C28688_METHOD_1_5E852A75624F0507_1_OFFSET))(this, a1);
	}

	::Class_1_CCC17A1447C28688* Method_1_67013AED7A137AC2(::Class_1_D366ED82D8A1F916* a1)
	{
		return ((::Class_1_CCC17A1447C28688*(*)(::PVOID, ::Class_1_D366ED82D8A1F916*))((::PBYTE)hIl2Cpp + CLASS_1_CCC17A1447C28688_METHOD_1_67013AED7A137AC2_OFFSET))(this, a1);
	}

	::System::Void Method_1_63468D32EF9DA323(::System::Collections::Generic::List_1<::MoleMole::Battle::GameplayEffectModifier>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Battle::GameplayEffectModifier>*))((::PBYTE)hIl2Cpp + CLASS_1_CCC17A1447C28688_METHOD_1_63468D32EF9DA323_OFFSET))(this, a1);
	}

	::System::Void Method_1_4343F372F34C05BF_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCC17A1447C28688_METHOD_1_4343F372F34C05BF_1_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_CCC17A1447C28688_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* Method_1_6D3A4546382BD733_1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCC17A1447C28688_METHOD_1_6D3A4546382BD733_1_OFFSET))(this);
	}

	::System::Void Method_1_60E1F7F58CCF739F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCC17A1447C28688_METHOD_1_60E1F7F58CCF739F_OFFSET))(this);
	}

	::Class_1_CCC17A1447C28688* Method_1_143DFFC09F3128EE(::System::Collections::Generic::List_1<::MoleMole::Battle::GameplayEffectModifier>* a1)
	{
		return ((::Class_1_CCC17A1447C28688*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::Battle::GameplayEffectModifier>*))((::PBYTE)hIl2Cpp + CLASS_1_CCC17A1447C28688_METHOD_1_143DFFC09F3128EE_OFFSET))(this, a1);
	}

	::Class_1_D366ED82D8A1F916* Method_1_24748FC20F375725()
	{
		return ((::Class_1_D366ED82D8A1F916*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCC17A1447C28688_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	static ::Class_1_CCC17A1447C28688* Method_1_B64C60973842FE45()
	{
		return ((::Class_1_CCC17A1447C28688*(*)())((::PBYTE)hIl2Cpp + CLASS_1_CCC17A1447C28688_METHOD_1_B64C60973842FE45_OFFSET))();
	}
};
