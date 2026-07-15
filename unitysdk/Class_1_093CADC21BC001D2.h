#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PamChatFeedbackConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_093CADC21BC001D2_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x184AED40)
#define CLASS_1_093CADC21BC001D2_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x184AEB70)
#define CLASS_1_093CADC21BC001D2_METHOD_1_9A782C86BAAD1CE6_OFFSET UNITYSDK_OFFSET(0x184AED90)
#define CLASS_1_093CADC21BC001D2_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x184AEC00)
#define CLASS_1_093CADC21BC001D2_METHOD_1_BDEFA532719B7EBB_OFFSET UNITYSDK_OFFSET(0x184AE830)
#define CLASS_1_093CADC21BC001D2_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x184AE7D0)
#define CLASS_1_093CADC21BC001D2_METHOD_1_CF332708FE961E5A_OFFSET UNITYSDK_OFFSET(0x184AE520)
#define CLASS_1_093CADC21BC001D2_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x184AE5A0)
#define CLASS_1_093CADC21BC001D2_METHOD_1_EEBD4BE100E08A83_OFFSET UNITYSDK_OFFSET(0x184AE9A0)
#define CLASS_1_093CADC21BC001D2_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x184AEB30)
#define CLASS_1_093CADC21BC001D2_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x184AECA0)
#define CLASS_1_093CADC21BC001D2__CCTOR_OFFSET UNITYSDK_OFFSET(0x184AF100)

inline static constexpr unsigned int Class_1_093CADC21BC001D2_TypeDefinitionIndex = 13787;

class Class_1_093CADC21BC001D2 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_0()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_093CADC21BC001D2_TypeDefinitionIndex)->GetStaticField(0x3D2F0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamChatFeedbackConfigRow*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamChatFeedbackConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_093CADC21BC001D2_TypeDefinitionIndex)->GetStaticField(0x3D2F8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_093CADC21BC001D2_TypeDefinitionIndex)->GetStaticField(0x3D300);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_093CADC21BC001D2_TypeDefinitionIndex)->GetStaticField(0xA2F0);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_093CADC21BC001D2_TypeDefinitionIndex)->GetStaticField(0xA2F1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_093CADC21BC001D2__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamChatFeedbackConfigRow*>* Method_1_CF332708FE961E5A()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamChatFeedbackConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_093CADC21BC001D2_METHOD_1_CF332708FE961E5A_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_093CADC21BC001D2_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamChatFeedbackConfigRow*> Method_1_BDEFA532719B7EBB()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamChatFeedbackConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_093CADC21BC001D2_METHOD_1_BDEFA532719B7EBB_OFFSET))();
	}

	static ::RPG::GameCore::PamChatFeedbackConfigRow* Method_1_EEBD4BE100E08A83(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::PamChatFeedbackConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_093CADC21BC001D2_METHOD_1_EEBD4BE100E08A83_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_093CADC21BC001D2_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_093CADC21BC001D2_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_093CADC21BC001D2_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_093CADC21BC001D2_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_093CADC21BC001D2_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_093CADC21BC001D2_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_9A782C86BAAD1CE6(::RPG::GameCore::PamChatFeedbackConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::PamChatFeedbackConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_093CADC21BC001D2_METHOD_1_9A782C86BAAD1CE6_OFFSET))(a1);
	}
};
