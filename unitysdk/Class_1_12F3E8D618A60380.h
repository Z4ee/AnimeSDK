#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0288E507E2813FBB.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_515;
class Class_1_12F3E8D618A60380_Class_1_FCD5A2C551387744;
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_12F3E8D618A60380_METHOD_1_130EDDC4AA73B159_OFFSET UNITYSDK_OFFSET(0x18AD04A0)
#define CLASS_1_12F3E8D618A60380_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x18ACF050)
#define CLASS_1_12F3E8D618A60380_METHOD_1_4384DACD46496948_OFFSET UNITYSDK_OFFSET(0x18ACF860)
#define CLASS_1_12F3E8D618A60380_METHOD_1_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0x18AD0350)
#define CLASS_1_12F3E8D618A60380_METHOD_1_78A0859EE6417437_OFFSET UNITYSDK_OFFSET(0x18ACF200)
#define CLASS_1_12F3E8D618A60380_METHOD_1_AB067D6E0166E48A_OFFSET UNITYSDK_OFFSET(0x18ACF5F0)
#define CLASS_1_12F3E8D618A60380_METHOD_1_CE18697B63E52504_OFFSET UNITYSDK_OFFSET(0x18AD0BD0)
#define CLASS_1_12F3E8D618A60380_METHOD_1_D130BDF0ED23FA4B_OFFSET UNITYSDK_OFFSET(0x18ACFF00)
#define CLASS_1_12F3E8D618A60380__CCTOR_OFFSET UNITYSDK_OFFSET(0x18AD0C50)

inline static constexpr unsigned int Class_1_12F3E8D618A60380_TypeDefinitionIndex = 53989;

class Class_1_12F3E8D618A60380 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TargetEvaluator*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TargetEvaluator*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_12F3E8D618A60380_TypeDefinitionIndex)->GetStaticField(0x4CD80);
	}
	static ::System::Collections::Generic::Dictionary_2<::Struct_2_0288E507E2813FBB, ::Class_0_16E4307DCC419505_515*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::Struct_2_0288E507E2813FBB, ::Class_0_16E4307DCC419505_515*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_12F3E8D618A60380_TypeDefinitionIndex)->GetStaticField(0x4CD88);
	}
	static ::System::Collections::Generic::List_1<::Class_1_12F3E8D618A60380_Class_1_FCD5A2C551387744*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::List_1<::Class_1_12F3E8D618A60380_Class_1_FCD5A2C551387744*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_12F3E8D618A60380_TypeDefinitionIndex)->GetStaticField(0x4CD90);
	}
	static ::System::Collections::Generic::HashSet_1<::Struct_2_0288E507E2813FBB>** StaticGet_Field_1_3()
	{
		return (::System::Collections::Generic::HashSet_1<::Struct_2_0288E507E2813FBB>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_12F3E8D618A60380_TypeDefinitionIndex)->GetStaticField(0x4CD98);
	}
	// static const ::System::String* Field_1_4; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_12F3E8D618A60380__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_12F3E8D618A60380_METHOD_1_41A074549EF25F63_OFFSET))();
	}

	static ::System::Void Method_1_78A0859EE6417437(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TargetEvaluator*>* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TargetEvaluator*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_12F3E8D618A60380_METHOD_1_78A0859EE6417437_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_AB067D6E0166E48A(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TargetEvaluator*>* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TargetEvaluator*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_12F3E8D618A60380_METHOD_1_AB067D6E0166E48A_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_4384DACD46496948(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_12F3E8D618A60380_METHOD_1_4384DACD46496948_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_D130BDF0ED23FA4B(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_12F3E8D618A60380_METHOD_1_D130BDF0ED23FA4B_OFFSET))(a1);
	}

	static ::System::Void Method_1_735EE20B25F86BF4()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_12F3E8D618A60380_METHOD_1_735EE20B25F86BF4_OFFSET))();
	}

	static ::Class_0_16E4307DCC419505_515* Method_1_130EDDC4AA73B159(::Struct_2_0288E507E2813FBB a1)
	{
		return ((::Class_0_16E4307DCC419505_515*(*)(::Struct_2_0288E507E2813FBB))((::PBYTE)hIl2Cpp + CLASS_1_12F3E8D618A60380_METHOD_1_130EDDC4AA73B159_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_CE18697B63E52504()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_12F3E8D618A60380_METHOD_1_CE18697B63E52504_OFFSET))();
	}
};
