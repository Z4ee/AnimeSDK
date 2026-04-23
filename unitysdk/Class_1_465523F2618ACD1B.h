#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IVec2.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_405;
class Class_1_009DF1C0DBE996B8;
class Class_1_465523F2618ACD1B_Class_1_C278875DDF1F66F8;
class Class_1_EF79F96DD047B849;
class Class_3_98C806684F7CC372_12;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_465523F2618ACD1B_METHOD_1_03756DF1D681F7B7_OFFSET UNITYSDK_OFFSET(0x11E18A90)
#define CLASS_1_465523F2618ACD1B_METHOD_1_3DE99BB8E2A48A6A_OFFSET UNITYSDK_OFFSET(0x11E184C0)
#define CLASS_1_465523F2618ACD1B_METHOD_1_47311AA3A267DC77_OFFSET UNITYSDK_OFFSET(0x11E18EC0)
#define CLASS_1_465523F2618ACD1B_METHOD_1_5B22C7285C23745C_OFFSET UNITYSDK_OFFSET(0x11E19370)
#define CLASS_1_465523F2618ACD1B_METHOD_1_66C525F07AE6A602_OFFSET UNITYSDK_OFFSET(0x11E18CA0)
#define CLASS_1_465523F2618ACD1B_METHOD_1_6A424A82DC361AF6_OFFSET UNITYSDK_OFFSET(0x11E18D60)
#define CLASS_1_465523F2618ACD1B_METHOD_1_7DDAD20A07064334_OFFSET UNITYSDK_OFFSET(0x11E189E0)
#define CLASS_1_465523F2618ACD1B_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x11E18470)
#define CLASS_1_465523F2618ACD1B__CCTOR_OFFSET UNITYSDK_OFFSET(0x11E19C90)
#define CLASS_1_465523F2618ACD1B__CTOR_OFFSET UNITYSDK_OFFSET(0x11E19BB0)

inline static constexpr unsigned int Class_1_465523F2618ACD1B_TypeDefinitionIndex = 50001;

class Class_1_465523F2618ACD1B : public ::System::Object
{
public:
	static ::Il2CppArray<::RPG::GameCore::IVec2>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::RPG::GameCore::IVec2>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_465523F2618ACD1B_TypeDefinitionIndex)->GetStaticField(0x4FFF0);
	}
	::System::Collections::Generic::List_1<::Class_1_465523F2618ACD1B_Class_1_C278875DDF1F66F8*>* Field_1_3; // 0x10
	::Class_1_009DF1C0DBE996B8* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::Class_1_465523F2618ACD1B_Class_1_C278875DDF1F66F8*>* Field_1_2; // 0x20
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::IVec2, ::Class_1_465523F2618ACD1B_Class_1_C278875DDF1F66F8*>* Field_1_4; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_465523F2618ACD1B__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_465523F2618ACD1B__CCTOR_OFFSET))();
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_009DF1C0DBE996B8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_009DF1C0DBE996B8*))((::PBYTE)hIl2Cpp + CLASS_1_465523F2618ACD1B_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_3DE99BB8E2A48A6A(::System::Collections::Generic::List_1<::RPG::GameCore::IVec2>* a1, ::RPG::GameCore::IVec2 a2, ::System::Int32 a3, ::System::Int32 a4, ::Il2CppArray<::Class_3_98C806684F7CC372_12*>* a5, ::Il2CppArray<::Class_3_98C806684F7CC372_12*>* a6)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::IVec2>*, ::RPG::GameCore::IVec2, ::System::Int32, ::System::Int32, ::Il2CppArray<::Class_3_98C806684F7CC372_12*>*, ::Il2CppArray<::Class_3_98C806684F7CC372_12*>*))((::PBYTE)hIl2Cpp + CLASS_1_465523F2618ACD1B_METHOD_1_3DE99BB8E2A48A6A_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_1_47311AA3A267DC77(::RPG::GameCore::IVec2 a1, ::RPG::GameCore::IVec2& a2, ::System::Int32 a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::IVec2, ::RPG::GameCore::IVec2&, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_465523F2618ACD1B_METHOD_1_47311AA3A267DC77_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_5B22C7285C23745C(::System::Collections::Generic::List_1<::RPG::GameCore::IVec2>* a1, ::Class_0_16E4307DCC419505_405* a2, ::RPG::GameCore::IVec2 a3, ::RPG::GameCore::IVec2 a4, ::System::Int32 a5)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::IVec2>*, ::Class_0_16E4307DCC419505_405*, ::RPG::GameCore::IVec2, ::RPG::GameCore::IVec2, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_465523F2618ACD1B_METHOD_1_5B22C7285C23745C_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_1_7DDAD20A07064334(::Class_1_EF79F96DD047B849* a1, ::Il2CppArray<::Class_3_98C806684F7CC372_12*>* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_EF79F96DD047B849*, ::Il2CppArray<::Class_3_98C806684F7CC372_12*>*))((::PBYTE)hIl2Cpp + CLASS_1_465523F2618ACD1B_METHOD_1_7DDAD20A07064334_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_03756DF1D681F7B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_465523F2618ACD1B_METHOD_1_03756DF1D681F7B7_OFFSET))(this);
	}

	::System::Void Method_1_6A424A82DC361AF6(::Class_1_465523F2618ACD1B_Class_1_C278875DDF1F66F8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_465523F2618ACD1B_Class_1_C278875DDF1F66F8*))((::PBYTE)hIl2Cpp + CLASS_1_465523F2618ACD1B_METHOD_1_6A424A82DC361AF6_OFFSET))(this, a1);
	}

	::Class_1_465523F2618ACD1B_Class_1_C278875DDF1F66F8* Method_1_66C525F07AE6A602()
	{
		return ((::Class_1_465523F2618ACD1B_Class_1_C278875DDF1F66F8*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_465523F2618ACD1B_METHOD_1_66C525F07AE6A602_OFFSET))(this);
	}
};
