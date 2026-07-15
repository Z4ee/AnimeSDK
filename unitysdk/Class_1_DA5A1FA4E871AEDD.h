#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SwordTrainingExamRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_DA5A1FA4E871AEDD_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x193D6120)
#define CLASS_1_DA5A1FA4E871AEDD_METHOD_1_30C74C90766F2CDE_OFFSET UNITYSDK_OFFSET(0x193D5C10)
#define CLASS_1_DA5A1FA4E871AEDD_METHOD_1_7EA7BF89B34303F7_OFFSET UNITYSDK_OFFSET(0x193D6170)
#define CLASS_1_DA5A1FA4E871AEDD_METHOD_1_86761FB81E8E46B9_OFFSET UNITYSDK_OFFSET(0x193D5900)
#define CLASS_1_DA5A1FA4E871AEDD_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x193D5F50)
#define CLASS_1_DA5A1FA4E871AEDD_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x193D5FE0)
#define CLASS_1_DA5A1FA4E871AEDD_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x193D5BB0)
#define CLASS_1_DA5A1FA4E871AEDD_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x193D5980)
#define CLASS_1_DA5A1FA4E871AEDD_METHOD_1_E4C2645C29DFF2E4_OFFSET UNITYSDK_OFFSET(0x193D5D80)
#define CLASS_1_DA5A1FA4E871AEDD_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x193D5F10)
#define CLASS_1_DA5A1FA4E871AEDD_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x193D6080)
#define CLASS_1_DA5A1FA4E871AEDD__CCTOR_OFFSET UNITYSDK_OFFSET(0x193D64E0)

inline static constexpr unsigned int Class_1_DA5A1FA4E871AEDD_TypeDefinitionIndex = 11975;

class Class_1_DA5A1FA4E871AEDD : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingExamRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingExamRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DA5A1FA4E871AEDD_TypeDefinitionIndex)->GetStaticField(0x68040);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DA5A1FA4E871AEDD_TypeDefinitionIndex)->GetStaticField(0x68048);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DA5A1FA4E871AEDD_TypeDefinitionIndex)->GetStaticField(0x68050);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_DA5A1FA4E871AEDD_TypeDefinitionIndex)->GetStaticField(0x14260);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_DA5A1FA4E871AEDD_TypeDefinitionIndex)->GetStaticField(0x14261);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DA5A1FA4E871AEDD__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingExamRow*>* Method_1_86761FB81E8E46B9()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingExamRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_DA5A1FA4E871AEDD_METHOD_1_86761FB81E8E46B9_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_DA5A1FA4E871AEDD_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingExamRow*> Method_1_30C74C90766F2CDE()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingExamRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_DA5A1FA4E871AEDD_METHOD_1_30C74C90766F2CDE_OFFSET))();
	}

	static ::RPG::GameCore::SwordTrainingExamRow* Method_1_E4C2645C29DFF2E4(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::SwordTrainingExamRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DA5A1FA4E871AEDD_METHOD_1_E4C2645C29DFF2E4_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_DA5A1FA4E871AEDD_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DA5A1FA4E871AEDD_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DA5A1FA4E871AEDD_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DA5A1FA4E871AEDD_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_DA5A1FA4E871AEDD_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_DA5A1FA4E871AEDD_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_7EA7BF89B34303F7(::RPG::GameCore::SwordTrainingExamRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::SwordTrainingExamRow*))((::PBYTE)hIl2Cpp + CLASS_1_DA5A1FA4E871AEDD_METHOD_1_7EA7BF89B34303F7_OFFSET))(a1);
	}
};
