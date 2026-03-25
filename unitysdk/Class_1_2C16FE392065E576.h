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

#define CLASS_1_2C16FE392065E576_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x16EC1BB0)
#define CLASS_1_2C16FE392065E576_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16EC19D0)
#define CLASS_1_2C16FE392065E576_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16EC12F0)
#define CLASS_1_2C16FE392065E576_METHOD_1_A6E4A5A298808C5A_OFFSET UNITYSDK_OFFSET(0x16EC17C0)
#define CLASS_1_2C16FE392065E576_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16EC1A70)
#define CLASS_1_2C16FE392065E576_METHOD_1_BEEDDB6923AACF52_OFFSET UNITYSDK_OFFSET(0x16EC15A0)
#define CLASS_1_2C16FE392065E576_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16EC1540)
#define CLASS_1_2C16FE392065E576_METHOD_1_D075764DD0E4E610_OFFSET UNITYSDK_OFFSET(0x16EC1270)
#define CLASS_1_2C16FE392065E576_METHOD_1_E6C304578105CEA1_OFFSET UNITYSDK_OFFSET(0x16EC1720)
#define CLASS_1_2C16FE392065E576_METHOD_1_EEF3500D8B185119_OFFSET UNITYSDK_OFFSET(0x16EC1C00)
#define CLASS_1_2C16FE392065E576_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16EC1990)
#define CLASS_1_2C16FE392065E576_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16EC1B10)
#define CLASS_1_2C16FE392065E576__CCTOR_OFFSET UNITYSDK_OFFSET(0x16EC1F10)

inline static constexpr unsigned int Class_1_2C16FE392065E576_TypeDefinitionIndex = 10481;

class Class_1_2C16FE392065E576 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2C16FE392065E576_TypeDefinitionIndex)->GetStaticField(0x2C8A0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2C16FE392065E576_TypeDefinitionIndex)->GetStaticField(0x2C8A8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2C16FE392065E576_TypeDefinitionIndex)->GetStaticField(0x2C8B0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2C16FE392065E576_TypeDefinitionIndex)->GetStaticField(0xECF0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2C16FE392065E576_TypeDefinitionIndex)->GetStaticField(0xECF1);
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

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityConfigRow*> Method_1_BEEDDB6923AACF52()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_2C16FE392065E576_METHOD_1_BEEDDB6923AACF52_OFFSET))();
	}

	static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityConfigRow*>, ::RPG::GameCore::ActivityConfigRow*> Method_1_E6C304578105CEA1()
	{
		return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityConfigRow*>, ::RPG::GameCore::ActivityConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_2C16FE392065E576_METHOD_1_E6C304578105CEA1_OFFSET))();
	}

	static ::RPG::GameCore::ActivityConfigRow* Method_1_A6E4A5A298808C5A(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ActivityConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2C16FE392065E576_METHOD_1_A6E4A5A298808C5A_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2C16FE392065E576_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2C16FE392065E576_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2C16FE392065E576_METHOD_1_30D1209326FA87FC_OFFSET))();
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
