#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PamChatGreetingRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_619868B4B29EFD84_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1CFF1440)
#define CLASS_1_619868B4B29EFD84_METHOD_1_27F10143DB1D88CD_OFFSET UNITYSDK_OFFSET(0x1CFF0F20)
#define CLASS_1_619868B4B29EFD84_METHOD_1_61590CBAC759B764_OFFSET UNITYSDK_OFFSET(0x1CFF1490)
#define CLASS_1_619868B4B29EFD84_METHOD_1_87622D1B56469700_OFFSET UNITYSDK_OFFSET(0x1CFF0AA0)
#define CLASS_1_619868B4B29EFD84_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1CFF10F0)
#define CLASS_1_619868B4B29EFD84_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1CFF1180)
#define CLASS_1_619868B4B29EFD84_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1CFF0D50)
#define CLASS_1_619868B4B29EFD84_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1CFF0B20)
#define CLASS_1_619868B4B29EFD84_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1CFF10B0)
#define CLASS_1_619868B4B29EFD84_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1CFF13A0)
#define CLASS_1_619868B4B29EFD84_METHOD_1_F692A784F3BC9BD5_OFFSET UNITYSDK_OFFSET(0x1CFF0DB0)
#define CLASS_1_619868B4B29EFD84__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CFF1800)

inline static constexpr unsigned int Class_1_619868B4B29EFD84_TypeDefinitionIndex = 14209;

class Class_1_619868B4B29EFD84 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_619868B4B29EFD84_TypeDefinitionIndex)->GetStaticField(0x34930);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamChatGreetingRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamChatGreetingRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_619868B4B29EFD84_TypeDefinitionIndex)->GetStaticField(0x34938);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_619868B4B29EFD84_TypeDefinitionIndex)->GetStaticField(0x34940);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_619868B4B29EFD84_TypeDefinitionIndex)->GetStaticField(0xDD70);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_619868B4B29EFD84_TypeDefinitionIndex)->GetStaticField(0xDD71);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_619868B4B29EFD84__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamChatGreetingRow*>* Method_1_87622D1B56469700()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamChatGreetingRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_619868B4B29EFD84_METHOD_1_87622D1B56469700_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_619868B4B29EFD84_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamChatGreetingRow*> Method_1_F692A784F3BC9BD5()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamChatGreetingRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_619868B4B29EFD84_METHOD_1_F692A784F3BC9BD5_OFFSET))();
	}

	static ::RPG::GameCore::PamChatGreetingRow* Method_1_27F10143DB1D88CD(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::PamChatGreetingRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_619868B4B29EFD84_METHOD_1_27F10143DB1D88CD_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_619868B4B29EFD84_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_619868B4B29EFD84_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_619868B4B29EFD84_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_619868B4B29EFD84_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_619868B4B29EFD84_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_619868B4B29EFD84_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_61590CBAC759B764(::RPG::GameCore::PamChatGreetingRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::PamChatGreetingRow*))((::PBYTE)hIl2Cpp + CLASS_1_619868B4B29EFD84_METHOD_1_61590CBAC759B764_OFFSET))(a1);
	}
};
