#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PlayerReturnRecommendConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_E87F7379281BF452_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1915D0F0)
#define CLASS_1_E87F7379281BF452_METHOD_1_501957416073FDFD_OFFSET UNITYSDK_OFFSET(0x1915CD90)
#define CLASS_1_E87F7379281BF452_METHOD_1_6B138A9B0D63FD4E_OFFSET UNITYSDK_OFFSET(0x1915CC60)
#define CLASS_1_E87F7379281BF452_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1915CF20)
#define CLASS_1_E87F7379281BF452_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1915CFB0)
#define CLASS_1_E87F7379281BF452_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1915CC00)
#define CLASS_1_E87F7379281BF452_METHOD_1_D00B59EC0F753812_OFFSET UNITYSDK_OFFSET(0x1915C950)
#define CLASS_1_E87F7379281BF452_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1915C9D0)
#define CLASS_1_E87F7379281BF452_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1915CEE0)
#define CLASS_1_E87F7379281BF452_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1915D050)
#define CLASS_1_E87F7379281BF452_METHOD_1_FB010FDCE75B1F0F_OFFSET UNITYSDK_OFFSET(0x1915D140)
#define CLASS_1_E87F7379281BF452__CCTOR_OFFSET UNITYSDK_OFFSET(0x1915D460)

inline static constexpr unsigned int Class_1_E87F7379281BF452_TypeDefinitionIndex = 13793;

class Class_1_E87F7379281BF452 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_0()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E87F7379281BF452_TypeDefinitionIndex)->GetStaticField(0x4A350);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E87F7379281BF452_TypeDefinitionIndex)->GetStaticField(0x4A358);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnRecommendConfigRow*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnRecommendConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E87F7379281BF452_TypeDefinitionIndex)->GetStaticField(0x4A360);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E87F7379281BF452_TypeDefinitionIndex)->GetStaticField(0xDF40);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E87F7379281BF452_TypeDefinitionIndex)->GetStaticField(0xDF41);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E87F7379281BF452__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnRecommendConfigRow*>* Method_1_D00B59EC0F753812()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnRecommendConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E87F7379281BF452_METHOD_1_D00B59EC0F753812_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_E87F7379281BF452_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnRecommendConfigRow*> Method_1_6B138A9B0D63FD4E()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnRecommendConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_E87F7379281BF452_METHOD_1_6B138A9B0D63FD4E_OFFSET))();
	}

	static ::RPG::GameCore::PlayerReturnRecommendConfigRow* Method_1_501957416073FDFD(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::PlayerReturnRecommendConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E87F7379281BF452_METHOD_1_501957416073FDFD_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_E87F7379281BF452_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E87F7379281BF452_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E87F7379281BF452_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E87F7379281BF452_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_E87F7379281BF452_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_E87F7379281BF452_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_FB010FDCE75B1F0F(::RPG::GameCore::PlayerReturnRecommendConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::PlayerReturnRecommendConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_E87F7379281BF452_METHOD_1_FB010FDCE75B1F0F_OFFSET))(a1);
	}
};
