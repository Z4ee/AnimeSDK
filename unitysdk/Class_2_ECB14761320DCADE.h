#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_52DCEE691286F89A;
class Class_1_EA5A5E4D07C4CF2B_1;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterInputData; }
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_ECB14761320DCADE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16ADC280)
#define CLASS_2_ECB14761320DCADE_METHOD_2_0DF553516A8CB8A1_OFFSET UNITYSDK_OFFSET(0x16ADC180)
#define CLASS_2_ECB14761320DCADE_METHOD_2_57B4BB10B5AF51CF_OFFSET UNITYSDK_OFFSET(0x16ADE580)
#define CLASS_2_ECB14761320DCADE_METHOD_2_57DCB1CE056E3F2A_OFFSET UNITYSDK_OFFSET(0x16ADDEE0)
#define CLASS_2_ECB14761320DCADE_METHOD_2_7F27656D60ED25B4_OFFSET UNITYSDK_OFFSET(0x16ADC360)
#define CLASS_2_ECB14761320DCADE_METHOD_2_94FEADEC518F57E3_OFFSET UNITYSDK_OFFSET(0x16ADDBF0)
#define CLASS_2_ECB14761320DCADE_METHOD_2_9D15F3CC656181B8_OFFSET UNITYSDK_OFFSET(0x16ADDE20)
#define CLASS_2_ECB14761320DCADE_METHOD_2_AF14BA3464547DD1_OFFSET UNITYSDK_OFFSET(0x16ADCCF0)
#define CLASS_2_ECB14761320DCADE_METHOD_2_B1C7F8106B274B7A_OFFSET UNITYSDK_OFFSET(0x16ADE240)
#define CLASS_2_ECB14761320DCADE_METHOD_2_BE1D74FB34792AB9_OFFSET UNITYSDK_OFFSET(0x16ADEA20)
#define CLASS_2_ECB14761320DCADE_METHOD_2_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0x16ADCC50)
#define CLASS_2_ECB14761320DCADE_METHOD_2_F21573B680787589_OFFSET UNITYSDK_OFFSET(0x16ADE030)
#define CLASS_2_ECB14761320DCADE_METHOD_2_FEDE09C198114DBE_OFFSET UNITYSDK_OFFSET(0x16ADDFE0)
#define CLASS_2_ECB14761320DCADE__CCTOR_OFFSET UNITYSDK_OFFSET(0x16ADEAC0)
#define CLASS_2_ECB14761320DCADE__CTOR_OFFSET UNITYSDK_OFFSET(0x16ADC130)

inline static constexpr unsigned int Class_2_ECB14761320DCADE_TypeDefinitionIndex = 63442;

class Class_2_ECB14761320DCADE : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::System::UInt32* StaticGet_Field_2_0()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_ECB14761320DCADE_TypeDefinitionIndex)->GetStaticField(0x134C0);
	}
	::System::Collections::Generic::List_1<::Class_1_52DCEE691286F89A*>* Field_2_1; // 0x18
	::RPG::GameCore::AdventureCharacterController* Field_2_2; // 0x20
	::System::UInt32 Field_2_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECB14761320DCADE__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_ECB14761320DCADE__CCTOR_OFFSET))();
	}

	::System::Void Method_2_0DF553516A8CB8A1(::RPG::GameCore::AdventureCharacterController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + CLASS_2_ECB14761320DCADE_METHOD_2_0DF553516A8CB8A1_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECB14761320DCADE_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_7F27656D60ED25B4(::System::Collections::Generic::IEnumerable_1<::Class_1_52DCEE691286F89A*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_52DCEE691286F89A*>*))((::PBYTE)hIl2Cpp + CLASS_2_ECB14761320DCADE_METHOD_2_7F27656D60ED25B4_OFFSET))(this, a1);
	}

	::System::Void Method_2_EBEE0D0A222A8264()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECB14761320DCADE_METHOD_2_EBEE0D0A222A8264_OFFSET))(this);
	}

	::System::Boolean Method_2_AF14BA3464547DD1(::RPG::GameCore::AdventureCharacterController* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + CLASS_2_ECB14761320DCADE_METHOD_2_AF14BA3464547DD1_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_57DCB1CE056E3F2A()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECB14761320DCADE_METHOD_2_57DCB1CE056E3F2A_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_2_FEDE09C198114DBE()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECB14761320DCADE_METHOD_2_FEDE09C198114DBE_OFFSET))(this);
	}

	::System::Void Method_2_F21573B680787589(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_ECB14761320DCADE_METHOD_2_F21573B680787589_OFFSET))(this, a1, a2);
	}

	::Class_1_52DCEE691286F89A* Method_2_94FEADEC518F57E3()
	{
		return ((::Class_1_52DCEE691286F89A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ECB14761320DCADE_METHOD_2_94FEADEC518F57E3_OFFSET))(this);
	}

	::Class_1_52DCEE691286F89A* Method_2_B1C7F8106B274B7A(::Class_1_52DCEE691286F89A* a1, ::Class_1_52DCEE691286F89A* a2, ::System::Single a3)
	{
		return ((::Class_1_52DCEE691286F89A*(*)(::PVOID, ::Class_1_52DCEE691286F89A*, ::Class_1_52DCEE691286F89A*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_ECB14761320DCADE_METHOD_2_B1C7F8106B274B7A_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_52DCEE691286F89A* Method_2_57B4BB10B5AF51CF(::Class_1_52DCEE691286F89A* a1, ::System::Int64 a2)
	{
		return ((::Class_1_52DCEE691286F89A*(*)(::PVOID, ::Class_1_52DCEE691286F89A*, ::System::Int64))((::PBYTE)hIl2Cpp + CLASS_2_ECB14761320DCADE_METHOD_2_57B4BB10B5AF51CF_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Vector3 Method_2_9D15F3CC656181B8(::Class_1_EA5A5E4D07C4CF2B_1* a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Class_1_EA5A5E4D07C4CF2B_1*))((::PBYTE)hIl2Cpp + CLASS_2_ECB14761320DCADE_METHOD_2_9D15F3CC656181B8_OFFSET))(this, a1);
	}

	::Class_1_EA5A5E4D07C4CF2B_1* Method_2_BE1D74FB34792AB9(::UnityEngine::Vector3 a1)
	{
		return ((::Class_1_EA5A5E4D07C4CF2B_1*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_ECB14761320DCADE_METHOD_2_BE1D74FB34792AB9_OFFSET))(this, a1);
	}
};
