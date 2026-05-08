#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayCase/DisplayBaseTransformData.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class Class_1_6E06DF87808F0190;
class Class_2_7E982D325DFD55DA;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_699787DEDB234668___C_METHOD_1_03C39BB8E09A79D2_OFFSET UNITYSDK_OFFSET(0x12B9E990)
#define CLASS_1_699787DEDB234668___C_METHOD_1_8F389432D86B63E1_OFFSET UNITYSDK_OFFSET(0x12B9E970)
#define CLASS_1_699787DEDB234668___C_METHOD_1_B237E7A09EA29A83_OFFSET UNITYSDK_OFFSET(0x12B9E950)
#define CLASS_1_699787DEDB234668___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x12B9E900)
#define CLASS_1_699787DEDB234668___C__CTOR_OFFSET UNITYSDK_OFFSET(0x12B9E940)

inline static constexpr unsigned int Class_1_699787DEDB234668___c_TypeDefinitionIndex = 53878;

class Class_1_699787DEDB234668___c : public ::System::Object
{
public:
	static ::Class_1_699787DEDB234668___c** StaticGet___9()
	{
		return (::Class_1_699787DEDB234668___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_699787DEDB234668___c_TypeDefinitionIndex)->GetStaticField(0x3D4A0);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::DisplayCase::DisplayBaseTransformData>*>, ::System::Boolean>** StaticGet___9__28_0()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::DisplayCase::DisplayBaseTransformData>*>, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_699787DEDB234668___c_TypeDefinitionIndex)->GetStaticField(0x3D4A8);
	}
	static ::System::Predicate_1<::Class_1_6E06DF87808F0190*>** StaticGet___9__16_0()
	{
		return (::System::Predicate_1<::Class_1_6E06DF87808F0190*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_699787DEDB234668___c_TypeDefinitionIndex)->GetStaticField(0x3D4B0);
	}
	static ::System::Predicate_1<::Class_2_7E982D325DFD55DA*>** StaticGet___9__16_1()
	{
		return (::System::Predicate_1<::Class_2_7E982D325DFD55DA*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_699787DEDB234668___c_TypeDefinitionIndex)->GetStaticField(0x3D4B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_B237E7A09EA29A83(::Class_2_7E982D325DFD55DA* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_7E982D325DFD55DA*))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668___C_METHOD_1_B237E7A09EA29A83_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8F389432D86B63E1(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::DisplayCase::DisplayBaseTransformData>*> a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::DisplayCase::DisplayBaseTransformData>*>))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668___C_METHOD_1_8F389432D86B63E1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_03C39BB8E09A79D2(::Class_1_6E06DF87808F0190* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_6E06DF87808F0190*))((::PBYTE)hIl2Cpp + CLASS_1_699787DEDB234668___C_METHOD_1_03C39BB8E09A79D2_OFFSET))(this, a1);
	}
};
