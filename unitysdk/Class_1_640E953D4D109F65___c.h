#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Share/EAvatarSkillType.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_11;
class Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_640E953D4D109F65___C_METHOD_1_4D5F56F43D39EBB7_OFFSET UNITYSDK_OFFSET(0x11ADFB90)
#define CLASS_1_640E953D4D109F65___C_METHOD_1_7DAF5B3ADF494895_OFFSET UNITYSDK_OFFSET(0x11ADFBB0)
#define CLASS_1_640E953D4D109F65___C_METHOD_1_8E3B78C0B8328F88_OFFSET UNITYSDK_OFFSET(0x11ADFBA0)
#define CLASS_1_640E953D4D109F65___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x11ADFB40)
#define CLASS_1_640E953D4D109F65___C__CTOR_OFFSET UNITYSDK_OFFSET(0x11ADFB80)

inline static constexpr unsigned int Class_1_640E953D4D109F65___c_TypeDefinitionIndex = 52096;

class Class_1_640E953D4D109F65___c : public ::System::Object
{
public:
	static ::Class_1_640E953D4D109F65___c** StaticGet___9()
	{
		return (::Class_1_640E953D4D109F65___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_640E953D4D109F65___c_TypeDefinitionIndex)->GetStaticField(0x343D0);
	}
	static ::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C** StaticGet___9__4_0()
	{
		return (::Class_1_9545B07472DE9BFD_Class_3_EC22137A5AE21E1C**)Il2CppClass::FromTypeDefinitionIndex(Class_1_640E953D4D109F65___c_TypeDefinitionIndex)->GetStaticField(0x343D8);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::Share::EAvatarSkillType, ::System::Byte>, ::Share::EAvatarSkillType>** StaticGet___9__8_0()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::Share::EAvatarSkillType, ::System::Byte>, ::Share::EAvatarSkillType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_640E953D4D109F65___c_TypeDefinitionIndex)->GetStaticField(0x343E0);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::Share::EAvatarSkillType, ::System::Byte>, ::System::Byte>** StaticGet___9__8_1()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::Share::EAvatarSkillType, ::System::Byte>, ::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_640E953D4D109F65___c_TypeDefinitionIndex)->GetStaticField(0x343E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_640E953D4D109F65___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_640E953D4D109F65___C__CTOR_OFFSET))(this);
	}

	::System::Byte Method_1_4D5F56F43D39EBB7(::System::Collections::Generic::KeyValuePair_2<::Share::EAvatarSkillType, ::System::Byte> a1)
	{
		return ((::System::Byte(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::Share::EAvatarSkillType, ::System::Byte>))((::PBYTE)hIl2Cpp + CLASS_1_640E953D4D109F65___C_METHOD_1_4D5F56F43D39EBB7_OFFSET))(this, a1);
	}

	::Share::EAvatarSkillType Method_1_8E3B78C0B8328F88(::System::Collections::Generic::KeyValuePair_2<::Share::EAvatarSkillType, ::System::Byte> a1)
	{
		return ((::Share::EAvatarSkillType(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::Share::EAvatarSkillType, ::System::Byte>))((::PBYTE)hIl2Cpp + CLASS_1_640E953D4D109F65___C_METHOD_1_8E3B78C0B8328F88_OFFSET))(this, a1);
	}

	::System::Void Method_1_7DAF5B3ADF494895(::Class_0_16E4307DCC419505_11* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + CLASS_1_640E953D4D109F65___C_METHOD_1_7DAF5B3ADF494895_OFFSET))(this, a1);
	}
};
