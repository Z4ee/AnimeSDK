#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_97E659ED8D5D259C_6;
class Class_1_97E659ED8D5D259C_8;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_CCB4C9611E2EC62A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD19EF40)
#define CLASS_1_CCB4C9611E2EC62A___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD19EF70)
#define CLASS_1_CCB4C9611E2EC62A___C__HANDLEPOSTPROCESS_B__0_0_OFFSET UNITYSDK_OFFSET(0xD19EF80)
#define CLASS_1_CCB4C9611E2EC62A___C__HANDLEPOSTPROCESS_B__0_1_OFFSET UNITYSDK_OFFSET(0xD19F0D0)
#define CLASS_1_CCB4C9611E2EC62A___C__HANDLEPOSTPROCESS_B__0_2_OFFSET UNITYSDK_OFFSET(0xD19F0B0)
#define CLASS_1_CCB4C9611E2EC62A___C__HANDLEPOSTPROCESS_B__0_3_OFFSET UNITYSDK_OFFSET(0xD19F220)

inline static constexpr unsigned int Class_1_CCB4C9611E2EC62A___c_TypeDefinitionIndex = 54663;

class Class_1_CCB4C9611E2EC62A___c : public ::System::Object
{
public:
	static ::Class_1_CCB4C9611E2EC62A___c** StaticGet___9()
	{
		return (::Class_1_CCB4C9611E2EC62A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CCB4C9611E2EC62A___c_TypeDefinitionIndex)->GetStaticField(0x46470);
	}
	static ::System::Func_2<::System::Collections::Generic::IEnumerable_1<::Class_1_97E659ED8D5D259C_8*>*, ::Class_1_97E659ED8D5D259C_8*>** StaticGet___9__0_1()
	{
		return (::System::Func_2<::System::Collections::Generic::IEnumerable_1<::Class_1_97E659ED8D5D259C_8*>*, ::Class_1_97E659ED8D5D259C_8*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CCB4C9611E2EC62A___c_TypeDefinitionIndex)->GetStaticField(0x46478);
	}
	static ::System::Func_2<::System::Collections::Generic::IEnumerable_1<::Class_1_97E659ED8D5D259C_6*>*, ::Class_1_97E659ED8D5D259C_6*>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::System::Collections::Generic::IEnumerable_1<::Class_1_97E659ED8D5D259C_6*>*, ::Class_1_97E659ED8D5D259C_6*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CCB4C9611E2EC62A___c_TypeDefinitionIndex)->GetStaticField(0x46480);
	}
	static ::System::Func_2<::Class_1_97E659ED8D5D259C_8*, ::System::UInt32>** StaticGet___9__0_3()
	{
		return (::System::Func_2<::Class_1_97E659ED8D5D259C_8*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CCB4C9611E2EC62A___c_TypeDefinitionIndex)->GetStaticField(0x46488);
	}
	static ::System::Func_2<::Class_1_97E659ED8D5D259C_6*, ::System::UInt32>** StaticGet___9__0_2()
	{
		return (::System::Func_2<::Class_1_97E659ED8D5D259C_6*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CCB4C9611E2EC62A___c_TypeDefinitionIndex)->GetStaticField(0x46490);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CCB4C9611E2EC62A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CCB4C9611E2EC62A___C__CTOR_OFFSET))(this);
	}

	::Class_1_97E659ED8D5D259C_6* _HandlePostProcess_b__0_0(::System::Collections::Generic::IEnumerable_1<::Class_1_97E659ED8D5D259C_6*>* actionToMerge)
	{
		return ((::Class_1_97E659ED8D5D259C_6*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_97E659ED8D5D259C_6*>*))((::PBYTE)hIl2Cpp + CLASS_1_CCB4C9611E2EC62A___C__HANDLEPOSTPROCESS_B__0_0_OFFSET))(this, actionToMerge);
	}

	::System::UInt32 _HandlePostProcess_b__0_2(::Class_1_97E659ED8D5D259C_6* a)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_1_97E659ED8D5D259C_6*))((::PBYTE)hIl2Cpp + CLASS_1_CCB4C9611E2EC62A___C__HANDLEPOSTPROCESS_B__0_2_OFFSET))(this, a);
	}

	::Class_1_97E659ED8D5D259C_8* _HandlePostProcess_b__0_1(::System::Collections::Generic::IEnumerable_1<::Class_1_97E659ED8D5D259C_8*>* actionToMerge)
	{
		return ((::Class_1_97E659ED8D5D259C_8*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_97E659ED8D5D259C_8*>*))((::PBYTE)hIl2Cpp + CLASS_1_CCB4C9611E2EC62A___C__HANDLEPOSTPROCESS_B__0_1_OFFSET))(this, actionToMerge);
	}

	::System::UInt32 _HandlePostProcess_b__0_3(::Class_1_97E659ED8D5D259C_8* a)
	{
		return ((::System::UInt32(*)(::PVOID, ::Class_1_97E659ED8D5D259C_8*))((::PBYTE)hIl2Cpp + CLASS_1_CCB4C9611E2EC62A___C__HANDLEPOSTPROCESS_B__0_3_OFFSET))(this, a);
	}
};
