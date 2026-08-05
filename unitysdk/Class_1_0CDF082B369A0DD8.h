#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigAnimationCurveGroup; }
namespace MoleMole { class ConfigMaterialPropertyModifier; }
namespace MoleMole::Config { class ConfigMaterialPropertyModifierBatchLoad; }
namespace MoleMole::Config { class ConfigMaterialPropertyModifierKeyBelongMap; }
namespace MoleMole::Config { class ConfigMaterialPropertyModifierMap; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0CDF082B369A0DD8_METHOD_1_3E99A2D366177112_OFFSET UNITYSDK_OFFSET(0x114B4910)
#define CLASS_1_0CDF082B369A0DD8_METHOD_1_7BE925FA85906BBB_OFFSET UNITYSDK_OFFSET(0x114B3BC0)
#define CLASS_1_0CDF082B369A0DD8_METHOD_1_8594F546359B0AF1_OFFSET UNITYSDK_OFFSET(0x114B38B0)
#define CLASS_1_0CDF082B369A0DD8_METHOD_1_91DFBBB45FCE9E68_OFFSET UNITYSDK_OFFSET(0x114B5260)
#define CLASS_1_0CDF082B369A0DD8_METHOD_1_95D1014441EC1BD0_OFFSET UNITYSDK_OFFSET(0x114B5830)
#define CLASS_1_0CDF082B369A0DD8_METHOD_1_99CDB6E65AAA033D_OFFSET UNITYSDK_OFFSET(0x114B4180)
#define CLASS_1_0CDF082B369A0DD8_METHOD_1_A3BEB05C1A3DA973_OFFSET UNITYSDK_OFFSET(0x114B4320)
#define CLASS_1_0CDF082B369A0DD8_METHOD_1_BA6072F3263D9FD3_OFFSET UNITYSDK_OFFSET(0x114B5010)
#define CLASS_1_0CDF082B369A0DD8_METHOD_1_BB9995B3373E3A19_OFFSET UNITYSDK_OFFSET(0x114B4EC0)
#define CLASS_1_0CDF082B369A0DD8_METHOD_1_C0346175F8148658_OFFSET UNITYSDK_OFFSET(0x114B5670)
#define CLASS_1_0CDF082B369A0DD8_METHOD_1_DBEEBBD14BE7F04D_OFFSET UNITYSDK_OFFSET(0x114B4800)
#define CLASS_1_0CDF082B369A0DD8__CCTOR_OFFSET UNITYSDK_OFFSET(0x114B3650)

inline static constexpr unsigned int Class_1_0CDF082B369A0DD8_TypeDefinitionIndex = 80188;

class Class_1_0CDF082B369A0DD8 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::System::Int32>*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::System::Int32>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0CDF082B369A0DD8_TypeDefinitionIndex)->GetStaticField(0x336D0);
	}
	static ::MoleMole::Config::ConfigMaterialPropertyModifierBatchLoad** StaticGet_Field_1_7()
	{
		return (::MoleMole::Config::ConfigMaterialPropertyModifierBatchLoad**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0CDF082B369A0DD8_TypeDefinitionIndex)->GetStaticField(0x336D8);
	}
	static ::MoleMole::Config::ConfigMaterialPropertyModifierKeyBelongMap** StaticGet_Field_1_4()
	{
		return (::MoleMole::Config::ConfigMaterialPropertyModifierKeyBelongMap**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0CDF082B369A0DD8_TypeDefinitionIndex)->GetStaticField(0x336E0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigAnimationCurveGroup*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigAnimationCurveGroup*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0CDF082B369A0DD8_TypeDefinitionIndex)->GetStaticField(0x336E8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0CDF082B369A0DD8_TypeDefinitionIndex)->GetStaticField(0x336F0);
	}
	static ::System::Collections::Generic::HashSet_1<::System::Int32>** StaticGet_Field_1_6()
	{
		return (::System::Collections::Generic::HashSet_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0CDF082B369A0DD8_TypeDefinitionIndex)->GetStaticField(0x336F8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigMaterialPropertyModifier*>** StaticGet_Field_1_3()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::ConfigMaterialPropertyModifier*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0CDF082B369A0DD8_TypeDefinitionIndex)->GetStaticField(0x33700);
	}
	static ::System::Collections::Generic::HashSet_1<::Foundation::AssetPath>** StaticGet_Field_1_5()
	{
		return (::System::Collections::Generic::HashSet_1<::Foundation::AssetPath>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0CDF082B369A0DD8_TypeDefinitionIndex)->GetStaticField(0x33708);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0CDF082B369A0DD8__CCTOR_OFFSET))();
	}

	static ::MoleMole::ConfigMaterialPropertyModifier* Method_1_8594F546359B0AF1(::System::String* a1)
	{
		return ((::MoleMole::ConfigMaterialPropertyModifier*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0CDF082B369A0DD8_METHOD_1_8594F546359B0AF1_OFFSET))(a1);
	}

	static ::System::Void Method_1_7BE925FA85906BBB(::MoleMole::Config::ConfigMaterialPropertyModifierMap* a1)
	{
		return ((::System::Void(*)(::MoleMole::Config::ConfigMaterialPropertyModifierMap*))((::PBYTE)hIl2Cpp + CLASS_1_0CDF082B369A0DD8_METHOD_1_7BE925FA85906BBB_OFFSET))(a1);
	}

	static ::System::Void Method_1_99CDB6E65AAA033D(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_0CDF082B369A0DD8_METHOD_1_99CDB6E65AAA033D_OFFSET))(a1);
	}

	static ::System::Void Method_1_A3BEB05C1A3DA973(::System::Int32 a1)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0CDF082B369A0DD8_METHOD_1_A3BEB05C1A3DA973_OFFSET))(a1);
	}

	static ::System::Void Method_1_DBEEBBD14BE7F04D(::System::Single a1, ::System::Action_1<::System::Single>* a2, ::System::Action_1<::System::String*>* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0CDF082B369A0DD8_METHOD_1_DBEEBBD14BE7F04D_OFFSET))(a1, a2, a3, a4);
	}

	static ::MoleMole::ConfigAnimationCurveGroup* Method_1_BB9995B3373E3A19(::System::String* a1)
	{
		return ((::MoleMole::ConfigAnimationCurveGroup*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0CDF082B369A0DD8_METHOD_1_BB9995B3373E3A19_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_BA6072F3263D9FD3(::System::String* a1)
	{
		return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0CDF082B369A0DD8_METHOD_1_BA6072F3263D9FD3_OFFSET))(a1);
	}

	static ::MoleMole::ConfigMaterialPropertyModifier* Method_1_91DFBBB45FCE9E68(::System::String* a1)
	{
		return ((::MoleMole::ConfigMaterialPropertyModifier*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0CDF082B369A0DD8_METHOD_1_91DFBBB45FCE9E68_OFFSET))(a1);
	}

	static ::System::Void Method_1_3E99A2D366177112(::System::Boolean a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_0CDF082B369A0DD8_METHOD_1_3E99A2D366177112_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::HashSet_1<::System::Int32>* Method_1_95D1014441EC1BD0(::System::String* a1, ::System::Action_1<::System::Collections::Generic::HashSet_1<::System::Int32>*>* a2)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::System::String*, ::System::Action_1<::System::Collections::Generic::HashSet_1<::System::Int32>*>*))((::PBYTE)hIl2Cpp + CLASS_1_0CDF082B369A0DD8_METHOD_1_95D1014441EC1BD0_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C0346175F8148658(::System::Boolean a1, ::System::Action* a2, ::Il2CppArray<::Foundation::AssetPath>* a3)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*, ::Il2CppArray<::Foundation::AssetPath>*))((::PBYTE)hIl2Cpp + CLASS_1_0CDF082B369A0DD8_METHOD_1_C0346175F8148658_OFFSET))(a1, a2, a3);
	}
};
