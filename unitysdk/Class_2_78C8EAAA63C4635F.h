#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_4AB01E8FEDBFD1EC.h"
#include "unitysdk/Enum_3_A35B38E5F9115A76_2.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/Struct_2_FFCEEED483D7C73B.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

class Class_0_16E4307DCC419505_232;
class Class_1_3DEF26C653AFADFD;
class Class_1_C9DFE5EE7107C629_6;
namespace RPG::GameCore { class MarbleLaunchAIConfig; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_78C8EAAA63C4635F_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18BB5E00)
#define CLASS_2_78C8EAAA63C4635F_METHOD_2_0EBF428FAAA310FA_OFFSET UNITYSDK_OFFSET(0x18BB5E80)
#define CLASS_2_78C8EAAA63C4635F_METHOD_2_3A599F23178B2776_OFFSET UNITYSDK_OFFSET(0x18BB6170)
#define CLASS_2_78C8EAAA63C4635F_METHOD_2_749948B663FCCCEF_OFFSET UNITYSDK_OFFSET(0x18BB64B0)
#define CLASS_2_78C8EAAA63C4635F_METHOD_2_7BAAF53719F73628_OFFSET UNITYSDK_OFFSET(0x18BB6C40)
#define CLASS_2_78C8EAAA63C4635F_METHOD_2_9AF91962BC6E178A_OFFSET UNITYSDK_OFFSET(0x18BB6740)
#define CLASS_2_78C8EAAA63C4635F_METHOD_2_DCB66BC2B81374C1_OFFSET UNITYSDK_OFFSET(0x18BB8540)
#define CLASS_2_78C8EAAA63C4635F_METHOD_2_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x18BB6120)
#define CLASS_2_78C8EAAA63C4635F_METHOD_2_F13355BDF523F868_OFFSET UNITYSDK_OFFSET(0x18BB8480)
#define CLASS_2_78C8EAAA63C4635F__CCTOR_OFFSET UNITYSDK_OFFSET(0x18BB8530)
#define CLASS_2_78C8EAAA63C4635F__CTOR_OFFSET UNITYSDK_OFFSET(0x18BB5C90)

inline static constexpr unsigned int Class_2_78C8EAAA63C4635F_TypeDefinitionIndex = 39707;

class Class_2_78C8EAAA63C4635F : public ::Class_1_4AB01E8FEDBFD1EC
{
public:
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_78C8EAAA63C4635F_TypeDefinitionIndex)->GetStaticField(0x9630);
	}
	::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<::System::Single, ::System::Int32>>* Field_2_1; // 0xF8
	::Class_1_4AB01E8FEDBFD1EC* Field_2_2; // 0x100
	::System::Collections::Generic::List_1<::Struct_2_FFCEEED483D7C73B>* Field_2_3; // 0x108
	::System::Int32 Field_2_4; // 0x110
	::Struct_2_FFCEEED483D7C73B Field_2_5; // 0x114

	::System::Void _ctor(::Class_1_4AB01E8FEDBFD1EC* a1, ::Enum_3_A35B38E5F9115A76_2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4AB01E8FEDBFD1EC*, ::Enum_3_A35B38E5F9115A76_2))((::PBYTE)hIl2Cpp + CLASS_2_78C8EAAA63C4635F__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_78C8EAAA63C4635F__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78C8EAAA63C4635F_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_0EBF428FAAA310FA(::Class_1_C9DFE5EE7107C629_6* a1, ::Class_0_16E4307DCC419505_232* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_6*, ::Class_0_16E4307DCC419505_232*))((::PBYTE)hIl2Cpp + CLASS_2_78C8EAAA63C4635F_METHOD_2_0EBF428FAAA310FA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E9A575D18A0748D9(::Class_1_3DEF26C653AFADFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3DEF26C653AFADFD*))((::PBYTE)hIl2Cpp + CLASS_2_78C8EAAA63C4635F_METHOD_2_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_3A599F23178B2776()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78C8EAAA63C4635F_METHOD_2_3A599F23178B2776_OFFSET))(this);
	}

	::System::Void Method_2_749948B663FCCCEF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78C8EAAA63C4635F_METHOD_2_749948B663FCCCEF_OFFSET))(this);
	}

	::System::Void Method_2_9AF91962BC6E178A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_78C8EAAA63C4635F_METHOD_2_9AF91962BC6E178A_OFFSET))(this);
	}

	::System::Void Method_2_7BAAF53719F73628(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::MVector2 a3, ::System::UInt32 a4, ::System::Single a5, ::RPG::GameCore::MarbleLaunchAIConfig* a6, ::Struct_2_FFCEEED483D7C73B& a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::MVector2, ::System::UInt32, ::System::Single, ::RPG::GameCore::MarbleLaunchAIConfig*, ::Struct_2_FFCEEED483D7C73B&))((::PBYTE)hIl2Cpp + CLASS_2_78C8EAAA63C4635F_METHOD_2_7BAAF53719F73628_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::System::Collections::IEnumerator* Method_2_F13355BDF523F868(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_78C8EAAA63C4635F_METHOD_2_F13355BDF523F868_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_DCB66BC2B81374C1(::Class_1_3DEF26C653AFADFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3DEF26C653AFADFD*))((::PBYTE)hIl2Cpp + CLASS_2_78C8EAAA63C4635F_METHOD_2_DCB66BC2B81374C1_OFFSET))(this, a1);
	}
};
