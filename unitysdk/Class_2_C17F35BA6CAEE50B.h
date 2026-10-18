#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4AB01E8FEDBFD1EC.h"
#include "unitysdk/Enum_3_0F1B992870941C13_1.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/Struct_2_FFCEEED483D7C73B.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

class Class_0_16E4307DCC419505_333;
class Class_1_4AF717D30078CC7E_1;
class Class_1_E22F560919B0BCA2;
namespace RPG::GameCore { class MarbleLaunchAIConfig; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_C17F35BA6CAEE50B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C8707B0)
#define CLASS_2_C17F35BA6CAEE50B_METHOD_2_3A599F23178B2776_OFFSET UNITYSDK_OFFSET(0x1C870C70)
#define CLASS_2_C17F35BA6CAEE50B_METHOD_2_749948B663FCCCEF_OFFSET UNITYSDK_OFFSET(0x1C870FB0)
#define CLASS_2_C17F35BA6CAEE50B_METHOD_2_9AF91962BC6E178A_OFFSET UNITYSDK_OFFSET(0x1C871240)
#define CLASS_2_C17F35BA6CAEE50B_METHOD_2_C41866EEE72140E6_OFFSET UNITYSDK_OFFSET(0x1C871750)
#define CLASS_2_C17F35BA6CAEE50B_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x1C870C20)
#define CLASS_2_C17F35BA6CAEE50B_METHOD_2_F13355BDF523F868_OFFSET UNITYSDK_OFFSET(0x1C8735A0)
#define CLASS_2_C17F35BA6CAEE50B_METHOD_2_F8B1C02882D1010D_OFFSET UNITYSDK_OFFSET(0x1C870830)
#define CLASS_2_C17F35BA6CAEE50B__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C873650)
#define CLASS_2_C17F35BA6CAEE50B__CTOR_OFFSET UNITYSDK_OFFSET(0x1C870640)

inline static constexpr unsigned int Class_2_C17F35BA6CAEE50B_TypeDefinitionIndex = 43077;

class Class_2_C17F35BA6CAEE50B : public ::Class_1_4AB01E8FEDBFD1EC
{
public:
	static ::System::Int32* StaticGet_PCFIPGBCAKB()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_C17F35BA6CAEE50B_TypeDefinitionIndex)->GetStaticField(0x8340);
	}
	::Class_1_4AB01E8FEDBFD1EC* BHHAMGJHDON; // 0x200
	::System::Collections::Generic::List_1<::Struct_2_FFCEEED483D7C73B>* NFCHLOABNAB; // 0x208
	::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::Single, ::System::Int32>>* ELBNJLHBEJD; // 0x210
	::Struct_2_FFCEEED483D7C73B JCHFCNFHCMM; // 0x218
	::System::Int32 EOLMJBEMDBH; // 0x234

	::System::Void _ctor(::Class_1_4AB01E8FEDBFD1EC* a1, ::Enum_3_0F1B992870941C13_1 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4AB01E8FEDBFD1EC*, ::Enum_3_0F1B992870941C13_1))((::PBYTE)hIl2Cpp + CLASS_2_C17F35BA6CAEE50B__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_C17F35BA6CAEE50B__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C17F35BA6CAEE50B_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_F8B1C02882D1010D(::Class_1_4AF717D30078CC7E_1* a1, ::Class_0_16E4307DCC419505_333* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4AF717D30078CC7E_1*, ::Class_0_16E4307DCC419505_333*))((::PBYTE)hIl2Cpp + CLASS_2_C17F35BA6CAEE50B_METHOD_2_F8B1C02882D1010D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_E22F560919B0BCA2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E22F560919B0BCA2*))((::PBYTE)hIl2Cpp + CLASS_2_C17F35BA6CAEE50B_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_3A599F23178B2776()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C17F35BA6CAEE50B_METHOD_2_3A599F23178B2776_OFFSET))(this);
	}

	::System::Void Method_2_749948B663FCCCEF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C17F35BA6CAEE50B_METHOD_2_749948B663FCCCEF_OFFSET))(this);
	}

	::System::Void Method_2_9AF91962BC6E178A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C17F35BA6CAEE50B_METHOD_2_9AF91962BC6E178A_OFFSET))(this);
	}

	::System::Void Method_2_C41866EEE72140E6(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::MVector2 a3, ::System::UInt32 a4, ::System::Single a5, ::RPG::GameCore::MarbleLaunchAIConfig* a6, ::Struct_2_FFCEEED483D7C73B& a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::MVector2, ::System::UInt32, ::System::Single, ::RPG::GameCore::MarbleLaunchAIConfig*, ::Struct_2_FFCEEED483D7C73B&))((::PBYTE)hIl2Cpp + CLASS_2_C17F35BA6CAEE50B_METHOD_2_C41866EEE72140E6_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Collections::IEnumerator* Method_2_F13355BDF523F868(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_C17F35BA6CAEE50B_METHOD_2_F13355BDF523F868_OFFSET))(this, a1, a2, a3);
	}
};
