#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HeadFrameConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_2C4C0A890AB058DA_METHOD_1_0A5B5F11794B6A43_OFFSET UNITYSDK_OFFSET(0x18783890)
#define CLASS_1_2C4C0A890AB058DA_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x18783DE0)
#define CLASS_1_2C4C0A890AB058DA_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18783C00)
#define CLASS_1_2C4C0A890AB058DA_METHOD_1_5410EF54D37F8977_OFFSET UNITYSDK_OFFSET(0x18783E30)
#define CLASS_1_2C4C0A890AB058DA_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x187835E0)
#define CLASS_1_2C4C0A890AB058DA_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18783CA0)
#define CLASS_1_2C4C0A890AB058DA_METHOD_1_CA6582B0516EB309_OFFSET UNITYSDK_OFFSET(0x18783A40)
#define CLASS_1_2C4C0A890AB058DA_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18783830)
#define CLASS_1_2C4C0A890AB058DA_METHOD_1_E3BA97E223AB2D5A_OFFSET UNITYSDK_OFFSET(0x18783560)
#define CLASS_1_2C4C0A890AB058DA_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18783BC0)
#define CLASS_1_2C4C0A890AB058DA_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18783D40)
#define CLASS_1_2C4C0A890AB058DA__CCTOR_OFFSET UNITYSDK_OFFSET(0x18784140)

inline static constexpr unsigned int Class_1_2C4C0A890AB058DA_TypeDefinitionIndex = 12273;

class Class_1_2C4C0A890AB058DA : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2C4C0A890AB058DA_TypeDefinitionIndex)->GetStaticField(0x1BD40);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeadFrameConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeadFrameConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2C4C0A890AB058DA_TypeDefinitionIndex)->GetStaticField(0x1BD48);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2C4C0A890AB058DA_TypeDefinitionIndex)->GetStaticField(0x1BD50);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2C4C0A890AB058DA_TypeDefinitionIndex)->GetStaticField(0x72B0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2C4C0A890AB058DA_TypeDefinitionIndex)->GetStaticField(0x72B1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2C4C0A890AB058DA__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeadFrameConfigRow*>* Method_1_E3BA97E223AB2D5A()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeadFrameConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2C4C0A890AB058DA_METHOD_1_E3BA97E223AB2D5A_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2C4C0A890AB058DA_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeadFrameConfigRow*> Method_1_0A5B5F11794B6A43()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeadFrameConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_2C4C0A890AB058DA_METHOD_1_0A5B5F11794B6A43_OFFSET))();
	}

	static ::RPG::GameCore::HeadFrameConfigRow* Method_1_CA6582B0516EB309(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::HeadFrameConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2C4C0A890AB058DA_METHOD_1_CA6582B0516EB309_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2C4C0A890AB058DA_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2C4C0A890AB058DA_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2C4C0A890AB058DA_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2C4C0A890AB058DA_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_2C4C0A890AB058DA_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_2C4C0A890AB058DA_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_5410EF54D37F8977(::RPG::GameCore::HeadFrameConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::HeadFrameConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_2C4C0A890AB058DA_METHOD_1_5410EF54D37F8977_OFFSET))(a1);
	}
};
