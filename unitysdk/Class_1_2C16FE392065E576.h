#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_2C16FE392065E576_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1C8F09D0)
#define CLASS_1_2C16FE392065E576_METHOD_1_23B1B32F70881871_OFFSET UNITYSDK_OFFSET(0x1C8F0630)
#define CLASS_1_2C16FE392065E576_METHOD_1_263662509999B1BC_OFFSET UNITYSDK_OFFSET(0x1C8F05D0)
#define CLASS_1_2C16FE392065E576_METHOD_1_40EDB8656BA41468_OFFSET UNITYSDK_OFFSET(0x1C8F04A0)
#define CLASS_1_2C16FE392065E576_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1C8F0800)
#define CLASS_1_2C16FE392065E576_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1C8F0890)
#define CLASS_1_2C16FE392065E576_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1C8F0440)
#define CLASS_1_2C16FE392065E576_METHOD_1_D075764DD0E4E610_OFFSET UNITYSDK_OFFSET(0x1C8F0190)
#define CLASS_1_2C16FE392065E576_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1C8F0210)
#define CLASS_1_2C16FE392065E576_METHOD_1_EEF3500D8B185119_OFFSET UNITYSDK_OFFSET(0x1C8F0A20)
#define CLASS_1_2C16FE392065E576_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1C8F07C0)
#define CLASS_1_2C16FE392065E576_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1C8F0930)
#define CLASS_1_2C16FE392065E576__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C8F0D40)

inline static constexpr unsigned int Class_1_2C16FE392065E576_TypeDefinitionIndex = 11186;

class Class_1_2C16FE392065E576 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityConfigRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2C16FE392065E576_TypeDefinitionIndex)->GetStaticField(0x1E930);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2C16FE392065E576_TypeDefinitionIndex)->GetStaticField(0x1E938);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2C16FE392065E576_TypeDefinitionIndex)->GetStaticField(0x1E940);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2C16FE392065E576_TypeDefinitionIndex)->GetStaticField(0xA3C0);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2C16FE392065E576_TypeDefinitionIndex)->GetStaticField(0xA3C1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2C16FE392065E576__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityConfigRow*>* Method_1_D075764DD0E4E610()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2C16FE392065E576_METHOD_1_D075764DD0E4E610_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2C16FE392065E576_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityConfigRow*> Method_1_40EDB8656BA41468()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_2C16FE392065E576_METHOD_1_40EDB8656BA41468_OFFSET))();
	}

	static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityConfigRow*>, ::RPG::GameCore::ActivityConfigRow*> Method_1_263662509999B1BC()
	{
		return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityConfigRow*>, ::RPG::GameCore::ActivityConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_2C16FE392065E576_METHOD_1_263662509999B1BC_OFFSET))();
	}

	static ::RPG::GameCore::ActivityConfigRow* Method_1_23B1B32F70881871(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ActivityConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2C16FE392065E576_METHOD_1_23B1B32F70881871_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2C16FE392065E576_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2C16FE392065E576_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2C16FE392065E576_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2C16FE392065E576_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_2C16FE392065E576_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_2C16FE392065E576_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_EEF3500D8B185119(::RPG::GameCore::ActivityConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ActivityConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_2C16FE392065E576_METHOD_1_EEF3500D8B185119_OFFSET))(a1);
	}
};
