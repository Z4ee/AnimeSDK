#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_739F79CAD2286302_1.h"

class Class_1_A335CFE48265E251;
namespace RPG::GameCore { class StageVolumeComponentData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_057AAD9525834A7C_METHOD_3_1BCBB6277D856C27_OFFSET UNITYSDK_OFFSET(0xBBCE500)
#define CLASS_3_057AAD9525834A7C_METHOD_3_9A2CD25D6BE7D8BD_OFFSET UNITYSDK_OFFSET(0xBBCD5F0)
#define CLASS_3_057AAD9525834A7C_METHOD_3_A2E43E5B4CE6E348_OFFSET UNITYSDK_OFFSET(0xBBCE630)
#define CLASS_3_057AAD9525834A7C_METHOD_3_B20A72151139C4FB_OFFSET UNITYSDK_OFFSET(0xBBCD930)
#define CLASS_3_057AAD9525834A7C_METHOD_3_BAE66D5654320160_OFFSET UNITYSDK_OFFSET(0xBBCDCA0)
#define CLASS_3_057AAD9525834A7C_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBBCD8F0)
#define CLASS_3_057AAD9525834A7C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBBCE770)
#define CLASS_3_057AAD9525834A7C__CTOR_OFFSET UNITYSDK_OFFSET(0xBBCD490)

inline static constexpr unsigned int Class_3_057AAD9525834A7C_TypeDefinitionIndex = 73889;

class Class_3_057AAD9525834A7C : public ::Class_2_739F79CAD2286302_1
{
public:
	static ::System::Collections::Generic::List_1<::System::UInt16>** StaticGet_EONODDHDKGG()
	{
		return (::System::Collections::Generic::List_1<::System::UInt16>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_057AAD9525834A7C_TypeDefinitionIndex)->GetStaticField(0x64470);
	}
	static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_PCDBJHPOANE()
	{
		return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_057AAD9525834A7C_TypeDefinitionIndex)->GetStaticField(0x64478);
	}
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* JEMKJCPLAFN; // 0x28
	::System::String* LJJECANBODH; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Single>* PDOCODHPJBF; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_057AAD9525834A7C__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_057AAD9525834A7C__CCTOR_OFFSET))();
	}

	::System::Void Method_3_9A2CD25D6BE7D8BD(::RPG::GameCore::StageVolumeComponentData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageVolumeComponentData*))((::PBYTE)hIl2Cpp + CLASS_3_057AAD9525834A7C_METHOD_3_9A2CD25D6BE7D8BD_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_057AAD9525834A7C_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_B20A72151139C4FB(::Class_1_A335CFE48265E251* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A335CFE48265E251*))((::PBYTE)hIl2Cpp + CLASS_3_057AAD9525834A7C_METHOD_3_B20A72151139C4FB_OFFSET))(this, a1);
	}

	::System::Void Method_3_BAE66D5654320160(::Class_1_A335CFE48265E251* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A335CFE48265E251*))((::PBYTE)hIl2Cpp + CLASS_3_057AAD9525834A7C_METHOD_3_BAE66D5654320160_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_1BCBB6277D856C27(::Class_1_A335CFE48265E251* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A335CFE48265E251*))((::PBYTE)hIl2Cpp + CLASS_3_057AAD9525834A7C_METHOD_3_1BCBB6277D856C27_OFFSET))(this, a1);
	}

	::System::Void Method_3_A2E43E5B4CE6E348(::Class_1_A335CFE48265E251* a1, ::Class_1_A335CFE48265E251* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A335CFE48265E251*, ::Class_1_A335CFE48265E251*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_057AAD9525834A7C_METHOD_3_A2E43E5B4CE6E348_OFFSET))(this, a1, a2, a3);
	}
};
