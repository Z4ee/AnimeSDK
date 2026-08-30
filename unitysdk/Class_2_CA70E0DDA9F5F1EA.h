#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4AB01E8FEDBFD1EC.h"
#include "unitysdk/Enum_3_01618AD0437C8486_2.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/Struct_2_FFCEEED483D7C73B.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

class Class_0_16E4307DCC419505_259;
class Class_1_3DEF26C653AFADFD;
class Class_1_C9DFE5EE7107C629_12;
namespace RPG::GameCore { class MarbleLaunchAIConfig; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_CA70E0DDA9F5F1EA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C159380)
#define CLASS_2_CA70E0DDA9F5F1EA_METHOD_2_0EBF428FAAA310FA_OFFSET UNITYSDK_OFFSET(0x1C159400)
#define CLASS_2_CA70E0DDA9F5F1EA_METHOD_2_3A599F23178B2776_OFFSET UNITYSDK_OFFSET(0x1C1596F0)
#define CLASS_2_CA70E0DDA9F5F1EA_METHOD_2_749948B663FCCCEF_OFFSET UNITYSDK_OFFSET(0x1C159A30)
#define CLASS_2_CA70E0DDA9F5F1EA_METHOD_2_98F3365C06899CCF_OFFSET UNITYSDK_OFFSET(0x1C15A1C0)
#define CLASS_2_CA70E0DDA9F5F1EA_METHOD_2_9AF91962BC6E178A_OFFSET UNITYSDK_OFFSET(0x1C159CC0)
#define CLASS_2_CA70E0DDA9F5F1EA_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x1C1596A0)
#define CLASS_2_CA70E0DDA9F5F1EA_METHOD_2_F13355BDF523F868_OFFSET UNITYSDK_OFFSET(0x1C15BFD0)
#define CLASS_2_CA70E0DDA9F5F1EA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C15C080)
#define CLASS_2_CA70E0DDA9F5F1EA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C159210)

inline static constexpr unsigned int Class_2_CA70E0DDA9F5F1EA_TypeDefinitionIndex = 41454;

class Class_2_CA70E0DDA9F5F1EA : public ::Class_1_4AB01E8FEDBFD1EC
{
public:
	static ::System::Int32* StaticGet_PCFIPGBCAKB()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_CA70E0DDA9F5F1EA_TypeDefinitionIndex)->GetStaticField(0xAA80);
	}
	::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::Single, ::System::Int32>>* ELBNJLHBEJD; // 0xF8
	::System::Collections::Generic::List_1<::Struct_2_FFCEEED483D7C73B>* NFCHLOABNAB; // 0x100
	::Class_1_4AB01E8FEDBFD1EC* BHHAMGJHDON; // 0x108
	::Struct_2_FFCEEED483D7C73B JCHFCNFHCMM; // 0x110
	::System::Int32 EOLMJBEMDBH; // 0x12C

	::System::Void _ctor(::Class_1_4AB01E8FEDBFD1EC* a1, ::Enum_3_01618AD0437C8486_2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4AB01E8FEDBFD1EC*, ::Enum_3_01618AD0437C8486_2))((::PBYTE)hIl2Cpp + CLASS_2_CA70E0DDA9F5F1EA__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_CA70E0DDA9F5F1EA__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA70E0DDA9F5F1EA_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_0EBF428FAAA310FA(::Class_1_C9DFE5EE7107C629_12* a1, ::Class_0_16E4307DCC419505_259* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_12*, ::Class_0_16E4307DCC419505_259*))((::PBYTE)hIl2Cpp + CLASS_2_CA70E0DDA9F5F1EA_METHOD_2_0EBF428FAAA310FA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_3DEF26C653AFADFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3DEF26C653AFADFD*))((::PBYTE)hIl2Cpp + CLASS_2_CA70E0DDA9F5F1EA_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_3A599F23178B2776()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA70E0DDA9F5F1EA_METHOD_2_3A599F23178B2776_OFFSET))(this);
	}

	::System::Void Method_2_749948B663FCCCEF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA70E0DDA9F5F1EA_METHOD_2_749948B663FCCCEF_OFFSET))(this);
	}

	::System::Void Method_2_9AF91962BC6E178A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CA70E0DDA9F5F1EA_METHOD_2_9AF91962BC6E178A_OFFSET))(this);
	}

	::System::Void Method_2_98F3365C06899CCF(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::MVector2 a3, ::System::UInt32 a4, ::System::Single a5, ::RPG::GameCore::MarbleLaunchAIConfig* a6, ::Struct_2_FFCEEED483D7C73B& a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::MVector2, ::System::UInt32, ::System::Single, ::RPG::GameCore::MarbleLaunchAIConfig*, ::Struct_2_FFCEEED483D7C73B&))((::PBYTE)hIl2Cpp + CLASS_2_CA70E0DDA9F5F1EA_METHOD_2_98F3365C06899CCF_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Collections::IEnumerator* Method_2_F13355BDF523F868(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_CA70E0DDA9F5F1EA_METHOD_2_F13355BDF523F868_OFFSET))(this, a1, a2, a3);
	}
};
